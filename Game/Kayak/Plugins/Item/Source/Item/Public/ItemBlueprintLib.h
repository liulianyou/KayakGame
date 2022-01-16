#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	The function library for item.
*			The other module can get different access to item system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "ItemBlueprintLib.generated.h"

class UItemManager;
class UItemComponentBase;
class UItemInventoryComponent;

UCLASS()
class ITEM_API UItemBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Get the manager of the item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	static UItemManager* GetItemManager();

	/*
	* Get the global set of function used in the item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	static UItemGlobal* GetItemGlobal();

	/*
	* Get Item inventory component in the target object
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	static UItemInventoryComponent* GetItemInventoryComponent( UObject* Object );

	/*
	* Get Item component in the target object.
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	static UItemComponentBase* GetItemComponent(UObject* Object);

};