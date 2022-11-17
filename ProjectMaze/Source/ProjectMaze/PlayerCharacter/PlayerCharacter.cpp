// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "ProjectMaze/GameSettings/MazeGameMode.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(RootComponent); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = true;

	numberOfKeys = 0;
	health = 3;

	doOnce = true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <GettersandSetters>
void APlayerCharacter::SetKeys(int keys_)
{
	numberOfKeys += keys_;
}

int APlayerCharacter::GetKeys()
{
	return numberOfKeys;
}

int APlayerCharacter::GetHealth()
{
	return health;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <APlayerCharacter>
// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::AddControllerPitchInput);
}

void APlayerCharacter::MoveForward(float Value)
{
	AddMovementInput(FollowCamera->GetForwardVector(), Value);

	// if the player is moveing, play the footstep audio
	if (Value != 0)
	{
		if (doOnce == true)
		{
			DoOnce();
		}
	}
}

void APlayerCharacter::MoveRight(float Value)
{
	AddMovementInput(FollowCamera->GetRightVector(), Value);

	// if the player is moveing, play the footstep audio
	if (Value != 0)
	{
		if (doOnce == true)
		{
			DoOnce();
		}
	}
}

void APlayerCharacter::LookUp(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * GetWorld()->GetDeltaSeconds());
}
void APlayerCharacter::Interact()
{
}

void APlayerCharacter::Turn(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * GetWorld()->GetDeltaSeconds());
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// damage
float APlayerCharacter::TakeDamage(float damageAmount, FDamageEvent const& damageEvent, AController* eventInstigator, AActor* damageCauser)
{

	health -= trunc(damageAmount);

	//find the current gamemode and update the players stats on the displayed widget
	AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
	if (gameMode != nullptr)
	{
		gameMode->GetGameWidget()->UpdateHealth();

		if (health <= 0)
		{
			gameMode->Lose();
		}
	}


	return damageAmount;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Audio>
void APlayerCharacter::DoOnce()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), footstepSound, GetActorLocation());

	doOnce = false;

	GetWorldTimerManager().SetTimer(doOnceTimer, this, &APlayerCharacter::ResetDoOnce, 0.5f, false);
}

void APlayerCharacter::ResetDoOnce()
{
	GetWorldTimerManager().ClearTimer(doOnceTimer);
	doOnce = true;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////