#pragma once


/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The operations which is used describe how to skip the target task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "OperationInformationBase.h"

#include "TriggerTaskSkipInformationBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskSkipInformationBase : public UOperationInformationBase
{
	GENERATED_UCLASS_BODY()

public:



};