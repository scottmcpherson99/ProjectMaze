// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WinScreen.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API UWinScreen : public UUserWidget
{
	GENERATED_BODY()

protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will restart the level
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* NextButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* ReturnButton;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ButtonFunctions>
	//continue to the next level
	UFUNCTION()
		void OnNextClicked();

	//Return to the main menu
	UFUNCTION()
		void OnReturnClicked();
	// </ButtonFunctions>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UWinScreen>
	virtual void NativeConstruct() override;
	// </UWinScreen>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
