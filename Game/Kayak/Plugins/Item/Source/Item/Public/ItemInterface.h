#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	This is the interface which is used for the representations of the Item.
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "Engine/EngineTypes.h"
#include "Engine/ActorChannel.h"
#include "ItemDefinition.h"
#include "ItemInterface.generated.h"

class UItemComponentBase;
class UItemInventoryComponent;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * The actual item which is used in game.
 * All object which inherited from the this interface should be treated as new item
 * This interface should be used for object which want to be item.
 */
class ITEM_API IItemInterface
{
	GENERATED_BODY()

public:
	
	/*
	* Get the item component which will make the inherited object to be one Item.
	* One Item should only have one component to hand the specific item feature
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item", meta = (DisplayName="GetItemData"))
	UItemComponentBase* OnGetItemComponent() const;
	virtual UItemComponentBase* GetItemComponent() const;

	/*
	* Initialize this item from the inventory
	* 
	* @param InventoryOwner null means this item is created in the world
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item")
	void OnInitialize(UItemInventoryComponent* InventoryOwner);
	virtual void Initialize(UItemInventoryComponent* InventoryOwner);

	/*
	*	Set new owner for this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item")
	void OnSetItemOwner(UItemInventoryComponent* NewOwner);
	virtual void SetItemOwner(UItemInventoryComponent* NewOwner);

	/*
	* Flag to check weather this item has authority.
	* Only the authority item can create runtime data through item data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item")
	bool OnHasAuthority() const;
	virtual bool HasAuthority() const;

	/*
	* As some item is just one object and I want to use make the object can use the property replicate
	*/
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) { return false; }
};



#define  ItemInterfaceFramework()\
	virtual UItemComponentBase* GetItemComponent() const override;\
	

/*
* Just make implement the item frame work more easy, Ctrl + C, Ctrl + V, and change the NEWItemClass to the target object class
*/
#if 0
UItemComponentBase* NEWItemClass::GetItemComponent() const
{
	return IItemInterface::GetItemComponent();
}
#endif
