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

class UDataAppliedRuleBase;

UCLASS(BlueprintType, Blueprintable, Category = "Item|ItemData")
class ITEM_API UItemData : public UItemDataBase
{
	GENERATED_UCLASS_BODY()

public:
	

};