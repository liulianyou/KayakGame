#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class of game state which map can be used to login a lot players
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakGameStateBase.h"

#include "KayakGameStateMainCityBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability|AbilitySet")
class KAYAK_API AKayakGameStateMainCityBase : public AKayakGameStateBase
{
	GENERATED_UCLASS_BODY()

public:


};