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


UCLASS(BlueprintType, Blueprintable, Category = "Item|ItemRuntimeData")
class ITEM_API UItemRuntimeData : public UItemRuntimeDataBase
{
	GENERATED_UCLASS_BODY()



};