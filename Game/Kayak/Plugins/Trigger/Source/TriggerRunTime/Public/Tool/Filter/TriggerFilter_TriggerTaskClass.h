#pragma once

/*
* Author:	Liulianyou
* Time:		2021/4/12
* Purpose:	This filter used to filter the class of the target trigger task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "TriggerFilterBase.h"
#include "TriggerTaskBase.h"

#include "TriggerFilter_TriggerTaskClass.generated.h"

UCLASS(BlueprintType, Blueprintable, DefaultToInstanced, editinlinenew)
class TRIGGERRUNTIME_API UTF_TriggerTaskClass : public UTriggerFilterBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual bool NativePass() const override;
	virtual void NativeReset() override;

	/*
	* The class of the trigger task which will used to match the data. 
	* If this value has not been specified then it means all trigger task can pass this filter
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime")
	TArray<TSubclassOf<UTriggerTaskBase>> TriggerTaskClasses;
};
