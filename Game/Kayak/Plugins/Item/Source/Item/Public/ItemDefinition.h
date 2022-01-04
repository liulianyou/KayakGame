#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/24
* Purpose:	All global definitions should be defined here.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Misc/EnumClassFlags.h"

#include "ItemDefinition.generated.h"

class UItemRuntimeDataBase;

/*
* The state for one item
*/
UENUM( BlueprintType )
enum EItemState
{
	//This item have not been operated by any other operations after it is created
	Constructed = 0	UMETA(Hidden),
	//Active means the item is ready for the avatar to use
	Activate	= 1 << 0,
	//Deactivated means the item will not affect the avatar any more. the Avatar only own it, but it will do nothing for the avatar 
	Deactivated	= 1 << 1,
	//The avatar is using this item
	Using		= 1 << 2,
	//This item is free for using
	Idel		= 1 << 3,
	//This item is abandoned by the avatar
	Abandoned	= 1 << 4,
	//This item is gained by the other avatar
	Gained		= 1 << 5,
};

ENUM_CLASS_FLAGS(EItemState);

/*
* The delegate event used to inspect the state changed for the target Item
*
* @param Item	The item which state is changed
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemStateChange, const UItemRuntimeDataBase*, Item);

/*
* The delegate event used to inspect the state changed for the target Item
*
* @param Item	The item which state is changed
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FItemDataChanged, UItemComponentBase*, TargetItem, UItemDataBase*, OldData, UItemDataBase*, NewData);


USTRUCT(BlueprintType)
struct FLocationInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector Location;

	/*
	* The object that the target 
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UObject* TargetObject;

};

/*
* The type of changes for the scope of the target item
*/
UENUM(BlueprintType)
enum class EItemScopeChangeType : uint8
{	
	//The scope of the item Will not change any more
	NoChange				UMETA(DisplayName = "Do not change its scope"),
	//The item should transfer to new target
	Transfer	= 1 << 1	UMETA(DisplayName = "Trnasfer to target"),
	//Create new item to the new target
	Duplicate	= 1 << 2	UMETA(DisplayName="Duplicate new Item to target"),
	//The Item will be destroyed
	Destroyed	= 1 << 3	UMETA(DisplayName="Destroy this Item"),
};

/*
* 
*/
USTRUCT(BlueprintType)
struct FItemScopeChangeInfo
{
	GENERATED_BODY()

public:

	//The new location after the scope changed
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLocationInfo TargetLocationInfo;

	//How to change the scope the item
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemScopeChangeType ScopeChangeType;

	//The original location before this scope changed
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FLocationInfo SourceLocationInfo;
};

/*
* Struct stored the delegate that will be used outside for each item.
*/
struct FItemNativeDelegate
{
	
};
