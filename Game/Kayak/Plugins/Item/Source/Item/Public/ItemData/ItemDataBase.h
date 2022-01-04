#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base data which is used for the item.
*			There is two kind of data used for item, One confined data, one runtime data.
*			Confined data is used to initialize the item, and generate some informations of items.
*			Confined data is singleton and when you change this data all item it referenced to it will changed.
*			RuntimeData is used to define the data which is used at runtime, it defined some operations of the data.
*			The runtime data defines what the item is
*			
*			I split the data of item into two parts. part of them will have the same attributes.
*			one item can have different behavior is because they have different attribute.
*			such as there are two cups, they are created at the same factory at the same time, the have the same attributes so they have the same behavior.
*			if they are created by two different factory and at the same time then they maybe have the same appearance but the quality is different. 
* 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDefinition.h"

#include "ItemDataBase.generated.h"

class UItemComponentBase;

/*
* The base class for all items used in our game
* You can treat it as the data scope of the target item. 
* It is only used to initialize the item and get some informations from item
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="ItemManager", Category = "Item")
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

	/*
	* Get all components which use this data as its initialize data
	*/
	UFUNCTION(BlueprintCallable)
	const TArray<UItemComponentBase*>& GetReferencedItemComponents() const { return ReferencedItemComponents;}

	TArray<UItemComponentBase*>& GetReferencedItemComponents_Mutable() { return ReferencedItemComponents; }

private:

	//All the runtime data which will use this data as its original initial data
	UPROPERTY()
	TArray<UItemComponentBase*> ReferencedItemComponents;
};

/*
* The runtime data which is used by the item.
* Runtime data is only used at runtime state, it will cashed some temporary value, and define some operations around this data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="ItemComponentBase", Category = "Item")
class ITEM_API UItemRuntimeDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual void GetLifetimeReplicatedProps( TArray<class FLifetimeProperty> & OutLifetimeProps ) const override;
	//Override UObject
public:
	
	/*
	* Initialize this data by the item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemRuntimeData")
	void OnInitialzie();
	virtual void Initialize( UItemComponentBase* ItemComponent );


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

private:

	/*
	* Invoked when the item state is changed
	*/
	void ToggleItemStateChanged(EItemState NewItemState);

public:

	UFUNCTION()
	void OnRep_ItemOwner(UItemComponentBase* OldItemOnwer);

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
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	EItemState GetItemState() const { return ItemState; }

public:
	
	/*
	* Give the outer one access to inspect when the state have been changed in this item
	*/
	UPROPERTY(BlueprintAssignable)
	FItemStateChange ItemStateChangedDelegate;

private:

	/*
	* where this component should exist
	*/
	UPROPERTY(ReplicatedUsing = OnRep_ItemOwner)
	UItemComponentBase* ItemOwner = nullptr;

private:

	//The state of current item
	EItemState ItemState;

};
