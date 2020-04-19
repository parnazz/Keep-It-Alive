// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNPC.h"
#include "PaperSpriteComponent.h"
#include "PaperFlipbookComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DamageComponent.h"
#include "TimerManager.h"
#include "KeepItAliveGameStateBase.h"

ABaseNPC::ABaseNPC()
{
	PrimaryActorTick.bCanEverTick = true;

	PaperSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite Component");
	PaperSpriteComponent->SetupAttachment(RootComponent);

	CollisionCheck = CreateDefaultSubobject<USphereComponent>("Collision Check");
	CollisionCheck->SetupAttachment(RootComponent);

	DamageComponent = CreateDefaultSubobject<UDamageComponent>("Damage Component");
}

void ABaseNPC::BeginPlay()
{
	Super::BeginPlay();

	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	GetCharacterMovement()->GravityScale = 0.f;

	GameState = GetWorld()->GetGameState<AKeepItAliveGameStateBase>();
}

void ABaseNPC::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	
}

