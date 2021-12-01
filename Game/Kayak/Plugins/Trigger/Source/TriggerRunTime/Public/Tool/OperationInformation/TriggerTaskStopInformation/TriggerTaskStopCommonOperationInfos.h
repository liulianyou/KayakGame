#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/9
* Purpose:	This is used to store the information about the stop which is occurred when the trigger task is destroyed
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStopInformationBase.h"

#include "TriggerTaskStopCommonOperationInfos.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo|TriggerTaskStop")
class TRIGGERRUNTIME_API UTriggerTaskStop_Destroyed : public UTriggerTaskStopInformationBase
{
	GENERATED_UCLASS_BODY()

public:
	

};

/*
* Stop the trigger task by the stop conditions which is confined by the LD
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo|TriggerTaskStop")
class TRIGGERRUNTIME_API UTriggerTaskStop_StopCondition : public UTriggerTaskStopInformationBase
{
	GENERATED_UCLASS_BODY()

public:


};

/*
* Stop the trigger task by the stop conditions which is confined by the LD
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo|TriggerTaskStop", meta=(DisplayName = "StopOtherRespawnTasks"))
class TRIGGERRUNTIME_API UTriggerTaskStop_StopOtherRespawnTasks : public UTriggerTaskStopInformationBase
{
	GENERATED_UCLASS_BODY()

public:

};