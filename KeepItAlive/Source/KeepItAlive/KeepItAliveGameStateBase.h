// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "KeepItAliveGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API AKeepItAliveGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	AKeepItAliveGameStateBase();

	void SetNumberOfEnemies(int32 Value);

	int32 GetNumberOfEnemies() { return NumberOfEnemies; }

	void SetNumberOfWorkers(int32 Value);

	int32 GetNumberOfWorkers() { return NumberOfWorkers; }

	void OnEnemyDeath() { NumberOfEnemies--; }

	void OnWorkerDeath() { NumberOfWorkers--; }

protected:
	virtual void BeginPlay() override;

private:
	int32 NumberOfEnemies;

	int32 NumberOfWorkers;
};
