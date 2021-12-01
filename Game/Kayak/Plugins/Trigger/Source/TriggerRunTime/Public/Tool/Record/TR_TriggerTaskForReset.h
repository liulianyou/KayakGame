#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/8
* Purpose:		This class will record the trigger task and try to reset these recored tasks
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Record/TR_TriggerTask.h"

#include "TR_TriggerTaskForReset.generated.h"

UCLASS(BlueprintType, Blueprintable, editinlinenew, Category = "TriggerRuntime|Record")
class TRIGGERRUNTIME_API UTR_TriggerTaskForReset : public UTR_TriggerTask
{
	GENERATED_UCLASS_BODY()

public:
	//Override TriggerRecordBase
	virtual void Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo) override;
	//Override TriggerRecordBase
};

