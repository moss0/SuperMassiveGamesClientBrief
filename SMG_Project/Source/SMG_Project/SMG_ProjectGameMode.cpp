// Copyright Epic Games, Inc. All Rights Reserved.

#include "SMG_ProjectGameMode.h"
#include "SMG_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASMG_ProjectGameMode::ASMG_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
