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
#include "Engine/NetSerialization.h"

#include "ItemContainerIterator.h"
#include "ItemInterface.h"

#include "ItemInventroyComponent.generated.h"

class AController;
class UItemRuntimeData;

//The activation information for this task
USTRUCT(BlueprintType)
struct ITEM_API FItemInfo : public FFastArraySerializerItem
{
	GENERATED_BODY()

public:

	explicit operator bool() const { return IsValid(); }
	friend bool operator==(const FItemInfo& LeftInfo, const FItemInfo& RightInfo)
	{
		return LeftInfo.Item == RightInfo.Item;
	}
	friend bool operator!=(const FItemInfo& LeftInfo, const FItemInfo& RightInfo)
	{
		return !(LeftInfo == RightInfo);
	}

private:
	
	bool IsValid() const;

public:
	
	//The item which contain item component
	UPROPERTY()
	TScriptInterface<IItemInterface> Item;

	/*
	* The index of this item in the target container
	* As the order of element in the container is not fix due to the net replication
	* I need to get the fixed order between server and client
	*/
	UPROPERTY()
	int Index;

public:

	//Flag to check weather this item will be removed at the next safe frame
	bool PendingRemoved = false;

	//Double direction list
	FItemInfo* PreElement = nullptr;
	FItemInfo* NextElement = nullptr;
};

/*
* As this container is used for net work, the order of elements is not fixed.
* We can only use interaction to access the element
*/
USTRUCT(BlueprintType)
struct ITEM_API FItemContainer : public FFastArraySerializer
{
	GENERATED_BODY()

	ITERATOR_DEFINITION(FItemInfo, FItemContainer);

public:

	int AddNewItem(TScriptInterface<IItemInterface>);
	int RemoveItem(TScriptInterface<IItemInterface>);
	int GetItemNum();

public:

	//Increment the lock count for the target attribute
	void IncrementLock();
	//Decrement the lock count if the lock count come into zero then I can release the resource safely
	void DecrementLock();

	//Used to serialize this container for net replication
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FItemInfo, FItemContainer>(Items, DeltaParms, *this);
	}

private:
	
	UPROPERTY()
	TArray<FItemInfo> Items;

public:

	//The first element which want to be added to this container in this container
	FItemInfo* HeadPendingElement = nullptr;
	//The last element which want to be added to this container 
	FItemInfo** EndPendingElementPtr = nullptr;

private:
	/*
	* Simulate the safe point to release all resource safely
	*/
	mutable int LockCount;

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
* Used to filter the items in this inventory.
* The query propriety is (ItemClass > ItemDataClass > RuntimeDataClass > RuntimeDataInstance > ItemIndex.
*/
USTRUCT(BlueprintType)
struct ITEM_API FItemQueryFilter
{
	GENERATED_BODY()

public:
	
	//Get all items in the inventory component
	void GetItems( const UItemInventoryComponent* const InventoryComponent, TArray<TScriptInterface<IItemInterface>>& Items) const;

private:
	
	/*
	* Generate the information of this query
	*/
	uint32 GenerateQueryInfo( bool IsMatchedItemClass, bool IsItemClassMatched, bool IsIndexMatched, bool IsRuntimeDataMatched, bool IsRuntimeDataClassMathced ) const;

protected:

	bool IsMatchedForItemClass( const FItemContainer::ConstIterator& IT) const;
	bool IsMatchedForItemDataClass(const FItemContainer::ConstIterator& IT) const;
	bool IsMatchedForItemRuntimeDataClass(const FItemContainer::ConstIterator& IT) const;
	bool IsMatchedForIndex(const FItemContainer::ConstIterator& IT) const;
	bool IsMatchedForRuntimeDataInstance(const FItemContainer::ConstIterator& IT) const;

public:

	/*
	* The index of item in the inventory
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemQueryFilter")
	int ItemIndex = INDEX_NONE;

	//The class of the actual item in the inventory
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemQueryFilter")
	TSubclassOf<UObject> ItemClass;

	/*
	* The type of items which is need to be search
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = "ItemQueryFilter")
	TSubclassOf<UItemDataBase> ItemDataClass = nullptr;

	/*
	* The items which contain the target runtime data class
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = "ItemQueryFilter")
	TSubclassOf<UItemRuntimeDataBase> ItemRuntimeDataClass = nullptr;

	/*
	* The items which contain the specific runtime data
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = "ItemQueryFilter")
	UItemRuntimeDataBase* ItemRuntimeDataInstance = nullptr;

private:

	enum EQueryFlag : uint32
	{
		EItemIndex					= 1 << 0,
		EItemClass					= 1 << 1,
		EItemDataClass				= 1 << 2,
		EItemRuntimeDataClass		= 1 << 3,
		EItemRuntimeDataInstance	= 1 << 4,
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

	friend struct FItemQueryFilter;

public:

	//Override UObject
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags) override;
	//Override UObject

	//Override ActorComponent
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	//Override ActorComponent

public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemInventory")
	void OnInitialize();
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	void Initialize();

public:

	/*
	* Set the direct owner of this inventory component
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemInventory")
	void OnSetItemOwner(UObject* NewOwner);
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	void SetItemOwner( UObject* NewOwner );

	/*
	* Get the owner of the inventory.
	* As the default UActorComponent::GetOwner will get one actor.
	* sometimes the other want to just use this inventory to store items and access the items system.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	UObject* GetInventoryOwner() const {return InventoryOwner;}

	/*
	* Get the controller who own this inventory\
	* 
	* #return	nullptr means this inventory is public in the world, just like one actor spawned in the world without owner.
	*			At this point this inventory only can use net_muticat RPC, if you want to use Server/Client, you should transfer to ItemNetWorkSupportComponent in the target controller
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	AController* GetAvatarOwner() const;

	/*
	* Get all items in this inventory according to the query rule
	* 
	* @param ItemQueryFilter Define how to filter the items in this inventory
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemInventory")
	void GetItems( TArray<TScriptInterface<IItemInterface>>& Items, const FItemQueryFilter& ItemQueryFilter ) const;

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

public:
	
	UFUNCTION()
	virtual void OnRep_InventoryOwner(UObject* OldOwner);

private:
	
	/*
	* Hold all items in this inventory
	*/
	UPROPERTY(Replicated)
	FItemContainer ItemContainer;

	/*
	* Cashed point to the owner.
	* 
	* This owner may not be one actor as someone want to just use this class to access the item system.
	*/
	UPROPERTY(ReplicatedUsing = OnRep_InventoryOwner)
	mutable UObject* InventoryOwner;


};