#pragma once

/*
* Author:		Liulianyou
* Time:			2020/8/26
* Purpose:		This contribution will notify the rule to add its condition.
*				But how to add is defined in the interaction rule
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ContributeRuleBase.h"

#include "AddContribution.generated.h"

UCLASS(BlueprintType, Blueprintable)
class TRIGGERRUNTIME_API UAddContribution : public UContributeRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override ContributeRuleBase
	virtual void AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask) override;
	//Override ContributeRuleBase

};
