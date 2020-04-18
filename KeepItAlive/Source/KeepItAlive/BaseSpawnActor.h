// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteActor.h"
#include "PaperCharacter.h"
#include "BaseSpawnActor.generated.h"

USTRUCT()
struct FSpawnableCharacter
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY()
	APaperCharacter* CharacterToSpawn;

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

private:
	TArray<FSpawnableCharacter> WaveToSpawn;

	FTimerHandle TimerHandler;

	void RepeatedFunction();

	int Counter;
};
