// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicProjectile.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/DamageType.h"

ABasicProjectile::ABasicProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("Collision Component");
	RootComponent = CapsuleComponent;

	PaperSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite Component");
	PaperSpriteComponent->SetupAttachment(RootComponent);

	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>("Movement Component");
	ProjectileMovementComponent->SetUpdatedComponent(CapsuleComponent);
	ProjectileMovementComponent->InitialSpeed = 400.f;
	ProjectileMovementComponent->MaxSpeed = 400.f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = false;

	ProjectileDamage = 10.f;
}


void ABasicProjectile::FireInDirection(const FVector& ShootDirection)
{
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;
	
}

void ABasicProjectile::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComponent->OnComponentHit.AddDynamic(this, &ABasicProjectile::OnWallHit);
	CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &ABasicProjectile::OnEnemyOverlapBegin);
}

void ABasicProjectile::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);


}

void ABasicProjectile::OnEnemyOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		OtherActor->OnTakeAnyDamage.Broadcast(OtherActor,
			ProjectileDamage,
			Cast<UDamageType>(UDamageType::StaticClass()),
			GetWorld()->GetFirstPlayerController(),
			this);

		Destroy();
	}
}

void ABasicProjectile::OnWallHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		Destroy();
	}
}