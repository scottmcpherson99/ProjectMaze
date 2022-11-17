// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Engine/Texture2D.h"
#include "Components/HorizontalBox.h"
#include "HeadsUpDisplay.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API UHeadsUpDisplay : public UUserWidget
{
	GENERATED_BODY()
	
public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <UpdatePlayerStats>
	//update the text displaying the players number of skulls
	void UpdateSkulls();

	//update the text displaying the players lives
	void UpdateHealth();

	// update the message displayed
	void UpdateMessage(FText message_);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

	virtual void Construct();
protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//text to show the number of keys the player has
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* NumberOfKeys;

	// text to let the player know they can interact
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
			class UTextBlock* InteractMessage;

	//text to show the players lives
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UHorizontalBox* HealthBox;

	UPROPERTY(EditAnywhere, Category = "Widget")
		class UTexture2D* heartFullTexture;

	UPROPERTY(EditAnywhere, Category = "Widget")
		class UTexture2D* heartHalfTexture;

	FText message;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	

	class APlayerCharacter* playerCharacter;
};
