// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "BasicProjectile.h"
#include "KeepItAliveCharacter.generated.h"

class UTextRenderComponent;

/**
 * This class is the default character for KeepItAlive, and it is responsible for all
 * physical interaction between the player and the world.
 *
 * The capsule component (inherited from ACharacter) handles collision with the world
 * The CharacterMovementComponent (inherited from ACharacter) handles movement of the collision capsule
 * The Sprite component (inherited from APaperCharacter) handles the visuals
 */
UCLASS(config=Game)
class AKeepItAliveCharacter : public APaperCharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera, meta=(AllowPrivateAccess="true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UTextRenderComponent* TextComponent;
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Animations)
	class UPaperFlipbook* BackwardAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* ForwardAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* SideAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* AttackAnimation;

	UPROPERTY()
	class APlayerController* PlayerController;

	UPROPERTY(EditDefaultsOnly, Category = "Attacking")
	TSubclassOf<ABasicProjectile> BasicProjectileClass;

	UPROPERTY(EditAnywhere, Category = "Attacking")
	class UArrowComponent* ShootingOffset;

	UPROPERTY(EditAnywhere, Category = "Attacking")
	FRotator ShootBasicAttackRotation;

	/** Called to choose the correct animation to play based on the character's movement state */
	void UpdateAnimation(float DeltaSeconds);

	/** Called for side to side input */
	void MoveRight(float Value);

	void MoveUp(float Value);

	void UpdateCharacter();

	void BasicAttack();

	void SpawnProjectile();

	void SetDesiredAnimation(class UPaperFlipbook* DesiredAnimation);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	bool bIsPlayerAttacking = false;
	float AttackAnimationCountdown;

public:
	AKeepItAliveCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
