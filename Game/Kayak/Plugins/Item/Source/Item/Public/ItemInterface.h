#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	This is the interface which is used for the representations of the Item.
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "ItemDefinition.h"
#include "ItemInterface.generated.h"

class UItemComponentBase;
class UItemDataBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * The actual item which is used in game.
 * All object which inherited from the this interface should be treated as new item
 */
class ITEM_API IItemInterface
{
	GENERATED_BODY()

public:
	
	/*
	* Get the data which this item will be used
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item", meta = (DisplayName="GetItemData"))
	void OnGetItemComponent( TArray<UItemComponentBase*>& OuterComponents ) const;
	virtual void GetItemComponent(TArray<UItemComponentBase*>& OuterComponents ) const PURE_VIRTUAL(&IItemInterface::OnGetItemComponent, OuterComponents.Empty(); return OnGetItemComponent(OuterComponents);)

	/*
	* Initialize this item from the external item data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item")
	void OnInitialize(UItemDataBase* NewData);
	virtual void Initialize( UItemDataBase* NewData );
};



#define  ItemInterfaceFramework()\
	virtual void GetItemComponent(TArray<UItemComponentBase*>& OuterComponents) const override;\
	virtual void Initialize( UItemDataBase* NewData ) override;\
	

/*
* Just make implement the item frame work more easy, Ctrl + C, Ctrl + V, and change the NEWItemClass to the target object class
*/
#if 0
void NEWItemClass::GetItemComponent(TArray<UItemComponentBase*>& OuterComponents) const
{
	IItemInterface::GetItemComponent(OuterComponents);
}

void NEWItemClass::Initialize(UItemDataBase* NewData)
{
	IItemInterface::Initialize(NewData);
}
#endif