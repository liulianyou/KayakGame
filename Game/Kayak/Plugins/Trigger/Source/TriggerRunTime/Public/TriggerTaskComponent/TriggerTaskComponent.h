#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/6
* Purpose:	Manager all the tasks which will be opened by the triggers.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskComponentBase.h"

#include "TriggerTaskComponent.generated.h"

class ANewTriggerBase;

/*
* Trigger task component used to manager the task triggered by trigger.
* You can treat it as task dispatcher
*/
UCLASS(BlueprintType,Blueprintable, meta = (DisplayName = "SceneTriggerTaskComponent", BlueprintSpawnableComponent))
class TRIGGERRUNTIME_API UTriggerTaskComponent : public UTriggerTaskComponentBase
{
	GENERATED_UCLASS_BODY()
	
#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent) override;
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#endif

public:

	//Override Object
	virtual void PostLoad() override;
	virtual void Serialize(FArchive& Ar) override;
	//Override Object

	//Override ActorComponent
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
	//Override ActorComponent

	//Override UTriggerTaskComponentBase
	virtual void RegisterTaskComponent() override;
	//Override UTriggerTaskComponentBase


protected:
	UE_DEPRECATED(4.26, "This function will be remove at the feature as it only move the old data to new data!!")
	void PopulateOldDataToNewData();

public:

	UE_DEPRECATED(4.26, "Please replace ChildNodes with ChildNodeInfos, As it will be removed at feature!!")
	UPROPERTY()
	TArray<ANewTriggerBase*> ChildNodes;

	UE_DEPRECATED(4.26, "Please replace ParentNodes with ParentNodeInfos, As it will be removed at feature!!")
	UPROPERTY()
	TArray<ANewTriggerBase*>ParentNodes;
};
