// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MainCharacterStateMachine.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API UMainCharacterStateMachine : public UObject
{
	GENERATED_BODY()
	
public:
	virtual void Tick(float DeltaTime) {}
	virtual UMainCharacterStateMachine* HandleSwitching() { return nullptr; }
	virtual void OnEnterState(class AKeepItAliveCharacter* NPC) {}
	virtual void OnExitState() {}
};

UCLASS()
class KEEPITALIVE_API UMainCharacterNormalState : public UMainCharacterStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UMainCharacterStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class AKeepItAliveCharacter* NPC) override;
	virtual void OnExitState() override;

private:
	class AKeepItAliveCharacter* Character;
};

UCLASS()
class KEEPITALIVE_API UMainCharacterBasicAttackState : public UMainCharacterStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UMainCharacterStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class AKeepItAliveCharacter* NPC) override;
	virtual void OnExitState() override;

private:
	class AKeepItAliveCharacter* Character;

	float AttackAnimationCountdown;

	void SpawnProjectile();
};

UCLASS()
class KEEPITALIVE_API UMainCharacterScarecrowState : public UMainCharacterStateMachine
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaTime) override;
	virtual UMainCharacterStateMachine* HandleSwitching() override;
	virtual void OnEnterState(class AKeepItAliveCharacter* NPC) override;
	virtual void OnExitState() override;

private:
	class AKeepItAliveCharacter* Character;

	float AttackAnimationCountdown;

	void SpawnScarecrow();
};