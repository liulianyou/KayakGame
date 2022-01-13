#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	All the operations for the Item should be put in the component.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Templates/SharedPointer.h"
#include "Engine/EngineTypes.h"
#include "ItemDefinition.h"
#include "ItemInterface.h"
#include "ItemContainerInterator.h"

#include "ItemComponent.generated.h"

class UItemDataBase;
class UItemRuntimeDataBase;
class UItemInventoryComponent;
struct FItemRuntimeDataContainer;

//The activation information for this task
USTRUCT(BlueprintType)
struct ITEM_API FRuntimeDataItem : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FRuntimeDataItem();
	FRuntimeDataItem(UItemRuntimeDataBase* RuntimeData, FRuntimeDataItem* _PreElement = nullptr, FRuntimeDataItem* _NextElement = nullptr);
	~FRuntimeDataItem();
public:

	void PreReplicatedRemove(const struct FItemRuntimeDataContainer& InArray);
	void PostReplicatedAdd(const struct FItemRuntimeDataContainer& InArray);
	void PostReplicatedChange(const struct FItemRuntimeDataContainer& InArray);

public:

	explicit operator bool() const { return IsValid(); }
	friend bool operator==(FRuntimeDataItem Left, UItemRuntimeDataBase* RuntimeData)
	{
		return Left.RuntimeData == RuntimeData;
	}
private:

	//Check weather this item is valid
	bool IsValid() const;

public:

	//The runtime data
	UPROPERTY()
	UItemRuntimeDataBase* RuntimeData = nullptr;
	
public:
	
	//Flag to check weather this item will be removed at the next safe frame
	bool PendingRemoved = false;

	//The next element which behind it 
	FRuntimeDataItem* PreElement = nullptr;
	FRuntimeDataItem* NextElement = nullptr;
};

/*
* As this container is used for net work, the order of elements is not fixed.
* We can only use interaction to access the element
*/
USTRUCT(BlueprintType)
struct ITEM_API FItemRuntimeDataContainer : public FFastArraySerializer
{
	GENERATED_BODY()

public:

	FItemRuntimeDataContainer();

	ITERATOR_DEFINITION(FRuntimeDataItem, FItemRuntimeDataContainer);

public:

	void AddNewItem(UItemRuntimeDataBase* RuntimeData);
	void RemoveItem(UItemRuntimeDataBase* RuntimeData);
	int GetIndexOfItem(UItemRuntimeDataBase* RuntimeData);
	UItemRuntimeDataBase* GetRuntimeDataByIndex(int Index);

	/*
	* Get the total number of items include the item which is not valid
	*/
	int GetItemCount() const;

	//Increment the lock count for the target attribute
	void IncrementLock();
	//Decrement the lock count if the lock count come into zero then I can release the resource safely
	void DecrementLock();

	void RegiseterComponentOwner( UItemComponentBase* ComponentOwner );

public:
	
	FORCEINLINE void PreReplicatedRemove(const TArrayView<int32>& RemovedIndices, int32 FinalSize) { }
	FORCEINLINE void PostReplicatedAdd(const TArrayView<int32>& AddedIndices, int32 FinalSize) { }
	FORCEINLINE void PostReplicatedChange(const TArrayView<int32>& ChangedIndices, int32 FinalSize) { }

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FRuntimeDataItem, FItemRuntimeDataContainer>(Items, DeltaParms, *this);
	}

	template<typename Type, typename SerializerType>
	bool ShouldWriteFastArrayItem(const Type& Item, const bool bIsWritingOnClient) const
	{
		return !bIsWritingOnClient || Item.ReplicationID != INDEX_NONE;
	}

public:

	/*
	* As sometime the item owner will do a lot item operation in one frame if I add them to it each time,
	* This will do a lot remove and add operations
	*/

	//The first element which want to be added to this container in this container
	FRuntimeDataItem* HeadPendingElement = nullptr;
	//The last element which want to be added to this container 
	FRuntimeDataItem** EndPendingElementPtr = nullptr;

private:
	
	//All items that need to be replicated to clients
	UPROPERTY()
	TArray<FRuntimeDataItem> Items;

private:
	
	//The owner of this container
	UItemComponentBase* ItemOwner = nullptr;

	/*
	* Simulate the safe point to release all resource safely
	*/
	mutable int LockCount;
};

template<>
struct TStructOpsTypeTraits< FItemRuntimeDataContainer > : public TStructOpsTypeTraitsBase2< FItemRuntimeDataContainer >
{
	enum
	{
		WithNetDeltaSerializer = true,
	};
};

