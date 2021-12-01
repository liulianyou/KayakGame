#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	This file used to hold all tasks that is toggled by the trigger not only the collision trigger also the mission trigger
*/
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "TriggerStatics/TriggerStaticsTool.h"

#include "TriggerTaskManager.generated.h"

class APawn;
class AAIController;
class UTriggerTask;
class UTriggerManager;
class UTriggerTaskRunHelp;
class UTriggerTaskComponentBase;
class UTriggerEventRewardManager;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskRegisterEvent, UTriggerTaskBase*, TriggerTask);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskUnRegisterEvent, UTriggerTaskBase*, TriggerTask);

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|TriggerManager")
class TRIGGERRUNTIME_API UTriggerTaskManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	void Initialize(UTriggerManager* TriggerManager);

	/*
	* @param AsTemplate flag to check weather this new task should be one template
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerTaskBase* CreateNewTaskByClass(UTriggerTaskComponentBase* Owner, TSubclassOf<UTriggerTaskBase> Templete, bool AsTemplate);

	/*
	* @param AsTemplate flag to check weather this new task should be one template
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerTaskBase* CreateNewTaskByObject(UTriggerTaskComponentBase* Owner, UTriggerTaskBase* Templete, bool AsTemplate);


	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	void RegisterTask(UTriggerTaskBase* Task);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	void UnRegisterTask(UTriggerTaskBase* Task);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerManager* GetTriggerManager() { return TriggerManagerOwner; }

	TArray<UTriggerTaskBase*>& GetTriggerTasks() { return TriggerTasks; }

	FTriggerStaticsTool* GetTriggerStaticsTool();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerTaskRunHelp* GetTriggerTaskRunHelp();

	/*
	* Get the reward manager instance to operate all rewards in the trigger event system
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|TriggerManager")
	UTriggerEventRewardManager* GetRewardManager();

protected:
	UTriggerEventRewardManager* CreateNewRewardManager();

public:
	/*
	* The delegate to inspect all trigger task when they register to this manager
	*/
	UPROPERTY(BlueprintAssignable)
	FTaskRegisterEvent TaskRegisterEvent;

	/*
	* The delegate to inspect all trigger task when they register to this manager
	*/
	UPROPERTY(BlueprintAssignable)
	FTaskRegisterEvent TaskUnRegisterEvent;
private:

	TArray<UTriggerTaskBase*> TriggerTasks;

	//The Tool to do all statics in my trigger system
	FTriggerStaticsTool* TriggerStaticsToolInstance;

	//The owner who own this task manager
	UTriggerManager* TriggerManagerOwner;

	//Help class to hold the runtime information of trigger task
	UPROPERTY()
	UTriggerTaskRunHelp* TriggerTaskRunHelp;

	/*
	* The instance of reward manager which will be used manager all rewards in the trigger event system.
	*/
	UPROPERTY()
	UTriggerEventRewardManager* RewardManager;

};