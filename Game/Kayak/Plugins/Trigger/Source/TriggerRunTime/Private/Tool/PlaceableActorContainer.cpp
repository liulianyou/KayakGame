#include "PlaceableActorContainer.h"
#include "Components/ChildActorComponent.h"
#include "TriggerInterface.h"
#include "TriggerTaskComponentBase.h"
#include "Category/TriggerCategory.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"

bool FChildActorInfo::IsValid()
{
	bool Result = Actor.IsValid();
	return Result;
}


APlaceableActorContainer::APlaceableActorContainer(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
#if WITH_EDITOR
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		if (GEditor != nullptr && !APlaceableActorContainer::ObjectReplacedHanded.IsValid())
		{
			ObjectReplacedHanded = GEditor->OnObjectsReplaced().AddUObject(this, &APlaceableActorContainer::OnObjectReplaced);

			ReInstancedHandle = GEditor->OnBlueprintReinstanced().AddUObject(this, &APlaceableActorContainer::OnReinstanced);
		}
	}
#endif
}

void APlaceableActorContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlaceableActorContainer, DestroyedActorNameHashes)
}

void APlaceableActorContainer::PostInitProperties()
{
	Super::PostInitProperties();
}

void APlaceableActorContainer::PostLoad()
{
	Super::PostLoad();
}

void APlaceableActorContainer::Serialize(FArchive& Ar)
{	
	Super::Serialize(Ar);
}


void APlaceableActorContainer::Destroyed()
{
	RemoveAllChildActors();

	Super::Destroyed();

#if WITH_EDITOR

	if (ObjectReplacedHanded.IsValid())
	{
		GEditor->OnObjectsReplaced().Remove(ObjectReplacedHanded);
		ObjectReplacedHanded.Reset();
	}

	if (ReInstancedHandle.IsValid())
	{
		GEditor->OnBlueprintReinstanced().Remove(ReInstancedHandle);
		ReInstancedHandle.Reset();
	}
#endif
}

void APlaceableActorContainer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//Should never use the actors which is created by child actor component which will cause the net GUID is different between server and client
	{
		TArray<UChildActorComponent*> ChildActorComponents;

		GetComponents<UChildActorComponent>(ChildActorComponents);

		for (auto ChildActorComponent : ChildActorComponents)
		{
			if (ChildActorComponent != nullptr)
			{
				ChildActorComponent->DestroyChildActor();
			}
		}
	}

}

void APlaceableActorContainer::GetUnmappedChildActorComponents(TArray<UChildActorComponent*>& OutComponents)
{
	OutComponents.Empty();

	TArray<UChildActorComponent*> MappedComponents;

	MappedComponents.Empty();

	TArray<AActor*> DestroyedActors;

	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		FChildActorInfo& ChildActor = ChildActorInfos[i];

		if (!ChildActor.IsValid())
			continue;

		UChildActorComponent* MappedComponent = GetMappedComponent(ChildActor.Actor.Get(), MappedComponents);

		if (MappedComponent == nullptr)
		{
			ChildActor.Actor->Destroy();
			DestroyedActors.Add(ChildActor.Actor.Get());
			ChildActorInfos.RemoveAt(i--);
		}
		else
		{
			MappedComponents.AddUnique(MappedComponent);
		}
	}

	for (auto Actor : DestroyedActors)
	{
		if(Actor == nullptr)
			continue;
		
		if (Actor->GetWorld())
		{
			Actor->GetWorld()->DestroyActor(Actor);
		}
		else
		{
			Actor->Destroy();
		}
	}

	TArray<UChildActorComponent*> ChildActorComponents;

	GetComponents<UChildActorComponent>(ChildActorComponents);

	for (auto ChildActorComponent : ChildActorComponents)
	{
		if(ChildActorComponent == nullptr)
			continue;

		if (MappedComponents.Find(ChildActorComponent) == INDEX_NONE)
		{
			OutComponents.AddUnique(ChildActorComponent);
		}
	}
}

UChildActorComponent* APlaceableActorContainer::GetMappedComponent(AActor* ChildActor, const TArray<UChildActorComponent*>& ExcludeComponents)
{
	if(ChildActor == nullptr)
		return nullptr;

	FChildActorInfo* MapppedPtr = ChildActorInfos.FindByPredicate([&](const FChildActorInfo& ActorInfo){
		if(ActorInfo.Actor.Get() == ChildActor)
			return true;
		else
			return false;
	});

	if(MapppedPtr == nullptr)
		return nullptr;

	if (MapppedPtr->ChildActorComponent == nullptr)
	{
		TArray<UChildActorComponent*> ChildActorComponents;

		GetComponents<UChildActorComponent>(ChildActorComponents);

		TArray<AActor*> MappedActors;

		for (auto ChildActorComponent : ChildActorComponents)
		{
			if (ChildActorComponent == nullptr || ExcludeComponents.Find(ChildActorComponent) != INDEX_NONE)
				continue;

			if (ChildActorComponent->GetComponentToWorld().Equals(ChildActor->GetActorTransform()) &&
				ChildActor->GetClass() == ChildActorComponent->GetChildActorClass())
			{
				return ChildActorComponent;
			}
		}
	}
	else
	{
		return MapppedPtr->ChildActorComponent.Get();
	}

	return nullptr;	
}


