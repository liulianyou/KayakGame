#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/10
* Purpose:	The base data for evaluator, so that the evaluator can process external data.
*			It is a supplement for Evaluator, so that we can customize the evaluator implementation when the evaluator is failed.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorDataBase.generated.h"

class UEvaluatorBase;

UENUM(BlueprintType)
enum class EExternalDataResult : uint8
{
	EExternalDataResult_Faild	UMETA(DisplayName = "Faild"),
	EExternalDataResult_Success	UMETA(DisplayName = "Success"),
	EExternalDataResult_Ignore	UMETA(DisplayName = "Ignore"),
};


UCLASS(Abstract, Blueprintable, BlueprintType, Within = EvaluatorBase)
class TRIGGERRUNTIME_API UEvaluatorDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Determine weather the target evaluator success or failed
	UFUNCTION(BlueprintNativeEvent, Category="EvaluatorData")
	EExternalDataResult CheckEvaluator(UEvaluatorBase* Evaluator);


	UFUNCTION(BlueprintNativeEvent, Category="EvaluatorData")
	void Reset();
};
