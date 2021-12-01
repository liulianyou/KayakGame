#pragma once

/*
* Author:	Liulianyou
* Time:		2020/11/27
* Purpose:	This is the condition to check weather all the tasks in the target trigger have completely finished
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"


#include "EvaluatorCondition.h"

#include "CheckAllTasksInTriggerCompleteFinished.generated.h"

class ANewTriggerBase;

/*
* Check weather all task in the target trigger have completely finished.
*/
UCLASS(Blueprintable, BlueprintType)
class UCheckAllTasksInTriggerCompleteFinished : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:

	//Override Evaluator Base
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

public:
	
	UFUNCTION()
	void OnTaskStateChanged(UTriggerTaskBase* Task);

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TArray<ANewTriggerBase*> Triggers;
};