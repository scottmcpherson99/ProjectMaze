// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "ProjectMaze/SaveGameObject.h"

UMazeGameInstance::UMazeGameInstance()
{
	if (UGameplayStatics::DoesSaveGameExist(FString("Slot1"), 0))
	{
		//load the save game slot
		saveGameObject = Cast<USaveGameObject>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));

		UGameplayStatics::SaveGameToSlot(saveGameObject, FString("Slot1"), 0);
	}
	else
	{
		CreateNewGame();
	}
}

void UMazeGameInstance::OpenNextLevel()
{
	// open the next level stored in the levelNames array
	for (int i = 0; i < levelNames.Num(); i++)
	{
		if (FName(UGameplayStatics::GetCurrentLevelName(GetWorld(), true)) == levelNames[i])
		{
			//load the save game slot
			saveGameObject = Cast<USaveGameObject>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));
			
			saveGameObject->SetLevelName(levelNames[i + 1]);
			UGameplayStatics::SaveGameToSlot(saveGameObject, FString("Slot1"), 0);

			UGameplayStatics::OpenLevel(GetWorld(), levelNames[i + 1]);
		}
	}
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Save Game
void UMazeGameInstance::CreateNewGame()
{
	//create a new save game slot
	saveGameObject = Cast<USaveGameObject>(UGameplayStatics::CreateSaveGameObject(USaveGameObject::StaticClass()));

	//set the default values
	if (saveGameObject != nullptr)
	{
		saveGameObject->SetLevelName(FName("Maze1"));
	}
	else
	{

		//load the save game slot
		saveGameObject = Cast<USaveGameObject>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));

		saveGameObject->SetLevelName(FName("Maze1"));
	}
	UGameplayStatics::SaveGameToSlot(saveGameObject, FString("Slot1"), 0);
}

void UMazeGameInstance::LoadGame()
{
	//check if the save game slot exists, if it load the last played level
	if (UGameplayStatics::DoesSaveGameExist(FString("Slot1"), 0))
	{
		//load the save game slot
		USaveGameObject* loadGameObj_ = Cast<USaveGameObject>(UGameplayStatics::LoadGameFromSlot(FString("Slot1"), 0));

		//open the level the player was last on
		UGameplayStatics::OpenLevel(GetWorld(), loadGameObj_->GetPlayerLevel());
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////