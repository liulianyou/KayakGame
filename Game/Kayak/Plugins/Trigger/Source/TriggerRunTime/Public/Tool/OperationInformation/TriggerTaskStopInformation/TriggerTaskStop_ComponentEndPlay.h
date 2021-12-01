#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/9
* Purpose:	This is used to store the information about the stop which is occurred at the EndPlay in the trigger task component
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStopInformationBase.h"

#include "TriggerTaskStop_ComponentEndPlay.generated.h"

/*
* This operation will be occurred at the begin destroy function of trigger task
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo|TriggerTaskStop")
class TRIGGERRUNTIME_API UTriggerTaskStop_ComponentEndPlay : public UTriggerTaskStopInformationBase
{
	GENERATED_UCLASS_BODY()

public:

	


};