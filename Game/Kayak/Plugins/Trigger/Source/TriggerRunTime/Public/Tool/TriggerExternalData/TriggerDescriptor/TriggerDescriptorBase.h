#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/25
* Purpose:	This is base class which is used to store some information to describe the owner object
*			These informations are extra things which means they are not the intrinsic attributes for the owner object. 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDescriptorBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, hidedropdown, editinlinenew, DefaultToInstanced)
class TRIGGERRUNTIME_API UTriggerDescriptorBase : public UObject
{
	GENERATED_UCLASS_BODY()


public:
	
	/*
	* Get the alias for the owner
	*/
	UFUNCTION(BlueprintNativeEvent, Category="TriggerTask|Descriptor")
	FString GetAlias();

	/*
	* Get the description to describe the owner
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerTask|Descriptor")
	FString GetDescription();
};