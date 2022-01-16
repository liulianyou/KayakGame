#pragma once

/*
* Author:	Liulianyou
* Time:		2021/1/16
* Purpose:	When one object want to use the item system and it want to hold some items in it it should inherited from this interface
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Interface.h"

#include "ItemInventoryInterface.generated.h"


class UItemInventoryComponent;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/*
* If one object want to store items it should inherit from this interface
*/
class ITEM_API IItemInventoryInterface
{
	GENERATED_BODY()

public:

	/*
	* Get the inventory component in the inherited object
	* One object should only have one component to hold all the inventory
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item", meta = (DisplayName = "GetItemData"))
	UItemInventoryComponent* OnGetItemInventoryComponent() const;
	virtual UItemInventoryComponent* GetItemInventoryComponent() const;



};