#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/29
* Purpose:	This base class used to set all attributes for the ability system components used for AI.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAttributeSetBase.h"

#include "KayakAICharacterAttributeSetBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Ability|AttributeSet")
class KAYAK_API UKayakAICharacterAttributeSetBase : public UKayakCharacterAttributeSetBase
{
	GENERATED_UCLASS_BODY()

public:
	


};