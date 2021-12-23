#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	This is the interface which is used for the representations of the Item.
*/

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/ScriptInterface.h"
#include "ItemInterface.generated.h"

class UItemComponentBase;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * The actual item which is used in game.
 * All object which inherited from the this interface should be treated as new item
 */
class ITEM_API IItemInterface
{
	GENERATED_BODY()

public:
	
	/*
	* Get the data which this item will be used
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Item", meta = (DisplayName="GetItemData"))
	UItemComponentBase* OnGetItemComponent() const;
	virtual UItemComponentBase* GetItemComponent() const PURE_VIRTUAL(&IItemInterface::OnGetItemComponent, return OnGetItemComponent();)


	/*
	* How to active this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnActive();
	virtual void Actvie() PURE_VIRTUAL(&UItemComponentBase::Actvie, OnActive();)

	/*
	* How to Deactive this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnDeactive();
	virtual void Deactive() PURE_VIRTUAL(&UItemComponentBase::Deactive, OnDeactive();)


	/*
	* How to start use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnStartUse();
	virtual void StartUse() PURE_VIRTUAL(&UItemComponentBase::StartUse, OnStartUse();)

	/*
	* How to stop to use this item
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnStopUse();
	virtual void StopUse() PURE_VIRTUAL(&UItemComponentBase::StopUse, OnStartUse();)

	/*
	* When this item is abandoned by the outer how this item respond to it
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnAbandoned();
	virtual void Abandoned() PURE_VIRTUAL(&UItemComponentBase::Abandoned, OnAbandoned();)

	/*
	* When the outer gain the item what effect should be applied to the outer
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemComponent")
	void OnGained();
	virtual void Gained() PURE_VIRTUAL(&UItemComponentBase::Gained, OnGained();)
};

#define  ItemFramework()\
	virtual UItemComponentBase* GetItemComponent() const override;\
	virtual void Actvie() override;\
	virtual void Deactive() override; \
	virtual void StartUse() override; \
	virtual void StopUse() override; \
	virtual void Abandoned() override; \
	virtual void Gained() override;

//Just make implement the item frame work more easy, Ctrl+C,Ctrl+V
#if 0
UItemComponentBase* UItemComponentBase::GetItemComponent() const
{

}

void UItemComponentBase::Actvie()
{

}

void UItemComponentBase::Deactive()
{

}

void UItemComponentBase::StartUse()
{

}

void UItemComponentBase::StopUse()
{

}

void UItemComponentBase::Abandoned()
{

}

void UItemComponentBase::Gained()
{

}
#endif