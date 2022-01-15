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
#include "ItemContainerIterator.h"

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
* The filter to query the runtime data in the target component
*/
USTRUCT(BlueprintType)
struct ITEM_API FItemRuntimeDataQueryFilter
{
	GENERATED_BODY()

public:

	FItemRuntimeDataQueryFilter(){};
	FItemRuntimeDataQueryFilter(int ItemIndex):Index(ItemIndex){};
	FItemRuntimeDataQueryFilter(const TSubclassOf<UItemRuntimeDataBase>& RuntimeDataClass):ItemRuntimeDataClass(RuntimeDataClass){};
	FItemRuntimeDataQueryFilter(const UItemRuntimeDataBase* RuntimeDataInstance):ItemRuntimeDataInstance(RuntimeDataInstance){};
	FItemRuntimeDataQueryFilter(const TSubclassOf<UItemDataBase>& _ItemDataClass) :ItemDataClass(_ItemDataClass) {};

	FItemRuntimeDataQueryFilter(FItemRuntimeDataQueryFilter&& OtherValue)
	{
		Index = MoveTemp(OtherValue.Index);
		ItemRuntimeDataClass = MoveTemp(OtherValue.ItemRuntimeDataClass);
		ItemRuntimeDataInstance = MoveTemp(OtherValue.ItemRuntimeDataInstance);
		ItemDataClass = MoveTemp(OtherValue.ItemDataClass);
	}

	FItemRuntimeDataQueryFilter(const FItemRuntimeDataQueryFilter& OtherValue)
	{
		*this = OtherValue;
	}

	void operator=(const FItemRuntimeDataQueryFilter& OtherValue)
	{
		Index = OtherValue.Index;
		ItemRuntimeDataClass = OtherValue.ItemRuntimeDataClass;
		ItemRuntimeDataInstance = OtherValue.ItemRuntimeDataInstance; 
		ItemDataClass = OtherValue.ItemDataClass;
	}

public:
	
	void GetRuntimeDatas( const UItemComponentBase* ItemComponent, TArray<UItemRuntimeDataBase*>& OuterRuntimeDatas ) const;

private:
	
	enum EQueryParameter : uint8
	{
		EIndex = 1 << 0,
		EItemRuntimeDataClass = 1 << 1,
		EItemRunntimeDataInstance = 1 << 2,
		EItemDataClass = 1 << 3,
	};

	uint8 GenerateQueryParameter( bool IsValidIndex, bool IsValidRuntimeDataClass, bool IsValidRuntimeDataInstance, bool IsValidItemDataClass) const;

	bool IsMatchedForIndex(const FItemRuntimeDataContainer::ConstIterator& IT) const;
	bool IsMatchedForItemRuntimeDataClass(const FItemRuntimeDataContainer::ConstIterator& IT) const;
	bool IsMatchedForItemRuntimeDataInstance(const FItemRuntimeDataContainer::ConstIterator& IT) const;
	bool IsMatchedForItemDataClass(const FItemRuntimeDataContainer::ConstIterator& IT) const;

public:

	/*
	* The actual index of the item runtime data in the target item component
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(ShowOnlyInnerProperties))
	int Index = INDEX_NONE;

	/*
	* The class of item data which will be used to initialize the default value of runtime data
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShowOnlyInnerProperties))
	TSubclassOf<UItemDataBase> ItemDataClass = nullptr;

	/*
	* The class for the runtime data in the target item component
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShowOnlyInnerProperties))
	TSubclassOf<UItemRuntimeDataBase> ItemRuntimeDataClass = nullptr;

	/*
	* The actual runtime data instance
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ShowOnlyInnerProperties))
	const UItemRuntimeDataBase* ItemRuntimeDataInstance = nullptr;

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
	
	/*
	* The target new item owner should be inherited from IItemInterface
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Initialzie( UObject* NewItemOnwer );

	//Initialize this component by the item owner
	virtual void Initialzie( TScriptInterface<IItemInterface> NewItemOwner );

	/*
	* Find the index for the target runtime data in this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	void GetItemRuntimeData(const FItemRuntimeDataQueryFilter& QueryFilter, TArray<UItemRuntimeDataBase*>& OuterRuntimeData) const;

	/*
	* Active the item so that the outer can use this item 
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter);

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter);

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StartUse(const FItemRuntimeDataQueryFilter& QueryFilter);

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StopUse(const FItemRuntimeDataQueryFilter& QueryFilter);

	/*
	* Abandon this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter );

	/*
	* Defines how to gain this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter );

	/*
	* Try to check weather this item is owned by the world.
	* If this item is owned by the world means every one can get it. it can be used by every one.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ItemComponent")
	bool IsWorldOwned() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ItemComponent")
	bool HasAuthority() const;
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
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ItemComponent")
	const FItemRuntimeDataContainer& GetItemRuntimeDataContainer() const { return RuntimeDataContainer; }

	/*
	* Get the default item class which this component will used to create new runtime data
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ItemComponent")
	const TArray<TSubclassOf<UItemDataBase>>& GetDefaultItemRuntimeDataClass() const { return DefaultItemDataClass; }

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

	/*
	* Add new runtime data to this item component
	*/
	void AddNewRuntimeData(UItemRuntimeDataBase* NewRuntimeData);

	/*
	* Remove the runtime data from this component
	*
	* @param RuntimeData the item runtime data that will be removed
	*/
	void RemoveItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeData);

public:
	
	//Callback when the avatar have been changed 
	UFUNCTION()
	void OnRep_OwnerAvatar(UItemInventoryComponent* OldAvatar);

public:

	//Invoked when the item data have been changed
	UPROPERTY(BlueprintAssignable)
	FItemDataChanged ItemDataChangedDelegate;

	//Broadcast when the avatar owner has been changed
	UPROPERTY(BlueprintAssignable)
	FAvatarOwnerChanged AvatarOwnerChanged;

private:

	/*
	* The data which will be used in this item to initialize the runtime data
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData", meta=(AllowPrivateAccess))
	TArray<TSubclassOf<UItemDataBase>> DefaultItemDataClass;

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
	virtual void ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter) override;\
	virtual void DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter) override; \
	virtual void StartUse(const FItemRuntimeDataQueryFilter& QueryFilter) override; \
	virtual void StopUse(const FItemRuntimeDataQueryFilter& QueryFilter) override; \
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter) override; \
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter) override;

/*
* Just make implement the item frame work more easy, Ctrl + C, Ctrl + V, and change the NEWItemClass to the target component class
*/
#if 0
void NEWItemClass::ActivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::ActivateItem(QueryFilter);
}

void NEWItemClass::DeactivateItem(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::DeactivateItem(QueryFilter);
}

void NEWItemClass::StartUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StartUse(QueryFilter);
}

void NEWItemClass::StopUse(const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::StopUse(QueryFilter);
}

void NEWItemClass::Abandoned(const FItemScopeChangeInfo& AbandonInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Abandoned(AbandonInfo, QueryFilter);
}

void NEWItemClass::Gained(const FItemScopeChangeInfo& GainedInfo, const FItemRuntimeDataQueryFilter& QueryFilter)
{
	Super::Gained(GainedInfo, QueryFilter);
}
#endif
