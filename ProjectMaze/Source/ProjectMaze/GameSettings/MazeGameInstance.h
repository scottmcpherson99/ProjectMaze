// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MazeGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API UMazeGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMazeGameInstance();

	void OpenNextLevel();

	TArray<FName> levelNames = {FName("Maze1"), FName("Maze2"), FName("MainMenu")};

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SaveGame>
	//save game slot
	class USaveGameObject* saveGameObject;

	//create a new game state
	void CreateNewGame();

	// load the previously saved game
	void LoadGame();
	// </SaveGame>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
