#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/9
* Purpose:	This is the base class to store the information of stop operation which is used when someone want to stop the trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "OperationInformationBase.h"

#include "TriggerTaskStopInformationBase.generated.h"

UCLASS(BlueprintType, Blueprintable, Abstract, noteditinlinenew, DefaultToInstanced, Category = "TriggerRuntime|OperationInfo|TriggerTaskStop")
class TRIGGERRUNTIME_API UTriggerTaskStopInformationBase : public UOperationInformationBase
{
	GENERATED_UCLASS_BODY()

public:

};