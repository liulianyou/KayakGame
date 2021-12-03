#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This is the player state which only be used at the safe house.
*			The main city is a dedicated server, so this state will use full aspects of player state
*			The safe house is different from login map as the login map is just a stand along map
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakPlayerStateMainCityBase.h"

#include "KayakPlayerStateSafeHouse.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Player|PlayerState|MainCity")
class KAYAK_API AKayakPlayerStateSafeHouse : public AKayakPlayerStateMainCityBase
{
	GENERATED_UCLASS_BODY()

public:



};