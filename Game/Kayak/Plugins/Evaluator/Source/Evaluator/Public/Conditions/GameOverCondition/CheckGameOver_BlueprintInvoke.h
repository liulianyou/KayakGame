#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/28
* Purpose:	This condition check weather one player have exist this game manually
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOver_BlueprintInvoke.generated.h"

/*
* This class only used to create game over condition dynamically
*/
UCLASS()
class EVALUATOR_API UCheckGameOver_BlueprintInvoke : public UCheckGameOverBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override EvaluatorBase
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	//Override EvaluatorBase

};