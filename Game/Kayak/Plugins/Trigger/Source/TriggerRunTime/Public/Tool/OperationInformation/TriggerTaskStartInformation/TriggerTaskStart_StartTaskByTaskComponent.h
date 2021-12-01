#pragma once

/*
* Author:		Liulianyou
* Time :		2020/5/31
* Purpose :		This information will be generated when the task is started by the task component directly.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStartInformationBase.h"

#include "TriggerTaskStart_StartTaskByTaskComponent.generated.h"

class UTriggerTaskComponentBase;

UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerTaskStart_StartTaskByTaskComponent : public UTriggerTaskStartInformationBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UTriggerTaskStartInformationBase
	AActor* GetToggledActor_Implementation() const override;
	//Override UTriggerTaskStartInformationBase

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void SetTaskComponent(UTriggerTaskComponentBase* TC);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	UTriggerTaskComponentBase* GetTaskComponent() const;

private:
	
	//The task component which try to start task.
	UTriggerTaskComponentBase* TaskComponent;
};
