// Copyright Epic Games, Inc. All Rights Reserved.

#include "MPFPSProjectGameMode.h"
#include "MPFPSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMPFPSProjectGameMode::AMPFPSProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
