// Copyright Epic Games, Inc. All Rights Reserved.

#include "OpenClassGameMode.h"
#include "OpenClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOpenClassGameMode::AOpenClassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
