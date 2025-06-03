// Fill out your copyright notice in the Description page of Project Settings.


#include "Knight.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
AKnight::AKnight()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera =  CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AKnight::BeginPlay()
{
	Super::BeginPlay();
	PlayerActionState = E_PlayerActionState::EPAS_Idle;

}

// Called every frame
void AKnight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AKnight::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	UEnhancedInputLocalPlayerSubsystem* InputSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	InputSystem->AddMappingContext(InputMapping, 0);
	
	UEnhancedInputComponent* EnhancedPlayerInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	EnhancedPlayerInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AKnight::Move);
	EnhancedPlayerInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AKnight::Look);

}

void AKnight::Move(const FInputActionInstance& Instance)
{
	if (PlayerActionState != E_PlayerActionState::EPAS_Idle)
	{
		return;
	}
	
	FVector2D vector = Instance.GetValue().Get<FVector2D>();
	//FVector forward = GetActorForwardVector();
	//FVector right = GetActorRightVector();

	FRotator ControlRotation = GetControlRotation();
	FRotator YawRotation = FRotator(0, ControlRotation.Yaw, 0);

	auto forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	auto right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);	
	
	AddMovementInput(forward, vector.X);
	AddMovementInput(right, vector.Y);
}

void AKnight::Look(const FInputActionInstance& Instance)
{
	FVector2D vector = Instance.GetValue().Get<FVector2D>();
	AddControllerPitchInput(vector.Y);
	AddControllerYawInput(vector.X);
}