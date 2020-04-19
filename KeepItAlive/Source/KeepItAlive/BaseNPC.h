// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "BaseNPC.generated.h"



/**
 * 
 */
UCLASS()
class KEEPITALIVE_API ABaseNPC : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	ABaseNPC();

	class UPaperSpriteComponent* GetSpriteComponent() { return PaperSpriteComponent; }

	void SetIsCharacterDead(bool value) { bIsCharacterDead = value; }

	bool GetIsCharacterDead() { return bIsCharacterDead; }

	UPROPERTY(EditAnywhere, Category = "Animation")
	class UPaperFlipbook* RunAnimation;

	UPROPERTY(EditAnywhere, Category = "Animation")
	class UPaperFlipbook* ActionAnimation;

	UPROPERTY(EditAnywhere, Category = "Animation")
	class UPaperFlipbook* DieAnimation;

	UPROPERTY()
	class AKeepItAliveGameStateBase* GameState;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Sprite")
	class UPaperSpriteComponent* PaperSpriteComponent;

	UPROPERTY(EditDefaultsOnly)
	class USphereComponent* CollisionCheck;

	UPROPERTY(EditAnywhere)
	class UDamageComponent* DamageComponent;

	UPROPERTY()
	FTimerHandle DieAnimationHandler;

private:
	bool bIsCharacterDead = false;
	
};
