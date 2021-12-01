#include "TriggerInterfaceForActor.h"
#include "TriggerInterface.h"
#include "TriggerTaskComponent.h"
#include "TriggerTaskStart_PhysicsToggleInformationBase.h"
#include "GameFramework/Actor.h"
#include "TriggerDefinition.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"
#include "TriggerTaskOperationCommonInfo.h"

UTriggerInterfaceForActor::UTriggerInterfaceForActor(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UTriggerInterfaceForActor::Initialize(UObject* ObjectOwner)
{
	Super::Initialize(ObjectOwner);

	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return;
	}

	Actor->OnActorHit.AddDynamic(this, &UTriggerInterfaceForActor::ActorHit);
	Actor->OnActorBeginOverlap.AddDynamic(this, &UTriggerInterfaceForActor::ActorBeginOverlap);
	Actor->OnActorEndOverlap.AddDynamic(this, &UTriggerInterfaceForActor::ActorEndOverlap);
}

AActor* UTriggerInterfaceForActor::GetActorOwner() const
{
	AActor* OwnerActor = Cast<AActor>(GetOwnerObject());

	if(OwnerActor)
		return OwnerActor;

	return GetTypedOuter<AActor>();
}

void UTriggerInterfaceForActor::GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const
{
	TaskComponents.Empty();

	AActor* Actor = GetActorOwner();

	TArray<UActorComponent*> Components;

	Actor->GetComponents(Components);

	for (auto Component : Components)
	{
		UTriggerTaskComponentBase* LocalTriggerTaskComponent = Cast<UTriggerTaskComponentBase>(Component);

		if (LocalTriggerTaskComponent != nullptr)
		{
			TaskComponents.Add(LocalTriggerTaskComponent);
		}
	}
}

bool UTriggerInterfaceForActor::RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent/* = false*/)
{
	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return false;
	}

	bool Result = false;

	//If the BP have removed the component then just return true
	if (Result)
		return true;

	TArray<UTriggerTaskComponentBase*> Components;
	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if (Component == nullptr)
			continue;

		if (Component->GetComponentID() == ComponentID)
		{
			RemoveTriggerTaskComponentInternal(Component, IncludeChildrenComponent);
		}
	}

	return Result;
}

UTriggerTaskComponentBase* UTriggerInterfaceForActor::AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent)
{
	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return nullptr;
	}

	if (NewComponent == nullptr)
		return nullptr;

	TArray<UTriggerTaskComponentBase*> Components;
	GetTriggerTaskComponents(Components);

	UTriggerTaskComponentBase** ComponentPtr = Components.FindByPredicate([&](const UTriggerTaskComponentBase* Data) {
		if (Data == nullptr)
			return false;

		if (NewComponent == Data ||
			Data->GetComponentID() == NewComponent->GetComponentID())
		{
			return true;
		}
		else
			return false;
	});

	//There is a same task component in this actor, so do not need to add it again
	if (ComponentPtr != nullptr)
	{
		return *ComponentPtr;
	}

	UTriggerTaskComponentBase* Result = nullptr;
	
	if (!Actor->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()))
	{
		UE_LOG(LogTrigger, Warning, TEXT("Please make the target Actor %s inherited ITriggerInterface"), *Actor->GetPathName());
		return nullptr;
	}

	Actor->AddOwnedComponent(Result);
	Result->AttachToComponent(Actor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	Result->RegisterComponent();

	return (Result);
}

bool UTriggerInterfaceForActor::GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const
{
	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return false;
	}

	TArray<UActorComponent*> Components;

	Actor->GetComponents(UTriggerTaskComponentBase::StaticClass(), Components);

	FBoxSphereBounds TotalBounds(EForceInit::ForceInitToZero);

	for (int i = 0; i < Components.Num(); i++)
	{
		UTriggerTaskComponentBase* TaskComponent = Cast<UTriggerTaskComponentBase>(Components[i]);

		if (TaskComponent == nullptr)
			continue;

		FBoxSphereBounds Bounds = TaskComponent->CalcBounds(TaskComponent->GetComponentTransform());

		TArray<USceneComponent*> ChildComponents;

		TaskComponent->GetChildrenComponents(true, ChildComponents);

		for (int j = 0; j < ChildComponents.Num(); j++)
		{
			USceneComponent* SC = Cast<USceneComponent>(ChildComponents[j]);
			if (SC == nullptr)
				continue;

#if WITH_EDITORONLY_DATA
			if (SC->IsEditorOnly())
				continue;
#endif
			FBoxSphereBounds ChildBound = SC->CalcBounds(SC->GetComponentTransform());

			//When the child bound have no extend then just skip it
			if (ChildBound.BoxExtent == FVector::ZeroVector)
				continue;

			if (Bounds.BoxExtent == FVector::ZeroVector
				&& ChildBound.BoxExtent != FVector::ZeroVector)
			{
				Bounds = ChildBound;
			}
			else
			{
				Bounds = Bounds + ChildBound;
			}
		}

		//I need to initialize the total bounds when process the first component
		if (TotalBounds.BoxExtent == FVector::ZeroVector
			//&& TotalBounds.SphereRadius == 0 
			&& Bounds.BoxExtent != FVector::ZeroVector)
		{
			TotalBounds = Bounds;
		}
		else
		{
			TotalBounds = TotalBounds + Bounds;
		}
	}

	//When the final bounds of this actor have no extent then just use the actor bounds
	if (TotalBounds.BoxExtent == FVector::ZeroVector)
	{
		Actor->GetActorBounds(true, Origin, HalfBoxExtent);
	}
	else
	{
		Origin = TotalBounds.Origin;
		HalfBoxExtent = TotalBounds.BoxExtent;
	}

	return true;
}

