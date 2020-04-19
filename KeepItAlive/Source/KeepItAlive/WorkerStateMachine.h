// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorkerStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API UWorkerStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) {}
	virtual UWorkerStateMachine* HandleSwitching() { return nullptr; }
	virtual void OnEnterState(class ABaseWorker* NPC) {}
	virtual void OnExitState() {}
};

UCLASS()
class KEEPITALIVE_API UWorkerRunningState : public UWorkerStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UWorkerStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseWorker* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseWorker* Worker;
};

UCLASS()
class KEEPITALIVE_API UWorkerJobState : public UWorkerStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UWorkerStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseWorker* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseWorker* Worker;
};

UCLASS()
class KEEPITALIVE_API UWorkerDeathState : public UWorkerStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UWorkerStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseWorker* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseWorker* Worker;

	UFUNCTION()
		void OnDeath();
};