// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScarecrowStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API UScarecrowStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) {}
	virtual UScarecrowStateMachine* HandleSwitching() { return nullptr; }
	virtual void OnEnterState(class AScarecrow* NPC) {}
	virtual void OnExitState() {}
};

UCLASS()
class KEEPITALIVE_API UScarecrowNormalState : public UScarecrowStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UScarecrowStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class AScarecrow* NPC) override;
	virtual void OnExitState() override;

private:
	class AScarecrow* Character;
};

UCLASS()
class KEEPITALIVE_API UScarecrowDeathState : public UScarecrowStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UScarecrowStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class AScarecrow* NPC) override;
	virtual void OnExitState() override;

private:
	class AScarecrow* Character;

	UFUNCTION()
	void OnDeath();
};
