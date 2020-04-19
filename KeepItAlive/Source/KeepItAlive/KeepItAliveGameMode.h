// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "KeepItAliveGameMode.generated.h"

UENUM()
enum class EInGameState
{
    EBattle,
    EWaveSpawn,
    ESpawnWorkers,
    EBetweenWaves,
    EGameOver,
    EWon
};

/**
 * The GameMode defines the game being played. It governs the game rules, scoring, what actors
 * are allowed to exist in this game type, and who may enter the game.
 *
 * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of KeepItAliveCharacter
 */
UCLASS(minimalapi)
class AKeepItAliveGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AKeepItAliveGameMode();

    void SetCurrentState(EInGameState State) { CurrentGameState = State; }

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:
    void SwitchStates();

    void BattleState();

    void EnemiesSpawnState();

    void WorkersSpawnState();

    void WaitBetweenWaves();

    void BeginEnemyWave();
    
    EInGameState CurrentGameState;

    FTimerHandle HandlerBetweenWaves;

    UPROPERTY()
    class AKeepItAliveGameStateBase* GameStateBase;
    
    UPROPERTY(EditAnywhere, Category = "Spawn Properties")
    FVector LocationOfEnemySpawnActor;

    UPROPERTY(EditAnywhere, Category = "Spawn Properties")
    FVector LocationOfWorkersSpawnActor;

    UPROPERTY(EditAnywhere, Category = "Spawn Properties")
    FRotator RotationOfEnemySpawnActor;

    UPROPERTY(EditAnywhere, Category = "Spawn Properties")
    FRotator RotationOfWorkersSpawnActor;

    UPROPERTY(EditAnywhere, DisplayName = "Enemy Waves")
    TArray<TSubclassOf<class ABaseSpawnActor>> ActorsToSpawn;

    UPROPERTY(EditAnywhere, DisplayName = "Workers Waves")
    TArray<TSubclassOf<class ABaseSpawnActor>> WorkersToSpawn;

    UPROPERTY()
    class ABaseSpawnActor* SpawnActor;

    UPROPERTY(EditAnywhere, Category = "Spawn Properties")
    float TimeBetweenWaves;
};
