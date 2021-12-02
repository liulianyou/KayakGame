#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/29
* Purpose:	This base class used to store the base attribute set for character
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakAttributeSetBase.h"

#include "KayakCharacterAttributeSetBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability|AbilitySet")
class KAYAK_API UKayakCharacterAttributeSetBase : public UKayakAttributeSetBase
{
	GENERATED_UCLASS_BODY()

public:



};