#pragma once
/*
* Author:	Liulianyou
* Time:		2020/8/4
* Purpose:	A trigger that can be interacted by other player, such as weapon, bold
*/


#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Abilities/GameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"

#include "InteractionDefinition.h"

#include "TriggerTask/TriggerTaskBase.h"

#include "TT_Interaction.generated.h"

class UInteractionRuleBase;
class UContributeRuleBase;
class UInteractionEffectBase;
class UInteractionGenerationBase;
class UInteractionRuleDataBase;

namespace TT_Interaction
{
	static FName InteractionEffectName = TEXT("InteractionEffect");
	static FName InteractionRuleName = TEXT("InteractionRule");
	static FName InteractionInfoGeneratorName = TEXT("InteractionInfoGenerator");
	static FName InteractionSuccessGamePlayTag = TEXT("Ability.Interaction.InteractionSuccess");
	static FName InteractionCancelGamePlayTag = TEXT("Ability.Interaction.InteractionCanceled");
}


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInteractionEnd, const TArray<UObject*>&, Causers, UTT_Interaction*, InteractionTask, EInteractionEndType, EndType);

/*
* This delegate is used to inspect the value changed in the interaction rule data
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionDataUpdate, UInteractionRuleDataBase*, Data);

/*
* The interaction task when the player want to interact with the scene object
* 
* There three component in the interaction task:
* 1): Interaction effect:	which is used to do some client effect such as open one UI, or open one door
* 2): Interaction Rule:		Which is used to do some internal game logic such as time manager or count manager, and mostly it run on the server (if have server mode).
* 3): Contribute Rule:		Which is used to check how the player affect the Interaction rule.
* 4): Interaction information generator: which is used to generate the current interact information such as we want to distinguish the effect or rule for different players.
*/
UCLASS(BlueprintType, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_Interaction : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

	friend class InteractionCommitTypeInterface;

public:

	//Override UObject
	virtual void BeginDestroy() override;
	virtual void PostInitProperties() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const;
#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)override;
#endif
	//Override UObject
	
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);

public:

	/*
	* Commit this interaction task
	* 
	* @param	Target				the target actor who rise up this command
	*/
	void Server_CommitInteraction(UContributeRuleBase* Contributor);

	/*
	* Commit this interaction task, This function should not be invoked directly
	*
	* @param	Contributor				the contributor which will be applied to the interaction rule
	*/
	void Client_CommitInteraction(UContributeRuleBase* Contributor);

	/*
	* Called when the task has been toggled by the target actor
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Interaction")
	void OnInteraction(UPARAM(ref) const FInteractionInfo& TargetActor);

	/*
	* Called on the client when on the Server/Client mode
	* @param	InteractionActor Which actor interact this task
	*/
	UFUNCTION(BlueprintCallable)
	void Client_RunTask(const FInteractionInfo& InteractionInfo);

	/*
	* Add new contributor to this interaction task to change the data in the interaction rule 
	*/
	UFUNCTION(BlueprintCallable)
	void AddContributor(UContributeRuleBase* Contributor);

	//Called when the task has been toggled by the target actor
	UFUNCTION(BlueprintCallable)
	virtual void Server_Interaction(AActor* TargetActor);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	void SetInteractionRule(UInteractionRuleBase* InteractionRule);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	UInteractionRuleBase* GetInteractionRule() { return InteractionRule; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	void AddInteractionEffect(UInteractionEffectBase* InteractionEffect);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	UInteractionEffectBase* GetInteractionEffect(int EffectIndex) { if(EffectIndex >= InteractionEffects.Num()) {return nullptr;} else {return InteractionEffects[EffectIndex];} }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	TArray<UInteractionEffectBase*>& GetInteractionEffects() { return InteractionEffects;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	void SetInteractionInfoGenerator(UInteractionGenerationBase* Generator);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	UInteractionGenerationBase* GetInteractionInfoGenerator() { return InteractionInfoGenerator; }

	//Invoked when the data in the interaction rule have changed
	UFUNCTION(/* NetMulticast, Reliable,*/ BlueprintCallable, Category = "TriggerRuntime|Interaction" )
	void InteractionRuleDataChanged( AActor* Causer, const FString& InteractionData );

	/*
	* Open the target effect which bind to this task 
	* @param Index	-1 means this function will open all effect 
	*/
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "TriggerRuntime|Interaction")
	void OpenEffect(const FInteractionInfo& InteractionInfo, int Index = -1);

	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, Category = "TriggerRuntime|Interaction")
	void CloseEffect(UObject* Causer, EInteractionEndType EndType, bool RemoveInstance );

	//Function to check weather this effect need to run on server
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	bool DoesEffectRunOnServer(int EffectIndex);

	//Make the BP have access to do its only end interaction things
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|Interaction")
	void OnEndInteraction(UPARAM(ref)const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance); 

	//Invoked by the interaction rule when the rule have meet all its conditions
	void EndInteraction(TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance);

	//Only invoked by the ability to EndInteraction
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void AbilityTryToEndInteraction(const FGameplayAbilitySpecHandle Handle, const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance);

	UFUNCTION(BlueprintCallable)
	void AbilityTryToEndInteractionByInstance( UGameplayAbility* AbilityInstance, const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance);

	/*
	* When contains interaction ability, this action should be noticed to start by ability
	* Only invoked by the ability to EndInteraction
	* */
	void AbilityTryToStartInteraction( AActor* TargetActor, const FGameplayAbilitySpecHandle Handle);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	FGameplayTag GetVaildInteractionSuccessTag();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	FGameplayTag GetVaildInteractionCancelTag();

	/*
	* Get valid Interaction information according to target actor
	*
	* @param ForceCreateNew		When TargetActor is not in the InteractionInfos, weather we can create new info or not
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	FInteractionInfo& GetValidInteractionInfo(AActor* TargetActor, FString& InteractState, bool ForceCreateNew = true);

    UFUNCTION(BlueprintPure, Category = "TriggerRuntime|Interaction")
    const TArray<FInteractionInfo>& GetInteractionInfos() const;

	/*
	* Function used to check weather this interaction can be interacted by the causer
	* 
	* @param who want to be checked weather he can interact this interaction
	*/
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TriggerRuntime|Interaction")
	bool CanBeInteracted( UObject* Causer );

