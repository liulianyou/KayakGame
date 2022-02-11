#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/16
* Purpose:	Try to check weather the target state of game mode have been reached
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"

#include "CheckGameModeState.generated.h"

class UTriggerGameModeDataBase;

UCLASS(Blueprintable, BlueprintType)
class EVALUATOR_API UCheckGameModeState : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	//Override Evaluator Base
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

	void NotifyedByInspectDataToEvaluate();

public:

	//The data that this condition need to inspect the game mode
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerRuntime")
	UTriggerGameModeDataBase* InspectData;

};
