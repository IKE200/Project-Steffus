// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ProjectSteffusGameMode.h"
#include "ProjectSteffusPlayerController.h"
#include "ProjectSteffusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectSteffusGameMode::AProjectSteffusGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectSteffusPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}