protected:
	
	void EndInteractionInternal(const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance);

	/*
	* #return If there is valid ability class bind with this task return false, or return true.
	*/
	bool CheckGamePlayAbility(AActor* Contributor);

	/*
	* When this trigger task need to sleep or stop, this task should end the binded ability
	*/
	void NotifyAbilityEnd( TArray<UObject*>& Causer );

	/*
	* Remove all invalid ability space handle while the ability may end itself without notify the trigger task to end interaction
	*/
	void RemoveInvalidAbilityCash();

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "Interaction")
	TArray<UInteractionEffectBase*> InteractionEffects;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Instanced, Category = "Interaction")
	UInteractionRuleBase* InteractionRule;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated, Instanced, Category = "Interaction")
	UInteractionGenerationBase* InteractionInfoGenerator;

	//Flag to check weather AI can toggled this Task
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interaction")
	bool CanBeToggledByAI;

	//Flag to check weather AI can toggled this Task
	UPROPERTY(BlueprintAssignable, Category = "Interaction")
	FInteractionEnd InteractionEndDelegate;

	/*
	* this delegate is used to inspect the value changed in the interaction rule data
	*/
	UPROPERTY(BlueprintAssignable, BlueprintReadOnly, Category = "Interaction")
	FInteractionDataUpdate InteractionDataUpdateDelegate;

	//The name for this interaction task which can be changed by the player
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interaction")
	FText Name;

	/*
	* The class for game play ability to hold some interaction rules for this interaction
	* By default the interaction can be treated as one ability for the player so this task should bind with the GamePlayAbility
	* to use the game play ability system 
	* The target ability should inherited from the IInteractionSupportInterface Interface
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interaction")
	TSubclassOf<UGameplayAbility> GamePlayAbilityClass;

	//Exposed for the designer to use its own interaction success game play tag
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interaction")
	FGameplayTag InteractionSuccessGamePlayTag;

	//Exposed for the designer to use its own interaction success game play tag
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interaction")
	FGameplayTag InteractionCancelGamePlayTag;

private:
	
	//The immediate contributor apply to this interaction
	UPROPERTY()
	UContributeRuleBase* LastContributor;

	//Maybe I don't need to use map to store the ability activation info, as the ability already have the actor info.
	TMap<AActor*, FGameplayAbilitySpecHandle> AbilityMap;
};