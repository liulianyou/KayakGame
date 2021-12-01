#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/25
* Purpose:	This is base class to hold the operation information to reset the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "OperationInformationBase.h"
#include "TriggerTaskInterface.h"

#include "TriggerTaskResetInformationBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskResetInformationBase : public UOperationInformationBase
{
	GENERATED_UCLASS_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "OperationInformation|Reset")
	ETriggerTaskResetType ResetType;
};