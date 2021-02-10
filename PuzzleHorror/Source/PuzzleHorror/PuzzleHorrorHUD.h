// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PuzzleHorrorHUD.generated.h"

UCLASS()
class APuzzleHorrorHUD : public AHUD
{
	GENERATED_BODY()

public:
	APuzzleHorrorHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

