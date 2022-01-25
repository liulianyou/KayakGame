#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base data which is used for the item.
*			There is two kind of data used for item, One confined data(ItemData), one runtime data.
*			Confined data is used to initialize the runtime data, and generate some informations of items.
*			Confined data stands for the base item type.
*			The runtime data should be created or removed when item data is added or removed from the target item.
*			RuntimeData is used to define the data which is used at runtime, it defined some operations of the data.
*			The runtime data defines what the item is
*			
*			I split the data of item into two parts. part of them will have the same attributes.
*			The item runtime data only respect for the behavior which is bind to the intrinsic attribute
*			The component is used to expand the behavior for the item runtime data, but it can only use the intrinsic attribute	in the item runtime data
*			The item data will only exist at the server, the client will use the runtime data to replicate or do some RPC function
* 
*			All the item data and runtime data contain several data snippet.
*			The data snippet is the base atomic data contain the final properties.
*								Data Snippet
*								/		   \
*							Item Data  -> ItemRuntimeData
*			ItemData will according to the external resource such as excel to define how to combine data snippet, and it will create runtime data which will copy the data snippet to runtime data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDefinition.h"
#include "Engine/EngineTypes.h"
#include "ItemContainerIterator.h"

#include "ItemDataBase.generated.h"

class AController;
class UItemComponentBase;
class UItemRuntimeDataBase;
class UItemInventoryComponent;
class UItemDataSnippetBase;

/*
* The base class for all items used in our game
* You can treat it as the data scope of the target item. 
* It is only used to initialize the item and get some informations from item
* By default This data should only exist on the server, and it should never be replicated
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="ItemManager", Category = "Item|ItemData")
class ITEM_API UItemDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

public:

	/*
	* Invoked when this item data is created
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnInitialize();
	virtual void Initialize();

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnFinialize();
	virtual void Finialize();

	//Remove the component which will use this data as its initial value
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnRemoveReferencedComponent(UItemComponentBase* ItemComponent);
	virtual void RemoveReferencedComponent(UItemComponentBase* ItemComponent);

	//Add the component which will use this data as its initial value
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnAddReferencedComponent(UItemComponentBase* ItemComponent);
	virtual void AddReferencedComponent(UItemComponentBase* ItemComponent);

	//Check weather this runtime is valid
	UFUNCTION(BlueprintCallable, Category = "ItemData")
	virtual bool IsValidItemData() const;

	/*
	* Get all components which use this data as its initialize data
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemData")
	const TArray<UItemComponentBase*>& GetReferencedItemComponents() const { return ReferencedItemComponents;}

	UFUNCTION(BlueprintCallable, Category = "ItemData")
	TArray<UItemComponentBase*>& GetReferencedItemComponents_Mutable() { return ReferencedItemComponents; }

	/*
	* Create new runtime data through this item data
	* 
	* @param ComponentOwner the component which will use this runtime data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	UItemRuntimeDataBase* OnCreateNewRuntimeData(UItemComponentBase* ItemComponentOwner);
	UFUNCTION(BlueprintCallable, Category = "ItemData")
	virtual UItemRuntimeDataBase* CreateNewRuntimeData(UItemComponentBase* ItemComponentOwner);

public:

	UFUNCTION(BlueprintCallable, Category = "ItemData")
	const FString& GetID() const { return ID; }

	UFUNCTION(BlueprintCallable, Category = "ItemData")
	const TSoftClassPtr<UItemRuntimeDataBase>& GetRuntimeDataClass() const { return RuntimdDataClass; }

	UFUNCTION(BlueprintCallable, Category = "ItemData")
	const TArray<UItemDataSnippetBase*>& GetDatas() const { return Datas; }

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData", meta = (AllowPrivateAccess = true))
	TSoftClassPtr<UItemRuntimeDataBase> RuntimdDataClass;

	//The actual data this item data combines
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData", meta = (AllowPrivateAccess = true))
	TArray<TSubclassOf<UItemDataSnippetBase>> DataTypes;

private:
	/*
	* The unique identification for this data.
	* This ID should be equal in client and server.
	*/
	UPROPERTY(VisibleInstanceOnly)
	FString ID;

	UPROPERTY()
	TArray<UItemDataSnippetBase*> Datas;

