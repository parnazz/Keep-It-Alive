// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseSpawnActor.h"
#include "TimerManager.h"
#include "Components/BoxComponent.h"
#include "KeepItAliveGameStateBase.h"
#include "Kismet/GameplayStatics.h"

ABaseSpawnActor::ABaseSpawnActor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	OriginPoolForCharacters = CreateDefaultSubobject<UBoxComponent>("Pool For Characters");
	RootComponent = OriginPoolForCharacters;
	OriginPoolForCharacters->SetBoxExtent(FVector(32, 32, 140));
	
	Counter = 0;
}

void ABaseSpawnActor::BeginPlay()
{
	Super::BeginPlay();

	GameState = GetWorld()->GetGameState<AKeepItAliveGameStateBase>();
	if (GameState)
	{
		GameState->SetNumberOfEnemies(WaveToSpawn.Num());
	}

	BoxExtent = OriginPoolForCharacters->GetUnscaledBoxExtent().Z;
	PoolOriginLocation = OriginPoolForCharacters->GetComponentLocation() + FVector(0, 0, BoxExtent);

	if (WaveToSpawn.Num() > 0)
	{
		Counter = WaveToSpawn.Num();
		GetWorldTimerManager().SetTimer(TimerHandler, 
			this, 
			&ABaseSpawnActor::RepeatedFunction, 
			1.0f, 
			false, 
			WaveToSpawn[0].TimeToSpawn);
	}
}

void ABaseSpawnActor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	
}

void ABaseSpawnActor::RepeatedFunction()
{
	SpawnNextCharacter(WaveToSpawn[0]);
	WaveToSpawn.RemoveAt(0);

	if (--Counter <= 0)
	{
		GetWorldTimerManager().ClearTimer(TimerHandler);
	}

	if (WaveToSpawn.Num() > 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Time has come"));

		GetWorldTimerManager().SetTimer(TimerHandler,
			this,
			&ABaseSpawnActor::RepeatedFunction,
			1.0f,
			false,
			WaveToSpawn[0].TimeToSpawn);
	}
}

void ABaseSpawnActor::SpawnNextCharacter(FSpawnableCharacter Character)
{
	float LengthOfOneGap = BoxExtent / 8;
	float SpawnOffset = LengthOfOneGap * (2 * Character.LaneNumber + 1);

	FVector SpawnLocation = PoolOriginLocation - FVector(0, 0, SpawnOffset);

	ABaseNPC* NPC = GetWorld()->SpawnActor<ABaseNPC>(
		Character.CharacterToSpawnClass,
		SpawnLocation,
		this->GetActorRotation()
		);
}

