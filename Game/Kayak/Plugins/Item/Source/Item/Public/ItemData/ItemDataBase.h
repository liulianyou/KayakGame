#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base data which is used for the item.
*			There is two kind of data used for item, One confined data(ItemData), one runtime data.
*			Confined data is used to initialize the runtime data, and generate some informations of items.
*			Confined data is singleton and when you change this data all runtime data it referenced to it will changed.
*			The runtime data should be created or removed when item data is added or removed from the target item.
*			RuntimeData is used to define the data which is used at runtime, it defined some operations of the data.
*			The runtime data defines what the item is
*			
*			I split the data of item into two parts. part of them will have the same attributes.
*			The item runtime data only respect for the behavior which is bind to the data attribute
*			The component is used to expand the behavior for the item runtime, but it can only use the intrinsic attribute	
*			The item data will only exist at the server, the client will use the runtime data to replicate or do some RPC function
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDefinition.h"
#include "Engine/EngineTypes.h"

#include "ItemDataBase.generated.h"

class UItemComponentBase;
class UItemRuntimeDataBase;
class UItemInventoryComponent;

/*
* The base class for all items used in our game
* You can treat it as the data scope of the target item. 
* It is only used to initialize the item and get some informations from item
* One game instance should have one instance of this data
* 
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
	const TMap<UItemComponentBase*, UItemRuntimeDataBase*>& GetReferencedItemComponents() const { return ReferencedItemComponents;}

	UFUNCTION(BlueprintCallable, Category = "ItemData")
	TMap<UItemComponentBase*, UItemRuntimeDataBase*>& GetReferencedItemComponents_Mutable() { return ReferencedItemComponents; }

protected:

	/*
	* This function should be invoked by any other initialization to populate the default members
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemData")
	void InitializeInternal();

public:

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const FString& GetID() const { return ID; }

private:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData", meta = (AllowPrivateAccess = true))
	TSoftClassPtr<UItemRuntimeDataBase> RuntimdDataClass;

	/*
	* The unique identification for this data.
	* This ID should be equal in client and server.
	*/
	UPROPERTY(VisibleInstanceOnly)
	FString ID;

private:

	//All the runtime data which will use this data as its original initial data
	TMap<UItemComponentBase*, UItemRuntimeDataBase*> ReferencedItemComponents;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataPreparedEvent, UItemRuntimeDataBase*, ItemRuntimeData);

/*
* The runtime data which is used by the item.
* Runtime data is only used at runtime state, it will cashed some temporary value, and define some operations around this data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="ItemComponentBase", Category = "ItemData")
class ITEM_API UItemRuntimeDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	typedef void (*RegisterFunction)();

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
	//Override UObject

	//Replicate the sub objects in this item runtime data 
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);
#pragma  endregion NetworkSupport

public:
	
	/*
	* Initialize this data by the item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnInitialzie(UItemComponentBase* ItemComponent);
	virtual void Initialize( UItemComponentBase* ItemComponent );

	//Invoked when this item data will not be used by the item component
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnFinialize();
	virtual void Finialize();

	/*
	* Give the BP one chance to define how to active this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnActivateItem();

	/*
	* Active the item so that the outer can use this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void ActivateItem();

	/*
	* Give the BP one chance to define how to Deactive this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnDeactivateItem();

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void DeactivateItem();


	/*
	* Give the BP one chance to do define how to start use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnStartUse();

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void StartUse();

	/*
	* Give the BP one change to define how to stop to use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnStopUse();

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void StopUse();

	/*
	* Give the BP one change to define how to  abandon this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnAbandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Abandon this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Give the BP one change to define how to gain this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnGained(const FItemScopeChangeInfo& GainedInfo);

	/*
	* Defines how to gain this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo);

	//Check weather this item has been activated
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsActivated() const;

	//Check weather this item is using
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsUsing() const;

	/*
	* When the item data in the target item have been changed then the runtime data will change synchronize
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnItemDataChangedInItemOwner(UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData);

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void ItemDataChangedInItemOwner( UItemComponentBase* Item, UItemDataBase* OldData, UItemDataBase* NewData );

protected:

	/*
	* This is only used to initialize the data when the data is changed
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnInitializeDataFromNewDataInternal(UItemDataBase* NewData);
	virtual void InitializeFromNewDataInternal(UItemDataBase* NewData);

	/*
	* Invoked when the new avatar owner of the owner item have been changed.
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnAvatarOwnerChanged(UItemInventoryComponent* OldOwner, UItemInventoryComponent* NewAvatarOwner);
	virtual void AvatarOwnerChanged(UItemInventoryComponent* OldOwner, UItemInventoryComponent* NewAvatarOwner);

public:

	virtual void BeginPlay();

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData", meta = (DisplayName = "BeginPlay"))
	void OnBeginPlay();

private:

	/*
	* Invoked when the item state is changed
	*/
	void ToggleItemStateChanged(EItemState NewItemState);

public:

	UFUNCTION()
	void OnRep_ItemOwner(UItemComponentBase* OldItemOnwer);


#pragma  region GET_SET_IMPLEMATION
public:

	/*
	* Set new item owner to this runtime data
	*/
	UFUNCTION(BlueprintNativeEvent)
	void SetNewItemOwner(UItemComponentBase* ItemComponent);

	/*
	* Get the item owner of this runtime data
	*/
	UFUNCTION(BlueprintCallable)
	UItemComponentBase* GetItemOwner() const { return ItemOwner; }

	//Get the state of this item
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	EItemState GetItemState() const { return ItemState; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const FGuid& GetID() const { return ID; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsDataPrepared() const { return !!bDataPrepared; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	void MarkDataPrepared();

#pragma  endregion GET_SET_IMPLEMATION

public:

	UFUNCTION()
	void OnRep_ID();

public:
	
	/*
	* Give the outer one access to inspect when the state have been changed in this item
	*/
	UPROPERTY(BlueprintAssignable)
	FItemStateChange ItemStateChangedDelegate;

	/*
	* Delegate for the outer to know when he can use this data safely
	*/
	UPROPERTY(BlueprintAssignable)
	FDataPreparedEvent DataPreparedEvent;

private:

	/*
	* The unique ID for the runtime data
	*/
	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_ID, Category = "RuntimeData", meta = (AllowPrivateAccess=true))
	FGuid ID;

private:

	/*
	* where this component should exist
	*/
	UPROPERTY(ReplicatedUsing = OnRep_ItemOwner)
	UItemComponentBase* ItemOwner = nullptr;

private:

	//The state of current item
	EItemState ItemState;

	/*
	* Flag to inspect weather this runtime data can be used by the item owner
	* When this data is created on the server and replicated to the client,
	* maybe some of the properties have not been replicated due to the network limitation.
	* I need to generated weather all the properties have been assigned valid value.
	*/
	uint32 bDataPrepared : 1;

	/*
	* Flag to check weather this data is net addressed
	* As default the net addressable is only worked when the
	*	1:)Object From package, such as map
	*	2:)CDO or default SubObject
	* I need use this member to add external way to set this data is addressable
	*/
	uint32 bNetAddressable : 1;

};
