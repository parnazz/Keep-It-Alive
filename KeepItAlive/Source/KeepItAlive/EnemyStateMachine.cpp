// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyStateMachine.h"
#include "BaseEnemy.h"
#include "PaperFlipbookComponent.h"
#include "KeepItAliveGameStateBase.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

//////////////////////////////////////////////
/// Running State

void UEnemyRunningState::Tick(float DeltaTime)
{
	Enemy->AddMovementInput(FVector(-1, 0, 0));
}

UEnemyStateMachine* UEnemyRunningState::HandleSwitching()
{
	if (Enemy->GetIsCharacterDead())
	{
		return NewObject<UEnemyDeathState>();
	}

	if (Enemy->GetIsFoundWorker())
	{
		return NewObject<UEnemyAttackingState>();
	}

	return nullptr;
}

void UEnemyRunningState::OnEnterState(ABaseEnemy* NPC)
{
	Enemy = NPC;

	Enemy->GetSprite()->SetFlipbook(Enemy->RunAnimation);
}

void UEnemyRunningState::OnExitState()
{

}

//////////////////////////////////////////////
/// Attacking State

void UEnemyAttackingState::Tick(float DeltaTime)
{

	
}

UEnemyStateMachine* UEnemyAttackingState::HandleSwitching()
{
	if (Enemy->GetIsCharacterDead())
	{
		return NewObject<UEnemyDeathState>();
	}

	return nullptr;
}

void UEnemyAttackingState::OnEnterState(ABaseEnemy* NPC)
{
	Enemy = NPC;

	Enemy->GetSprite()->SetFlipbook(Enemy->ActionAnimation);
}

void UEnemyAttackingState::OnExitState()
{

}

//////////////////////////////////////////////
/// Death State

void UEnemyDeathState::Tick(float DeltaTime)
{


}

UEnemyStateMachine* UEnemyDeathState::HandleSwitching()
{


	return nullptr;
}

void UEnemyDeathState::OnEnterState(ABaseEnemy* NPC)
{
	Enemy = NPC;
	
	Enemy->GetCharacterMovement()->StopMovementImmediately();
	Enemy->GetSprite()->SetFlipbook(Enemy->DieAnimation);
	Enemy->GetSprite()->SetLooping(false);
	Enemy->GetSprite()->OnFinishedPlaying.AddDynamic(this, &UEnemyDeathState::OnDeath);
	
}

void UEnemyDeathState::OnExitState()
{

}

void UEnemyDeathState::OnDeath()
{
	Enemy->GameState->OnEnemyDeath();

	UE_LOG(LogTemp, Warning, TEXT("Enemies left: %i"), Enemy->GameState->GetNumberOfEnemies());

	Enemy->Destroy();
}
