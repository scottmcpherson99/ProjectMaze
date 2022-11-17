// Fill out your copyright notice in the Description page of Project Settings.


#include "LoseScreen.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ButtonFunctions>
void ULoseScreen::OnRetryClicked()
{
	//set the input mode to be UI only nad show the mouse cursor
	APlayerController* playerController = UGameplayStatics::GetPlayerController(this, 0);
	playerController->SetInputMode(FInputModeGameOnly::FInputModeGameOnly());
	playerController->SetShowMouseCursor(false);

	//re open the current level
	UGameplayStatics::OpenLevel(GetWorld(), FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)));
}

void ULoseScreen::OnQuitClicked()
{
	//exit the application
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <ULoseScreen>
void ULoseScreen::NativeConstruct()
{
	//if the retry button has been clicked
	if (RetryButton)
	{
		RetryButton->OnClicked.AddDynamic(this, &ULoseScreen::OnRetryClicked);
	}


	//if the options button has been clicked
	if (QuitButton)
	{
		QuitButton->OnClicked.AddDynamic(this, &ULoseScreen::OnQuitClicked);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
