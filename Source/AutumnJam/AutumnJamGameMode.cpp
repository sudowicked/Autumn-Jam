// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutumnJamGameMode.h"
#include "AutumnJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutumnJamGameMode::AAutumnJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
