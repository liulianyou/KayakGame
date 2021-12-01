#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/8
* Purpose:		Record the trigger task information.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Record/TriggerRecordBase.h"

#include "TR_TriggerTask.generated.h"

class UTriggerTaskBase;

/*
* Hold the information for current record
*/
USTRUCT(BlueprintType)
struct FRecordTaskInformation
{
	GENERATED_BODY()

public:
	virtual ~FRecordTaskInformation() { 
		TriggerTasks.Empty(); 
	}

public:

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	FRecordInstigatorInfo InstigatorInfo;

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	TArray<UTriggerTaskBase*> TriggerTasks;

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	EEndRecordType EndType;

public:
	virtual bool CanAddNewTriggerTask(UTriggerTaskBase* TriggerTask);
};


UCLASS(BlueprintType, Blueprintable, abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTR_TriggerTask : public UTriggerRecordBase
{
	GENERATED_UCLASS_BODY()


public:
	//Override TriggerRecordBase
	virtual void Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo) override;
	virtual void StartRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo) override;
	virtual void EndRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType) override;
	//Override TriggerRecordBase

public:
	void OnTriggerTaskState(UTriggerTaskBase* InstanecTask);

protected:
	//Check weather the target task is valid
	virtual bool IsTaskValid(UTriggerTaskBase* Task);

	void AddNewRecoredTask(UTriggerTaskBase* Task);
public:
	
	/*
	* #return INDEX_NONE means this InstigatorInfo is not existed
	*/
	int GetRecordInfoIndex(const FRecordInstigatorInfo& InstigatorInfo);
	/*
	* #return the new index for the new record information 
	*/
	int AddNewRecordInfo(const FRecordInstigatorInfo& InstigatorInfo);

	UPROPERTY(BlueprintReadOnly, Category = "Record")
	TArray<FRecordTaskInformation> Informations;
};

