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
	Super::RegisterTaskComponent();
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
