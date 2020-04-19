// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseNPC.h"
#include "BaseWorker.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API ABaseWorker : public ABaseNPC
{
	GENERATED_BODY()
	
public:
	ABaseWorker();

	UPROPERTY(EditAnywhere)
	FVector TargetLocation;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY()
	class UWorkerStateMachine* StateMachine;
};
