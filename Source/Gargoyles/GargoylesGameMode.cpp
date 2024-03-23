// Copyright Epic Games, Inc. All Rights Reserved.

#include "GargoylesGameMode.h"
#include "GargoylesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGargoylesGameMode::AGargoylesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