private:

	//All the item component  which will use this data as its original initial data
	TArray<UItemComponentBase*> ReferencedItemComponents;

	//Flag to check weather this data have been initialized
	int32 bInitialized : 1;
};

//The activation information for this task
USTRUCT(BlueprintType)
struct ITEM_API FItemDataSnippetInfo : public FFastArraySerializerItem
{
	GENERATED_BODY()

public:
	FItemDataSnippetInfo(){};
	FItemDataSnippetInfo(UItemDataSnippetBase* DataSnippet):Item(DataSnippet){}

	explicit operator bool() const { return IsValid(); }
	friend bool operator==(const FItemDataSnippetInfo& LeftInfo, const FItemDataSnippetInfo& RightInfo)
	{
		return LeftInfo.Item == RightInfo.Item && LeftInfo.PendingRemoved == RightInfo.PendingRemoved;
	}
	friend bool operator!=(const FItemDataSnippetInfo& LeftInfo, const FItemDataSnippetInfo& RightInfo)
	{
		return !(LeftInfo == RightInfo);
	}

public:

	void PreReplicatedRemove(const struct FItemDataSnippetContainer& InArray);
	void PostReplicatedAdd(const struct FItemDataSnippetContainer& InArray);
	void PostReplicatedChange(const struct FItemDataSnippetContainer& InArray);

private:

	bool IsValid() const;

public:

	//The item which contain item component
	UPROPERTY()
	UItemDataSnippetBase* Item = nullptr;

public:

	//Flag to check weather this item will be removed at the next safe frame
	bool PendingRemoved = false;

	//Double direction list
	FItemDataSnippetInfo* PreElement = nullptr;
	FItemDataSnippetInfo* NextElement = nullptr;

public:

	static FItemDataSnippetInfo InvalidData;
};

/*
* As this container is used for net work, the order of elements is not fixed.
* We can only use interaction to access the element
*/
USTRUCT(BlueprintType)
struct ITEM_API FItemDataSnippetContainer : public FFastArraySerializer
{
	GENERATED_BODY()

	ITERATOR_DEFINITION(FItemDataSnippetInfo, FItemDataSnippetContainer);

public:
	
	FItemDataSnippetContainer();
public:

	/*
	* Add mew data snippet to this container
	*/
	void AddNewItem( UItemDataSnippetBase* NewItem );

	/*
	* Remove the target data snippet from the container
	*/
	void RemoveItem(UItemDataSnippetBase* NewItem);

	/*
	* Register this container to the target item runtime data owner,
	* So that this container can use the function in item runtime data
	*/
	void RegisterItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeDataOwner);

	UItemRuntimeDataBase* GetRuntimeDataOwner() const { return ItemRuntimeData; }

public:

	//Used to serialize this container for net replication
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FItemDataSnippetInfo, FItemDataSnippetContainer>(Items, DeltaParms, *this);
	}

private:

	UPROPERTY()
	TArray<FItemDataSnippetInfo> Items;

public:

	//Increment the lock count for the target attribute
	void IncrementLock();

	//Decrement the lock count if the lock count come into zero then I can release the resource safely
	void DecrementLock();

public:

	//The first element which want to be added to this container in this container
	FItemDataSnippetInfo* HeadPendingElement = nullptr;
	//The last element which want to be added to this container 
	FItemDataSnippetInfo** EndPendingElementPtr = nullptr;

private:

	/*
	* Simulate the safe point to release all resource safely
	*/
	mutable int LockCount;
	int PendingRemovedCount = 0;

	UItemRuntimeDataBase* ItemRuntimeData = nullptr;
};

