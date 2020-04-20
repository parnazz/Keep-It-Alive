// Fill out your copyright notice in the Description page of Project Settings.


#include "ScarecrowStateMachine.h"
#include "Scarecrow.h"
#include "PaperFlipbookComponent.h"

void UScarecrowDeathState::Tick(float DeltaTime)
{

}

UScarecrowStateMachine* UScarecrowDeathState::HandleSwitching()
{
	return nullptr;
}

void UScarecrowDeathState::OnEnterState(AScarecrow* NPC)
{
	Character = NPC;

	Character->GetSprite()->SetFlipbook(Character->DieAnimation);
	Character->GetSprite()->SetLooping(false);
	Character->GetSprite()->OnFinishedPlaying.AddDynamic(this, &UScarecrowDeathState::OnDeath);
}

void UScarecrowDeathState::OnExitState()
{

}

void UScarecrowDeathState::OnDeath()
{
	Character->Destroy();
}

void UScarecrowNormalState::Tick(float DeltaTime)
{

}

UScarecrowStateMachine* UScarecrowNormalState::HandleSwitching()
{
	if (Character->GetIsCharacterDead())
	{
		return NewObject<UScarecrowDeathState>();
	}
	
	return nullptr;
}

void UScarecrowNormalState::OnEnterState(AScarecrow* NPC)
{
	Character = NPC;
}

void UScarecrowNormalState::OnExitState()
{

}
