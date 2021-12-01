#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/11
* Purpose:	The operations which is used describe how to reset the target task
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskResetInformationBase.h"

#include "TriggerTaskResetCommonOperationInfos.generated.h"


/*
* This reset operation which is occured at check point
*/
UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|OperationInfo", meta = (DisplayName = "CommonReset"))
class TRIGGERRUNTIME_API UTriggerTaskReset_CommonReset : public UTriggerTaskResetInformationBase
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Cerate new operation to reset the trigger task
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Operations", meta = (AdvancedDisplay = 2))
	static UTriggerTaskReset_CommonReset* CommonReset(ETriggerTaskResetType InResetType, UObject* Owner, UObject* TargetTask, UOperationInformationBase* ParentOperation = nullptr, UTriggerStyleBase* OperationStyle = nullptr);

};
