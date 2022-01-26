#pragma once

/*
* Author:		Liulianyou
* Time:			2020/9/8
* Purpose:		This condition will evaluator weather all tasks in its member is in the target state
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskRelationshipInterface.h"

#include "FTriggerTask.h"

#include "CheckTaskState.generated.h"

class UTriggerTaskBase;



USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTaskStateData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTriggerTask TriggerTask;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ETriggerTaskState State;

	//Flag to check weather this condition have meet
	bool HasMeedtCondition = false;

	friend bool operator==(const FTaskStateData& Left, const FTaskStateData& Right);

};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckTaskState : public UEvaluatorCondition, public ITriggerTaskRelationshipInterface
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Add new task data to the pool
	* 
	* #return the index for new added task data in the pool
	*/
	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	int AddTaskData(FTaskStateData& TaskData);

	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	void RemoveTaskData(FTaskStateData& TaskData);

	/*
	* Get the target trigger task which this condition inspect.
	* 
	* @param Index the index in the task state data.
	* 
	* #return  if the target task data do not contain trigger task then I will try to get the immediate trigger task which own this object
	*/
	UFUNCTION(BlueprintCallable, Category = "Evaluator")
	UTriggerTaskBase* GetTriggerTask( int Index );

	//Override Evaluator Base
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	virtual void PostLoad() override;
	//Override UObject


	UFUNCTION()
	void RegisterToTaskEvent(UTriggerTaskBase* Task);

	/*
	* Make sure all trigger task in the TaskDatas have valid value
	*/
	void PopulateTriggerTaskData();


public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FTaskStateData> TaskDatas;

};
