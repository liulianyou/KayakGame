#pragma once


/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The operations which is used describe how to sleep the target task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskPauseInformationBase.h"

#include "TriggerTaskPauseCommonOperationInfos.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskPause_PauseConditions : public UTriggerTaskPauseInformationBase
{
	GENERATED_UCLASS_BODY()
};