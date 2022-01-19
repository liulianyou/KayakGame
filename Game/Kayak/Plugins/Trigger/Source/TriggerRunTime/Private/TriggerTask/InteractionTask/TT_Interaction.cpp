#include "TT_Interaction.h"
#include "InteractionRuleBase.h"
#include "ContributeRuleBase.h"
#include "InteractionEffectBase.h"
#include "InteractionInfoGenerationBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerNetPlayerSupportComponent.h"
#include "TriggerTaskStartInformationBase.h"
#include "TriggerTaskResetInformationBase.h"
#include "OperationInformationBase.h"
#include "AIController.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "CancleContribution.h"
#include "AddContribution.h"
#include "TriggerDefinition.h"
#include "AbilitySystemComponent.h"
#include "Engine/ActorChannel.h"

UTT_Interaction::UTT_Interaction(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	CanBeToggledByAI(false)
{
	RunType = ERunType::ERunType_RunOnServer;
	ExecuteAutomatically = false;
	CanEverTick = true;
	InteractionEffects.Empty();
}

void UTT_Interaction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UTT_Interaction, InteractionRule);
	DOREPLIFETIME(UTT_Interaction, InteractionInfoGenerator)
}

bool UTT_Interaction::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	bool WroteSomething = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	if(InteractionRule != nullptr)
		WroteSomething |= Channel->ReplicateSubobject(InteractionRule, *Bunch, *RepFlags);

	if (InteractionInfoGenerator != nullptr)
		WroteSomething |= Channel->ReplicateSubobject(InteractionInfoGenerator, *Bunch, *RepFlags);

	return WroteSomething;
}

#if WITH_EDITORONLY_DATA

void UTT_Interaction::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTT_Interaction, InteractionEffects))
		{
			for (auto InteractionEffect : InteractionEffects)
			{
				if (InteractionEffect != nullptr)
				{
					InteractionEffect->Initialize(this);
				}
				else
				{
					UE_LOG(LogTrigger, Error, TEXT("Please don't set none value to %s"), *PropertyName.ToString());
				}
			}
		}

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTT_Interaction, InteractionRule))
		{
			if (InteractionRule != nullptr)
			{
				InteractionRule->SetOwnerTask(this);
			}
			else
			{
				UE_LOG(LogTrigger, Error, TEXT("Please don't set none value to %s"), *PropertyName.ToString());
			}
		}

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTT_Interaction, InteractionInfoGenerator))
		{
			if (InteractionInfoGenerator != nullptr)
			{
				
			}
			else
			{
				UE_LOG(LogTrigger, Error, TEXT("Please don't set none value to %s"), *PropertyName.ToString());
			}
		}
	}
}
#endif


void UTT_Interaction::BeginDestroy()
{
	Super::BeginDestroy();
}

void UTT_Interaction::PostInitProperties()
{
	Super::PostInitProperties();

	for (int i = 0; i < InteractionEffects.Num(); i++)
	{
		if (InteractionEffects[i] == nullptr)
		{
			InteractionEffects.RemoveAt(i);
			i--;
		}
	}
}

void UTT_Interaction::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	if (InteractionRule != nullptr)
	{
		InteractionRule->Initialize(this);
	}

	for (int i = 0; i < InteractionEffects.Num(); i++)
	{
		if (InteractionEffects[i] != nullptr)
		{
			InteractionEffects[i]->Initialize(this);
		}
	}
}

bool UTT_Interaction::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	//There is no history interaction infos in this task
	if (InteractionInfoGenerator == nullptr || !InteractionInfoGenerator->HasValidInteractionInfo())
	{
		return Result;
	}

	//There are some interaction informations in this task
	if (Result)
	{
		AActor* Actor = InteractionInfoGenerator->GetinteractionInfo()[InteractionInfoGenerator->GetCurrentEffectInteractionInfo()].Actor;

		AAIController* AC = Cast<AAIController>(Actor);

		//Prohibit the AIController to toggle this task
		if (AC != nullptr)
		{
			Result = false;
		}
		else
		{
			APawn* Pawn = Cast<APawn>(Actor);

			if (Pawn != nullptr && Cast<AAIController>(Pawn->GetController()) != nullptr)
			{
				Result = false;
			}
		}
	}

	return Result;
}

bool UTT_Interaction::Prepare()
{
	if (!Super::Prepare())
		return false;

	Active();

	return true;
}

