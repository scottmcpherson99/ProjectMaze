// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGameMode.h"
#include "Blueprint/UserWidget.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/PlayerCameraManager.h"
#include "ProjectMaze/LoseScreen.h"
#include "ProjectMaze/WinScreen.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AMazeGameMode::AMazeGameMode()
{

}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Setters and Getters>
UHeadsUpDisplay* AMazeGameMode::GetGameWidget()
{
	return HUDWidget;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Maze Game Mode Interface
void AMazeGameMode::BeginPlay()
{
	//check the heads up display widget has been set, if it has, add it to the viewport
	if (IsValid(HeadsUpDisplayWidget))
	{
		HUDWidget = Cast<UHeadsUpDisplay>(CreateWidget(GetWorld(), HeadsUpDisplayWidget));
		HUDWidget->Construct();
		HUDWidget->AddToViewport();
	}

	// play the background music
	if (backgroundMusic != nullptr)
	{
		UGameplayStatics::PlaySound2D(GetWorld(), backgroundMusic);
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <Events>
void AMazeGameMode::Lose()
{
	// get the player character and disable the input
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		playerCharacter->DisableInput(playerController);
	}

	// fade the camera to red
	APlayerCameraManager* playerCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

	if (playerCameraManager != nullptr)
	{
		HUDWidget->RemoveFromParent();
		playerCameraManager->StartCameraFade(0.f, 0.8f, 2.f, FLinearColor(0.9f, 0.06f, 0.04f, 1.f), false, true);
		GetWorldTimerManager().SetTimer(loseWidgetTimer, this, &AMazeGameMode::DisplayLoseScreen, 2.f, false);
	}
}

void AMazeGameMode::DisplayLoseScreen()
{
	// clear the timer handle
	GetWorldTimerManager().ClearTimer(loseWidgetTimer);

	//check the lose screen widget has been set, if it has, add it to the viewport
	if (IsValid(LoseScreenWidget))
	{
		ULoseScreen* LoseWidget = Cast<ULoseScreen>(CreateWidget(GetWorld(), LoseScreenWidget));
		LoseWidget->AddToViewport();
	}

	//set the input mode to be UI only nad show the mouse cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	playerController->SetShowMouseCursor(true);
}


void AMazeGameMode::Win()
{
	// get the player character and disable the input
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	APlayerCharacter* playerCharacter = Cast<APlayerCharacter>(character_);
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);

	if (playerCharacter != nullptr && playerController != nullptr)
	{
		playerCharacter->DisableInput(playerController);
	}

	// fade the camera to red
	APlayerCameraManager* playerCameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

	if (playerCameraManager != nullptr)
	{
		HUDWidget->RemoveFromParent();
		playerCameraManager->StartCameraFade(0.f, 0.8f, 2.f, FLinearColor(1.f, 1.f, 1.f, 1.f), false, true);
		GetWorldTimerManager().SetTimer(winWidgetTimer, this, &AMazeGameMode::DisplayWinScreen, 2.f, false);
	}
}


void AMazeGameMode::DisplayWinScreen()
{
	// clear the timer handle
	GetWorldTimerManager().ClearTimer(winWidgetTimer);

	//check the win screen widget has been set, if it has, add it to the viewport
	if (IsValid(WinScreenWidget))
	{
		UWinScreen* WinWidget = Cast<UWinScreen>(CreateWidget(GetWorld(), WinScreenWidget));
		WinWidget->AddToViewport();
	}

	//set the input mode to be UI only nad show the mouse cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
	playerController->SetShowMouseCursor(true);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////