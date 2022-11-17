// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will continue the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ContinueButton;

	//button that will start a new game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* NewGameButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ButtonFunctions>
	// continue the game
	UFUNCTION()
		void OnContinueClicked();

	// start a new game
	UFUNCTION()
		void OnNewGameClicked();

	//exit the application
	UFUNCTION()
		void OnQuitClicked();
	// </ButtonFunctions>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ULoseScreen>
	virtual void NativeConstruct() override;
	// </ULoseScreen>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
