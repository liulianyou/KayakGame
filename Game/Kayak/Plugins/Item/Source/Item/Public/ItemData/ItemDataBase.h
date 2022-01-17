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

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const FString& GetID() const { return ID; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	const TSoftClassPtr<UItemRuntimeDataBase>& GetRuntimeDataClass() const { return RuntimdDataClass; }

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

	//All the item component  which will use this data as its original initial data
	TArray<UItemComponentBase*> ReferencedItemComponents;
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
	* Set the new item component owner for this runtime data
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	virtual void SetItemComponentOwner(UItemComponentBase* ItemComponent);

	//Invoked when this item data will not be used by the item component
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnFinialize();
	virtual void Finialize();

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

	/*
	* This variable only work at authority runtime data.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	UItemDataBase* GetReferencedItemData() const { return ReferencedItemData; }

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
	* Which component own this runtime data
	*/
	UPROPERTY(ReplicatedUsing = OnRep_ItemOwner)
	UItemComponentBase* ItemOwner = nullptr;

	/*
	* Which item data create this runtime data.
	* This variable only work at authority runtime data.
	*/
	UItemDataBase* ReferencedItemData;

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