/*
* The component which is used for item.
* 
* The component is used to expand the behavior the item runtime data.
* So the component must have the basic function:
*	ActiveItem		==> ItemRuntimeData::Active
*	DeactiveItem	==> ItemRuntimeData::Deactive
*	StartUse		==> ItemRuntimeData::StartUse
*	StopUse			==>	ItemRuntimeData::StopUse
*	Abandon			==>	ItemRuntimeData::Abandon
*	Gain			==>	ItemRuntimeData::Gain
* The component can determine weather to use the intrinsic behavior or not.
* 
* One item component may have several item data and runtime ItemData.
* such as French baguette we can eat it but also we can use it one weapon.
* 
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Item|Component")
class ITEM_API UItemComponentBase : public UActorComponent
{
	GENERATED_UCLASS_BODY()

	friend UItemDataBase;

public:
	
	//Override Object
	virtual void BeginDestroy() override;
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel *Channel, class FOutBunch *Bunch, FReplicationFlags *RepFlags) override;
	virtual void PreNetReceive() override;
	virtual void PostNetReceive() override;

	//Override Object

	//Override ActorComponent
	virtual void OnRegister() final;
	virtual void OnUnregister() final;
	//Override ActorComponent

public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnInitialize(UObject* NewItemOnwer);
	
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Initialzie( UObject* NewItemOnwer );

	//Initialize this component by the item owner
	virtual void Initialzie( TScriptInterface<IItemInterface> NewItemOwner );

	/*
	* Find the index for the target runtime data in this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	int FindRuntimeDataIndex(UItemRuntimeDataBase* RuntimeData);

	/*
	* Active the item so that the outer can use this item 
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void ActivateItem(int Index);

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void DeactivateItem(int Index);

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StartUse(int Index);

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StopUse(int Index);

	/*
	* Abandon this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Defines how to gain this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo);

	/*
	* Try to check weather this item is owned by the world.
	* If this item is owned by the world means every one can get it. it can be used by every one.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	bool IsWorldOwned() const;

public:

	/*
	* Get the owner of the Item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	TScriptInterface<IItemInterface> GetItemOwner() const;

	/*
	* Get the avatar who own this item component, as one item should only have one item component, the avatar also own this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UItemInventoryComponent* GetAvatarOwner() const { return OwnerAvatar; }

	/*
	* Set new avatar owner for this item component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void SetAvatarOwner(UItemInventoryComponent* NewAvatar);

	/*
	* Add new data to this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	void AddNewItemData(UItemDataBase* NewData);

	/*
	* Remove item data to this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	void RemoveItemData(UItemDataBase* ItemData);

	//Get the container of the runtime data
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	const FItemRuntimeDataContainer& GetItemRuntimeDataContainer() const { return RuntimeDataContainer; }

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnRegisterComponent();

	//Register this component
	virtual void RegisterComponent();

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnUnregisterComponent();

	//Unregister this component
	virtual void UnregisterComponent();

private:

	void AddNewRuntimeData(UItemRuntimeDataBase* NewRuntimeData);

	/*
	* Remove the runtime data from this component
	*
	* @param RuntimeData the item runtime data that will be removed
	*/
	void RemoveItemRuntimeData(UItemRuntimeDataBase* RuntimeData);

public:
	
	//Callback when the avatar have been changed 
	UFUNCTION()
	void OnRep_OwnerAvatar(UItemInventoryComponent* OldAvatar);

public:

	/*
	* The data which will be used in this item to initialize the runtime data
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData")
	TArray<TSubclassOf<UItemDataBase>> DefaultItemDataClass;

public:
	
	//Invoked when the item data have been changed
	UPROPERTY(BlueprintAssignable)
	FItemDataChanged ItemDataChangedDelegate;

	//Broadcast when the avatar owner has been changed
	UPROPERTY(BlueprintAssignable)
	FAvatarOwnerChanged AvatarOwnerChanged;

private:

	/*
	* The runtime data which is used for this item
	*/
	UPROPERTY(Transient, Replicated)
	FItemRuntimeDataContainer RuntimeDataContainer;
	
	/*
	* Which avatar own this component, this value can be null, such as the player abandon this item on the ground.
	* Mostly this value is different from the ItemOwner.
	* If this item is spawned at the world then the owner avatar is null
	*/
	UPROPERTY(ReplicatedUsing = OnRep_OwnerAvatar)
	UItemInventoryComponent* OwnerAvatar = nullptr;

	/*
	* As this component maybe treated as one item operation set in other object,
	* The default owner of actor component is one Actor, 
	* some times this component maybe used in one UObject just as one data container and operations definitions,
	* so I need to get the actual who own this component.
	* The component owner should be inherited from IItemInterface
	*/
	UPROPERTY()
	mutable TScriptInterface<IItemInterface> ComponentOwner;

private:


};
	
#define  ItemComponentFramework()\
	virtual void ActivateItem(int Index) override;\
	virtual void DeactivateItem(int Index) override; \
	virtual void StartUse(int Index) override; \
	virtual void StopUse(int Index) override; \
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo) override; \
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo) override;

/*
* Just make implement the item frame work more easy, Ctrl + C, Ctrl + V, and change the NEWItemClass to the target component class
*/
#if 0
void NEWItemClass::ActivateItem()
{
	Super::ActivateItem();
}

void NEWItemClass::DeactivateItem()
{
	Super::DeactivateItem();
}

void NEWItemClass::StartUse()
{
	Super::StartUse();
}

void NEWItemClass::StopUse()
{
	Super::StopUse();
}

void NEWItemClass::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void NEWItemClass::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
}
#endif
