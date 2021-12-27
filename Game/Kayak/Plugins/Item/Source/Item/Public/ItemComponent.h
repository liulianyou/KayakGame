#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	All the operations for the Item should be put in the component.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "ItemDefinition.h"
#include "ItemInterface.h"

#include "ItemComponent.generated.h"

class UItemDataBase;
class UItemOperationInfoBase;

/*
* The component which is used for item.
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "Item|Component")
class ITEM_API UItemComponentBase : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override Object
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
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

	/*
	* Give the BP one chance to define how to active this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnActivateItem();

	/*
	* Active the item so that the outer can use this item 
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void ActivateItem();

	/*
	* Give the BP one chance to define how to Deactive this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnDeactivateItem();

	/*
	* Deactive this item so that the outer can not use this item.
	* If the outer want to use this item it should active it first and then use it
	* If one item deactivated all things related to this item should be cleared
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void DeactivateItem();


	/*
	* Give the BP one chance to do define how to start use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnStartUse();

	/*
	* Start to use this item, before use this item you need to active it again
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StartUse();

	/*
	* Give the BP one change to define how to stop to use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnStopUse();

	/*
	* stop to use this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void StopUse();

	/*
	* Give the BP one change to define how to  abandon this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnAbandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Abandon this item.
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Abandoned(const FItemScopeChangeInfo& AbandonInfo);

	/*
	* Give the BP one change to define how to gain this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnGained(const FItemScopeChangeInfo& GainedInfo);

	/*
	* Defines how to gain this item
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void Gained(const FItemScopeChangeInfo& GainedInfo);

	//Check weather this item has been activated
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	bool IsActivated() { return bHasActivated; }

	//Check weather this item is using
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	bool IsUsing() { return bIsUsing; }

public:

	/*
	* Get the owner of this component
	*/
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	TScriptInterface<IItemInterface> GetItemOwner() const;
	
	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UObject* GetAvatarOwner() const { return OwnerAvatar; }

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	virtual void SetAvatarOwner( UObject* NewAvatar );

	UFUNCTION(BlueprintNativeEvent, Category = "ItemComponent")
	void SetNewItemData(UItemDataBase* NewData);

	UFUNCTION(BlueprintCallable, Category = "ItemComponent")
	UItemDataBase* GetItemData() const { return ItemData; }

public:

	//Callback when the avatar have been changed 
	UFUNCTION()
	void OnRep_OwnerAvatar( UObject* OldAvatar );

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
	
	//The data which will be used in this item
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ItemComponent")
	TSubclassOf<UItemDataBase> ItemDataClass;

private:
	
	//Flag to check weather this item has been activated
	uint8 bHasActivated : 1;

	//Flag to check weather this item is using
	uint8 bIsUsing	: 1;

private:

	//The instance data which will be used by this component
	UPROPERTY()
	UItemDataBase* ItemData;

	/*
	* where this component should exist
	*/
	UObject* ItemOwner = nullptr;

	/*
	* Which avatar own this component, this value can be null, such as the player abandon this item on the ground.
	* Mostly this value is different from the ItemOwner.
	*/
	UPROPERTY(ReplicatedUsing=OnRep_OwnerAvatar)
	UObject* OwnerAvatar = nullptr;

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
UItemComponentBase* NEWItemClass::GetItemComponent() const
{
	return Super::GetItemComponent();
}

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
