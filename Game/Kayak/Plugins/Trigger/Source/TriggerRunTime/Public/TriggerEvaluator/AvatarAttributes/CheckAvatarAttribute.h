#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/31
* Purpose:	This condition will check the attributes on the target avatar
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AttributeSet.h"
#include "EvaluatorCondition.h"

#include "CheckAvatarAttribute.generated.h"

class UAvatarAccessRuleBase;
class UAvatarInspectedDataBase;

UCLASS(BlueprintType, Blueprintable)
class TRIGGERRUNTIME_API UCheckAvatarAttribute : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:

	//Override Evaluator Base
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	UFUNCTION(BlueprintCallable)
	UAvatarAccessRuleBase* GetAvatorAccessRule() const { return AvatorAccessRule; }

	/*
	* Get All avatars that this condition need to inspect,
	* This function only get avatars at current time, the new created avatar will not included
	*/
	UFUNCTION(BlueprintCallable)
	void GetAvatars(TArray<UObject*>& Avatars) const;

public:

	void NotifiedByDataWhenContentChanged();

public:

	/*
	* How to get the avatars
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	UAvatarAccessRuleBase* AvatorAccessRule = nullptr;

	/*
	* The attribute data that this condition need to inspect.
	* This condition can pass only when all the data below meet the target condition
	* When there is no data then this condition will always pass
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
	TArray<UAvatarInspectedDataBase*> InspectedDatas;
};
