#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/24
* Purpose:	All global definitions should be defined here.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDefinition.generated.h"

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
