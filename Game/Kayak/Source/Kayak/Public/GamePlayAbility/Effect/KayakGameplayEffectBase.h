#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class for game play effect which is used in our game play ability system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameplayEffect.h"

#include "KayakGamePlayEffectBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability|AbilitySet")
class KAYAK_API UKayakGameplayEffectBase : public UGameplayEffect
{
	GENERATED_UCLASS_BODY()

public:


};