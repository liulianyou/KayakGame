#include "TT_GamePlayAbilityBase.h"
#include "TriggerTaskComponent.h"
#include "TriggerDefinition.h"
#include "AvatarAccessRuleBase.h"

#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"

UTT_GamePlayAbilityBase::UTT_GamePlayAbilityBase(const FObjectInitializer& ObjectInitilalizer) :
	Super(ObjectInitilalizer)
{
	CanEverTick = false;
	RunType = ERunType::ERunType_RunOnServer;
}

void UTT_GamePlayAbilityBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	if (AvatarAccesses != nullptr && TryToGetOwnerActor() != nullptr && TryToGetOwnerActor()->HasAuthority())
	{
		AvatarAccesses->Initialize(this);
		AvatarAccesses->GetTargetAvatars(Avaters);

		if (!AvatarAccesses->AvatarsChangedEvent.IsAlreadyBound(this, &UTT_GamePlayAbilityBase::OnAvatarsChangedEvent))
		{
			AvatarAccesses->AvatarsChangedEvent.AddDynamic(this, &UTT_GamePlayAbilityBase::OnAvatarsChangedEvent);
		}
	}

	RegisterAbilityComponentToOwnerActor();
}

void UTT_GamePlayAbilityBase::RegisterAbilityComponentToOwnerActor()
{
	const TArray<UObject*>& OuterAvaters = GetAllAvatars();

	for (int i = 0; i < OuterAvaters.Num(); i++)
	{
		AActor* OwnerActor = Cast<AActor>(OuterAvaters[i]);

		if(OwnerActor == nullptr)
			continue;

		bool HaveValidAbilitySystemInterface = true;

		if (OuterAvaters[i]->GetClass()->ImplementsInterface(UAbilitySystemInterface::StaticClass()))
		{
			IAbilitySystemInterface* AbilityInterface = Cast<IAbilitySystemInterface>(OuterAvaters[i]);

			if (AbilityInterface == nullptr)
			{
				HaveValidAbilitySystemInterface = false;
			}
		}
		else
		{
			HaveValidAbilitySystemInterface = false;
		}

		if (HaveValidAbilitySystemInterface)
			UE_LOG(LogTrigger, Warning, TEXT("Please add AbilitySystemInterface for the owner actor %s in native class"), *OwnerActor->GetName());
	}
}

void UTT_GamePlayAbilityBase::OnAvatarsChangedEvent(const TArray<UObject*>& ChangedAvatars, bool bIsAdded)
{
	for (int i = 0; i < ChangedAvatars.Num(); i++)
	{
		if(ChangedAvatars[i] == nullptr)
			continue;

		if (bIsAdded)
		{
			AddNewAvatar(ChangedAvatars[i]);
		}
		else
		{
			RemoveAvater(ChangedAvatars[i]);
		}
	}
}

//Invoked when one ability is ended
void UTT_GamePlayAbilityBase::OnAbilityEnd(const FAbilityEndedData& EndData)
{
	TArray<UAbilitySystemComponent*> RemovedAbilities;

	for (auto IT = AbilityHandles.CreateConstIterator(); IT; ++IT)
	{
		if (IT.Value() == EndData.AbilitySpecHandle)
		{
			RemovedAbilities.Add(IT.Key());
		}
	}

	for (auto RemovedAbilitie : RemovedAbilities)
	{
		AbilityHandles.Remove(RemovedAbilitie);
	}
}

bool UTT_GamePlayAbilityBase::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	return Result;
}

bool UTT_GamePlayAbilityBase::Prepare()
{
	bool Result = Super::Prepare();

	if(Result == false)
		return false;

	Active();

	return Result;
}

void UTT_GamePlayAbilityBase::Active(bool ForceActive)
{
	Super::Active(ForceActive);

	for (int i = 0; i < Avaters.Num(); i++)
	{
		GiveAbility( Avaters[i] );
	}
}

bool UTT_GamePlayAbilityBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if(Result == false)
		return false;

	Prepare();

	return Result;
}

void UTT_GamePlayAbilityBase::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_GamePlayAbilityBase::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_GamePlayAbilityBase::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}


void UTT_GamePlayAbilityBase::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_GamePlayAbilityBase::PostFinished()
{
	Super::PostFinished();
}

void UTT_GamePlayAbilityBase::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_GamePlayAbilityBase::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_GamePlayAbilityBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	AbilityHandles.Reset();
}

void UTT_GamePlayAbilityBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_GamePlayAbilityBase::CanTick()
{
	bool Result = Super::CanTick();

	return Result;
}

UAbilitySystemComponent* UTT_GamePlayAbilityBase::GetGameplayAbilitySystem(UObject* Target)
{
	if(Target == nullptr)
		return nullptr;

	if (Target->GetClass()->ImplementsInterface(UAbilitySystemInterface::StaticClass()))
	{
		IAbilitySystemInterface* Interface = Cast<IAbilitySystemInterface>(Target);

		if (Interface)
		{
			return Interface->GetAbilitySystemComponent();
		}
		else
		{
			UE_LOG(LogTrigger, Warning, TEXT("Please add IAbilitySystemInterface in the native class "));
		}
	}

	return nullptr;
}

