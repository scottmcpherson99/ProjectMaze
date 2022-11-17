// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadsUpDisplay.h"
#include "ProjectMaze/PlayerCharacter/PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

void UHeadsUpDisplay::Construct()
{
	ACharacter* character_ = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	playerCharacter = Cast<APlayerCharacter>(character_);

	UpdateSkulls();
	UpdateHealth();

	message = FText::FromString("");
	UpdateMessage(message);
}

void UHeadsUpDisplay::UpdateSkulls()
{
	NumberOfKeys->SetText(FText::AsNumber(playerCharacter->GetKeys()));
}

void UHeadsUpDisplay::UpdateHealth()
{

	for (int i = 0; i < HealthBox->GetAllChildren().Num(); i++)
	{
		UImage* image_ = Cast<UImage>(HealthBox->GetChildAt(i));

		if (image_ != nullptr)
		{
			if (i < playerCharacter->GetHealth())
			{
				image_->SetBrushFromTexture(heartFullTexture, false);
			}
			else
			{
				image_->SetBrushFromTexture(heartHalfTexture, false);
			}
		}
	}
}

void UHeadsUpDisplay::UpdateMessage(FText message_)
{
	message = message_;
	InteractMessage->SetText(message);
}