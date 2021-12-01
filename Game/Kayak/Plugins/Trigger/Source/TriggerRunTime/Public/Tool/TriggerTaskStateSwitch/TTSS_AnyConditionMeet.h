#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/26
* Purpose:	If any of the conditions defined in this class meet, the trigger task will follow the defined switch style to switch to target state
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskStateSwitchBase.h"

#include "TTSS_AnyConditionMeet.generated.h"

class UTriggerTaskBase;
class UTriggerStyleBase;
class UEvaluatorOperation;

/*
* Used to describe when and how to change into target state automatically
*/
USTRUCT(BlueprintType)
struct FTriggerTaskStyleMap
{
	GENERATED_BODY()

	//Describe when to change state of trigger task
	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Category = "RuntimeCondition")
	UEvaluatorOperation* Condition = nullptr;

	//Describe how to change state of trigger task
	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Category = "RuntimeCondition")
	TArray<UTriggerStyleBase*> Styles;
};

UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "Any Condition Meet"))
class TRIGGERRUNTIME_API UTTSS_AnyConditionMeet : public UTriggerTaskStateSwitchBase
{
	GENERATED_UCLASS_BODY()

	//Override UTriggerDescriptorBase
public:
	virtual void Initialize(UTriggerTaskBase* Owner) override;
	virtual void StartEvaluator() override;
	virtual void EndEvaluator() override;
	virtual void SwitchState_Implementation() override;
	virtual void Reset_Implementation() override;
	virtual void AddNewConditionAndStyle_Implementation(UEvaluatorBase* Condition, UTriggerStyleBase* Style = nullptr, bool CondtionAndStyleMapped = false) override;
	virtual bool IsSwitchOn( ) const override;
	virtual void MarkEvaluateable_Implementation() override;
	virtual	void GetPassedCondition(TArray<UEvaluatorBase*>& Conditions, bool ContainOperators = false) const override;
	virtual	void GetAllConditions(TArray<UEvaluatorBase*>& Conditions) const override;
	virtual void GetAllStyles(TArray<UTriggerStyleBase*>& Styles) const override;
	virtual	void GetAllEvaluatorConditions(TArray<UEvaluatorCondition*>& Conditions) const override;
	virtual void GetPassedStyles(TArray<UTriggerStyleBase*>& Styles) const override;

private:
	virtual void Evaluator() override;
	//Override UTriggerDescriptorBase

protected:
	UFUNCTION()
	void OnCondtionContentChanged(UEvaluatorBase* Eval, bool EvaluatorResult);

public:
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	const TArray<FTriggerTaskStyleMap>& GetConstSwitches() const { return Switches; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	TArray<FTriggerTaskStyleMap>& GetSwitches() { return Switches; }
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Task")
	TArray<FTriggerTaskStyleMap> GetCopySwitches() const { return Switches; }

public:
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "RuntimeCondition"/*, meta = (AllowPrivateAccess = "true")*/)
	TArray<FTriggerTaskStyleMap> Switches;
};