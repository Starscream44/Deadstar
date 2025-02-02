// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_ProjectGameMode.h"
#include "First_ProjectHUD.h"
#include "First_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_ProjectGameMode::AFirst_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirst_ProjectHUD::StaticClass();
}
