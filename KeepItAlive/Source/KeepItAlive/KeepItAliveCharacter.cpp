// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KeepItAliveCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/GameMode.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "KeepItAliveGameMode.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

//////////////////////////////////////////////////////////////////////////
// AKeepItAliveCharacter

AKeepItAliveCharacter::AKeepItAliveCharacter()
{
	// Use only Yaw from the controller and ignore the rest of the rotation.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	// Set the size of our collision capsule.
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.0f);
	GetCapsuleComponent()->SetCapsuleRadius(40.0f);

	GetCharacterMovement()->bOrientRotationToMovement = false;

	// Configure character movement
	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	// Lock character motion onto the XZ plane, so the character can't move in or out of the screen
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	// Behave like a traditional 2D platformer character, with a flat bottom instead of a curved capsule bottom
	// Note: This can cause a little floating when going up inclines; you can choose the tradeoff between better
	// behavior on the edge of a ledge versus inclines by setting this to true or false
	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

	ShootingOffset = CreateDefaultSubobject<UArrowComponent>("Shooting Offset");
	ShootingOffset->SetupAttachment(RootComponent);

	// Enable replication on the Sprite component so animations show up when networked
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;

	AttackAnimationCountdown = 0.f;
}

//////////////////////////////////////////////////////////////////////////
// Animation

void AKeepItAliveCharacter::UpdateAnimation(float DeltaSeconds)
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	UPaperFlipbook* DesiredAnimation;

	if (bIsPlayerAttacking)
	{
		DesiredAnimation = AttackAnimation;
		SetDesiredAnimation(DesiredAnimation);
		AttackAnimationCountdown += DeltaSeconds;

		if (AttackAnimationCountdown >= GetSprite()->GetFlipbookLength())
		{
			SpawnProjectile();
			bIsPlayerAttacking = false;
			AttackAnimationCountdown = 0.f;
		}

		return;
	}

	if (PlayerVelocity.Z < 0.f)
	{
		DesiredAnimation = ForwardAnimation;
		SetDesiredAnimation(DesiredAnimation);
		return;
	}

	if (PlayerVelocity.Z > 0.f)
	{
		DesiredAnimation = BackwardAnimation;
		SetDesiredAnimation(DesiredAnimation);
		return;
	}

	if (PlayerVelocity.X < 0.f)
	{
		DesiredAnimation = SideAnimation;
		SetDesiredAnimation(DesiredAnimation);
		return;
	}

	if (PlayerVelocity.X > 0.f)
	{
		DesiredAnimation = SideAnimation;
		SetDesiredAnimation(DesiredAnimation);
		return;
	}

	if (PlayerVelocity.Z == 0.f && PlayerVelocity.X == 0.f)
	{
		DesiredAnimation = IdleAnimation;
		SetDesiredAnimation(DesiredAnimation);
		return;
	}


}

void AKeepItAliveCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	UpdateAnimation(DeltaSeconds);

	UpdateCharacter();

	if (PlayerController->WasInputKeyJustPressed(EKeys::T) && GameMode)
	{
		GameMode->SetCurrentState(EInGameState::EWaveSpawn);
	}
}

void AKeepItAliveCharacter::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = Cast<APlayerController>(GetController());
	GameMode = Cast<AKeepItAliveGameMode>(GetWorld()->GetAuthGameMode());

	if (PlayerController)
	{
		PlayerController->bShowMouseCursor = true;
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AKeepItAliveCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("MoveUp", this, &AKeepItAliveCharacter::MoveUp);
	PlayerInputComponent->BindAxis("MoveRight", this, &AKeepItAliveCharacter::MoveRight);
	PlayerInputComponent->BindAction("BasicAttack", IE_Released, this, &AKeepItAliveCharacter::BasicAttack);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &AKeepItAliveCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AKeepItAliveCharacter::TouchStopped);
}

void AKeepItAliveCharacter::MoveRight(float Value)
{
	if (Value == 0)
	{
		GetCharacterMovement()->Velocity.X = 0.f;
	}

	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void AKeepItAliveCharacter::MoveUp(float Value)
{
	if (Value == 0)
	{
		GetCharacterMovement()->Velocity.Z = 0.f;
	}

	AddMovementInput(FVector(0.0f, 0.0f, 1.0f), Value);
}

void AKeepItAliveCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	Jump();
}

void AKeepItAliveCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

void AKeepItAliveCharacter::UpdateCharacter()
{
	FVector WorldLocation, WorldDirection;
	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	float TravelDirection = WorldLocation.X - GetActorLocation().X;

	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

void AKeepItAliveCharacter::BasicAttack()
{
	bIsPlayerAttacking = true;
}

void AKeepItAliveCharacter::SpawnProjectile()
{
	FVector WorldLocation, WorldDirection;
	PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	WorldLocation.Y = this->GetActorLocation().Y;
	FVector TravelDirection = WorldLocation - ShootingOffset->GetComponentLocation();
	ShootBasicAttackRotation = TravelDirection.GetSafeNormal().Rotation();

	ABasicProjectile* Projectile = GetWorld()->SpawnActor<ABasicProjectile>(
		BasicProjectileClass,
		ShootingOffset->GetComponentLocation(),
		ShootBasicAttackRotation
		);

	if (Projectile)
	{
		Projectile->FireInDirection(TravelDirection.GetSafeNormal());
	}
}

void AKeepItAliveCharacter::SetDesiredAnimation(UPaperFlipbook* DesiredAnimation)
{
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}