void APlaceableActorContainer::UpdateChildActorsTransform()
{
	TArray<UChildActorComponent*> Components;
	GetComponents<UChildActorComponent>(Components);

	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		if(ChildActorInfos[i].Actor.Get() == nullptr)
			continue;

		for (int ComponentIndex = 0; ComponentIndex < Components.Num(); ComponentIndex++)
		{
			if (ChildActorInfos[i].Actor->IsA(Components[ComponentIndex]->GetChildActorClass()))
			{
				ChildActorInfos[i].Actor->SetActorTransform(Components[ComponentIndex]->GetComponentToWorld());
				Components.RemoveAt(ComponentIndex);
				break;
			}
		}
	}
}

void APlaceableActorContainer::RemoveAllChildActors()
{
	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		if (ChildActorInfos[i].Actor == nullptr)
			continue;

		ChildActorInfos[i].Actor->Destroy(true, true);
	}

	ChildActorInfos.Empty();
}

void APlaceableActorContainer::GenerateChildActors()
{
	TArray<UChildActorComponent*> ChildActorComponents;

	GetComponents<UChildActorComponent>(ChildActorComponents);

	//Remove invalid actor info
	{
		for (int i = 0; i < ChildActorInfos.Num(); i++)
		{
			if (!ChildActorInfos[i].IsValid())
			{
				ChildActorInfos.RemoveAt(i--);
				continue;
			}

			if (ChildActorComponents.Find(ChildActorInfos[i].ChildActorComponent.Get()) == INDEX_NONE)
			{
				ChildActorInfos[i].ChildActorComponent = nullptr;
			}
		}
	}

	/*
	* Remove the existed child actor which is created by the child actor component.
	* As the actor created by the child actor component is created at runtime, this will cause the Server/Client is not the same.
	*/
	{
		for (auto ChildActorComponent : ChildActorComponents)
		{
			if (ChildActorComponent != nullptr)
			{
				ChildActorComponent->DestroyChildActor();
			}
		}
	}

	//Hold the new spawned actors so that I can populate the data in this container to these new actors
	TArray<AActor*> NewActors;

	//Try to spawn new actor according to the child actor components
	{
		TArray<UChildActorComponent*> UnMappedChildActorComponents;

		GetUnmappedChildActorComponents(UnMappedChildActorComponents);

		for (int i = 0; i < UnMappedChildActorComponents.Num(); i++)
		{
			if (UnMappedChildActorComponents[i] == nullptr)
				continue;

			UnMappedChildActorComponents[i]->SetVisibility(false, true);

#if WITH_EDITORONLY_DATA
			UnMappedChildActorComponents[i]->SetIsVisualizationComponent(true);
#endif

			UClass* ChildActorClass = UnMappedChildActorComponents[i]->GetChildActorClass();
			FTransform Transfrom = UnMappedChildActorComponents[i]->GetComponentTransform();

			FActorSpawnParameters Parameters;
			Parameters.OverrideLevel = GetLevel();
			Parameters.Owner = this;
			Parameters.bNoFail = true;

			AActor* LocalChildActor = GetWorld()->SpawnActor(ChildActorClass, &Transfrom, Parameters);

			if (LocalChildActor != nullptr)
			{
				LocalChildActor->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);

				//This actor can not be selected in the editor
				TArray<UPrimitiveComponent*> PrimitiveComponents;
				LocalChildActor->GetComponents<UPrimitiveComponent>(PrimitiveComponents);

				for (int PrimitiveComponentIndex = 0; PrimitiveComponentIndex < PrimitiveComponents.Num(); PrimitiveComponentIndex++)
				{
					PrimitiveComponents[PrimitiveComponentIndex]->bSelectable = false;
				}

				LocalChildActor->OnDestroyed.AddDynamic(this, &APlaceableActorContainer::OnChildActorDestroyed);

				FChildActorInfo NewActorInfo;
				NewActorInfo.Actor = LocalChildActor;
				ChildActorInfos.Add(NewActorInfo);

				NewActors.Add(LocalChildActor);
			}
		}
	}

	{

		TArray<UChildActorComponent*> MappedComponents;
		MappedComponents.Empty();

		for (int i = 0; i < ChildActorInfos.Num(); i++)
		{
			if (!ChildActorInfos[i].IsValid())
				continue;

			UChildActorComponent* ActorComponent = GetMappedComponent(ChildActorInfos[i].Actor.Get(), MappedComponents);

			if (ActorComponent != nullptr)
			{
				MappedComponents.AddUnique(ActorComponent);
			}

			if (ChildActorInfos[i].ChildActorComponent != ActorComponent)
			{
				ChildActorInfos[i].ChildActorComponent = ActorComponent;
			}
		}
	}

	PopulateChildActorAttributes(NewActors);
}