bool UTriggerInterfaceForActor::GetUniqueRuntimeID(int& OutID) const
{
	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return false;
	}

	bool Result = false;

	if(Result)
		return true;

	OutID = Actor->GetUniqueID();

	return true;
}

bool UTriggerInterfaceForActor::RemoveTriggerTaskComponentInternal(USceneComponent* LocalParentComponent, bool IncludeChildrenComponent)
{
	AActor* Actor = GetActorOwner();

	if (Actor == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The TriggerInterfaceForActor only can be used within one actor!!!"));
		return false;
	}

	if (LocalParentComponent == nullptr)
		return false;

	/*
	* As the root component of the trigger should always be trigger task component,
	* When remove one trigger task component I need to check weather it is root component,
	* If it is a root component then I need to pick up one appropriate trigger task component as its new root component
	*/
	if (Actor->GetRootComponent() == LocalParentComponent)
	{
		TArray<UTriggerTaskComponentBase*> TriggerTaskComponents;
		GetTriggerTaskComponents(TriggerTaskComponents);

		for (auto LocalTriggerTaskComponent : TriggerTaskComponents)
		{
			if (LocalTriggerTaskComponent == Actor->GetRootComponent())
				continue;

			LocalTriggerTaskComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

			Actor->SetRootComponent(LocalTriggerTaskComponent);

			TArray<USceneComponent*> ChildrenComponents;
			LocalParentComponent->GetChildrenComponents(false, ChildrenComponents);

			for (auto ChildComponent : ChildrenComponents)
			{
				if (ChildComponent == Actor->GetRootComponent())
					continue;

				ChildComponent->AttachToComponent(Actor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			}
		}
	}

	LocalParentComponent->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
	LocalParentComponent->UnregisterComponent();
	LocalParentComponent->DestroyComponent();

	{
		//We should remove the components which is attached to the root component
		if (IncludeChildrenComponent)
		{
			for (auto Component : LocalParentComponent->GetAttachChildren())
			{
				if (Component == nullptr)
					continue;

				RemoveTriggerTaskComponentInternal(Component, IncludeChildrenComponent);
			}
		}
	}

	return true;
}

bool UTriggerInterfaceForActor::CanbeToggled() const
{
	bool Result = true;

	return Result;
}

void UTriggerInterfaceForActor::ActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!CanbeToggled()) return;

	//TArray<UTriggerTaskComponentBase*> Components;

	//GetTriggerTaskComponents(Components);

	//for (auto Component : Components)
	//{
	//	if(Component == nullptr)
	//		continue;

	//	UTriggerTaskStart_ActorHit* HitInfo = Component->CreateNewOperation<UTriggerTaskStart_ActorHit>();

	//	FScopeOperationInfoSpace ScopeOperationInfoSpace(FOperationInfoSpace(Component, HitInfo));

	//HitInfo->Actor = SelfActor;
	//HitInfo->OtherActor = OtherActor;
	//HitInfo->Hit = Hit;
	//}
}

void UTriggerInterfaceForActor::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!CanbeToggled() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr) return;

	TArray<UTriggerTaskComponentBase*> Components;

	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if (Component == nullptr)
			continue;

		UTriggerTaskStart_ActorStartOverlap* StartOverInfo = Cast<UTriggerTaskStart_ActorStartOverlap>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Component, UTriggerTaskStart_ActorStartOverlap::StaticClass()).Operation);

		if (StartOverInfo != nullptr)
		{
			//FScopeOperationInfoSpace ScopeOperationInfoSpace(FOperationInfoSpace(Component, StartOverInfo));

			StartOverInfo->Actor = OverlappedActor;
			StartOverInfo->OtherActor = OtherActor;

			Component->TransfereTask(Component, nullptr, StartOverInfo);
		}
	}

}

void UTriggerInterfaceForActor::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (!CanbeToggled() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr) return;

	TArray<UTriggerTaskComponentBase*> Components;

	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if (Component == nullptr)
			continue;

		//The target will be set at the EndTask
		UTriggerTaskEnd_ActorEndOverlap* EndOverInfo = UTriggerTaskEnd_ActorEndOverlap::ActorEndOverlap(this, Component, OtherActor, nullptr, nullptr, INDEX_NONE, OverlappedActor);

		if (EndOverInfo != nullptr)
		{
			Component->EndTask(EndOverInfo);
		}
	}
}