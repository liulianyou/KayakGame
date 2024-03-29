#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/2
* Purpose:	When one of triggers toggle the "successed" condition, than they can notify or affect other triggers
*			
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorOperation.h"

#include "Evaluator_OR.generated.h"

/*
* The operation just like ||, which means one of the sub triggers toggled the condition,
* than they can notify or affect other triggers
*/
UCLASS( BlueprintType, meta = (DisplayName = "OR"))
class EVALUATOR_API UEvaluator_OR : public UEvaluatorOperation
{
	GENERATED_UCLASS_BODY()

public:

	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;

protected:

	//Check weather the cashed value have been passed
	bool IsPassed() const;

};