#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/16
* Purpose:	repeat with the specific number
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerRepeatConditionBase.h"
#include "TriggerTaskBase.h"
#include "FTriggerTask.h"

#include "CheckTaskRepeatWithNum.generated.h"

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FRepeatTaskStateData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTriggerTask TriggerTask;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ETriggerTaskState State;

	//The max repeat count, -1 means infinite
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int MaxCount = -1;

	//The start value to increase to MaxCount
	//UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int CurrentCount = 0;
};


UCLASS(BlueprintType, Blueprintable)
class TRIGGERRUNTIME_API UCheckTaskRepeatWithNum : public UTriggerTaskRepeatCondtionBase
{
	GENERATED_UCLASS_BODY()

public:
#if WITH_EDITOR
		virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#endif

public:
	//Override Evaluator Base
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	virtual void PostLoad() override;
	virtual void PostInitProperties() override;
	//Override UObject

	//Override TriggerTaskRepeatCondtionBase
	virtual int GetRepeatCount_Implementation() override;
	//Override TriggerTaskRepeatCondtionBase

public:

	//Initialize local members which is different form the Native Initialize.
	//As this function only focused on the class members value. and it is only called when we want to create default object
	virtual void InitializeLocalMember( void* Data);

public:
	UFUNCTION()
	void RegisterToTaskEvent(UTriggerTaskBase* Task);
public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
	FRepeatTaskStateData RepeatTaskData;
};