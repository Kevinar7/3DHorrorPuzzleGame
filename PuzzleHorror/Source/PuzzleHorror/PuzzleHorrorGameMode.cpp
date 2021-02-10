// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleHorrorGameMode.h"
#include "PuzzleHorrorHUD.h"
#include "PuzzleHorrorCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleHorrorGameMode::APuzzleHorrorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APuzzleHorrorHUD::StaticClass();
}
