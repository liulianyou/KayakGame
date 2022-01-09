#pragma once

/*
* Author:	Liulianyou
* Time:		2021/1/9
* Purpose:	This component will hold all items belong to the avatar.
*			One avatar should only have one inventory component
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptInterface.h"
#include "Components/ActorComponent.h"


#include "ItemInterface.h"

#include "ItemInventroyComponent.generated.h"

class UItemRuntimeData;

/*
* As this container is used for net work, the order of elements is not fixed.
* We can only use interaction to access the element
*/
USTRUCT()
struct ITEM_API FItemContainer : public FFastArraySerializer
{
	GENERATED_BODY()

public:

	int AddNewItem(TScriptInterface<IItemInterface>);
	int RemoveItem(TScriptInterface<IItemInterface>);
	int GetItemNum() { return Items.Num(); }


private:
	
	UPROPERTY()
	TArray<TScriptInterface<IItemInterface>> Items;


public:

	TScriptInterface<IItemInterface>& operator[](int index);

	FORCEINLINE ConstIterator CreateConstIterator() const { return ConstIterator(*this); }
	FORCEINLINE Iterator CreateIterator() { return Iterator(*this); }

	/*
	* Make the outer can use for(auto IT : FItemContainer)
	*/
	FORCEINLINE friend Iterator begin(FItemContainer* Container) { return Items->CreateIterator(); }
	FORCEINLINE friend Iterator end(FItemContainer* Container) { return Iterator(*Items, -1); }

	FORCEINLINE friend ConstIterator begin(const FItemContainer* Container) { return Items->CreateConstIterator(); }
	FORCEINLINE friend ConstIterator end(const FItemContainer* Container) { return ConstIterator(*Items, -1); }
};

template<>
struct TStructOpsTypeTraits< FItemContainer > : public TStructOpsTypeTraitsBase2< FItemContainer >
{
	enum
	{
		WithNetDeltaSerializer = true,
		WithCopy = false,
	};
};

/*
* One avatar may have several inventories.
* and one item should belong to one inventory
*/
UCLASS(Blueprintable, BlueprintType, Category = "ItemInventory")
class ITEM_API UItemInventoryComponent : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	//Override UObject

	//Override ActorComponent
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	//Override ActorComponent

public:

	//Get all items this inventory hold
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	void GetAllItems( TArray<TScriptInterface<IItemInterface>>& Items ) const;

	//Get all the items which use the specific runtime data
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	void GetAllItemsWithClass(TSubclassOf<UItemRuntimeData> ItemType, TArray<TScriptInterface<IItemInterface>>& Items) const;

	/*
	* Add new item to this inventory
	* 
	* #return the index for the new item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	int AddNewItem(TScriptInterface<IItemInterface> NewItem);

	/*
	* Add new specific type of item to this inventory
	* 
	* #return the index for the new item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	int AddNewItemWithItemClass(TSubclassOf<UObject> ItemType);

	/*
	* Remove the target item
	* 
	* @param DestroyItem	true means the target item will be destroyed
	* 
	* #return the remain counts of items
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	int RemoveItem(TScriptInterface<IItemInterface> RemovedItem, bool DestroyItem = false);

	/*
	* Remove all items which have the specific runtime data
	* 
	* @param ItemType			if this value is null means it will remove all items with target item type
	* @param CheckExactClass	false means it will remove the items with class derived from the item type
	* @param DestroyItem	true means the target item will be destroyed
	* 
	* #return the remain counts of items
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	int RemoveItemWithDataClass(TSubclassOf<UItemRuntimeData> ItemType, bool CheckExactClass = false, bool DestroyItem = false);

	/*
	* Remove all items with the specific type
	* 
	* @param ItemType			if this value is null means it will remove all items with target item type
	* @param CheckExactClass	false means it will remove the items with class derived from the item type
	* @param DestroyItem	true means the target item will be destroyed
	* 
	* #return the remain counts of items
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	int RemoveItemWithItemClass(TSubclassOf<UObject> ItemType, bool CheckExactClass = false, bool DestroyItem = false);

private
	
	/*
	* Hold all items in this inventory
	*/
	UPROPERTY(BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	FItemContainer ItemContainer;

};