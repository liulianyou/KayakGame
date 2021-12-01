#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/9
* Purpose:		This reset style is just forward to the target trigger task's reset function
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "TriggerResetStyleBase.h"
#include "TriggerTaskBase.h"

#include "TRS_ForwardTaskToReset.generated.h"

UCLASS(BlueprintType, Blueprintable, editinlinenew, Category = "TriggerRuntime", meta = (DisplayName = "ForwardTaskToReset"))
class TRIGGERRUNTIME_API UTRS_ForwardTaskToReset : public UTriggerResetStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerResetStyleBase
	virtual void Execute() override;
	//Override UTriggerResetStyleBase

public:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:

	/*
	* The target object should be trigger task base
	*/
	virtual void Reset(UObject* Target) override;


public:

	
	/*
	* The reset type for target task to invoke
	* This value should never be Customize or will cause infinite loop
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ETriggerTaskResetType ResetType;

};
