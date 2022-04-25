// Copyright Epic Games, Inc. All Rights Reserved.

#include "TC2005B_UEGameMode.h"
#include "TC2005B_UECharacter.h"
#include "UObject/ConstructorHelpers.h"

ATC2005B_UEGameMode::ATC2005B_UEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
