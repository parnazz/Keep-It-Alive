// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "KeepItAliveGameMode.h"
#include "KeepItAliveCharacter.h"

AKeepItAliveGameMode::AKeepItAliveGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AKeepItAliveCharacter::StaticClass();	
}
