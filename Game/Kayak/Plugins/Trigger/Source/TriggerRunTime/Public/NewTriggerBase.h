// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TriggerInterface.h"
#include "GameFramework/Actor.h"

#include "TriggerDefinition.h"

#include "NewTriggerBase.generated.h"

class UTriggerManager;
class UTriggerTaskComponentBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskRunningStateSignature, UTriggerTaskBase*, Target);


/*
* This Trigger is not the same as the Engine Trigger class which root component is ShapeComponent,
* This class used to make the Designer to group some items in Blueprint Class
*/
UCLASS(BlueprintType, Category="TriggerRuntime")
class TRIGGERRUNTIME_API ANewTriggerBase : public AActor, public ITriggerInterface
{
    GENERATED_UCLASS_BODY()

public:

	virtual void PostInitializeComponents() override;
	virtual void PostInitProperties() override;
	virtual void PostActorCreated() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:

	//Override TriggerInterface Begin
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const override;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool GetUniqueRuntimeID(int& OutID) const override;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual void GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const override;

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual UTriggerTaskComponentBase* AddTriggerTaskComponent(UTriggerTaskComponentBase* TriggerTaskComponent) override;

	/*
	* Remove all components which ID is equal to the component ID,
	* If the target component is the root component then I will pick up another trigger task component as root component,
	* If there is not another trigger task component then just remove the root component
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent = false) override;

	/*
	* Duplicate a new trigger of this trigger to the target level.
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual TScriptInterface<ITriggerInterface> DuplicateTrigger(ULevel* TargetLevel = nullptr) override;

	//Check weather this trigger can be toggled
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	virtual bool CanbeToggled() const;
	//Override TriggerInterface End

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

	//Try to register this trigger to trigger manager and sub tasks to task manager
	void TryToRegister();

	//Internal to remove trigger task component
	bool RemoveTriggerTaskComponentInternal(USceneComponent* ParentComponent, bool IncludeChildrenComponent = false);

#if WITH_EDITOR
	/*
	* Event to check weather this trigger is selected in Editor
	*/
	void SelectedInEditor( UObject* SelectedObject );
	void SelectedChangeInEditor(UObject* SelectedObject);

	////When in the editor we change the map level I need do some thing
	//void OnChangeMap(uint32 Flag);
	////Callback when new level added to this world
	//void OnNewLevelAddToWorld(ULevel*, UWorld*);

#endif

public:
	UFUNCTION()
	virtual void TaskRunStatusCheck(UTriggerTaskBase* Task );

	UPROPERTY(BlueprintAssignable)
	FTaskRunningStateSignature OnTaskRunning;

private:

	void RegisterChildTaskStateEvent(UTriggerTaskBase* Task);
	void RemoveChildTaskStateEvent(UTriggerTaskBase* Task = nullptr);
	void RemoveAllChildTaskStateEvent();

	UPROPERTY()
	TArray<UTriggerTaskBase*> RegistedStateEventTasks;

public:

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	UTriggerManager* GetTriggerManager();

	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	UTriggerTaskComponentBase* GetTriggerTaskComponent() { return TriggerTaskComponent; }

	//UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	const UTriggerTaskComponentBase* GetConstTriggerTaskComponent() const { return TriggerTaskComponent; }

	//Get the flag weather this trigger can be toggled repeatably
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	bool CanRepeat() const;

	//Get the flag weather this trigger has been toggled
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	bool HasBeenToggled();

	//Get the flag weather all task in this trigger have finished
	UFUNCTION(BlueprintCallable, Category = "TriggerRunTime")
	bool IsAllTaskInThisTriggerFinished() const;

public:

	//The main task component of this actor.
	UPROPERTY( BlueprintReadOnly, VisibleAnywhere, Category = "Task")
	UTriggerTaskComponentBase* TriggerTaskComponent;

	//Flag to check weather this trigger have been registered
	UPROPERTY(Transient)
	bool HasBeenRegisted = false;

};
