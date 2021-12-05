#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class of ability system component which will be used for all items
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAbilitySystemComponentBase.h"

#include "KayakPlayerAbilitySystemComponent.generated.h"


UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Ability")
class KAYAK_API UKayakPlayerAbilitySystemComponent : public UKayakCharacterAbilitySystemComponentBase
{
	GENERATED_UCLASS_BODY()

public:


};