// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnemyStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API UEnemyStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) {}
	virtual UEnemyStateMachine* HandleSwitching() { return nullptr; }
	virtual void OnEnterState(class ABaseEnemy* NPC) {}
	virtual void OnExitState() {}
};

UCLASS()
class KEEPITALIVE_API UEnemyRunningState : public UEnemyStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UEnemyStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseEnemy* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseEnemy* Enemy;
};

UCLASS()
class KEEPITALIVE_API UEnemyAttackingState : public UEnemyStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UEnemyStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseEnemy* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseEnemy* Enemy;
};

UCLASS()
class KEEPITALIVE_API UEnemyDeathState : public UEnemyStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UEnemyStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class ABaseEnemy* NPC) override;
	virtual void OnExitState() override;

private:
	UPROPERTY()
	class ABaseEnemy* Enemy;

	UFUNCTION()
	void OnDeath();
};