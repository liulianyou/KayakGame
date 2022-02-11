#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/2
* Purpose:	operation like ! which work when all children condition is false
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorOperation.h"

#include "Evaluator_NOT.generated.h"

class UEvaluatorOperation;
class UEvaluatorCondition;

/*
* This operation only work when its child is false
*/
UCLASS( BlueprintType, meta = (DisplayName = "NOT"))
class EVALUATOR_API UEvaluator_NOT : public UEvaluatorOperation
{
	GENERATED_UCLASS_BODY()
public:

	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;

protected:
	//Check weather the cashed value have been passed
	bool IsPassed() const;

};

