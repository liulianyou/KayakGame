#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/2
* Purpose:	When all triggers toggle the "successed" condition, than they can notify or affect other triggers 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorOperation.h"

#include "TriggerEvaluator_AND.generated.h"


/*
* The operation just like &&, which means all the sub triggers toggled the condition,
* than they can notify or affect other triggers
*/
UCLASS( BlueprintType, meta = (DisplayName = "AND"))
class TRIGGERRUNTIME_API UTriggerEvaluator_AND : public UEvaluatorOperation
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override EvaluatorBase
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeReset() override;
	//Override EvaluatorBase

	//Override UObject
	virtual void BeginDestroy() override ;
	//Override UObject

protected:

	//Check weather the cashed value have been passed
	bool IsPassed() const;


};


