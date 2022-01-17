#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/17
* Purpose:	This is used to append the net work for the item system.
*			Sometimes one item have no avatar owner which means it is just one item in the world, the other avatar can get it by one way.
*			At this point that item can not use SERVER/CLIENT RPC, it can only use the Net_Mutcast.
*			So I need one net support component in the controller to use its net channel to use Server/Client RPC
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Components/ActorComponent.h"

#include "ItemNetWorkSupportComponent.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "ItemNetSupprotComponent")
class ITEM_API UItemNetworkSupportComponent : public UActorComponent
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Invoke the server to add new Item data to the target item component
	*/
	UFUNCTION(Server, Reliable,  Category = "Item")
	void Server_AddNewItemData( UItemDataBase* ItemData, UItemComponentBase* ItemComponent );

	/*
	* Invoke the server to remove Item data from the target item component
	*/
	UFUNCTION(Server, Reliable, Category = "Item")
	void Server_RemoveItemData(UItemDataBase* ItemData, UItemComponentBase* ItemComponent);

	/*
	* Invoke the server to remove the target runtime data in the target item component
	*/
	UFUNCTION(Server, Reliable, Category = "Item")
	void Server_RemoveItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeData, UItemComponentBase* ItemComponent);

	/*
	* Invoke the server to add the target runtime data in the target item component
	*/
	UFUNCTION(Server, Reliable, Category = "Item")
	void Server_AddItemRuntimeData(UItemRuntimeDataBase* ItemRuntimeData, UItemComponentBase* ItemComponent);
};
