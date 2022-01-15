#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/30
* Purpose:	This will manager all items which will be used in our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "UObject/ScriptInterface.h"

#include "ItemInterface.h"

#include "ItemManager.generated.h"

class UItemDataBase;


/*
* This class will manager all items which is used in our game.
*/
UCLASS(Blueprintable, BlueprintType, Category = "Item")
class ITEM_API UItemManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Item")
	void OnInitialize();

	UFUNCTION(BlueprintCallable, Category = "Item")
	void Initialize();

	/*
	* Create new data used for item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	UItemDataBase* FindOrCreateNewItemData(TSubclassOf<UItemDataBase> ItemDataClass);

	/*
	* Remove all the data with the target class
	* 
	* @param IgnoreChildClasses		true means the derived class of the target data class will be ignored
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	void RemoveItemDataByClass(TSubclassOf<UItemDataBase> ItemDataClass, bool IgnoreChildClasses = false);

	/*
	* Create new Item according to the item class
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	TScriptInterface<IItemInterface> CreateNewItem(TSubclassOf<UObject> ItemClass);

	/*
	* Register the item to item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	void RegisterItem(TScriptInterface<IItemInterface> NewItem );

	/*
	* unregister the item from item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	void UnregisterItem(TScriptInterface<IItemInterface> OldItem);

	/*
	* Get all data which is used in the item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	const TArray<UItemDataBase*>& GetAllItemDatas() const { return ItemDatas; }

	/*
	* Get all items which have been spawned in the item system
	*/
	UFUNCTION(BlueprintCallable, Category = "Item")
	const TArray<TScriptInterface<IItemInterface>>& GetAllItems() const { return Items; }

private:
	
	//All data which is used in our game
	UPROPERTY()
	TArray<UItemDataBase*> ItemDatas;

private:

	/*
	* All items in our game
	*
	* As the client don't have any item data I can not get items through item data
	*/
	TArray<TScriptInterface<IItemInterface>> Items;
};
