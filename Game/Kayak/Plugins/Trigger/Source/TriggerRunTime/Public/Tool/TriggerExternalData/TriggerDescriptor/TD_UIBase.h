#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/25
* Purpose:	This is base class which is used in trigger task to store some information which will be used for UI to display it
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDescriptor/TriggerDescriptorBase.h"

#include "TD_UIBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, hidedropdown, editinlinenew, DefaultToInstanced)
class TRIGGERRUNTIME_API UTD_UIBase : public UTriggerDescriptorBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerDescriptorBase
	
	virtual FString GetAlias_Implementation() override;
	virtual FString GetDescription_Implementation() override;

	//Override UTriggerDescriptorBase

public:
	
	/*
	* The alias which can be modified by the LD
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Descriptor")
	FString Alias;

	/*
	* The description can be modified by the LD
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Descriptor")
	FString Description;
};
