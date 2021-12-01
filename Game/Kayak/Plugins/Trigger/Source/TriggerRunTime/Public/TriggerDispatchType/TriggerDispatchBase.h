#pragma once
/*
* Author:	Liulianyou
* Time:		2020/7/13
* Purpose:	Customize the order to dispatch all triggers or tasks
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDispatchBase.generated.h"

UCLASS( BlueprintType, Blueprintable, hidedropdown, hideCategories = "Object, Active, Mobility", meta = (DisplayName = "Trigger Dispatch Style") )
class TRIGGERRUNTIME_API UTriggerDispatchBase : public UObject
{
	GENERATED_UCLASS_BODY()
public:

	/*
	* Start to run triggers or tasks
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "GaiaTrigger|Dispatch")
	bool Dispatch( );
	

};