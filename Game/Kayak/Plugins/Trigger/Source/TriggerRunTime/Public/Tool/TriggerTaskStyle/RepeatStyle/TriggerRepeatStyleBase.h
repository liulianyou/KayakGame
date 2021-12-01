#pragma once

/*
* Author:		Liulianyou
* Time:			2021/5/10
* Purpose:		This the base class to identify how to repeat some thing
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerStyleBase.h"

#include "TriggerRepeatStyleBase.generated.h"

UCLASS(Abstract, DefaultToInstanced, editinlinenew)
class TRIGGERRUNTIME_API UTriggerRepeatStyleBase : public UTriggerStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerStyleBase
	virtual void Execute() override;
	//Override UTriggerStyleBase

	/*
	* Try to repeat target object
	* 
	* #return false means this repeat style do not process target object, and the target object need to define the repeat behavior by itself
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "TriggerTaskRepeatCondition")
	bool TryToRepeat(UObject* Object);
};