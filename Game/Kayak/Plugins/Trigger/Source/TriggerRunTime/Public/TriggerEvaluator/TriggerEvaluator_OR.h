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

#include "TriggerEvaluator_OR.generated.h"

/*
* The operation just like ||, which means one of the sub triggers toggled the condition,
* than they can notify or affect other triggers
*/
UCLASS( BlueprintType, meta = (DisplayName = "OR"))
class TRIGGERRUNTIME_API UTriggerEvaluator_OR : public UEvaluatorOperation
{
	GENERATED_UCLASS_BODY()

public:

	virtual bool NativeEvaluator() override;

protected:

	//Check weather the cashed value have been passed
	bool IsPassed() const;

};