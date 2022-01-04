#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the game is failed
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOverFailedBase.generated.h"

/*
* Abstract class to check weather the player is failed
*/
UCLASS(Abstract, Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOverFailedBase : public UCheckGameOverBase
{
	GENERATED_UCLASS_BODY()
};

/*
* This condition is used to wrap other condition so that the other module can treat it as failed
*/
UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOverFailed_ForwardCondition : public UCheckGameOverFailedBase
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
	void OnForwardConditionCallback(UEvaluatorBase* Evaluator, bool EvaluatorResult);

public:

	/*
	* The condition to check weather this game over condition is passed
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="ForwardCondition", meta=(ShowOnlyInnerProperties))
	UEvaluatorCondition* ForwardedCondition;
};
