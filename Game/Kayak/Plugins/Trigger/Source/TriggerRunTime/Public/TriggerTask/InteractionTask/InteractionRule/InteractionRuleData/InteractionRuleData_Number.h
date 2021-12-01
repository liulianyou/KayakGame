#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/15
* Purpose:	This is the base class for the data which will used in the interaction rule.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "InteractionRuleData/InteractionRuleDataBase.h"

#include "InteractionRuleData_Number.generated.h"

UCLASS(Blueprinttype, Blueprintable)
class TRIGGERRUNTIME_API UInteractionRuleData_Number : public UInteractionRuleDataBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void PostInitProperties() override;

	virtual void Reset() override;
	virtual bool IsProcessing() override;

	UFUNCTION(BlueprintCallable)
	float GetCurrentValue() { return CurrentValue; }
	void SetCurrentValue(float value) { CurrentValue = value; }

public:
	
	/*
	* The max value this data support 
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MaxValue;

	/*
	* we config in the details panel  and this value stands for the start value 
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float Value = 0.0f;

private:

	//The current value for this data
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess = "True"))
	float CurrentValue = 0.0f;
};