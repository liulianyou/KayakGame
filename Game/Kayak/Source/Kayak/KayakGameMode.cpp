// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "KayakGameMode.h"
#include "KayakCharacter.h"

AKayakGameMode::AKayakGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AKayakCharacter::StaticClass();	
}
