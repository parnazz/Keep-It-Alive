// Fill out your copyright notice in the Description page of Project Settings.


#include "KeepItAliveGameStateBase.h"

AKeepItAliveGameStateBase::AKeepItAliveGameStateBase()
{
	NumberOfEnemies = 0;
	NumberOfWorkers = 0;
}

void AKeepItAliveGameStateBase::SetNumberOfEnemies(int32 Value)
{
	NumberOfEnemies = Value;
}

void AKeepItAliveGameStateBase::SetNumberOfWorkers(int32 Value)
{
	NumberOfWorkers = Value;
}

void AKeepItAliveGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	
}