template<>
struct TStructOpsTypeTraits< FItemDataSnippetContainer > : public TStructOpsTypeTraitsBase2< FItemDataSnippetContainer >
{
	enum
	{
		WithNetDeltaSerializer = true,
		WithCopy = false,
	};
};

/*
* The runtime data which is used by the item.
* Runtime data is only used at runtime state, it will cashed some temporary value, and define some operations around this data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "ItemRuntimeData")
class ITEM_API UItemRuntimeDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

	friend UItemComponentBase;

public:

	//Override UObject
	virtual void BeginDestroy() override;
	/*
	* Override the GetWorld function so that the BP can use the functions which can only used in the Actor BP
	*/
	virtual UWorld* GetWorld() const override;

#pragma  region NetworkSupport
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const;
	virtual bool IsNameStableForNetworking() const override;
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;
	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override;
	virtual void PreNetReceive() override;
	virtual void PostNetReceive() override;
	//Override UObject

	//Replicate the sub objects in this item runtime data 
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);
#pragma  endregion NetworkSupport

public:

	/*
	* Initialize the attributes in this data.
	* Invoked when the owner of this item has authority
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnInitialize(UItemDataBase* ItemData);
	virtual void Initialize(UItemDataBase* ItemData);

	//Check weather this item has been activated
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsActivated() const;

	//Check weather this item is using
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsUsing() const;

	/*
	* Weather this data has authority
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool HasAuthority() const;

	//Invoked when this item data will not be used by the item component
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnFinialize();
	virtual void Finialize();

	/*
	* Remove the target data snippet from this runtime data
	* If you call this function it will invoke the server to remove data snippet.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	void RemoveDataSnippet( UItemDataSnippetBase* DataSnippet );

	/*
	* Add one data snippet to this runtime data to make this runtime data to support some features
	* If you call this function it will invoke the server to add data snippet
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	void AddDataSnippet( UItemDataSnippetBase* DataSnippet );

	/*
	* Find the index of the target data snippet
	* 
	* #retur INDEX_NOEN means this runtime data have no target data snippet
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	int FindDataSnippet(UItemDataSnippetBase* DataSnippet);

	/*
	* Check weather the target data snippet has the specific property
	* 
	* @param PropertyName The name of the property in the target data snippet
	* @Param DataSnippetType	nullptr means this function will check all snippet data in this runtime data
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool HasData( const FString& PropertyName, TSubclassOf<UItemDataSnippetBase> DataSnippetType = nullptr);
	

public:

	/*
	* Set the new item component owner for this runtime data
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void SetItemComponentOwner(UItemComponentBase* ItemComponent);

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	FItemDataSnippetContainer& GetItemDataSnippetContanier_Mutable() { return DataSnippetContainer; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const FItemDataSnippetContainer& GetItemDataSnippetContanier() const { return DataSnippetContainer; }

protected:

	/*
	* Invoked when the new avatar owner of the owner item have been changed.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnAvatarOwnerChanged(UItemInventoryComponent* OldAvatarOwner, UItemInventoryComponent* NewAvatarOwner);
	virtual void AvatarOwnerChanged(UItemInventoryComponent* OldAvatarOwner, UItemInventoryComponent* NewAvatarOwner);

	/*
	* Active the item so that the outer can use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnActivateItem();
	virtual void ActivateItem();

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnDeactivateItem();
	virtual void DeactivateItem();

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnStartUse();
	virtual void StartUse();

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnStopUse();
	virtual void StopUse();

	/*
	* Abandon this item.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnAbandoned(const FItemScopeChangeInfo& AbandonInfo);
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Defines how to gain this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnGained(const FItemScopeChangeInfo& GainedInfo);
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo);


	/*
	* When the item data in the target item have been changed then the runtime data will change synchronize
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnItemDataChangedInItemOwner(UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData);
	virtual void ItemDataChangedInItemOwner( UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData );

public:

	/*
	* As the object has no default function to hook the begin play event
	* I add it when the owner component bengin play
	*/
	virtual void BeginPlay();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData", meta = (DisplayName = "BeginPlay"))
	void OnBeginPlay();

