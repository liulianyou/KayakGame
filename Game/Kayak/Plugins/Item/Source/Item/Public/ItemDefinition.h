#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/24
* Purpose:	All global definitions should be defined here.
*			The difference between ItemGloble and ItemDefinition is ItemGloble used to manipulate globe configuration and global manipulation.
*			The ItemDefinition is used to export some global definition which will be used by outer module.
*			If one delegate defined in ItemDefinition it only can by used by native class, but the ItemGlobal can be used in BP
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Misc/EnumClassFlags.h"

#include "ItemDataSnippetProperty.h"

#include "ItemDefinition.generated.h"

class UItemRuntimeDataBase;
class UItemDataSnippetBase;

DECLARE_LOG_CATEGORY_EXTERN(LogItem, Log, All);
DECLARE_STATS_GROUP(TEXT("Tickables"), STATGROUP_Item, STATCAT_Advanced);

/*
* The state for one item
*/
UENUM( BlueprintType )
enum class EItemState : uint8
{
	//The owner avatar only own this item. and this item have not effect to the avatar
	Constructed = 0		UMETA(Hidden),
	//Active means the avatar have own this item and can use it
	Activate	= 1 << 0,
	//This item data have been owned by the avatar but it have not been used
	Idel		= 1 << 1,
	//The avatar is using this item, the item have some effects to the world
	Using		= 1 << 2,
	//The avatar just hold this item and this item have no effect to the world
	Holding		= 1 << 3,
	//Deactivated means will not own this item, This item now belongs to the world(If it exist)
	Deactivated = 1 << 4,
	//This item is abandoned by the avatar
	Abandoned	= 1 << 5,
	//This item is gained by the other avatar
	Gained		= 1 << 6,
};

ENUM_CLASS_FLAGS(EItemState);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataPreparedEvent, UItemRuntimeDataBase*, ItemRuntimeData);

/*
* This delegate will broadcast when the avatar owner have been changed in target item.
* 
* @param OldAvatarOwner		the old avatar owner of the target item
* @param NewAvatarOwner		the new avatar owner of the target item
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAvatarOwnerChanged, UItemComponentBase*, Item, UItemInventoryComponent*, OldAvatarOwner, UItemInventoryComponent*, NewAvatarOwner);

/*
* The target property will changed in the target runtime data
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRuntimeDataPreChanged, FItemDataSnippetProperty, Property);

/*
* The target property have been changed in the target runtime data
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRuntimeDataPostChanged, FItemDataSnippetProperty, Property);

/*
* Broadcast when the state have been changed in the target runtime data
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemRuntimeDataStateChanged, UItemRuntimeDataBase*, ItemRuntimeData);

USTRUCT(BlueprintType)
struct FLocationInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector Location;

	/*
	* The avatar owner for the item
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UItemInventoryComponent* AvatarOnwer;

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
* struct to define how the item
*/
USTRUCT(BlueprintType)
struct FItemScopeChangeInfo
{
	GENERATED_BODY()

public:
	FItemScopeChangeInfo(){};
	FItemScopeChangeInfo(const FLocationInfo& _TargetLocationInfo, const EItemScopeChangeType _ScopeChangeType, const FLocationInfo& _SourceLocationInfo)
		: TargetLocationInfo(_TargetLocationInfo)
		, ScopeChangeType(_ScopeChangeType)
		, SourceLocationInfo(_SourceLocationInfo)
	{}

	FItemScopeChangeInfo(const EItemScopeChangeType _ScopeChangeType)
		:ScopeChangeType(_ScopeChangeType)
	{}

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
	//Broadcast when the avatar owner has been changed in the target item.
	static FAvatarOwnerChanged AvatarOwnerChanged;
};
