#pragma  once
/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class which is used to store the attributes which is only used for the player.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAttributeSetBase.h"

#include "KayakPlayerAttributeSetBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability|AbilitySet")
class KAYAK_API UKayakPlayerAttributeSetBase : public UKayakCharacterAttributeSetBase
{
	GENERATED_UCLASS_BODY()

public:

};