private:

	/*
	* Invoked when the item state is changed
	*/
	void ToggleItemStateChanged(EItemState NewItemState);

	/*
	* The actual point to remove data snippet
	*/
	void InternalRemoveDataSnippet( UItemDataSnippetBase* DataSnippet );

	/*
	* Te actual point to add data snippet
	*/
	void InternalAddDataSnippet( UItemDataSnippetBase* DataSnippet );

#pragma  region GET_SET_IMPLEMATION
public:

	/*
	* Get the item owner of this runtime data
	*/
	UFUNCTION(BlueprintCallable)
	UItemComponentBase* GetComponentOwner() const { return ItemOwner; }

	/*
	* Which avatar own this data, this can be null, as this item in the world and nobody own it
	*/
	UFUNCTION(BlueprintCallable)
	AController* GetAvatarOwner() const;

	/*
	* Which avatar own this data, this can be null, as this item in the world and nobody own it
	*/
	UFUNCTION(BlueprintCallable)
	UItemInventoryComponent* GetInventoryOwner() const;

	//Get the state of this item
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	EItemState GetItemState() const { return ItemState; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const FGuid& GetID() const { return ID; }

	/*
	* This variable only work at authority runtime data.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	UItemDataBase* GetReferencedItemData() const { return ReferencedItemData; }

#pragma  endregion GET_SET_IMPLEMATION

public:

	UFUNCTION()
	void OnRep_ID();

	UFUNCTION()
	void OnRep_ItemOwner(UItemComponentBase* OldItemOnwer);
	
	UFUNCTION()
	void OnRep_DataSnippetContainer( const FItemDataSnippetContainer& OldData );

public:

	//Delegate invoked before one property change
	UPROPERTY(BlueprintAssignable)
	FItemRuntimeDataPreChanged PropertyPreChanged;

	//Delegate invoked after one property have been changed
	UPROPERTY(BlueprintAssignable)
	FItemRuntimeDataPostChanged PropertyPostChanged;

private:

	/*
	* The unique ID for the runtime data
	*/
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_ID, Category = "RuntimeData", meta = (AllowPrivateAccess=true))
	FGuid ID;

private:

	/*
	* Which component own this runtime data
	*/
	UPROPERTY(ReplicatedUsing = OnRep_ItemOwner)
	UItemComponentBase* ItemOwner = nullptr;

	/*
	* Hold all data snippet in this runtime data
	*/
	UPROPERTY( Transient, ReplicatedUsing = OnRep_DataSnippetContainer)
	FItemDataSnippetContainer DataSnippetContainer;

private:
	/*
	* Which item data create this runtime data.
	* This variable only work at authority runtime data.
	*/
	UItemDataBase* ReferencedItemData;

	//The state of current item
	EItemState ItemState;

	/*
	* Flag to check weather this data is net addressed
	* As default the net addressable is only worked when the
	*	1:)Object From package, such as map
	*	2:)CDO or default SubObject
	* I need use this member to add external way to set this data is addressable
	*/
	uint32 bNetAddressable : 1;

	//Flag to check weather this data have been initialized to forbid initialize repeatedly
	uint32 bInitialized : 1;
};

#define ItemRuntimeDataFramework()\
	virtual void ActivateItem() override;\
	virtual void DeactivateItem() override;\
	virtual void StartUse() override;\
	virtual void StopUse() override;\
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo) override;\
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo) override;

#if 0
	void XXX::ActivateItem() 
	{
		Super::ActivateItem();
	}
		
	void XXX::DeactivateItem()
	{
		Super::DeactivateItem();
	}

	void XXX::StartUse()
	{
		Super::StartUse();
	}

	void XXX::StopUse()
	{
		Super::StopUse();
	}

	void XXX::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
	{
		Super::Abandoned(AbandonInfo);
	}

	void XXX::Gained(const FItemScopeChangeInfo& GainedInfo)
	{
		Super::Gained(GainedInfo);
	}
#endif