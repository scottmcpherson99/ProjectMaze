// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectMaze/MainMenu.h"
#include "Blueprint/UserWidget.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AMainMenuGameMode::AMainMenuGameMode()
{
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Maze Game Mode Interface
void AMainMenuGameMode::BeginPlay()
{
	// set the input to UI only
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	
	playerController->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	playerController->SetShowMouseCursor(true);

	//check the heads up display widget has been set, if it has, add it to the viewport
	if (IsValid(MainMenuWidget))
	{
		UMainMenu* HUDWidget = Cast<UMainMenu>(CreateWidget(GetWorld(), MainMenuWidget));
		HUDWidget->AddToViewport();
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
