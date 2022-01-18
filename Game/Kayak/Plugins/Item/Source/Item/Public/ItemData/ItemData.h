#pragma once

/*
* Author:	Liulianyou
* Time:		2021/1/6
* Purpose:	This is the item data that contain the default attribute for the item data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "ItemDataBase.h"

#include "ItemData.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UAttributeSet;

/*
* The definition for the effects which is used for item
*/
USTRUCT(BlueprintType)
struct FItemEffectDefiniation
{
	GENERATED_BODY()

public:

	/*
	* Which state this data will be used
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemState ItemState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UGameplayEffect>> Effects;
};

/*
* The definition for the abilities which is used for item
*/
USTRUCT(BlueprintType)
struct FItemAbilityDefiniation
{
	GENERATED_BODY()

public:

	/*
	* Which state this data will be used
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemState ItemState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UGameplayAbility>> Abilities;
};

USTRUCT(BlueprintType)
struct FItemAttributeSetDefinition
{
	GENERATED_BODY()

public:
	/*
	* Which state this data will be used
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemState ItemState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UAttributeSet>> Abilities;
};


UCLASS(BlueprintType, Blueprintable, Category = "Item|ItemData")
class ITEM_API UItemData : public UItemDataBase
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* All effects which will be used in differ 
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ItemData")
	TArray<FItemEffectDefiniation> EffectMap;

	/*
	* All game play abilities which will be used in different state.
	* These abilities should only be given to the owner avatar of the item
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ItemData")
	TArray<FItemAbilityDefiniation> AbilityMap;

	/*
	* The attributes which will be added to the avatar owner when it is used
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "ItemData")
	TArray<FItemAttributeSetDefinition> AttributeSetMap;

};