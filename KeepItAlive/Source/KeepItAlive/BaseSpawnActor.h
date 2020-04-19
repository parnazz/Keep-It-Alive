// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "PaperCharacter.h"
#include "BaseNPC.h"
#include "BaseSpawnActor.generated.h"

USTRUCT()
struct FSpawnableCharacter
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ABaseNPC> CharacterToSpawnClass;

	UPROPERTY(EditAnywhere)
	float TimeToSpawn;

	UPROPERTY(EditAnywhere)
	int32 LaneNumber;
};

/**
 * 
 */
UCLASS()
class KEEPITALIVE_API ABaseSpawnActor : public APaperSpriteActor
{
	GENERATED_BODY()
	
public:
	ABaseSpawnActor();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnywhere, Category = "Spawn Properties")
	TArray<FSpawnableCharacter> WaveToSpawn;

	FTimerHandle TimerHandler;

	void RepeatedFunction();

	int32 Counter;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* OriginPoolForCharacters;

	UPROPERTY()
	class AKeepItAliveGameStateBase* GameState;

	float BoxExtent;

	FVector PoolOriginLocation;

	void SpawnNextCharacter(FSpawnableCharacter Character);
};
