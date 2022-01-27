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
class UItemDataSnippetBase;

UCLASS()
class ITEM_API UItemBlueprintLib : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Get the manager of the item system
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static UItemManager* GetItemManager();

	/*
	* Get the global set of function used in the item system
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static UItemGlobal* GetItemGlobal();

	/*
	* Get Item inventory component in the target object
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static UItemInventoryComponent* GetItemInventoryComponent( UObject* Object );

	/*
	* Get Item component in the target object.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static UItemComponentBase* GetItemComponent(UObject* Object);

	/*
	* Get component which is support for net work in the item system int the target object
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item", meta = (WorldContent = "WorldContent"))
	static UItemNetworkSupportComponent* GetItemNetworkSupportComponent( UObject* Object, UObject* WorldContent );

	/*
	* Weather the target property is valid
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static bool IsPropertyValid( const FItemDataSnippetProperty& Property);

	/*
	* Weather the target property complete
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Item")
	static bool IsPropertyComplete(const FItemDataSnippetProperty& Property);

	UFUNCTION(BlueprintPure, Category = "Item", meta = (BlueprintThreadSafe, NativeMakeFunc))
	static FItemDataSnippetProperty MakeNewItemDataSnippetProperty( const FString& PropertyName, TSubclassOf<UItemDataSnippetBase> DataSnippetClass );
};