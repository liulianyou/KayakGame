#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/23
* Purpose:	This class defines how the interaction rule runs
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ContributeRuleBase.generated.h"


class AActor;
class UTriggerTaskBase;
class UTriggerNetPlayerSupportComponent;

/*
* Base class to define how the interaction rule act
*/
UCLASS(BlueprintType, Blueprintable, Abstract, editinlinenew, DefaultToInstanced)
class TRIGGERRUNTIME_API UContributeRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Each time this contribution execute successfully I will call this BP function
	UFUNCTION(BlueprintImplementableEvent)
	void OnExecute(float DeltaTime);

	virtual bool Execute(float DeltaTime);

	/*
	* Add this contribute to the remote.
	*
	* @param NPSC				which channel it will be applied
	* @param InteractionTask	The task which this contributor will be applied to
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnAddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask);
	virtual void AddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask);

public:

	UPROPERTY(BlueprintReadWrite)
	AActor* Contributor;

	//True means when this contribute rule add to the Interaction rule it will execute automatically
	UPROPERTY(BlueprintReadWrite)
	bool CanExecutedWhenAdded;

	/*
	* Flag to check weather this rule will be execute in the tick function
	* This flag is just used as a suggestion for the interaction rule, 
	* the final result should be determined by the interaction rule. UInteractionRuleBase::CanTickContributor
	*/
	UPROPERTY(BlueprintReadWrite)
	bool CanEverTick;

	//The gradual time that this rule will be executed in the tick function
	UPROPERTY(BlueprintReadWrite, meta = (ClampMin =0.0f))
	float TickGradualTime;

	/*
	* Flag to check weather this contributor need to check the game play ability.
	* If the interaction have set one game play ability to extend some implementations,
	* And this value is true, when the player add this contributor to the interaction task, 
	* The interaction task will try to active the game play ability to do some external implementations
	*/
	UPROPERTY(BlueprintReadWrite)
	bool NeedToCheckGamePlayAbility = true;

private:

	//Transient value to inspect how many time this contribution go through;It is used to bind with TickGradualTime
	float TickTime;
};
