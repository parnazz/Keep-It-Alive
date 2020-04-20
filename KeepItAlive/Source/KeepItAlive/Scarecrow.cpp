// Fill out your copyright notice in the Description page of Project Settings.


#include "Scarecrow.h"
#include "ScarecrowStateMachine.h"

AScarecrow::AScarecrow()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AScarecrow::BeginPlay()
{
	Super::BeginPlay();

	StateMachine = NewObject<UScarecrowNormalState>();
	StateMachine->OnEnterState(this);
}

void AScarecrow::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	StateMachine->Tick(DeltaSeconds);
	UScarecrowStateMachine* State_ = StateMachine->HandleSwitching();

	if (State_ != nullptr)
	{
		StateMachine->OnExitState();
		StateMachine = State_;
		StateMachine->OnEnterState(this);
	}
}