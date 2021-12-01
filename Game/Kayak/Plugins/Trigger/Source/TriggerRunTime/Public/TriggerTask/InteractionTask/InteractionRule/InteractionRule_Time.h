#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/23
* Purpose:	This rule targets the time
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "InteractionRuleBase.h"

#include "InteractionRule_Time.generated.h"

class UCancleContribution;
class UAddContribution;

UCLASS(Blueprinttype, Blueprintable, Within = "TT_Interaction")
class TRIGGERRUNTIME_API UInteractionRule_Time : public UInteractionRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	//Override UInteractionRule
	virtual bool IsMeetAllCondition(AActor* Causer) override;
	virtual void ApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime) override;
	virtual void Tick(float DeltaTime) override;
	virtual bool CanAddNewContributor_Implementation(UContributeRuleBase* Contributor) override;
	virtual bool CanTickContributor(UContributeRuleBase* Contributor) override;
	virtual void PreProcessWhenAdded(UContributeRuleBase*& Contributor) override;
	virtual int RemoveContributor(UContributeRuleBase* Contributor, int& RemovedHistroyContributorCount, bool RemoveContributedEffort = true) override;
	//Override UInteractionRule

public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UFUNCTION(BlueprintCallable)
	float GetConsumedTime(AActor* Causer );

	UFUNCTION(BlueprintCallable)
	void SetConsumedTime( AActor* Causer, float Value );

	UFUNCTION(BlueprintCallable)
	float GetMaxTime();

protected:

	void ProcessCancelContributor(UCancleContribution* Contributor );
	void ProcessAddContributor(UAddContribution* Contributor, float DeltaTime);
	/*
	* @param UseDeltaTime Fore the value changed to use the DeltaTime not the config value
	*/
	float ValueChangeRule( UContributeRuleBase* Constructor, float DeltaTime);

public:

	//The base change value in one contribution
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export, Category = "TriggerRuntime")
	float BaseChangeValue;

	//The affect ratio that the target Actor class will change the time
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export, Category = "TriggerRuntime")
	TMap<TSubclassOf<AActor>, float> AffectRatio;

	/*
	* flag to check weather will use delta time to as the base value which the change value of affect ratio will affect 
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export, Category = "TriggerRuntime")
	bool UseDeltaTimeAsBaseValue = true;

public:

	//The changed time chian when new AddContributor to it 
	TArray<float> ValueChangedChain;
};