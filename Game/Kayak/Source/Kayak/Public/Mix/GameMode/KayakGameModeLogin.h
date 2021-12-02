#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/28
* Purpose:	This state is used for login map.
			The login map should be standalone map, and the safe house may use DS.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameModeBase.h"

#include "KayakGameModeLogin.generated.h"

/*
* This game mode is used for login map
*/
UCLASS(Blueprintable, BlueprintType, hidedropdown, Category = "KayakGame|GameMode")
class KAYAK_API AKayakGameModeLogin : public AKayakGameModeBase
{
	GENERATED_UCLASS_BODY()


};