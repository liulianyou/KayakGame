#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base class of Item
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemBase.generated.h"

class UItemComponentBase;

/*
* The base class for all items used in our game
* You can treat it as the data scope of the target item. 
* It will define the base attribute and behavior for the target item.
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Item")
class ITEM_API UItemDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Remove the component which will use this data as its initial value
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnRemoveReferencedComponent(UItemComponentBase* ItemComponent);
	virtual void RemoveReferencedComponent( UItemComponentBase* ItemComponent );

	//Add the component which will use this data as its initial value
	UFUNCTION(BlueprintImplementableEvent, Category = "ItemData")
	void OnAddReferencedComponent(UItemComponentBase* ItemComponent);
	virtual void AddReferencedComponent( UItemComponentBase* ItemComponent );
};
