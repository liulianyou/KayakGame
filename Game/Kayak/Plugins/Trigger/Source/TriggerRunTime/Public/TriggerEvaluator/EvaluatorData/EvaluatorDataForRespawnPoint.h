#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/10
* Purpose:	This data only used for evaluator to check weather the target respawn point can be used to spawn new pawn
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorDataBase.h"

#include "EvaluatorDataForRespawnPoint.generated.h"

class APawn;

UCLASS(BlueprintType)
class TRIGGERRUNTIME_API UED_RespawnPoint : public UEvaluatorDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override EvaluatorDataBase
	virtual EExternalDataResult CheckEvaluator_Implementation(UEvaluatorBase* Evaluator);
	virtual void Reset_Implementation();
	//Override EvaluatorDataBase

	void SetPawnInfo(APawn* PawnInfo);

private:

	APawn* Pawn = nullptr;
};

