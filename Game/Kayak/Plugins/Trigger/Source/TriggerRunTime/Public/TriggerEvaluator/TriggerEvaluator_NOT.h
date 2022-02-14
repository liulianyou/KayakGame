#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/2
* Purpose:	operation like ! which work when all children condition is false
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Evaluator_NOT.h"

#include "TriggerEvaluator_NOT.generated.h"

class UEvaluatorOperation;
class UEvaluatorCondition;

/*
* This operation only work when its child is false
*/
UCLASS(hidedropdown)
class TRIGGERRUNTIME_API UTriggerEvaluator_NOT : public UEvaluator_NOT
{
	GENERATED_UCLASS_BODY()
};