void APlaceableActorContainer::OnChildActorDestroyed(AActor* DestroyedActor)
{
	for (int Index = 0; Index < ChildActorInfos.Num(); Index++)
	{
		if (ChildActorInfos[Index].Actor == DestroyedActor)
		{
			DestroyedActorNameHashes.AddUnique(GetTypeHash(ChildActorInfos[Index].Actor->GetName()));

			ChildActorInfos.RemoveAt(Index--);
		}
	}
}

void APlaceableActorContainer::GetChildActors(TArray<AActor*>& OutActorArr)
{
    for (int32 i = 0;i < ChildActorInfos.Num(); ++i)
    {
        OutActorArr.Add(ChildActorInfos[i].Actor.LoadSynchronous());
    }
}

void APlaceableActorContainer::PopulateChildActorAttributes_Implementation(const TArray<AActor*>& TargetActors)
{
	TryToPopulateAttributeToTriggerTask();
}

void APlaceableActorContainer::TryToPopulateAttributeToTriggerTask()
{
	for (auto ChildActorInfo : ChildActorInfos)
	{
		if(!ChildActorInfo.Actor.IsValid())
			continue;

		ITriggerInterface* Trigger = (ITriggerInterface*)(ChildActorInfo.Actor->GetInterfaceAddress(UTriggerInterface::StaticClass()));

		if(Trigger == nullptr)
			continue;

#if WITH_EDITORONLY_DATA
		bool IsAllCategoryInvalid = true;

		for (auto Category : Categories)
		{
			if (Category != nullptr && Category->IsValidCategory(true))
			{
				IsAllCategoryInvalid = false;
				break;
			}
		}

		if (!IsAllCategoryInvalid)
		{
			TArray<UTriggerTaskComponentBase*> Components;
			Trigger->GetTriggerTaskComponents(Components);

			for (auto Component : Components)
			{
				if (Component == nullptr)
					continue;

				Component->GetCategories().Empty();

				for (auto Category : Categories)
				{
					Component->AddNewCategory(Category, true);
				}
			}
		}
#endif
	}
}

void APlaceableActorContainer::OnRep_ActorRemoved()
{
	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		uint32* HashPtr = DestroyedActorNameHashes.FindByPredicate([&]( const uint32& Data){
			if(GetTypeHash(ChildActorInfos[i].Actor->GetName()) == DestroyedActorNameHashes[i])
				return true;
			else
				return false;
		});

		if (HashPtr != nullptr)
		{
			ChildActorInfos[i].Actor->Destroy();
			ChildActorInfos.RemoveAt(i--);
		}
	}
}


#if WITH_EDITORONLY_DATA

void APlaceableActorContainer::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	TArray<AActor*> Actors;

	for (auto ChildActorInfo : ChildActorInfos)
	{
		Actors.Add(ChildActorInfo.Actor.Get());
	}

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(APlaceableActorContainer, Categories))
		{
			PopulateChildActorAttributes(Actors);
		}

		UpdateChildActorsTransform();
	}
}

void APlaceableActorContainer::OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewMap)
{
	
}

void APlaceableActorContainer::OnReinstanced()
{

}

void APlaceableActorContainer::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);

	TArray<UChildActorComponent*> ExcludeComponents;

	ExcludeComponents.Empty();

	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		if (ChildActorInfos[i].Actor == nullptr)
			continue;

		UChildActorComponent* MappedComponent = GetMappedComponent(ChildActorInfos[i].Actor.Get(), ExcludeComponents);

		FTransform NewTransform = ChildActorInfos[i].Actor->GetActorTransform();

		if (MappedComponent == nullptr)
		{
			NewTransform.SetTranslation(NewTransform.GetTranslation() + DeltaTranslation);
			ChildActorInfos[i].Actor->SetActorTransform(NewTransform);
		}
		else
		{
			NewTransform.SetTranslation(MappedComponent->GetComponentToWorld().GetTranslation());
			ChildActorInfos[i].Actor->SetActorTransform(NewTransform);

			ExcludeComponents.Add(MappedComponent);
		}
	}
}

void APlaceableActorContainer::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

	TArray<UChildActorComponent*> ExcludeComponents;

	ExcludeComponents.Empty();

	for (int i = 0; i < ChildActorInfos.Num(); i++)
	{
		if (ChildActorInfos[i].Actor == nullptr)
			continue;

		UChildActorComponent* MappedComponent = GetMappedComponent(ChildActorInfos[i].Actor.Get(), ExcludeComponents);

		FTransform NewTransform = ChildActorInfos[i].Actor->GetActorTransform();

		if (MappedComponent == nullptr)
		{
			NewTransform.SetRotation(DeltaRotation.Quaternion() * NewTransform.GetRotation());
			ChildActorInfos[i].Actor->SetActorTransform(NewTransform);
		}
		else
		{
			NewTransform.SetRotation(MappedComponent->GetComponentToWorld().GetRotation());
			ChildActorInfos[i].Actor->SetActorTransform(NewTransform);

			ExcludeComponents.Add(MappedComponent);
		}
	}
}

#endif

#if WITH_EDITOR
void APlaceableActorContainer::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);

	GenerateChildActors();
}

#endif
