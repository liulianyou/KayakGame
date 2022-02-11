#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/7
* Purpose:	This is the base class for all condition for the evaluator.
*			Condition is the actual game logic algorithm.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorBase.h"

#include "EvaluatorCondition.generated.h"


UCLASS(BlueprintType, Blueprintable, Abstract)
class EVALUATOR_API UEvaluatorCondition : public UEvaluatorBase
{
	GENERATED_UCLASS_BODY()
};
