#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/24
* Purpose:	This is the base class to generate the interaction info
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "InteractionDefinition.h"

#include "InteractionInfoGenerationBase.generated.h"

class AActor;
class UTT_Interaction;

UCLASS(BlueprintType,Blueprintable, editinlinenew, DefaultToInstanced, Within = "TT_Interaction", meta=(DisplayName="InteractionGeneration"))
class TRIGGERRUNTIME_API UInteractionGenerationBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual void GetLifetimeReplicatedProps( TArray<class FLifetimeProperty> & OutLifetimeProps ) const override;
	bool IsSupportedForNetworking() const { return true; }

	//Override UObject

public:

	/*
	* Generate the interaction information for target interaction task.
	* This rule in base class is just to check weather the actor is instigator on the interaction task
	* 
	* #return true means the out data is valid
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnGenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor);
	virtual bool GenerateInteractionInfo(FInteractionInfo&OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor );

	/*
	* Reset this generation
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnReset();
	virtual void Reset();

	//Remove the interactions at the target InteractionStage
	UFUNCTION(BlueprintCallable)
	void RemoveInteraction( TArray<UObject*> interactions, FString& InteractionStage);

	/*
	* Find or add new Interaction Information
	* 
	* @param Interactor who interact with this trigger.
	* @param Task which trigger is interacted by the player
	* @param InteractStage which stage to search the information
	*/
	UFUNCTION(BlueprintCallable)
	int FindOrAddInteractionInfo(AActor* Interactor, UTriggerTaskBase* Task, const FString& InteractStage);

	UFUNCTION(BlueprintCallable)
	int GetCurrentEffectInteractionInfo() { return CurrentEffectInteractionInfo; }

	UFUNCTION(BlueprintCallable)
	void SetCurrentEffectInteractionInfo(int Index) { CurrentEffectInteractionInfo = Index; }

	//Try to get the layer for the specific actor who is interact with this interaction
	UFUNCTION(BlueprintNativeEvent)
	EActorLayer GetInteractionLayer( AActor* Actor, UTriggerTaskBase* Task);

	/*
	* Used to check weather there is valid interaction information at current generator
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|Interaction")
	bool HasValidInteractionInfo() const;

	/*
	* Get interaction info which can not be modified by outer
	*/
	UFUNCTION(BlueprintCallable)
	const TArray<FInteractionInfo>& GetConstInteractionInfo() const { return InteractionInfos; }

	/*
	* Get reference to interaction info
	*/
	UFUNCTION(BlueprintCallable)
	TArray<FInteractionInfo>& GetinteractionInfo() { return InteractionInfos; }

public:
	
	UPROPERTY(Replicated)
	int CurrentEffectInteractionInfo = INDEX_NONE;

	//The information for current toggled actors
	UPROPERTY(Replicated)
	TArray<FInteractionInfo> InteractionInfos;
};

