#pragma once

/*
* Time:		2021/6/17
* Author:	Liulianyou
* Purpose:	This the help file to run the target trigger task in the target component
*/
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"

#include "TriggerTaskRunHelp.generated.h"

class UTriggerTaskBase;
class UTriggerTaskComponentBase;

UCLASS(BlueprintType, Blueprintable)
class UTriggerTaskRunHelp : public UObject
{
	
	GENERATED_UCLASS_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void InitializeTriggerTaskRunHelp();

	/*
	* Run the target trigger task in the target component, this function should be used all the point is exist at current map
	* 
	* @param SenderComponent	The component who rise up this action to notify the task in target component to run
	* @param TargetComponent	The component who will run the target task in it
	* @param SenderTask			which task in the sender component to rise up this action
	* @param TargetTask			which task will be run, if it is null then all tasks in the target component will run
	* @param ExternalData		Data to describe how this action occurred
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContent"))
	void RunTriggerTask( UTriggerTaskComponentBase* SenderComponent, UTriggerTaskBase* SenderTask, 
						UTriggerTaskComponentBase* TargetComponent, UTriggerTaskBase* TargetTask,
						UOperationInformationBase* StartOperationInfo);

	/*
	* Run the target trigger task in the target component, this function should be used all the point is exist at current map
	*
	* @param SenderComponent	The component who rise up this action to notify the task in target component to run
	* @param TargetComponent	The component who will run the target task in it
	* @param SenderTaskIndex	which task in the sender component to rise up this action
	* @param TargetTaskIndex	which task will be run, if it is null then all tasks in the target component will run
	* @param ExternalData		Data to describe how this action occurred
	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContent"))
	void RunTriggerTaskByTaskIndex(	UTriggerTaskComponentBase* SenderComponent, int SenderTaskIndex, 
									UTriggerTaskComponentBase* ResourceComponent, int TargetTaskIndex,
									UOperationInformationBase* StartOperationInfo);

	/*
	* Run the target trigger task in the target component, this function can be used when the map of the component(Sender/Target) have no been loaded
	*
	* @param SendMapAssetPath		The path which the send map at
	* @param SendMapName			Which map the sender component at
	* @param SenderComponentID		The ID of component who rise up this action to notify the task in target component to run
	* @param ResourceComponentID	The component who will run the target task in it
	* @param TargetMapAssetPath		The path which the target map at
	* @param TargetMapName			which map the target component at
	* @param SenderTaskID			The ID of which task in the sender component to rise up this action
	* @param TargetTaskID			The ID of which task will be run, if it is empty then all tasks in the target component will run
	* @param ExternalData			Data to describe how this action occurred

	*/
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContent"))
	void RunTriggerTaskByID( const FString& SendMapAssetPath, const FString& SendMapName, const FGuid& SenderComponentID, const FGuid& SenderTaskID, 
							 const FString& TargetMapAssetPath, const FString& TargetMapName, const FGuid& TargetComponentID, const FGuid& TargetTaskID,
							 const UOperationInformationBase* StartOperationInfo);

	UFUNCTION(BlueprintCallable)
	void RunTriggerTaskWithRuntimeInfo(const FTriggerTaskRuntimeInfo& RuntimeInfo);

	/*
	* Try to remove all PendingRuntime information which contain the ID
	*/
	UFUNCTION(BlueprintCallable)
	void TryToRemovePendingRuntimeInfo( FGuid ID );

protected:

	struct FPendingTriggerTaskRuntimeInfo
	{
		FTriggerTaskRuntimeInfo RuntimeInfo;

		//Flag to check weather the map which contain the sender component has been loaded
		bool SendComponentMapLoaded = false;

		//Flag to check weather the map which contain the target component has been loaded
		bool TargetComponentMapLoaded = false;
	};

	//Check weather all the send map and target map have been loaded
	bool TriggerMapHaseBeenLoaded(FPendingTriggerTaskRuntimeInfo& RntimeInfo);

	UFUNCTION()
	void NewMapLoaded(FString MapName);

	void WorldTearDownCallback(UWorld* World);

private:
	void RunTriggerTaskInternal(const FTriggerTaskRuntimeInfo& RuntimeInfo);

private:

	//The internal object which is used to inspect when the map which contain the related component is loaded
	FTriggerMapLoaded TriggerMapLoad;

	//The pending runtime informations, these information will be executed when the related map have been loaded
	TArray<FPendingTriggerTaskRuntimeInfo> PendingTriggerRuntimeInfos;
};