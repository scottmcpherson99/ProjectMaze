// Fill out your copyright notice in the Description page of Project Settings.


#include "GoalPlatform.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "ProjectMaze/GameSettings/MazeGameMode.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AGoalPlatform::AGoalPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the platform mesh
	platformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("platformMesh"));
	platformMesh->SetupAttachment(RootComponent);

	//create the sphere component
	sphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("sphereComp"));
	sphereComp->SetupAttachment(RootComponent);
	sphereComp->SetSphereRadius(80.f);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <AGoalPlatform>
// Called when the game starts or when spawned
void AGoalPlatform::BeginPlay()
{
	Super::BeginPlay();

	// turn on collision checks for the collision sphere
	sphereComp->OnComponentBeginOverlap.AddDynamic(this, &AGoalPlatform::OnOverlapBegin);
}

// Called every frame
void AGoalPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Collision>
void AGoalPlatform::OnOverlapBegin(UPrimitiveComponent* newComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//check to see if the overlapping actor is a player character, if it is, 
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(OtherActor);

	if (playerCharacter != nullptr)
	{
		//find the current gamemode and update the players stats on the displayed widget
		AMazeGameMode* gameMode = Cast<AMazeGameMode>((AMazeGameMode*)GetWorld()->GetAuthGameMode());
		if (gameMode != nullptr)
		{
			gameMode->Win();
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
