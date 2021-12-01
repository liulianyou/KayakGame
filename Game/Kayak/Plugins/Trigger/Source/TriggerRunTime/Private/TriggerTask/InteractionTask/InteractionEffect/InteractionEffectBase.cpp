#include "InteractionEffectBase.h"
#include "TT_Interaction.h"
#include "TriggerTaskComponentBase.h"


UInteractionOpenStyle::UInteractionOpenStyle(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{}


UInteractionCloseStyle::UInteractionCloseStyle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}



UInteractionEffectBase::UInteractionEffectBase(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer),
	RunType(ERunType::ERunType_RunOnClient)
{
}

void UInteractionEffectBase::PostInitProperties()
{
	Super::PostInitProperties();
}

void UInteractionEffectBase::Initialize(UTriggerTaskBase* TriggerTask)
{
	Super::Initialize(TriggerTask);
}

void UInteractionEffectBase::TryToOpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle)
{
	bool CanOpen = false;

	if(GetTaskOwner() == nullptr || GetTaskOwner()->GetTriggerOwner() == nullptr)
		return;

	//Standalone mode will always open this effect
	if (GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone)
	{
		CanOpen = true;
	}
	else if (GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client)
	{
		//When the current machine is client, only allow the the Client/Muticast RunType to open this effect
		if (RunType == ERunType::ERunType_RunOnClient || RunType == ERunType::ERunType_MutiCast)
		{
			CanOpen = true;
		}
	}
	else
	{
		//When the current machine is Server(no matter Listen and DS), only allow the the Client/Muticast RunType to open this effect
		if (RunType == ERunType::ERunType_RunOnServer || RunType == ERunType::ERunType_MutiCast)
		{
			CanOpen = true;
		}
	}

	if (CanOpen)
	{
		OpenEffect(OpenStyle);
	}
}

void UInteractionEffectBase::Reset(UOperationInformationBase* ResetOperation)
{
	Super::Reset(ResetOperation);
}

void UInteractionEffectBase::OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle)
{
	OnOpenEffect(OpenStyle);
}

void UInteractionEffectBase::CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle)
{
	OnCloseEffect(CloseStyle);
}

void UInteractionEffectBase::ValueInInteractionRuleChanged( AActor* Causer,  UInteractionRuleDataBase* Data)
{
	if(Data == nullptr)
		return;

	OnValueInInteractionRuleChanged(Causer, Data);
}

void UInteractionEffectBase::CheckInteractionSupportForInitialize( UObject* Target, UTriggerTaskBase* TriggerTask)
{
	if (Target == nullptr || !Target->IsValidLowLevel())
	{
		return;
	}

	if (Target->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
	{
		IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(Target);

		if (TriggerTask != nullptr)
		{
			TriggerTask = GetCurrentVaildInteractionTask(Target);
		}

		if (InteractionSupport == nullptr)
		{
			IInteractionSupportInterface::Execute_OnInitializeByInteractionTask(Target, TriggerTask);
		}
		else
		{
			InteractionSupport->InstigatTriggerTask = GetTaskOwner();

			InteractionSupport->InitializeByInteractionTask(TriggerTask);
		}
	}
}

void UInteractionEffectBase::CheckInteractionSurpportForEnd(UObject* Target, UTT_Interaction* Task, EInteractionEndType EndType, bool RemoveInstance)
{
	if (Target == nullptr || !Target->IsValidLowLevel())
	{
		return;
	}

	if (Target->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
	{
		IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(Target);

		if (InteractionSupport == nullptr)
		{
			IInteractionSupportInterface::Execute_OnEndInteraction(Target, Task, EndType, RemoveInstance);
		}
		else
		{
			InteractionSupport->EndInteraction(Task, EndType, RemoveInstance);
		}
	}
}

void UInteractionEffectBase::CheckInteractionSupportForUpdate(UObject* Target, UInteractionRuleDataBase* Data)
{
	if (Target == nullptr || !Target->IsValidLowLevel())
	{
		return;
	}

	if (Target->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
	{
		IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(Target);

		if (InteractionSupport == nullptr)
		{
			IInteractionSupportInterface::Execute_OnInteractionUpdate(Target, Data);
		}
		else
		{
			InteractionSupport->InteractionUpdate(Data);
		}
	}
}

UTriggerTaskBase* UInteractionEffectBase::GetCurrentVaildInteractionTask(UObject* TargetObject)
{
	if (TargetObject == nullptr || !TargetObject->IsValidLowLevel())
	{
		return GetTaskOwner();
	}

	UTriggerTaskBase* Result = nullptr;

	if (TargetObject->GetClass()->ImplementsInterface(UInteractionSupportInterface::StaticClass()))
	{
		IInteractionSupportInterface* InteractionSupport = Cast<IInteractionSupportInterface>(TargetObject);

		if (InteractionSupport == nullptr)
		{
			
			Result = IInteractionSupportInterface::Execute_OnGetCurrentVaildInteractionTask(TargetObject, GetTaskOwner());
		}
		else
		{
			Result = InteractionSupport->GetCurrentVaildInteractionTask(GetTaskOwner());
		}
	}

	if (Result == nullptr)
	{
		Result = GetTaskOwner();
	}

	return Result;

}


