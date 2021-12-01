#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/13
* Purpose:	Customize the order to run a chain of tasks, 
*			such as if we have several thing to be run in one order, 
*			A should run after B, B will run before C, This class used to be the controller of the order
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"
#include "TriggerTask/TriggerTaskBase.h"

#include "DispatchBase.generated.h"

class UTriggerTaskComponent;
class UDispatchStrategyBase;

/*
* Dispatch 
*/
UCLASS( BlueprintType, Blueprintable, hidedropdown, hideCategories = "Object, Active, Mobility", meta = (DisplayName = "Trigger Dispatch Style") )
class TRIGGERRUNTIME_API UDispatchBase : public UObject
{
	GENERATED_UCLASS_BODY()
public:

	/*
	* Start to run triggers or tasks
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "GaiaTrigger|Dispatch")
	bool Dispatch();

	/*
	* virtual function for sub class to override.
	* If the BP have implementation the Dispatch function, I will just the BP implementation and ignore the native implementation.
	*/
	virtual bool NativeDispatch();

public:
	
	///*
	//* Add new task to the data so that we can process it
	//* If this task has already in the data pool I will ignore it
	//*/
	//void AddData(IGaiaEvaluatorInterface* NewData);

	///*
	//* Remove the trigger task in the data pool,
	//* If this task is not exist I will ignore it
	//*/
	//void RemoveData(IGaiaEvaluatorInterface* Data);


public:

	UPROPERTY()
	UDispatchStrategyBase* DispatchStrategy;


private:

	////The target task data that we need to process. and dispatch them as one order.
	//TArray<IGaiaEvaluatorInterface*> Data;

};