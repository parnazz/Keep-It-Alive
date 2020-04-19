// Fill out your copyright notice in the Description page of Project Settings.


#include "WorkerStateMachine.h"
#include "BaseWorker.h"
#include "PaperFlipbookComponent.h"
#include "KeepItAliveGameStateBase.h"

//////////////////////////////////////////////
/// Running State

void UWorkerRunningState::Tick(float DeltaTime)
{
	Worker->AddMovementInput(FVector(-1, 0, 0));
}

UWorkerStateMachine* UWorkerRunningState::HandleSwitching()
{
	if (Worker->GetIsCharacterDead())
	{
		return NewObject<UWorkerDeathState>();
	}

	if (Worker->TargetLocation.X - Worker->GetActorLocation().X >= 0)
	{
		return NewObject<UWorkerJobState>();
	}

	return nullptr;
}

void UWorkerRunningState::OnEnterState(ABaseWorker* NPC)
{
	Worker = NPC;

	Worker->GetSprite()->SetFlipbook(Worker->RunAnimation);
}

void UWorkerRunningState::OnExitState()
{

}

//////////////////////////////////////////////
/// Job State

void UWorkerJobState::Tick(float DeltaTime)
{


}

UWorkerStateMachine* UWorkerJobState::HandleSwitching()
{
	if (Worker->GetIsCharacterDead())
	{
		return NewObject<UWorkerDeathState>();
	}

	return nullptr;
}

void UWorkerJobState::OnEnterState(ABaseWorker* NPC)
{
	Worker = NPC;

	Worker->GetSprite()->SetFlipbook(Worker->ActionAnimation);
}

void UWorkerJobState::OnExitState()
{

}

//////////////////////////////////////////////
/// Death State

void UWorkerDeathState::Tick(float DeltaTime)
{


}

UWorkerStateMachine* UWorkerDeathState::HandleSwitching()
{


	return nullptr;
}

void UWorkerDeathState::OnEnterState(ABaseWorker* NPC)
{
	Worker = NPC;

	Worker->GetSprite()->SetFlipbook(Worker->DieAnimation);
	Worker->GetSprite()->SetLooping(false);
	Worker->GetSprite()->OnFinishedPlaying.AddDynamic(this, &UWorkerDeathState::OnDeath);
}

void UWorkerDeathState::OnExitState()
{

}

void UWorkerDeathState::OnDeath()
{
	Worker->GameState->OnWorkerDeath();

	UE_LOG(LogTemp, Warning, TEXT("Enemies left: %i"), Worker->GameState->GetNumberOfWorkers());

	Worker->Destroy();
}