void UTT_Interaction::Active(bool ForceActive)
{
	Super::Active();

	if (GetTriggerOwner() == nullptr)
		return;

	//There is no valid interaction information
	if (InteractionInfoGenerator == nullptr || !InteractionInfoGenerator->HasValidInteractionInfo())
		return;

	OpenEffect(InteractionInfoGenerator->GetinteractionInfo()[InteractionInfoGenerator->GetCurrentEffectInteractionInfo()]);
}

void UTT_Interaction::TryToSleep(UOperationInformationBase* SleepOperation /* = nullptr */)
{
	TArray<UObject*> Causers;
	Causers.Empty();

	if (SleepOperation)
	{
		TArray<FOperationScope> OuterScopes;
		SleepOperation->FindOperationScope(OuterScopes);

		for (int i = 0; i < OuterScopes.Num(); i++)
		{
			Causers.Add(OuterScopes[i].Causer);
		}
	}

	//Remove all the activation informations for the target causer
	for (int i = 0; i < Causers.Num(); i++)
	{
		AActor* Actor = Cast<AActor>(Causers[i]);

		FTaskActivationInfo& ActivationInfo = GetImmediateActivationInformation_Mutable().FindActiveInfoByActor(Actor);

		int Index = GetImmediateActivationInformation_Mutable().FindOrAddNewActiveInfo(ActivationInfo);

		GetImmediateActivationInformation_Mutable().RemoveActiveInfoByIndex(Index);
	}

	EndInteraction(Causers, EInteractionEndType::EInteractionEndType_Interrupt, true);

	//As the the base class will invoke Reset function I need to end interaction before it
	Super::TryToSleep(SleepOperation);
}

void UTT_Interaction::TryToStop(UOperationInformationBase* StopOperationInfo)
{
	TArray<UObject*> Causers;
	Causers.Empty();
	if (StopOperationInfo)
	{
		TArray<FOperationScope> OuterScopes;
		StopOperationInfo->FindOperationScope(OuterScopes);

		for (int i = 0; i < OuterScopes.Num(); i++)
		{
			Causers.Add(OuterScopes[i].Causer);
		}
	}

	GetImmediateActivationInformation_Mutable().EmptyContainer();

	EndInteraction(Causers, EInteractionEndType::EInteractionEndType_Interrupt, true);

	Super::TryToStop(StopOperationInfo);
}

void UTT_Interaction::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_Interaction::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_Interaction::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_Interaction::Finished(UOperationInformationBase* FinishOperationInfo)
{
	if (InteractionRule != nullptr)
		InteractionRule->Reset();

	//if (LastContributor != nullptr)
	//{
		//LastContributor->MarkPendingKill();
		LastContributor = nullptr;
	//}

	Super::Finished(FinishOperationInfo);
}

void UTT_Interaction::PostFinished()
{
	Super::PostFinished();
}

void UTT_Interaction::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	UTriggerTaskResetInformationBase* ResetInformation = Cast<UTriggerTaskResetInformationBase>(Operation);

	if (ResetInformation)
	{
		if (EnumHasAnyFlags(ResetInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
		{
			if (InteractionInfoGenerator != nullptr)
			{
				InteractionInfoGenerator->Reset();
			}
		}
	}
}

void UTT_Interaction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InteractionRule != nullptr)
	{
		InteractionRule->Tick(DeltaTime);
	}
}

bool UTT_Interaction::CanTick()
{
	bool Result = false;

	//When there are new contributors this task should be tickable
	if (InteractionRule != nullptr)
	{
		Result = InteractionRule->GetContributors().Num() > 0;
	}

	return Result;
}

void UTT_Interaction::Client_RunTask(const FInteractionInfo& InteractionInfo)
{
	//When the Info is invalid value means the server have not sync to the client
	if (InteractionInfo == FInteractionInfo::InvaildValue)
		return;

	//If this task can't be toggled on the client I need to store the interaction info
	if (!CanBeToggled() && InteractionInfoGenerator != nullptr)
	{
		int Index = InteractionInfoGenerator->FindOrAddInteractionInfo(InteractionInfo.Actor, this, InteractionInfo.InteractStage);

		if (Index == INDEX_NONE)
		{
			UE_LOG(LogTrigger, Warning, TEXT("Cannot run interaction task at client side as there is no interaction info"));

			return;
		}
		else
		{
			InteractionInfoGenerator->GetinteractionInfo()[Index].Layer = InteractionInfo.Layer;
		}
	}

	for (auto InteractionEffect : InteractionEffects)
	{
		UInteractionOpenStyle* InteractionOpenStyle = NewObject<UInteractionOpenStyle>();
		InteractionOpenStyle->SetIneractionInfo(InteractionInfo);
		InteractionEffect->OpenEffect(InteractionOpenStyle);
	}
}

