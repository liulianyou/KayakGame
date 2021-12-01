#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/29
* Purpose:	The base attributes for all items which contain ability system components.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakAttributeSetBase.h"

#include "KayakItemAttributeSetBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Ability|AbilitySet")
class KAYAK_API UKayakItemAttributeSetBase : public UKayakAttributeSetBase
{
	GENERATED_UCLASS_BODY()

public:

	

};
