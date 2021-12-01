#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/4
* Purpose:	This is the instance  of the evaluator, which means all class derived from this class will do actual game play logic conditions.
*			The class derived form this class is different form the TriggerEvaluator_AND,TriggerEvaluator_OR, TriggerEvaluator_IGNORE, as I teat them just 
*			as some operations
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorBase.h"

#include "TriggerEvaluatorInstanceBase.generated.h"


UCLASS(hidedropdown)
class
	UE_DEPRECATED(4.26, "This class will be removed in the feature as ther is no essential condition to add this conceput ")
	TRIGGERRUNTIME_API UTriggerEvaluatorIntanceBase : public UEvaluatorBase
{
	GENERATED_UCLASS_BODY()


public:

//#if WITH_EDITORONLY_DATA
//	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent);
//#endif

public:

	////Triggers that will be operated,
	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GaiaTrigger")
	//TArray<TScriptInterface<ITriggerInterface>> PreRequeset;

};
