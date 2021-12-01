#pragma once
/*
* Author:		Liulianyou
* Time:			2021/1/25
* Purpose:		The controller to access to the octree of the trigger
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SharedPointer.h"

#include "TriggerOctree.h"

#include "TriggerOctreeControllerBase.generated.h"

class UTriggerTaskComponentBase;

//Base class to control the Octree of trigger, I will use it as one usage for the TriggerOctree
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerOctreeControllerBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Get all Triggers which is inside the target box
	* 
	* @param Original	the origin of the box, World coordinate
	* @param BoxExtend	the extend of the box, World coordinate
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void GetAllTriggersInsideBox( UPARAM(ref) TArray<UObject*>& TriggerDatas, FVector Original, FVector BoxExtend);

	/*
	* Get all tasks in target box.
	* 
	* @param Original	the origin of the box, World coordinate
	* @param BoxExtend	the extend of the box, World coordinate
	* 
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void GetAllTriggerTasksInSideBox(UPARAM(ref) TArray<UTriggerTaskBase*> TriggerTasks, FVector Original, FVector BoxExtend);

	/*
	* Find all trigger task components with the target unique ID.
	* Notice: When you run on the editor or split screen mode then the same ID maybe have several components which is stands for the Server, Client, Editor.
	*		  So when you want to use these components you maybe need to check weather the components is at the same world of the invoker, or some any other filters
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime")
	void GetAllTriggerComponentsByID(UPARAM(ref) TArray<UTriggerTaskComponentBase*>& OutComponents, const FGuid& ID);

public:

	//Construct new octree data for this controller
	virtual void ConstructOctreeData();

	void GetOctreeElementsFormBox(TArray<FTriggerOctreeElement>& Elements,  FVector Origin, FVector BoxExtend);
	void GetOctreeElementsFromTriggerData(TScriptInterface<ITriggerInterface> TriggerData, TArray<FTriggerOctreeElement>& Elements);
	
	//Get the OctreeElementId from the trigger data in the target Octree
	FOctreeElementId2 GetOctreeElementIDFromTriggerData(TScriptInterface<ITriggerInterface> TriggerData);


public:

	TSharedPtr<FTriggerOctree, ESPMode::ThreadSafe> GetTriggerOctreeData() {return TriggerOctree;}

private:

	//Data that this controller will control
	TSharedPtr<FTriggerOctree, ESPMode::ThreadSafe> TriggerOctree;
};

