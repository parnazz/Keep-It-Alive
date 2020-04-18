// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseSpawnActor.h"
#include "TimerManager.h"

ABaseSpawnActor::ABaseSpawnActor()
{

}

void ABaseSpawnActor::BeginPlay()
{
	Super::BeginPlay();

	Counter = 3;
	GetWorldTimerManager().SetTimer(TimerHandler, this, &ABaseSpawnActor::RepeatedFunction, 1.0f, true, 2.0f);
}

void ABaseSpawnActor::RepeatedFunction()
{
	if (--Counter <= 0)
	{
		GetWorldTimerManager().ClearTimer(TimerHandler);
		// MemberTimerHandle can now be reused for any other Timer.
	}

	UE_LOG(LogTemp, Warning, TEXT("Counter: %i"), Counter);
}

