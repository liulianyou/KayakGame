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
	* Delegate used to inspect when the target item have been abandoned or gained by the target avatar
	*/
	UPROPERTY(BlueprintAssignable)
	FItemStateChange ItemStateChangedDelegate;

	/*
	* When the item data is changed in the target component then this event should be broadcast.
	*/
	UPROPERTY(BlueprintAssignable)
	FItemDataChanged ItemDataChangedDelegate;

protected:

	void CreateItemManager();

private:

	UPROPERTY()
	UItemManager* ItemManager;
};