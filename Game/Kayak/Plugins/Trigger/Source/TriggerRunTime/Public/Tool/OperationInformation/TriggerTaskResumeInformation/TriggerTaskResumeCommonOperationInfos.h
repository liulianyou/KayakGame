#pragma once


/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The operations which is used describe how to sleep the target task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskResumeInformationBase.h"

#include "TriggerTaskResumeCommonOperationInfos.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskResume_ResumeConditions : public UTriggerTaskResumeInformationBase
{
	GENERATED_UCLASS_BODY()
};