// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "BasicProjectile.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API ABasicProjectile : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ABasicProjectile();

	void FireInDirection(const FVector& ShootDirection);

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, Category = "Collision")
	class UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, Category = "Sprite")
	class UPaperSpriteComponent* PaperSpriteComponent;

	UPROPERTY(EditAnywhere, Category = "Movement")
	class UProjectileMovementComponent* ProjectileMovementComponent;

	UFUNCTION()
	void OnEnemyOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnWallHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(EditAnywhere)
	float ProjectileDamage;
};