bool UTT_Interaction::CheckGamePlayAbility(AActor* Contributor)
{
	AActor* TargetActor = Contributor;

	if (TargetActor == nullptr || *GamePlayAbilityClass == nullptr)
		return true;

	UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(TargetActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

	if (AbilitysSystem == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Are you sure you want to use this actor %s to do interaction which have no ability system component!"), *TargetActor->GetName());
		return true;
	}

	FGameplayAbilitySpecHandle* AbilitySpaceHandlePtr = AbilityMap.Find(TargetActor);
	FGameplayAbilitySpecHandle AbilityHandle;
	FGameplayAbilitySpec* AS = nullptr;

	bool NeedToGiveNewAbility = false;

	if (AbilitySpaceHandlePtr == nullptr)
	{
		NeedToGiveNewAbility = true;
	}
	else
	{
		AS = AbilitysSystem->FindAbilitySpecFromHandle(*AbilitySpaceHandlePtr);

		if (AS == nullptr)
		{
			NeedToGiveNewAbility = true;
		}
		else
		{
			AbilityHandle = *AbilitySpaceHandlePtr;
		}
	}

	if (NeedToGiveNewAbility)
	{
		AbilityHandle = AbilitysSystem->GiveAbility(FGameplayAbilitySpec(GamePlayAbilityClass));

		AS = AbilitysSystem->FindAbilitySpecFromHandle(AbilityHandle);
	}

	if (AS == nullptr)
		return true;

	//If this ability is still active then do nothing else as the target actor is interacting with this trigger task
	if (AS->GetPrimaryInstance()->IsActive())
		return false;

	//Always remove the old data
	AbilityMap.Remove(TargetActor);

	AS->GetPrimaryInstance()->SetCanBeCanceled(true);

	if (AS->GetPrimaryInstance()->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
	{
		IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(AS->GetPrimaryInstance());

		if (InteractionSupport == nullptr)
		{
			IInteractionSupportInterface::Execute_OnInitializeByInteractionTask(AS->GetPrimaryInstance(), this);
		}
		else
		{
			InteractionSupport->InstigatTriggerTask = this;

			InteractionSupport->InitializeByInteractionTask(this);
		}
	}
	else
	{
		UE_LOG(LogTrigger, Warning, TEXT("The target ability is not inherited from IInteractionSupportInterface, which will make some features not work!!!"));
	}

	//Add the new ability map
	AbilityMap.Add(TargetActor, AbilityHandle);

	if (!AbilitysSystem->TryActivateAbility(AbilityHandle, true))
	{
		// TODO: Failed to try activate ability, maybe the interaction should end by itself.
		TArray<UObject*> Causers = { TargetActor };
		AbilityTryToEndInteraction(AbilityHandle, Causers, EInteractionEndType::EInteractionEndType_Cancle, false);
	}

	//Make sure the target ability should be removed when it is ended as if the player interact with the target interaction again, the interaction actor will give him new ability
	//AbilitysSystem->SetRemoveAbilityOnEnd(Handle);

	//Always return false as we should wait the ability to check weather we should continue this action
	return false;
}

/*
* Remove all invalid ability space handle while the ability may end itself without notify the trigger task to end interaction
*/
void UTT_Interaction::RemoveInvalidAbilityCash()
{
	//Remove the matched ability map elements when the ability have removed from the ability system of the target actor
	for (auto IT = AbilityMap.CreateIterator(); IT; ++IT)
	{
		AActor* TargetActor = Cast<AActor>(IT.Key());

		if (TargetActor == nullptr)
		{
			IT.RemoveCurrent();
			continue;
		}

		FGameplayAbilitySpecHandle* HandlePtr = AbilityMap.Find(TargetActor);

		if (HandlePtr == nullptr)
		{
			IT.RemoveCurrent();
			continue;
		}
		
		UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(TargetActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilitysSystem == nullptr)
			continue;

		FGameplayAbilitySpec* AS = AbilitysSystem->FindAbilitySpecFromHandle(*HandlePtr);

		if (AS == nullptr)
		{
			IT.RemoveCurrent();
		}
	}
}

void UTT_Interaction::NotifyAbilityEnd(TArray<UObject*>& Causers)
{
	for (auto IT = AbilityMap.CreateIterator(); IT; ++IT)
	{
		bool NeedToEndAbility = Causers.Num() == 0 || Causers.Find(IT.Key()) != INDEX_NONE;

		if(!NeedToEndAbility)
			continue;

		AActor* TargetActor = Cast<AActor>(IT.Key());

		if (TargetActor == nullptr)
		{
			continue;
		}

		FGameplayAbilitySpecHandle* HandlePtr = AbilityMap.Find(TargetActor);

		if (HandlePtr == nullptr)
		{
			continue;
		}

		UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(TargetActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilitysSystem == nullptr)
			continue;

		FGameplayAbilitySpec* AS = AbilitysSystem->FindAbilitySpecFromHandle(*HandlePtr);

		if (AS == nullptr)
		{
			continue;
		}

		AS->GetPrimaryInstance()->CancelAbility(AS->GetPrimaryInstance()->GetCurrentAbilitySpecHandle(), AS->GetPrimaryInstance()->GetCurrentActorInfo(), AS->GetPrimaryInstance()->GetCurrentActivationInfo(), true);
	}

	RemoveInvalidAbilityCash();
}

void UTT_Interaction::AddContributor(UContributeRuleBase* Contributor)
{
	if(Contributor == nullptr || Contributor->Contributor == nullptr)
		return;
		
	if(!CanBeInteracted(Contributor->Contributor))
		return;

	if (InteractionRule != nullptr && !InteractionRule->CanAddNewContributor(Contributor))
		return;

	UTriggerNetPlayerSupportComponent* NetSupport = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(Contributor->Contributor);

	if (NetSupport == nullptr)
	{
		Server_CommitInteraction(Contributor);
	}
	else
	{
		UAddContribution* AddContributor = Cast<UAddContribution>(Contributor);

		if (AddContributor != nullptr)
		{
			if (GetRunType() == ERunType::ERunType_RunOnClient)
			{
				NetSupport->Client_CommitAddInteraction(this, AddContributor->Contributor, AddContributor->CanEverTick, AddContributor->TickGradualTime, AddContributor->CanExecutedWhenAdded);
			}
			else
			{
				NetSupport->Server_CommitAddInteraction(this, AddContributor->Contributor, AddContributor->CanEverTick, AddContributor->TickGradualTime, AddContributor->CanExecutedWhenAdded);
			}
		}

		UCancleContribution* CancleContributor = Cast<UCancleContribution>(Contributor);

		if (CancleContributor != nullptr)
		{
			if (GetRunType() == ERunType::ERunType_RunOnClient)
			{
				NetSupport->Client_CommitCancleInteraction(this, CancleContributor->Contributor, CancleContributor->RemoveLastContributionCount, CancleContributor->CanEverTick, CancleContributor->TickGradualTime, CancleContributor->CanExecutedWhenAdded);
			}
			else
			{
				NetSupport->Server_CommitCancleInteraction(this, CancleContributor->Contributor, CancleContributor->RemoveLastContributionCount, CancleContributor->CanEverTick, CancleContributor->TickGradualTime, CancleContributor->CanExecutedWhenAdded);
			}
		}
	}
}

bool UTT_Interaction::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	UTriggerTaskStartInformationBase* ExternalData = Cast<UTriggerTaskStartInformationBase>(StartOperationInfo);

	if (Result == false || ExternalData == nullptr)
		return false;

	FInteractionInfo& InteractionInfo = GetValidInteractionInfo(ExternalData->GetToggledActor(), TriggerInteractionStage::ActiveInteractStage);

	if(!CanBeInteracted(ExternalData->GetToggledActor()))
		return false;

	//If there is no valid interaction info then just skip this action
	if (InteractionInfo == FInteractionInfo::InvaildValue)
	{
		return false;
	}

	UTriggerNetPlayerSupportComponent* NetSupport = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(InteractionInfo.Actor);

	ACharacter* Character = Cast<ACharacter>(ExternalData->GetToggledActor());
	
	//Only the character can toggle this task
	if (Character == nullptr)
		return false;

	AAIController* AIC = Cast<AAIController>(Character->GetController());

	if (AIC != nullptr && !CanBeToggledByAI)
		return false;

	if (NetSupport != nullptr)
	{
		if (GetRunType() == ERunType::ERunType_RunOnClient)
		{
			NetSupport->Client_RunInteractionTask(this, InteractionInfo);
		}
		else
		{
			NetSupport->Server_Interaction(this, ExternalData->GetToggledActor());
		}
	}

	return true;
}

void UTT_Interaction::AddInteractionEffect(UInteractionEffectBase* Effect)
{
	if (Effect == nullptr)
		return;

	Effect->Initialize(this);

	InteractionEffects.AddUnique(Effect);
}

void UTT_Interaction::SetInteractionInfoGenerator(UInteractionGenerationBase* Generator)
{
	if (Generator == nullptr)
		return;

	InteractionInfoGenerator = Generator;
}

void UTT_Interaction::SetInteractionRule(UInteractionRuleBase* Value)
{
	if (Value == nullptr)
		return;

	InteractionRule = Value;

	InteractionRule->SetOwnerTask(this);
}

void UTT_Interaction::AbilityTryToEndInteractionByInstance(UGameplayAbility* AbilityInstance, const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance)
{
	if(AbilityInstance == nullptr)
		return;

	AbilityTryToEndInteraction(AbilityInstance->GetCurrentAbilitySpecHandle(), Causers, EndType, RemoveInstance);
}

void UTT_Interaction::AbilityTryToEndInteraction_Implementation(const FGameplayAbilitySpecHandle Handle, const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance)
{
	AActor* OwnerActor = TryToGetOwnerActor();

	//The client only reset the rule data it will not end interaction
	if (OwnerActor != nullptr && !OwnerActor->HasAuthority())
	{
		for (int i = 0; i < Causers.Num(); i++)
		{
			AActor* Actor = Cast<AActor>(Causers[i]);

			if (Actor == nullptr)
				continue;

			UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(Actor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

			FGameplayAbilitySpec* AS = AbilitysSystem->FindAbilitySpecFromHandle(Handle);

			if (AS != nullptr)
			{
				if (InteractionRule)
				{
					InteractionRule->Reset(Causers[i]);
				}

				if (AbilitysSystem->GetOwner()->HasAuthority())
				{
					AbilitysSystem->ClearAbility(Handle);
				}				
			}
		}
		return;
	}

	EndInteractionInternal(Causers, EndType, RemoveInstance);
}

void UTT_Interaction::AbilityTryToStartInteraction( AActor* TargetActor, const FGameplayAbilitySpecHandle Handle)
{
	/*
	* Before try to start interaction I need to check weather this interaction have hold the ability information
	* Such as when the player leave the trigger owner of this task ,and at that point the player click the interaction button at client,
	* The server will remove the player's ability map as the player leave the trigger,  and the ability will go through client -> server which
	* will cause some external time, when the ability execute at this function the ability map have been removed, so I need to add it again
	*/
	{
		FGameplayAbilitySpecHandle* AbilitySpaceHandlePtr = AbilityMap.Find(TargetActor);

		if (AbilitySpaceHandlePtr == nullptr)
		{
			AbilityMap.Add(TargetActor, Handle);
		}
		else if (*AbilitySpaceHandlePtr != Handle)
		{
			if (TargetActor != nullptr)
			{
				UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(TargetActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

				if (AbilitysSystem != nullptr)
				{
					FGameplayAbilitySpec* AbilitySpacePtr = AbilitysSystem->FindAbilitySpecFromHandle(*AbilitySpaceHandlePtr);

					if (AbilitySpacePtr != nullptr)
					{
						AbilitysSystem->CallServerEndAbility(*AbilitySpaceHandlePtr, AbilitySpacePtr->GetPrimaryInstance()->GetCurrentActivationInfo(), AbilitysSystem->ScopedPredictionKey);
					}
				}

				AbilityMap[TargetActor] = Handle;
			}
		}
	}

	if (LastContributor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Consture wrong Contributor in TT_Interaction: %s; Function Name: AbilityTryToStartInteraction"), *GetName());
		return;
	}

	if (InteractionRule == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no InteractionRule in TT_Interaction: %s; Function Name: AbilityTryToStartInteraction"), *GetName());
		return;
	}

	InteractionRule->AddContributor(LastContributor);
}

void UTT_Interaction::EndInteraction(TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance)
{
	TArray<UObject*> NoAbilityCausers;
	//By default I assume all causers do not have any ability
	NoAbilityCausers.Append(Causers);
	
	//If this interaction have interaction ability I should notify the ability to end
	for (auto It = AbilityMap.CreateIterator(); It; ++It)
	{
		//First loop all ability map to process the matched actor ability
		if(Causers.Num() == 0 || Causers.Find(It.Key()) != INDEX_NONE)
		{			
			if (It.Key() != nullptr && It.Key()->IsValidLowLevel())
			{
				UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(It.Key()->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

				if (AbilitysSystem == nullptr)
					continue;

				FGameplayAbilitySpec* AS = AbilitysSystem->FindAbilitySpecFromHandle(It.Value());

				if (AS == nullptr)
					continue;

				//Cash the key in case the ability end will remove the current element 
				AActor* TargetActor = It.Key();

				if (AS->GetPrimaryInstance()->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
				{
					IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(AS->GetPrimaryInstance());

					if (InteractionSupport == nullptr)
					{
						IInteractionSupportInterface::Execute_OnEndInteraction(AS->GetPrimaryInstance(), this, EndType, RemoveInstance);
					}
					else
					{
						InteractionSupport->InstigatTriggerTask = this;

						InteractionSupport->EndInteraction(this, EndType, RemoveInstance);
					}
				}
				else
				{
					if (EndType == EInteractionEndType::EInteractionEndType_Success)
					{
						//Notify the ability success by add success tag
						FGameplayTag SuccessTag = GetVaildInteractionSuccessTag();
						AbilitysSystem->AddLooseGameplayTag(SuccessTag);
					}
					else if (EndType == EInteractionEndType::EInteractionEndType_Cancle)
					{
						//Notify the ability to be canceled by add cancel tag
						FGameplayTag CancelTag = GetVaildInteractionCancelTag();
						AbilitysSystem->AddLooseGameplayTag(CancelTag);
					}
					else if (EndType == EInteractionEndType::EInteractionEndType_Interrupt)
					{
						AS->GetPrimaryInstance()->CancelAbility(AS->GetPrimaryInstance()->GetCurrentAbilitySpecHandle(), AS->GetPrimaryInstance()->GetCurrentActorInfo(), AS->GetPrimaryInstance()->GetCurrentActivationInfo(), true);
					}
					else
					{
						UE_LOG(LogTrigger, Warning, TEXT("Please specify valid end type"));
						return;
					}
				}

				NoAbilityCausers.Remove(TargetActor);
				
				break;
			}
		}
	}
	
	if (NoAbilityCausers.Num() > 0)
	{
		AActor* OwnerActor = TryToGetOwnerActor();

		//The client only reset the rule data it will not end interaction
		if (OwnerActor != nullptr && !CheckRunTimeType())
		{
			if (InteractionRule)
			{
				for (int i = 0; i < NoAbilityCausers.Num(); i++)
				{
					InteractionRule->Reset(NoAbilityCausers[i]);
				}
				
			}
			return;
		}

		EndInteractionInternal(NoAbilityCausers, EndType, RemoveInstance);
	}
}

FGameplayTag UTT_Interaction::GetVaildInteractionSuccessTag()
{
	FGameplayTag SuccessTag;
	if (InteractionSuccessGamePlayTag.IsValid())
	{
		SuccessTag = InteractionSuccessGamePlayTag;
	}
	else
	{
		SuccessTag = FGameplayTag::RequestGameplayTag(TT_Interaction::InteractionSuccessGamePlayTag);
	}
	return SuccessTag;
}

FGameplayTag UTT_Interaction::GetVaildInteractionCancelTag()
{
	FGameplayTag SuccessTag;
	if (InteractionCancelGamePlayTag.IsValid())
	{
		SuccessTag = InteractionCancelGamePlayTag;
	}
	else
	{
		SuccessTag = FGameplayTag::RequestGameplayTag(TT_Interaction::InteractionCancelGamePlayTag);
	}
	return SuccessTag;
}

void UTT_Interaction::EndInteractionInternal(const TArray<UObject*>& Causers, EInteractionEndType EndType, bool RemoveInstance)
{
	RemoveInvalidAbilityCash();

	//No matter which type of end interaction, I need to remove the contributors belong to these causers
	if (InteractionRule != nullptr)
	{
		InteractionRule->RemoveContributorsBelongToTargetCausers(Causers);
	}

	//Remove the target causer form the generation so that the generation can used again
	if (InteractionInfoGenerator != nullptr)
	{
		InteractionInfoGenerator->RemoveInteraction(Causers, TriggerInteractionStage::AllStage);
	}

	//When end interaction we should first close effect and then notify other components that this interaction have ended
	for (int i = 0; i < Causers.Num(); i++)
	{
		CloseEffect(Causers[i], EndType, RemoveInstance);

		AbilityMap.Remove(Cast<AActor>(Causers[i]));
	}

	OnEndInteraction(Causers, EndType, RemoveInstance);

	InteractionEndDelegate.Broadcast(Causers, this, EndType);

	FTriggerDelegate::InteractionEndNativeDelegate.Broadcast(this, Causers, EndType);

	//If the causer is null means the this task should be finished
	if (//Causers.Num() == 0 &&
		//Only when when interact successfully we can finish this task
		(EndType == EInteractionEndType::EInteractionEndType_Success))
	{
		Finished();
	}
}

bool UTT_Interaction::DoesEffectRunOnServer( int EffectIndex)
{
	if (EffectIndex >= InteractionEffects.Num())
	{
		return false;
	}
	
	/*
	* Only when this task is not run on client or standalone and the InteractionEffect request to run on server
	*/
	if (RunType == ERunType::ERunType_RunOnServer &&
		(InteractionEffects[EffectIndex]->RunType == ERunType::ERunType_RunOnServer || InteractionEffects[EffectIndex]->RunType == ERunType::ERunType_MutiCast) &&
		(GetTriggerOwner()->GetNetMode() != ENetMode::NM_Client && GetTriggerOwner()->GetNetMode() != ENetMode::NM_Standalone))
	{
		return true;
	}

	return false;
}

//void UTT_Interaction::InteractionRuleDataChanged_Implementation( AActor* Causer, const FString& Data)
void UTT_Interaction::InteractionRuleDataChanged(AActor* Causer, const FString& Data)
{
	if (InteractionRule == nullptr)
	{
		return;
	}

	UInteractionRuleDataBase* InteractionRuleData = InteractionRule->GetInteractionRuleData(Causer, Data);

	InteractionDataUpdateDelegate.Broadcast(InteractionRuleData);

	for (auto InteractionEffect : InteractionEffects)
	{
		InteractionEffect->ValueInInteractionRuleChanged(Causer, InteractionRuleData);
	}
}

void UTT_Interaction::OpenEffect_Implementation(const FInteractionInfo& InteractionInfo, int EffectIndex)
{
	UInteractionOpenStyle* OpenStyle = NewObject<UInteractionOpenStyle>();
	OpenStyle->SetIneractionInfo(InteractionInfo);

	if (EffectIndex >= 0 && EffectIndex < InteractionEffects.Num())
	{
		InteractionEffects[EffectIndex]->TryToOpenEffect(OpenStyle);
	}
	else
	{
		for (auto InteractionEffect : InteractionEffects)
		{
			if (InteractionEffect == nullptr)
				continue;

			InteractionEffect->TryToOpenEffect(OpenStyle);
		}
	}
}

void UTT_Interaction::CloseEffect_Implementation(UObject* Causer, EInteractionEndType EndType, bool RemoveInstance)
{
	if(InteractionInfoGenerator == nullptr)
		return;

	FInteractionInfo InteractionInfo;

	for (int i = 0; i < InteractionInfoGenerator->GetinteractionInfo().Num(); i++)
	{
		AActor* Actor  = Cast<AActor>(Causer);

		if(Actor == nullptr)
			continue;

		if (InteractionInfoGenerator->GetinteractionInfo()[i].Actor == Causer)
		{
			InteractionInfo = InteractionInfoGenerator->GetinteractionInfo()[i];
			break;
		}
	}
	
	UInteractionCloseStyle* CloseStyle = NewObject<UInteractionCloseStyle>();
	CloseStyle->SetIneractionInfo(InteractionInfo);
	CloseStyle->SetEndType(EndType);
	CloseStyle->SetRemoveInstance(RemoveInstance);

	for (auto InteractionEffect : InteractionEffects)
	{
		if (InteractionEffect == nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("There is none value in the interaction effect!!!"));
			continue;
		}

		InteractionEffect->CloseEffect(CloseStyle);
	}
}

FInteractionInfo& UTT_Interaction::GetValidInteractionInfo(AActor* TargetActor, FString& InteractState, bool ForceCreateNew)
{
	if (TargetActor == nullptr || InteractionInfoGenerator == nullptr)
		return FInteractionInfo::InvaildValue;

	FInteractionInfo InteractionInfo;

	if (ForceCreateNew)
	{
		if (InteractionInfoGenerator->GenerateInteractionInfo(InteractionInfo, InteractState, this, TargetActor))
		{
			//New interaction info is generated
			InteractionInfoGenerator->SetCurrentEffectInteractionInfo(InteractionInfoGenerator->GetinteractionInfo().Num()-1);

			int Index = InteractionInfoGenerator->GetinteractionInfo().Find(InteractionInfo);

			if (Index == INDEX_NONE)
			{
				return FInteractionInfo::InvaildValue;
			}
			else
			{
				return InteractionInfoGenerator->GetinteractionInfo()[Index];
			}
		}
		else
		{
			return FInteractionInfo::InvaildValue;
		}
	}
	else
	{
		int Index = INDEX_NONE;

		for (int i = 0; i < InteractionInfoGenerator->GetinteractionInfo().Num(); i++)
		{
			if (InteractionInfoGenerator->GetinteractionInfo()[i].Actor == TargetActor)
			{
				Index = i;
				break;
			}
		}

		if (Index == INDEX_NONE)
		{
			return FInteractionInfo::InvaildValue;
		}
		else
		{
			InteractionInfoGenerator->SetCurrentEffectInteractionInfo(Index);

			return InteractionInfoGenerator->GetinteractionInfo()[Index];
		}
	}

	return FInteractionInfo::InvaildValue;
}

const TArray<FInteractionInfo>& UTT_Interaction::GetInteractionInfos() const
{
    static TArray<FInteractionInfo> LocalEmptyInfos;

    if (InteractionInfoGenerator != nullptr)
    {
        return InteractionInfoGenerator->GetConstInteractionInfo();
    }
    else 
    {
        return LocalEmptyInfos;
    }
}

bool UTT_Interaction::CanBeInteracted_Implementation( UObject* Causer )
{
	AActor* TargetActor = Cast<AActor>(Causer);

	if(TargetActor == nullptr)
		return true;

	for (auto IT = AbilityMap.CreateIterator(); IT; ++IT)
	{
		if(IT.Key() == TargetActor)
			continue;

		FGameplayAbilitySpecHandle* HandlePtr = AbilityMap.Find(TargetActor);

		if (HandlePtr == nullptr)
		{
			continue;
		}

		UAbilitySystemComponent* AbilitysSystem = Cast<UAbilitySystemComponent>(TargetActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

		if (AbilitysSystem == nullptr)
			continue;

		FGameplayAbilitySpec* AS = AbilitysSystem->FindAbilitySpecFromHandle(*HandlePtr);

		if (AS != nullptr && AS->GetPrimaryInstance())
		{
			FGameplayAbilityActorInfo ActorInfo = AS->GetPrimaryInstance()->GetActorInfo();

			if (!AS->GetPrimaryInstance()->CanActivateAbility(*HandlePtr, &ActorInfo))
			{
				return false;
			}
		}
	}

	return true;
}

void UTT_Interaction::Server_Interaction(AActor* TargetActor)
{
	if (InteractionInfoGenerator == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no InteractionInfoGenerator Data in TT_Interaction: %s"), *GetName());
		return;
	}

	FInteractionInfo& InteractionInfo = GetValidInteractionInfo(TargetActor, TriggerInteractionStage::ActiveInteractStage);
	
	//If there is no valid interaction info then just skip this interaction
	if(InteractionInfo == FInteractionInfo::InvaildValue)
		return;

	if (!Prepare())
		return;

	OnInteraction(InteractionInfo);
}

void UTT_Interaction::Server_CommitInteraction(UContributeRuleBase* Contributor)
{
	LastContributor = Contributor;

	//When new contributor is added I need to check weather there is one valid interaction info for this task, if not exist then add new one.
	FInteractionInfo& InteractionInfo = GetValidInteractionInfo(Contributor->Contributor, TriggerInteractionStage::InteractingSatge, true);

	if (InteractionInfo == FInteractionInfo::InvaildValue)
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no valid interaction information for this task, so just skip this contributor: %s"), Contributor != nullptr ? *Contributor->GetName() : TEXT("null contributor"));
		return;
	}

	//Each time this task active d I need to make 
	if (Contributor->NeedToCheckGamePlayAbility && !CheckGamePlayAbility(Contributor->Contributor))
		return;

	if (Contributor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Consture wrong Contributor in TT_Interaction: %s; Function Name: CommitInteractionByContributor"), *GetName());
		return;
	}

	if (InteractionRule == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no InteractionRule in TT_Interaction: %s; Function Name: CommitInteractionByContributor"), *GetName());
		return;
	}

	InteractionRule->AddContributor(Contributor);
}

void UTT_Interaction::Client_CommitInteraction(UContributeRuleBase* Contributor)
{
	if (InteractionRule == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("There is no InteractionRule in TT_Interaction: %s; Function Name: Client_CommitInteraction"), *GetName());
		return;
	}

	InteractionRule->AddContributor(Contributor);
}
