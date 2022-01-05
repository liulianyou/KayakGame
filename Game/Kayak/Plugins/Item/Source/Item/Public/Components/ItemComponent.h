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
#include "ItemDefinition.h"
#include "ItemInterface.h"

#include "ItemComponent.generated.h"

class UItemDataBase;
class UItemRuntimeDataBase;



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
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Item|Component")
class ITEM_API UItemComponentBase : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override Object
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void BeginDestroy() override;
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
	* Active the item so that the outer can use this item 
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void ActivateItem();

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void DeactivateItem();

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StartUse();

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StopUse();

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
	* Get the avatar who own this item component, as one item should only have one item component, the avater also own this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UObject* GetAvatarOwner() const { return OwnerAvatar; }

	/*
	* Set new avatar owner for this item component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void SetAvatarOwner(UObject* NewAvatar);

public:

	/*
	* When the item data is changed in the component this function will be invoked
	* 
	* @param RemovedData	the original data this component hold
	* @param NewData		The new data the component will hold
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnItemDataChanged(UItemDataBase* RemovedData = nullptr, UItemDataBase* NewData = nullptr);

	UFUNCTION(BlueprintCallable)
	virtual void ItemDataChanged( UItemDataBase* RemovedData = nullptr, UItemDataBase* NewData = nullptr );

	/*
	* Set new data to this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void SetNewItemData(UItemDataBase* NewData) final;

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UItemDataBase* GetItemData_Mutable() const { return ItemData; }

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	const UItemDataBase* GetItemData() const { return ItemData; }

	/*
	* Get the owner of the Item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	TScriptInterface<IItemInterface> GetItemOwner() const;

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	void SetRuntimeData( UItemRuntimeDataBase* NewRuntimeData );

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UItemRuntimeDataBase* GetRuntimeData_Mutable() const { return RuntimeData; };

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	const UItemRuntimeDataBase* GetRuntimeData() const { return RuntimeData; };

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnRegisterComponent();

	//Register this component
	virtual void RegisterComponent();

	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnUnregisterComponent();

	//Unregister this component
	virtual void UnregisterComponent();

public:
	
	//Callback when the avatar have been changed 
	UFUNCTION()
	void OnRep_OwnerAvatar(UObject* OldAvatar);

public:
	
	/*
	* The difference between runtime data and item data is item data is the base data for the runtime data.
	* If one value is changed in the item data then all runtime data will changed synchronize.
	* by default the component will only operate the runtime data.
	*/

	/*
	* The data which will be used in this item
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData")
	TSubclassOf<UItemDataBase> DefaultItemDataClass;

	//The class of runtime data will be used by this item
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemData")
	TSubclassOf<UItemDataBase> DefaultItemRuntimeDataClass;

public:
	
	//Invoked when the item data have been changed
	UPROPERTY(BlueprintAssignable)
	FItemDataChanged ItemDataChangedDelegate;

private:
	/*
	* The runtime data which is used for this item
	*/
	UPROPERTY(Transient)
	UItemRuntimeDataBase* RuntimeData;

	/*
	* The instance data which will be used by this component.
	* This data is the base data of runtime data.
	* If some value is changed all component referenced by this data will change synchronize
	*/
	UPROPERTY(Transient)
	UItemDataBase* ItemData;

private:
	
	/*
	* Which avatar own this component, this value can be null, such as the player abandon this item on the ground.
	* Mostly this value is different from the ItemOwner.
	* If this item is spawned at the world then the owner avatar is the world
	*/
	UPROPERTY(ReplicatedUsing = OnRep_OwnerAvatar)
	UObject* OwnerAvatar = nullptr;

	/*
	* As this component maybe treated as one item operation set in other object,
	* The default owner of actor component is one Actor, so I need to get the actual who own this component.
	* The component owner should be inherited from IItemInterface
	*/
	UPROPERTY()
	mutable TScriptInterface<IItemInterface> ComponentOwner;
};
	
#define  ItemComponentFramework()\
	virtual void ActivateItem() override;\
	virtual void DeactivateItem() override; \
	virtual void StartUse() override; \
	virtual void StopUse() override; \
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