void UTT_GamePlayAbilityBase::InitializeAbilityByTriggerTask(FGameplayAbilitySpecHandle& AbilityHandle, UAbilitySystemComponent* Component)
{
	if(Component == nullptr || !AbilityHandle.IsValid())
		return;

	FGameplayAbilitySpec* AbilitySpec = Component->FindAbilitySpecFromHandle(AbilityHandle);

	if(AbilitySpec == nullptr || AbilitySpec->GetPrimaryInstance() == nullptr)
		return;

	if (AbilitySpec->GetPrimaryInstance()->GetClass()->ImplementsInterface(UGamePlayAbilitySupportInterface::StaticClass()))
	{
		IGamePlayAbilitySupportInterface* GameplayAbilitySupport = Cast<IGamePlayAbilitySupportInterface>(AbilitySpec->Ability);

		if (GameplayAbilitySupport == nullptr)
		{
			IGamePlayAbilitySupportInterface::Execute_BP_OnInitaizleFormTriggerTask(AbilitySpec->Ability, this);
		}
		else
		{
			GameplayAbilitySupport->InitaizleFormTriggerTask(this);
		}
	}
}

void UTT_GamePlayAbilityBase::AddNewAvatar(UObject* NewAvatar)
{
	if(NewAvatar == nullptr)
		return;

	Avaters.AddUnique(NewAvatar);

	if (IsRunning())
	{
		GiveAbility( NewAvatar );
	}
}

void UTT_GamePlayAbilityBase::RemoveAvater(UObject* OldAvatar)
{
	if(OldAvatar == nullptr)
		return;

	Avaters.Remove(OldAvatar);

	UAbilitySystemComponent* AbilityComponent = GetGameplayAbilitySystem(OldAvatar);

	if(AbilityComponent == nullptr)
		return;
	
	AbilityHandles.Remove(AbilityComponent);
}

void UTT_GamePlayAbilityBase::GiveAbility(UObject* Avater)
{
	if(Avater == nullptr)
		return;

	UAbilitySystemComponent* Component = GetGameplayAbilitySystem(Avater);

	if (Component == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The Avater do not have a valid AbilitySystemComponent in it, maybe it need inherited from the IAbilitySystemInterface"))
		return;
	}

	FGameplayAbilitySpecHandle AbilitySpaceHandle = AbilityHandles.FindRef(Component);

	if (!AbilitySpaceHandle.IsValid())
	{
		//As the ability has been removed i need to remove this map
		AbilityHandles.Remove(Component);

		if (AbilityClass == nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("Try to give ability to the avater with none ability class in trigger task %s"), *GetPathName());

			return;
		}

		AbilitySpaceHandle = Component->GiveAbility(FGameplayAbilitySpec(AbilityClass, Level, InputID));

		if (AbilitySpaceHandle.IsValid())
		{
			AbilityHandles.Add(Component, AbilitySpaceHandle);
		}
		else
		{
			UE_LOG(LogTrigger, Warning, TEXT("Can not give ability to the target avater int trigger task %s"), *GetPathName());
		}
	}

	InitializeAbilityByTriggerTask(AbilitySpaceHandle, Component);

	Component->TryActivateAbility(AbilitySpaceHandle);

	if (!Component->OnAbilityEnded.IsBoundToObject(this))
	{
		Component->OnAbilityEnded.AddUObject(this, &UTT_GamePlayAbilityBase::OnAbilityEnd);
	}
}

void UTT_GamePlayAbilityBase::RemoveAbility(UObject* Avater)
{
	if (Avater == nullptr)
		return;

	UAbilitySystemComponent* Component = GetGameplayAbilitySystem(Avater);

	if (Component == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The Avater do not have a valid AbilitySystemComponent in it, maybe it need inherited from the IAbilitySystemInterface"))
			return;
	}

	RemoveAbility(Component);
}

void UTT_GamePlayAbilityBase::RemoveAbility(UAbilitySystemComponent* Component)
{
	if(Component == nullptr)
		return;

	FGameplayAbilitySpecHandle* AbilitySpaceHandle = AbilityHandles.Find(Component);

	FGameplayAbilitySpec* AbilitySpec = Component->FindAbilitySpecFromHandle(*AbilitySpaceHandle);

	if (AbilitySpec != nullptr)
	{
		UGameplayAbility* Ability = AbilitySpec->GetPrimaryInstance();

		if(Ability == nullptr)
			return;

		if (Ability->GetClass()->ImplementsInterface(UGamePlayAbilitySupportInterface::StaticClass()))
		{
			IGamePlayAbilitySupportInterface* Interface = Cast<IGamePlayAbilitySupportInterface>(Ability);

			if (Interface == nullptr)
			{
				IGamePlayAbilitySupportInterface::Execute_BP_OnTryToEndAbility(Ability, this);
			}
			else
			{
				Interface->TryToEndAbility(this);
			}
		}
	}

	AbilityHandles.Remove(Component);
}

void UTT_GamePlayAbilityBase::EndByAbility(UGameplayAbility* Ability, bool FinishTask)
{
	if(Ability == nullptr)
		return;

	EndTaskInternal(FinishTask);
}

void UTT_GamePlayAbilityBase::EndTaskInternal( bool FinishThisTask )
{
	for (auto IT = AbilityHandles.CreateConstIterator(); IT; ++IT)
	{
		RemoveAbility(IT.Key());
	}

	AbilityHandles.Empty();

	if (FinishThisTask)
	{
		Finished();
	}
}