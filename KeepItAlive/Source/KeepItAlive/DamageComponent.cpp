// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageComponent.h"
#include "GameFramework/Actor.h"
#include "PaperCharacter.h"
#include "BaseNPC.h"

UDamageComponent::UDamageComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	MaxHealth = 30.f;
	CurrentHealth = MaxHealth;
}


// Called when the game starts
void UDamageComponent::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();

	if (Owner != nullptr)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UDamageComponent::OnDamageTaken);
	}

	
}

void UDamageComponent::OnDamageTaken(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	CurrentHealth -= Damage;

	ABaseNPC* Character = Cast<ABaseNPC>(DamagedActor);
	/*if (Character != nullptr)
	{
		Character->GetMesh()->GetAnimInstance()->Montage_Play(DamageAnimation);
	}*/

	UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), CurrentHealth);

	if (CurrentHealth <= 0)
	{
		Character->SetIsCharacterDead(true);
	}
}
