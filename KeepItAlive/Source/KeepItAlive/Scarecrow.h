// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseNPC.h"
#include "Scarecrow.generated.h"

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API AScarecrow : public ABaseNPC
{
	GENERATED_BODY()
	
public:
	AScarecrow();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY()
	class UScarecrowStateMachine* StateMachine;

};
