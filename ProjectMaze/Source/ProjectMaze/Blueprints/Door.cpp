// Fill out your copyright notice in the Description page of Project Settings.


#include "Door.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TimelineComponent.h"
#include "ProjectMaze/GameSettings/MazeGameMode.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the platform mesh
	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("doorMesh"));
	doorMesh->SetupAttachment(RootComponent);

	//create the trigger box
	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	TriggerBox->SetupAttachment(RootComponent);

	//create the scene component
	keyHole = CreateDefaultSubobject<USceneComponent>(TEXT("KeyHole"));
	keyHole->SetupAttachment(doorMesh);

	//create the key mesh
	keyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("keyMesh"));
	keyMesh->SetupAttachment(RootComponent);

	// set the door to be locked
	isOpen = false;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Player Character Input
void ADoor::BindToInput()
{
	// Initialize our component
	InputComponent = NewObject<UInputComponent>(this);
	InputComponent->RegisterComponent();
	if (InputComponent)
	{
		InputComponent->BindAction("Interact", IE_Pressed, this, &ADoor::OnInteraction);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ADoor>
// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();
	
	//turn on collision checks for the collision box
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &ADoor::OnTriggerBoxOverlap);
	TriggerBox->OnComponentEndOverlap.AddDynamic(this, &ADoor::OnComponentEndOverlap);

	keyMesh->SetVisibility(false);

	// set up the players input
	BindToInput();
}

// Called every frame
void ADoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//play the timeline
	KeyCurveTimeline.TickTimeline(DeltaTime);

	//play the timeline
	DoorCurveTimeline.TickTimeline(DeltaTime);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Timeline
void ADoor::KeyTimelineProgress(float value)
{
	keyMesh->SetRelativeLocation(FVector(value, 0.f, 180.f));

	if (value == 0)
	{
		keyTimelineFinished = true;
		isOpen = true;
	}
}

void ADoor::DoorTimelineProgress(float value)
{
	doorMesh->SetRelativeLocation(FVector(0.f, 0.f, value));

	if (keyTimelineFinished == true)
	{
		keyMesh->SetRelativeLocation(FVector(0, 0.f, value + 180));
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void ADoor::OnTriggerBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (isOpen == false)
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
				// check to see if the player has a key, if they do tell them they can open the door, if not, tell them they need to find a key
				if (playerCharacter->GetKeys() > 0)
				{
					gameMode->GetGameWidget()->UpdateMessage(FText::FromString("Press 'E' To Open Door"));
				}
				else
				{
					gameMode->GetGameWidget()->UpdateMessage(FText::FromString("Door Requires a Golden Skull Key"));
				}
			}
		}
	}
}

void ADoor::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
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
void ADoor::OnInteraction()
{
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);
	if (playerCharacter != nullptr)
	{
		if (playerCharacter->GetKeys() > 0)
		{
			playerCharacter->SetKeys(-1);
			
			//find the current gamemode and update the players stats on the displayed widget
			AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
			if (gameMode != nullptr)
			{
				gameMode->GetGameWidget()->UpdateSkulls();
			}

			//play the door opening audio
			if (doorSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), doorSound, GetActorLocation());
			}

			keyMesh->SetVisibility(true);

			//set up the timeline curve
			FOnTimelineFloat KeyTimelineProgress;
			KeyTimelineProgress.BindUFunction(this, FName("KeyTimelineProgress"));
			KeyCurveTimeline.AddInterpFloat(KeyPositionFloat, KeyTimelineProgress);
			KeyCurveTimeline.SetLooping(false);

			keyTimelineFinished = false;

			//play the timeline
			KeyCurveTimeline.PlayFromStart();

			//set up the timeline curve
			FOnTimelineFloat DoorTimelineProgress;
			DoorTimelineProgress.BindUFunction(this, FName("DoorTimelineProgress"));
			DoorCurveTimeline.AddInterpFloat(DoorPositionFloat, DoorTimelineProgress);
			DoorCurveTimeline.SetLooping(false);

			//play the timeline
			DoorCurveTimeline.PlayFromStart();
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////