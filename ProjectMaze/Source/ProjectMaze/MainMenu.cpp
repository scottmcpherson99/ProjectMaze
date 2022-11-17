// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectMaze/GameSettings/MazeGameInstance.h"
#include "ProjectMaze/SaveGameObject.h"



///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void UMainMenu::OnContinueClicked()
{
	//set the input mode to be game and hide the cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	playerController->SetShowMouseCursor(false);

	//open the currently saved level
	UMazeGameInstance* gameInstance = Cast<UMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (gameInstance != nullptr)
	{
		gameInstance->LoadGame();
	}
}

void UMainMenu::OnNewGameClicked()
{
	//set the input mode to be game and hide the cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	playerController->SetShowMouseCursor(false);

	// set the game level to the 1st level
	UMazeGameInstance* gameInstance = Cast<UMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (gameInstance != nullptr)
	{
		 gameInstance->saveGameObject->SetLevelName(FName("Maze1"));
	}

	//re open the current level
	UGameplayStatics::OpenLevel(GetWorld(), FName("Maze1"));
}

void UMainMenu::OnQuitClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UMainMenu>
void UMainMenu::NativeConstruct()
{
	//if the continue button has been clicked
	if (ContinueButton)
	{
		ContinueButton->OnClicked.AddDynamic(this, &UMainMenu::OnContinueClicked);
	}

	//if the new game button has been clicked
	if (NewGameButton)
	{
		NewGameButton->OnClicked.AddDynamic(this, &UMainMenu::OnNewGameClicked);
	}


	//if the quit button has been clicked
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &UMainMenu::OnQuitClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
