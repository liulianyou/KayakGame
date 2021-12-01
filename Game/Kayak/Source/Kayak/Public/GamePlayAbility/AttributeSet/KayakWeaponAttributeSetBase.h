/*
* Author:	Liulianyou
* Time:		2021/11/29
* Purpose:	This is used to set all attributes which is used for weapon.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakItemAttributeSetBase.h"

#include "KayakWeaponAttributeSetBase.generated.h"

/*
* Used to store all attributes in the weapon which can be mortified by outer module through game play effect
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|AI|Ability|AbilitySet")
class KAYAK_API UKayakWeaponAttributeSetBase : public UKayakItemAttributeSetBase
{
	GENERATED_UCLASS_BODY()

public:
	

};