#pragma once

/*
* Author:		Liulianyou
* Time:			2020/9/8
* Purpose:		This condition will evaluator how many AI have been killed in target trigger task.
*				If the the killed number is larger then the specified number then pass this evaluator
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"
#include "TriggerTaskBase.h"

#include "FTriggerTask.h"

#include "CheckKilledNumberOfAIInTargetTask.generated.h"

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FKilledAIData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTriggerTask TriggerTask;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int KilledNumber;

	//Flag to check weather this condition have meet
	bool HasMeedtCondition = false;

	friend bool operator==(const FKilledAIData& Left, const FKilledAIData& Right);

};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckKilledNumberOfAIInTargetTask : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	//Override Evaluator Base
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	virtual void BeginDestroy() override;
	//Override Evaluator Base

	//Override UObject
	virtual void PostLoad() override;
	//Override UObject

public:
	void OnNewActorSpawned(AActor* Actor);
	void OnActorDestoryCallback(AActor* Actor);
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FKilledAIData> TaskDatas;

private:
	
	/*
	* Hold all handles to inspect all AIdead event
	*/
	TMap<AActor*, FDelegateHandle> AIDeadDelegateHandles;

};
