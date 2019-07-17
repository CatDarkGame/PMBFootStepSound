// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PMBFootStepSoundGameMode.h"
#include "PMBFootStepSoundCharacter.h"
#include "UObject/ConstructorHelpers.h"

APMBFootStepSoundGameMode::APMBFootStepSoundGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
