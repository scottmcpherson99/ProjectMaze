// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyPickup.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectMaze/GameSettings/MazeGameMode.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AKeyPickup::AKeyPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the platform mesh
	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("platformMesh"));
	platformMesh->SetupAttachment(RootComponent);

	//create the trigger box
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

	//create the scene component
	keyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("KeyHole"));
	keyMesh->SetupAttachment(platformMesh);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void AKeyPickup::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &AKeyPickup::OnInteraction);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AKeyPickup>
// Called when the game starts or when spawned
void AKeyPickup::BeginPlay()
{
	Super::BeginPlay();
	
	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AKeyPickup::OnTriggerBoxOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &AKeyPickup::OnComponentEndOverlap);

	// set up the players input
	BindToInput();
}

// Called every frame
void AKeyPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AKeyPickup::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(keyMesh))
	{
		//check to see if the overlapping actor is a player character, if it is, destroy the tile
		APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
			APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

			if (playerCharacter != nullptr && playerController != nullptr)
			{
				EnableInput(playerController);

				//find the current gamemode and update the message displayed on the screen
				AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
				if (gameMode != nullptr)
				{

					gameMode->GetGameWidget()->UpdateMessage(FText::FromString("Press 'E' To Pick Up Key"));
				}
			}
	}
}

void AKeyPickup::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	if (playerCharacter != nullptr && playerController != nullptr)
	{
		DisableInput(playerController);

		//find the current gamemode and clear the message displayed on the screen
		AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
		if (gameMode != nullptr)
		{
			gameMode->GetGameWidget()->UpdateMessage(FText::FromString(""));
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Gameplay
void AKeyPickup::OnInteraction()
{
	if (IsValid(keyMesh))
	{
		keyMesh->DestroyComponent();

		ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);

		if (playerCharacter != nullptr)
		{
			playerCharacter->SetKeys(1);

			//find the current gamemode and update the players stats on the displayed widget
			AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
			if (gameMode != nullptr)
			{
				gameMode->GetGameWidget()->UpdateSkulls();
				gameMode->GetGameWidget()->UpdateMessage(FText::FromString(""));
			}

			//play the pickup audio
			if (pickupSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), pickupSound, playerCharacter->GetActorLocation());
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////