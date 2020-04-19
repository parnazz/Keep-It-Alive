// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWorker.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KeepItAliveGameStateBase.h"
#include "WorkerStateMachine.h"

ABaseWorker::ABaseWorker()
{
	PrimaryActorTick.bCanEverTick = true;


}

void ABaseWorker::BeginPlay()
{
	Super::BeginPlay();

	StateMachine = NewObject<UWorkerRunningState>();
	StateMachine->OnEnterState(this);
}

void ABaseWorker::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	StateMachine->Tick(DeltaSeconds);
	UWorkerStateMachine* State_ = StateMachine->HandleSwitching();

	if (State_ != nullptr)
	{
		StateMachine->OnExitState();
		StateMachine = State_;
		StateMachine->OnEnterState(this);
	}
}
