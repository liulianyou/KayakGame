#pragma once

/*
* Author:	Liulianyou
* Time:		2021/1/6
* Purpose:	This is the item data that contain the default attribute for the run time data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "ItemDataBase.h"

#include "ItemRuntimeData.generated.h"

class UGameplayEffect;
class UGameplayAbility;

/*
* The definition for the effects which is used for item
*/
USTRUCT(BlueprintType)
struct FItemEffectDefiniation
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere )
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

	UPROPERTY(BlueprintReadWrite, EditAnywhere )
	TArray<TSubclassOf<UGameplayAbility>> Abilities;
};

UCLASS(BlueprintType, Blueprintable, Category = "Item|ItemRuntimeData")
class ITEM_API UItemRuntimeData : public UItemDataBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* All effects which will be used in different state
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData")
	TMap<EItemState, FItemEffectDefiniation> EffectMap;

	/*
	* All game play abilities which will be used in different state.
	* These abilities should only be given to the owner avatar of the item
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData")
	TMap<EItemState, FItemAbilityDefiniation> AbilityMap;
};