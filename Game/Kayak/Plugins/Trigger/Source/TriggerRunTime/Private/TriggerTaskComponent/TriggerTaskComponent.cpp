#include "TriggerTaskComponent.h"
#include "NewTriggerBase.h"

#include "TriggerEventActorChain.h"


UTriggerTaskComponent::UTriggerTaskComponent(const FObjectInitializer& ObjectInitialzier):
	Super(ObjectInitialzier)
{
}

void UTriggerTaskComponent::PostLoad()
{
	Super::PostLoad();
}

void UTriggerTaskComponent::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

void UTriggerTaskComponent::OnRegister()
{
	Super::OnRegister();
}

void UTriggerTaskComponent::OnUnregister()
{
	Super::OnUnregister();
}

void UTriggerTaskComponent::RegisterTaskComponent()
{
	PopulateOldDataToNewData();

	Super::RegisterTaskComponent();
}

void UTriggerTaskComponent::PopulateOldDataToNewData()
{
	if (ChildNodes.Num() != 0)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The LD should save the target map and upload to move the old child node event to new trigger event chain with component %s"), *GetPathName());
	}

	//This should be removed at the feature
	{
		if (GetConstEventChains().Num() == 0 && ChildNodes.Num() != 0)
		{
			UTriggerEventChainBase* NewEventChain = AddNewEventChain(Cast<UTriggerEventChainBase>(UTriggerEventActorChain::StaticClass()->GetDefaultObject()), true);

			if (NewEventChain != nullptr)
			{
				for (auto OldValue : ChildNodes)
				{
					NewEventChain->AddChildNode(OldValue);
				}
			}
		}
		else
		{
			for (auto OldValue : ChildNodes)
			{
				for (auto NewEventChain : GetEventChains())
				{
					if (NewEventChain == nullptr)
						continue;

					NewEventChain->AddChildNode(OldValue);
				}
			}
		}

		ChildNodes.Empty();
	}
}

#if WITH_EDITOR

void UTriggerTaskComponent::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void UTriggerTaskComponent::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}

void UTriggerTaskComponent::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
}

#endif
