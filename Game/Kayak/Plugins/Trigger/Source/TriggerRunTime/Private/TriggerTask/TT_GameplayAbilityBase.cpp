#include "TT_GamePlayAbilityBase.h"
#include "TriggerTaskComponent.h"
#include "TriggerDefinition.h"
#include "AbilitySystemComponent.h"

UTT_GamePlayAbilityBase::UTT_GamePlayAbilityBase(const FObjectInitializer& ObjectInitilalizer) :
	Super(ObjectInitilalizer)
{
	CanEverTick = false;
}

void UTT_GamePlayAbilityBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	if (GetTriggerOwner() == nullptr)
	{
		return;
	}

	//When this task is assigned to the target object/actor I need to add new GameplayAbilityComponent to it
	AActor* OwnerActor = Cast<AActor>(GetTriggerOwner()->GetOwner());

	if (OwnerActor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("You want to use game ability system but the owner of this task is not Actor, You can add more code here or just make the over to be actor!!"));
		return;
	}
	
	UAbilitySystemComponent* ASC = Cast<UAbilitySystemComponent>(OwnerActor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

	//If the owner actor have no ability system component I need to add new abilityststemComponent to it
	if (ASC == nullptr)
	{
		ASC = Cast<UAbilitySystemComponent>(NewObject<UAbilitySystemComponent>(OwnerActor));
		OwnerActor->AddOwnedComponent(ASC);
		ASC->RegisterComponent();
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

	if (GamePlayAbility == nullptr)
	{
		if (*AbilityClass != nullptr)
		{
			GamePlayAbility = NewObject<UGameplayAbility>(this, AbilityClass);
		}
	}

	if(GamePlayAbility == nullptr)
		return false;

	Active();

	return Result;
}

void UTT_GamePlayAbilityBase::Active(bool ForceActive)
{
	Super::Active(ForceActive);

	UAbilitySystemComponent* Component = GetGameplayAbilitySystem();

	if (Component == nullptr)
	{
		return;
	}
		

	int Index = INDEX_NONE;
	for (int i = 0; i < AbilityHandles.Num(); i++)
	{
		FGameplayAbilitySpec* AbilitySpec = Component->FindAbilitySpecFromHandle(AbilityHandles[i]);
		{
			Index = i;
			break;
		}
	}

	if (Index == INDEX_NONE)
	{
		AbilityHandles.Add(Component->GiveAbility(FGameplayAbilitySpec(GamePlayAbility, Level, InputID)));
		Index = AbilityHandles.Num() -1;
	}

	InitializeAbilityByTriggerTask(AbilityHandles[Index], Component);

	if (ActiveAbilityAutomatically)
	{
		Component->TryActivateAbility(AbilityHandles[Index]);
	}
}

bool UTT_GamePlayAbilityBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

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

AActor* UTT_GamePlayAbilityBase::GetApplayedActor_Implementation(UObject* Target)
{
	AActor* Result = Cast<AActor>(Target);

	if (Result != nullptr)
	{
		 return Result;
	}

	if (UsedBySelf)
	{
		if (GetTriggerOwner() != nullptr)
		{
			Result = Cast<AActor>(GetTriggerOwner()->GetOuter());
		}

		if (Result == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("This trigger have no AbilitySystemComponent!!!"))
		}
	}
	else
	{
		//Liulianyou_TODO:This should be changed in the feature
		//Result = Cast<AActor>(GetImmediateActivationInformation().ProcessedExternalData);

		if (Result == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("This toggled actor have no AbilitySystemComponent!!!"))
		}
	}

	return Result;
}

UAbilitySystemComponent* UTT_GamePlayAbilityBase::GetGameplayAbilitySystem(UObject* Target)
{
	AActor* Actor = GetApplayedActor(Target);

	if(Actor == nullptr)
		return nullptr;

	UAbilitySystemComponent* Component = Cast<UAbilitySystemComponent>(Actor->GetComponentByClass(UAbilitySystemComponent::StaticClass()));

	return Component;
}

void UTT_GamePlayAbilityBase::InitializeAbilityByTriggerTask(FGameplayAbilitySpecHandle& AbilityHandle, UAbilitySystemComponent* Component)
{
	if(Component == nullptr)
		return;

	FGameplayAbilitySpec* AbilitySpec = Component->FindAbilitySpecFromHandle(AbilityHandle);

	if(AbilitySpec->Ability == nullptr)
		return;

	if (AbilitySpec->Ability->GetClass()->ImplementsInterface(UGamePlayAbilitySupportInterface::StaticClass()))
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