#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The base operation information which is used to sleep the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "OperationInformationBase.h"

#include "TriggerTaskPauseInformationBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskPauseInformationBase : public UOperationInformationBase
{
	GENERATED_UCLASS_BODY()
};