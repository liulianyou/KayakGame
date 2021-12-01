#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/29
* Purpose:	The base attributes for all ability system components.
*			All the attributes which is used in our game should derived from it
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AttributeSet.h"

#include "KayakAttributeSetBase.generated.h"

/*
* The base attributes set which will be used in our game.
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Ability|AbilitySet")
class KAYAK_API UKayakAttributeSetBase : public UAttributeSet
{
	GENERATED_UCLASS_BODY()

public:

	

};


