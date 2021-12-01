#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The operations which is used describe how to skip the target task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskSkipInformationBase.h"

#include "TriggerTaskSkipCommonOperationInfos.generated.h"

class UTriggerStyleBase;

/*
* Skip the trigger task by the AIStatic class
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo", meta = (DisplayName = "AIStaticSkip"))
class TRIGGERRUNTIME_API UTriggerTaskSkip_AIStaticsSkip : public UTriggerTaskSkipInformationBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Cerate new operation to skip the trigger task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UTriggerTaskSkip_AIStaticsSkip* AIStaticsSkip(UObject* AIStatic, UObject* TargetTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

};

/*
* Skip the trigger task by the confined the skip conditions in the target trigger task
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo")
class TRIGGERRUNTIME_API UTriggerTaskSkip_SkipConditions : public UTriggerTaskSkipInformationBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Cerate new operation to skip the trigger task by the Skip Conditions in the trigger task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UTriggerTaskSkip_SkipConditions* SkipConditions(UObject* TargetTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

};
