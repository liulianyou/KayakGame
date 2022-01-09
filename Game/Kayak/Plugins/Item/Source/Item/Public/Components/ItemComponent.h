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
class UItemInventoryComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAvatarOwnerChanged, UItemInventoryComponent*, OldAvatarOwner, UItemInventoryComponent*，NewAvatarOwner );

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

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	const TArray<UItemDataBase*>& GetItemDatas() const { return ItemDatas; }

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	const TArray<UItemRuntimeDataBase>& GetItemRuntimeDatas() const { return RuntimeDatas; };

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
	void RemoveItemRuntimeData(UItemRuntimeDataBase* RuntimeDataClass);

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
	UPROPERTY(Transient)
	TArray<UItemRuntimeDataBase*> RuntimeDatas;
	
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
	TScriptInterface<IItemInterface> ComponentOwner;

private:

	/*
	* The instance data which will be used by this component.
	* This data is the base data of runtime data.
	* If some value is changed all component referenced by this data will change synchronize
	*/
	TArray<UItemDataBase*> ItemDatas;
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
