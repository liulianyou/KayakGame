#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class of ability system component which will be used for all items
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakAbilitySystemComponentBase.h"

#include "KayakItemAbilitySystemComponentBase.generated.h"


UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability")
class KAYAK_API UKayakItemAbilitySystemComponentBase : public UKayakAbilitySystemComponentBase
{
	GENERATED_UCLASS_BODY()

public:


};