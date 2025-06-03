// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "GameFramework/Character.h"
#include "CharacterTypes.h"
#include "Knight.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class SWORDGAME_API AKnight : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AKnight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, Category="Input")
	class UInputMappingContext* InputMapping;

	UPROPERTY(EditAnywhere, Category="Input")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category="Input")
	class UInputAction* LookAction;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite)
	E_PlayerActionState PlayerActionState;

private:
	
	void Move(const FInputActionInstance& InputActionValue);
	void Look(const FInputActionInstance& InputActionValue);

};
