// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KeepItAliveGameMode.h"
#include "KeepItAliveCharacter.h"
#include "KeepItAliveGameStateBase.h"
#include "Engine/World.h"
#include "BaseSpawnActor.h"
#include "TimerManager.h"

AKeepItAliveGameMode::AKeepItAliveGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// Set default pawn class to our character
	DefaultPawnClass = AKeepItAliveCharacter::StaticClass();	
	GameStateClass = AKeepItAliveGameStateBase::StaticClass();
}

void AKeepItAliveGameMode::BeginPlay()
{
	Super::BeginPlay();

	GameStateBase = GetWorld()->GetGameState<AKeepItAliveGameStateBase>();

	CurrentGameState = EInGameState::ESpawnWorkers;
}

void AKeepItAliveGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (WorkersToSpawn.Num() > 0 && ActorsToSpawn.Num() > 0)
	{
		SwitchStates();
	}
}

void AKeepItAliveGameMode::SwitchStates()
{
	switch (CurrentGameState)
	{
	case EInGameState::EBattle:
		BattleState();
		break;
	case EInGameState::ESpawnWorkers:
		WorkersSpawnState();
		break;
	case EInGameState::EBetweenWaves:
		WaitBetweenWaves();
		break;
	case EInGameState::EGameOver:
		UE_LOG(LogTemp, Warning, TEXT("You Loose!"));
		break;
	case EInGameState::EWaveSpawn:
		EnemiesSpawnState();
		break;
	case EInGameState::EWon:
		UE_LOG(LogTemp, Warning, TEXT("You won!"));
		break;
	default:
		UE_LOG(LogTemp, Warning, TEXT("Default!"));
		break;
	}
}

void AKeepItAliveGameMode::BattleState()
{
	int32 NumberOfEnemies = GameStateBase->GetNumberOfEnemies();

	if (NumberOfEnemies <= 0)
	{
		CurrentGameState = EInGameState::EBetweenWaves;
		UE_LOG(LogTemp, Warning, TEXT("All Enemies defeated"));

		SpawnActor->Destroy();
		ActorsToSpawn.RemoveAt(0);

		if (ActorsToSpawn.Num() == 0)
		{
			CurrentGameState = EInGameState::EWon;
			UE_LOG(LogTemp, Warning, TEXT("You won!"));
		}
	}
}

void AKeepItAliveGameMode::EnemiesSpawnState()
{
	SpawnActor = GetWorld()->SpawnActor<ABaseSpawnActor>(
		ActorsToSpawn[0],
		LocationOfEnemySpawnActor,
		RotationOfEnemySpawnActor
		);

	if (SpawnActor)
	{
		CurrentGameState = EInGameState::EBattle;
	}
}

void AKeepItAliveGameMode::WorkersSpawnState()
{
	SpawnActor = GetWorld()->SpawnActor<ABaseSpawnActor>(
		WorkersToSpawn[0],
		LocationOfEnemySpawnActor,
		RotationOfEnemySpawnActor
		);

	if (SpawnActor)
	{
		CurrentGameState = EInGameState::EBetweenWaves;
		UE_LOG(LogTemp, Warning, TEXT("Enemy wave preparing"));
		GetWorldTimerManager().SetTimer(HandlerBetweenWaves,
			this,
			&AKeepItAliveGameMode::BeginEnemyWave,
			1.f,
			false,
			TimeBetweenWaves);
	}

	
}

void AKeepItAliveGameMode::WaitBetweenWaves()
{
	
}

void AKeepItAliveGameMode::BeginEnemyWave()
{
	UE_LOG(LogTemp, Warning, TEXT("Enemy wave begun"));
	GetWorldTimerManager().ClearTimer(HandlerBetweenWaves);
	CurrentGameState = EInGameState::EWaveSpawn;
}

