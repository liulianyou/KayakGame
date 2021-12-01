#include "TriggerTaskStart_StartTaskByTaskComponent.h"
#include "TriggerTaskComponentBase.h"
#include "GameFramework/Actor.h"

UTriggerTaskStart_StartTaskByTaskComponent::UTriggerTaskStart_StartTaskByTaskComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

AActor* UTriggerTaskStart_StartTaskByTaskComponent::GetToggledActor_Implementation() const
{
	UTriggerTaskComponentBase* LocalTaskComponent = GetTaskComponent();

	if (LocalTaskComponent == nullptr)
	{
		UObject* Outer = GetOuter();

		while (Outer != nullptr)
		{
			AActor* Actor = Cast<AActor>(Outer);

			if(Actor != nullptr)
				return Actor;

			Outer = Outer->GetOuter();
		}
	}
	else
	{
		return LocalTaskComponent->GetOwner();
	}

	return nullptr;
}

void UTriggerTaskStart_StartTaskByTaskComponent::SetTaskComponent(UTriggerTaskComponentBase* TC)
{
	TaskComponent = TC;
}

UTriggerTaskComponentBase* UTriggerTaskStart_StartTaskByTaskComponent::GetTaskComponent() const
{
	if (TaskComponent != nullptr || TaskComponent->IsValidLowLevel())
	{
		return TaskComponent;
	}

	//The below code is used to find appropriate TaskComponent of this toggle information just in case

	UObject* Outer = GetOuter();

	//First try to find the component directly from the path hierarchy of this object
	while (Outer != nullptr)
	{
		UTriggerTaskComponentBase* Component = Cast<UTriggerTaskComponentBase>(Outer);

		if (Component != nullptr)
		{
			return Component;
		}
			
		Outer = Outer->GetOuter();
	}

	//Second try to find the component from the outer actor if exist
	while (Outer != nullptr)
	{
		AActor* Actor = Cast<AActor>(Outer);

		if (Actor != nullptr)
		{
			TArray<UActorComponent*> Components;
			Components.Empty();

			Actor->GetComponents(UTriggerTaskComponentBase::StaticClass(), Components, true);
				
			for (int i = 0; i < Components.Num(); i++)
			{
				UTriggerTaskComponentBase* Component = Cast<UTriggerTaskComponentBase>(Components[i]);

				if (Component->IsMatchedForCurrentRunTimeContent())
				{
					return Component;
				}
			}
		}
	}

	return nullptr;

}