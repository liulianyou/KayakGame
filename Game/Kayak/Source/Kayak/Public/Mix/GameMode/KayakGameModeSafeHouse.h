#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/28
* Purpose:	This game mode is used for login map.
			The login map should be standalone map, and the safe house may use DS.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameModeMainCityBase.h"

#include "KayakGameModeSafeHouse.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "KayakGame|GameMode")
class KAYAK_API AKayakGameModeSafeHouse : public AKayakGameModeMainCityBase
{
	GENERATED_UCLASS_BODY()

public:

};