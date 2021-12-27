#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/27
* Purpose:	All the global function should be settled here.
*			This will hold all singleton in the Item system such as item manager
*			The ItemDefinition is used to define each enum, struct data, global delegate and so on, and it is the highest level in the item head files
*			The config is only used to store the global config. The game only use its default object
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDefinition.h"

#include "ItemGlobal.generated.h"

class UItemManager;

/*
* The delegate event used to inspect when one item start to be used or stop to be used
* 
* @param SratToUse	true means start to use the target Item, false means stop use
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemUsedDelegate, const UItemComponentBase*, Item, bool, StartToUse);


/*
* The delegate event used to inspect when one item has been activated or deactivate
* 
* @param Activate	True means activate the item, false means deactive item
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemActivateDelegate, const UItemComponentBase*, Item, bool, Activate);

/*
* The delegate event used to inspect when the item have been abandoned.
* 
* @param Abandon true means the target item is abandoned, true means gain the item
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemScopeChangeDelegate, const UItemComponentBase*, Item, bool, Abandon, const FItemScopeChangeInfo&, ScopeChangeInfo);

UCLASS(BlueprintType, config = Game)
class ITEM_API UItemGlobal : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Initialize this global instance for item system
	*/
	virtual void InitializeGlobal();

	//Get the item Manger
	UFUNCTION(BlueprintCallable)
	UItemManager* GetItemManage() const { return ItemManager; }

public:

	/*
	* The item delegate which is used to inspect when one item is start to used or stop using
	*/
	UPROPERTY(BlueprintAssignable)
	FItemUsedDelegate ItemUsedDelegate;

	/*
	* Delegate used to inspect when the target item is activate or deactivated
	*/
	UPROPERTY(BlueprintAssignable)
	FItemActivateDelegate ItemActivateDelegate;

	/*
	* Delegate used to inspect when the target item have been abandoned or gained by the target avatar
	*/
	UPROPERTY(BlueprintAssignable)
	FItemScopeChangeDelegate ItemScopeChangeDelegate;

protected:

	void CreateItemManager();

private:

	UPROPERTY()
	UItemManager* ItemManager;
};