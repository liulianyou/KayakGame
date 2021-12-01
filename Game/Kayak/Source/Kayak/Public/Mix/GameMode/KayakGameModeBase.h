#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/28
* Purpose:	This the base class to hold the game mode of our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/GameMode.h"

#include "KayakGameModeBase.generated.h"

UCLASS(Blueprintable, BlueprintType, HideDropdown, Abstract, Category = "KayakGame|GameMode")
class KAYAK_API AKayakGameModeBase : public AGameMode
{
	GENERATED_UCLASS_BODY()

public:
	

};