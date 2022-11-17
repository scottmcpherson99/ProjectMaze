// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ProjectMaze/HeadsUpDisplay.h"
#include "MazeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API AMazeGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMazeGameMode();
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	UHeadsUpDisplay* GetGameWidget();
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Events>
	// Called when the player has lost the game
	void Lose();

	// Called when the player has won the game
	void Win();
	// </Events>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <AMazeGameMode>
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// </AMazeGameMode>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Widgets>
	//widget class to use for our hud screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> HeadsUpDisplayWidget;

	class UHeadsUpDisplay* HUDWidget;
	
	//widget class to use for our lose screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> LoseScreenWidget;

//	class ULoseScreen* LoseWidget;

	//timer to delay the appearance of the lose screen widget
	FTimerHandle loseWidgetTimer;

	//widget class to use for our lose screen
	UPROPERTY(EditAnywhere, Category = "Widget")
		TSubclassOf<UUserWidget> WinScreenWidget;

	//timer to delay the appearance of the win screen widget
	FTimerHandle winWidgetTimer;

	void DisplayLoseScreen();

	void DisplayWinScreen();
	// </Widgets>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Audio>
	//background music
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
		class USoundBase* backgroundMusic;
	// </Audio>
	///////////////////////////////////////////////////////////////////////////////////////////////////////	
};
