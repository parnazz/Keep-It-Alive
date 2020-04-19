// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseNPC.h"
#include "BaseEnemy.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API ABaseEnemy : public ABaseNPC
{
	GENERATED_BODY()
	
public:
	ABaseEnemy();

	UFUNCTION()
	void SetIsFoundWorker(bool Value) { bIsFoundWorker = Value; }
	
	UFUNCTION()
	bool GetIsFoundWorker() { return bIsFoundWorker; }

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY()
	class UEnemyStateMachine* StateMachine;

	bool bIsFoundWorker = false;

	UFUNCTION()
	void OnEnemyOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
