#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/23
* Purpose:	The base rule for the interaction task.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"

#include "InteractionDefinition.h"

#include "InteractionRuleData/InteractionRuleDataBase.h"

#include "InteractionRuleBase.generated.h"

class AActor;
class UTT_Interaction;
class UContributeRuleBase;
class UInteractionRuleDataBase;

UENUM(BlueprintType)
enum class EContributeType : uint8
{
	EContributeType_Start				= 0			UMETA(DisplayName = "Start Contribution"),
	EContributeType_RemoveActor			= 1 << 1	UMETA(DisplayName = "Remove Actor"),
	EContributeType_RemoveContribution	= 1 << 2	UMETA(DisplayName = "RemoveContribution")
};

USTRUCT(BlueprintType)
struct FInteractionDataMap
{
	GENERATED_BODY()

	UPROPERTY()
	AActor* Actor;

	UPROPERTY()
	UInteractionRuleDataBase* Data;
};

/*
* Base rule for the interaction
*/
UCLASS(Blueprinttype, Blueprintable, hidedropdown, editinlinenew, DefaultToInstanced, Within = "TT_Interaction")
class TRIGGERRUNTIME_API UInteractionRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	//Override UObject
	virtual void PostInitProperties() override;

	virtual void Initialize(UTriggerTaskBase* Task);

#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
#pragma endregion NetSupport
	//Override UObject
public:

	//When new contributor is added to this rule, check weather this contributor can be add to this rule
	UFUNCTION(BlueprintNativeEvent)
	bool CanAddNewContributor(UContributeRuleBase* Contributor);

	UFUNCTION(BlueprintCallable)
	virtual void AddContributor(UContributeRuleBase* Contributor);


	/*
	*@param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer
	*#return the number of the contributor have been removed
	*/
	UFUNCTION(BlueprintCallable)
	virtual int RemoveContributor(UContributeRuleBase* Contributor, int& RemovedHistroyContributorCount, bool RemoveContributedEffort = true);


	/*
	* Remove the contributors which is belong to the causers
	* 
	* @param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer
	*/
	UFUNCTION(BlueprintCallable)
	void RemoveContributorsBelongToTargetCausers(const TArray<UObject*>& Causers, bool RemoveContributedEffort = true);

	//Reset its local variables
	UFUNCTION(BlueprintCallable)
	void Reset( UObject* Causer = nullptr );

	//Check weather all the condition have meet, true means the target interaction is finished 
	UFUNCTION(BlueprintCallable)
	virtual bool IsMeetAllCondition( AActor* Causer );

	UFUNCTION(BlueprintImplementableEvent)
	void OnApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime);
	
	virtual void ApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime);

	virtual void NotifyInteractionEffect(AActor* Causer);

	//before I add new contributor to the pool I need do some preprocess
	UFUNCTION(BlueprintImplementableEvent)
	void OnPreProcessWhenAdded(UContributeRuleBase* Contributor);
	virtual void PreProcessWhenAdded(UContributeRuleBase*& Contributor);

	/*
	* Function to check weather the target contributor can be added to contributors 
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnCanBeAddedToContributors(bool& CanbeAdded, UContributeRuleBase* Contributor);
	virtual bool CanBeAddedContributors(UContributeRuleBase* Contributor);

	/*
	* Function to check weather the target contributor can be added to contributor History
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnCanBeAddedToContributorHidtory(bool& CanbeAdded, UContributeRuleBase* Contributor);
	virtual bool CanBeAddedContributorHidtory(UContributeRuleBase* Contributor);

	//When all condition meet we should notify the owner to end task
	void NotifyOwnerSuccess(AActor* Causer);

	UFUNCTION(BlueprintCallable)
	void SetOwnerTask(UTT_Interaction* Owner);

	UFUNCTION(BlueprintCallable)
	UTT_Interaction* GetOwnerTask();

	UFUNCTION(BlueprintImplementableEvent)
	bool OnCanTickContributor();

	/*
	* Try to check weather the target contributor can be ticked.
	* 
	* #return true means the target contributor will be ticked
	*/
	virtual bool CanTickContributor( UContributeRuleBase* Contributor );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|InteractionRule")
	virtual void Tick(float DeltaTime);

	/*
	* Get the interaction rule data form the serialized data which can construct a new data frome it
	* 
	* @pramer	SerializedData this value come from  UInteractionRuleDataBase::ToString();
	*/
	//UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|InteractionRule")
	UInteractionRuleDataBase* GetInteractionRuleData( AActor* Causer, const FString& SerializedData );

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|InteractionRule")
	TArray<FInteractionDataMap>& GetActualInteractionRuleData() {return ActualInteractionDataMap;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|InteractionRule")
	UInteractionRuleDataBase* GetInteractionRuleData(AActor* Causer);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|InteractionRule")
	const TArray<UContributeRuleBase*>& GetContributors(){return Contributors;}

protected:

	//Add the contribute without confirm any other conditions
	void AddContributeInternal(UContributeRuleBase* Contributor);

	void NotifyClientToAddNewContribute(AActor* TargetClientActor, UContributeRuleBase* Contributor);

	//Check current runtime state
	void CheckConditions();
public:
	//Flag to check weather this task can be executed by a coupe of targets.
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export/*, Category = "InteractionRule", meta = (DisplayAfter = CanToggledByMutiActors, EditCondition = CanToggledByMutiActors)*/)
	bool CanCooperate;

protected:

	//The core data that this rule will try to effect, and this is just used for template for new interaction rule
	UPROPERTY(BlueprintReadOnly, EditAnywhere, export)
	UInteractionRuleDataBase* InteractionData;

	//Contributors that will be executed in the tick function
	UPROPERTY()
	TArray<UContributeRuleBase*> Contributors;

	UTT_Interaction* InteractionTask;

	/*
	* The history for the contribution; 
	* the difference between Contributors and ContributionHistory is ContributionHistory is the superset of the Contributors.
	*/
	UPROPERTY()
	TArray<UContributeRuleBase*> ContributionHistory;

private:
	
	//The actual rule data instance that this interaction rule will effect
	UPROPERTY()
	TArray<FInteractionDataMap> ActualInteractionDataMap;

};