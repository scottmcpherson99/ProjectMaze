// Fill out your copyright notice in the Description page of Project Settings.


#include "Shooter.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "Arrow.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AShooter::AShooter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//create the scene component
	sceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = sceneComp;

	//create the shooter mesh
	shooterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("shooterMesh"));
	shooterMesh->SetupAttachment(RootComponent);

	//create the arrow source component
	arrowSource = CreateDefaultSubobject<USceneComponent>(TEXT("arrowSource"));
	arrowSource->SetupAttachment(shooterMesh);

	bDoOnce = true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ADoor>
// Called when the game starts or when spawned
void AShooter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> ignoredActors;
	FHitResult outHit;
	UKismetSystemLibrary::SphereTraceSingle(this, arrowSource->GetComponentLocation(), (arrowSource->GetForwardVector() * 3000) + arrowSource->GetComponentLocation(), 10.f, ETraceTypeQuery::TraceTypeQuery11, false, ignoredActors, EDrawDebugTrace::None, outHit, true);

	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);


	if (outHit.Actor == playerCharacter)
	{
		if (bDoOnce == true)
		{
			bDoOnce = false;
			ShootArrow();
			GetWorldTimerManager().SetTimer(spawnTimer, this, &AShooter::ResetDoOnce, 2.f, true);
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Gameplay>
void AShooter::ShootArrow()
{
	//set the spawn parameters for the drop
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = GetInstigator();
	FTransform spawnTransform = arrowSource->GetComponentTransform();

	// spawn the arrow if the arrow has been set
	if (arrowDrop != nullptr)
	{
		//spawn an arrow
		GetWorld()->SpawnActor<AArrow>(arrowDrop, spawnTransform, SpawnParams);

		//play the arrow shot audio
		if (arrowShotSound != nullptr)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), arrowShotSound, GetActorLocation());
		}
	}
}

void AShooter::ResetDoOnce()
{
	GetWorldTimerManager().ClearTimer(spawnTimer);
	bDoOnce = true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
