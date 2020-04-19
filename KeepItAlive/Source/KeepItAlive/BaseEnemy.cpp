// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "KeepItAliveGameStateBase.h"
#include "EnemyStateMachine.h"

ABaseEnemy::ABaseEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionCheck->OnComponentBeginOverlap.AddDynamic(this, &ABaseEnemy::OnEnemyOverlapBegin);
}

void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

	if (CollisionCheck == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Collission Check is NULL"));
	}

	StateMachine = NewObject<UEnemyRunningState>();
	StateMachine->OnEnterState(this);
}

void ABaseEnemy::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	StateMachine->Tick(DeltaSeconds);
	UEnemyStateMachine* State_ = StateMachine->HandleSwitching();

	if (State_ != nullptr)
	{
		StateMachine->OnExitState();
		StateMachine = State_;
		StateMachine->OnEnterState(this);
	}
}

void ABaseEnemy::OnEnemyOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("MB FOUND YOU"));
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		UE_LOG(LogTemp, Warning, TEXT("FOUND YOU"));
		SetIsFoundWorker(true);
	}
}
