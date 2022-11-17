// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameObject.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTMAZE_API USaveGameObject : public USaveGame
{
	GENERATED_BODY()
	
public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <GettersandSetters>
	// Output the level the player reached
	const FName GetPlayerLevel() const;

	// Update the level the player reached
	void SetLevelName(FName levelName_);
	// <//GettersandSetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////

protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Attributes>
	// the level name the player reached
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		FName levelName;
	// <//Attributes>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
