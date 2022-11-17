// Fill out your copyright notice in the Description page of Project Settings.


#include "WinScreen.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectMaze/GameSettings/MazeGameInstance.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void UWinScreen::OnNextClicked()
{
	//set the input mode to be UI only nad show the mouse cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	playerController->SetShowMouseCursor(false);

	UMazeGameInstance* gameInstance = Cast<UMazeGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	if (gameInstance != nullptr)
	{
		gameInstance->OpenNextLevel();
	}
}

void UWinScreen::OnReturnClicked()
{
	// open the main menu
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <UWinScreen>
void UWinScreen::NativeConstruct()
{
	//if the next button has been clicked
	if (NextButton)
	{
		NextButton->OnClicked.AddDynamic(this, &UWinScreen::OnNextClicked);
	}


	//if the options button has been clicked
	if (ReturnButton)
	{
		ReturnButton->OnClicked.AddDynamic(this, &UWinScreen::OnReturnClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
