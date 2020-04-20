// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacterStateMachine.h"
#include "KeepItAliveCharacter.h"
#include "GameFramework/PlayerController.h"
#include "PaperFlipbookComponent.h"
#include "Components/ArrowComponent.h"
#include "BasicProjectile.h"
#include "Scarecrow.h"

//////////////////////////////////////////////
/// Normal State

void UMainCharacterNormalState::Tick(float DeltaTime)
{
	
}

UMainCharacterStateMachine* UMainCharacterNormalState::HandleSwitching()
{
	if (Character->PlayerController->WasInputKeyJustPressed(EKeys::LeftMouseButton))
	{
		return NewObject<UMainCharacterBasicAttackState>();
	}

	if (Character->PlayerController->WasInputKeyJustPressed(EKeys::One))
	{
		return NewObject<UMainCharacterScarecrowState>();
	}

	return nullptr;
}

void UMainCharacterNormalState::OnEnterState(AKeepItAliveCharacter* NPC)
{
	Character = NPC;
	Character->SetIsPlayerAttacking(false);

}

void UMainCharacterNormalState::OnExitState()
{
	Character->SetIsPlayerAttacking(true);
}

//////////////////////////////////////////////
/// Basic Attack State

void UMainCharacterBasicAttackState::Tick(float DeltaTime)
{
	AttackAnimationCountdown += DeltaTime;
}

UMainCharacterStateMachine* UMainCharacterBasicAttackState::HandleSwitching()
{
	if (AttackAnimationCountdown >= Character->GetSprite()->GetFlipbookLength())
	{
		return NewObject<UMainCharacterNormalState>();
	}

	return nullptr;
}

void UMainCharacterBasicAttackState::OnEnterState(AKeepItAliveCharacter* NPC)
{
	Character = NPC;
	AttackAnimationCountdown = 0;

	Character->GetSprite()->SetFlipbook(Character->BasicAttackAnimation);
}

void UMainCharacterBasicAttackState::OnExitState()
{
	SpawnProjectile();
}

void UMainCharacterBasicAttackState::SpawnProjectile()
{
	if (Character && Character->BasicProjectileClass && Character->GetWorld())
	{
		FVector WorldLocation, WorldDirection;
		Character->PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
		WorldLocation.Y = Character->GetActorLocation().Y;
		FVector TravelDirection = WorldLocation - Character->ShootingOffset->GetComponentLocation();
		FRotator ShootBasicAttackRotation = TravelDirection.GetSafeNormal().Rotation();

		ABasicProjectile* Projectile = Character->GetWorld()->SpawnActor<ABasicProjectile>(
			Character->BasicProjectileClass,
			Character->ShootingOffset->GetComponentLocation(),
			ShootBasicAttackRotation
			);

		if (Projectile)
		{
			Projectile->FireInDirection(TravelDirection.GetSafeNormal());
		}
	}
}

//////////////////////////////////////////////
/// Scarecrow State

void UMainCharacterScarecrowState::Tick(float DeltaTime)
{
	AttackAnimationCountdown += DeltaTime;
}

UMainCharacterStateMachine* UMainCharacterScarecrowState::HandleSwitching()
{
	if (AttackAnimationCountdown >= Character->GetSprite()->GetFlipbookLength())
	{
		return NewObject<UMainCharacterNormalState>();
	}

	return nullptr;
}

void UMainCharacterScarecrowState::OnEnterState(AKeepItAliveCharacter* NPC)
{
	Character = NPC;
	AttackAnimationCountdown = 0;

	Character->GetSprite()->SetFlipbook(Character->BasicAttackAnimation);
}

void UMainCharacterScarecrowState::OnExitState()
{
	SpawnScarecrow();
}

void UMainCharacterScarecrowState::SpawnScarecrow()
{
	FVector WorldLocation, WorldDirection;
	Character->PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
	WorldLocation.Y = Character->GetActorLocation().Y;
	FRotator ScarecrowRotation = FRotator().ZeroRotator;

	AScarecrow* ScarecrowActor = Character->GetWorld()->SpawnActor<AScarecrow>(
		Character->ScarecrowClass,
		WorldLocation,
		ScarecrowRotation
		);
}
