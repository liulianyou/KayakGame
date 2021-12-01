#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The base operation information which is used to resume the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "OperationInformationBase.h"

#include "TriggerTaskResumeInformationBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskResumeInformationBase : public UOperationInformationBase
{
	GENERATED_UCLASS_BODY()
};