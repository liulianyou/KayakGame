#pragma once


/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the game over is successful by check weather the target actor have overlap this trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverSuccessBase.h"

#include "CheckGameOverSuccess_ActorOverlap.generated.h"

class AActor;
class UCheckActorOverlaped;

//Just overlap actor overlap condition
UCLASS(Blueprintable, BlueprintType)
class EVALUATOR_API UCheckGameOverSuccess_ActorOverlap : public UCheckGameOverBase
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

public:

	UFUNCTION()
	void OnOverlapEventCallback(UEvaluatorBase* Evaluator, bool EvaluatorResult);

private:
	void GetOverlapingActorArrayData(TArray<AActor*>& OverlapingActor);

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category = "TriggerRuntime")
	UCheckActorOverlaped* OverlapEvent;

private:
};