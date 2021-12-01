#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/25
* Purpose:	This is the cancel contribution which will remove the last contributions in the Interaction rule.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h"

#include "CancleContribution.generated.h"

UCLASS(BlueprintType, Blueprintable)
class TRIGGERRUNTIME_API UCancleContribution : public UContributeRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override ContributeRuleBase
	virtual bool Execute(float DeltaTime) override;
	virtual void AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask) override;
	//Override ContributeRuleBase

public:
	
	UFUNCTION(BlueprintCallable, Category = "InteractionContributor")
	int GetActualRemoveCount(){ return RuntimeRemoveCount; }

	UFUNCTION(BlueprintCallable, Category = "InteractionContributor")
	void SetActualRemoveCount( int Value ){ RuntimeRemoveCount = Value; }

public:

	/*
	* the number that this contribution will remove the contributions in the InteractionRule.
	* -1 means remove all contributions of the Actor in the InteractionRule
	* 0 means this cancel contribution will no affect the interaction rule
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export )
	int RemoveLastContributionCount;

private:
	/*
	* The actual remove count at runtime
	* This value maybe different from RemoveLastContributionCount, as RemoveLastContributionCount is just a confined value, which will never be changed
	*/
	int RuntimeRemoveCount;

};