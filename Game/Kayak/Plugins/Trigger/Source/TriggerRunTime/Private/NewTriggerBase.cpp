// Fill out your copyright notice in the Description page of Project Settings.
#include "NewTriggerBase.h"
#include "TriggerTaskComponent.h"
#include "TriggerManager.h"
#include "TriggerTaskBase.h"
#include "Engine/Engine.h"
#include "Engine/Selection.h"
#include "TriggerTaskStateSwitchBase.h"
#include "CheckTaskRepeatWithNum.h"

#if WITH_EDITORONLY_DATA
#include "Editor.h"
#endif

// Sets default values
ANewTriggerBase::ANewTriggerBase(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer)
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;
    
	NetUpdateFrequency = 1.0f;
	SetCanBeDamaged(false);

	SetReplicates(true);

	TriggerTaskComponent = CreateDefaultSubobject<UTriggerTaskComponent>(TEXT("TriggerTaskComponent"));

	if (TriggerTaskComponent)
	{
		RootComponent = TriggerTaskComponent;
	}

#if WITH_EDITOR
	//if (!HasAnyFlags(RF_ClassDefaultObject))
	//{
	//	FEditorDelegates::MapChange.AddUObject(this, &ANewTriggerBase::OnChangeMap);
	//	FWorldDelegates::LevelAddedToWorld.AddUObject(this, &ANewTriggerBase::OnNewLevelAddToWorld);
	//}
#endif
}

// Called when the game starts or when spawned
void ANewTriggerBase::BeginPlay()
{
    Super::BeginPlay();

}


void ANewTriggerBase::BeginDestroy()
{ 
	
	//UTriggerManager* TriggerManager = GetTriggerManager();

	//if (TriggerManager != nullptr)
	//{
	//	GetTriggerManager()->UnRegisterTrigger(this);
	//}

	RemoveAllChildTaskStateEvent();

	OnTaskRunning.Clear();

	/*
	* This is used to fix engine bug when use ChildActorComponent to hold another actor in one actor
	* 
	* At the 70 line of class ChildActorComponent in 4.25 version, it will destroy one actor without use DestroyActor which will cause crash.
	* As some times the template actor is replicated and at that point it will create new one actor and will registed in the NetWorkObjectList.
	* But the created actor is destroyed without notify the network to remove it. and CRASH.
	* If I fix the bug I need to modify the engine code, I do not have the access so I just make the trigger actor to remove from the NetWorkObjectList
	* 
	*/
	{
		if (GetWorld() != nullptr)
		{
			GetWorld()->RemoveNetworkActor(this);
		}
	}

	Super::BeginDestroy();
}

void ANewTriggerBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	TryToRegister();
}

bool ANewTriggerBase::GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const
{
	bool Result = ITriggerInterface::GetBoxBounds(Origin, HalfBoxExtent);

	if (Result)
		return Result;

	TArray<UActorComponent*> Components;

	GetComponents(UTriggerTaskComponentBase::StaticClass(), Components);

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
			if(ChildBound.BoxExtent == FVector::ZeroVector)
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
		GetActorBounds(true, Origin, HalfBoxExtent);
	}
	else
	{
		Origin = TotalBounds.Origin;
		HalfBoxExtent = TotalBounds.BoxExtent;
	}

	return true;
}

bool ANewTriggerBase::GetUniqueRuntimeID(int& OutID) const
{
	if (ITriggerInterface::GetUniqueRuntimeID(OutID))
		return true;

	OutID = GetUniqueID();

	return true;
}

void ANewTriggerBase::GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const
{
	ITriggerInterface::GetTriggerTaskComponents(TaskComponents);

	TArray<UActorComponent*> Components;

	GetComponents(Components);

	for (auto Component : Components)
	{
		UTriggerTaskComponentBase* LocalTriggerTaskComponent = Cast<UTriggerTaskComponentBase>(Component);

		if (LocalTriggerTaskComponent != nullptr)
		{
			TaskComponents.Add(LocalTriggerTaskComponent);
		}
	}
}

UTriggerTaskComponentBase* ANewTriggerBase::AddTriggerTaskComponent(UTriggerTaskComponentBase* NewTriggerTaskComponent)
{
	if(NewTriggerTaskComponent == nullptr || NewTriggerTaskComponent->IsTemplate())
		return nullptr;

	TArray<UTriggerTaskComponentBase*> Components;
	GetTriggerTaskComponents(Components);

	UTriggerTaskComponentBase** ComponentPtr = Components.FindByPredicate([&](const UTriggerTaskComponentBase* Data){
		if(Data == nullptr)
			return false;

		if (NewTriggerTaskComponent == Data ||
			Data->GetComponentID() == NewTriggerTaskComponent->GetComponentID())
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
		
	UTriggerTaskComponentBase* Result = ITriggerInterface::AddTriggerTaskComponent(NewTriggerTaskComponent);

	AddOwnedComponent(Result); 
	Result->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	Result->RegisterComponent();

	return (Result);
}

bool ANewTriggerBase::RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent)
{
	bool Result = ITriggerInterface::RemoveTriggerTaskComponent(ComponentID, IncludeChildrenComponent);

	//If the BP have removed the component then just return true
	if(Result)
		return true;

	TArray<UTriggerTaskComponentBase*> Components;
	GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if(Component == nullptr)
			continue;

		if (Component->GetComponentID() == ComponentID)
		{
			RemoveTriggerTaskComponentInternal(Component, IncludeChildrenComponent);
		}
	}

	return Result;
}

TScriptInterface<ITriggerInterface> ANewTriggerBase::DuplicateTrigger(ULevel* TargetLevel)
{
	if (TargetLevel == nullptr)
	{
		TargetLevel = GetTypedOuter<ULevel>();
	}

	if(TargetLevel == nullptr)
		return nullptr;

	FString NewObjectName = TargetLevel->GetOuter()->GetName() + FString("_") + GetName();

	FActorSpawnParameters ActorSpawnParameters;

	ActorSpawnParameters.OverrideLevel = TargetLevel;
	ActorSpawnParameters.Name = *NewObjectName;
	ActorSpawnParameters.Template = this;

	AActor* Result = TargetLevel->OwningWorld->SpawnActor(GetClass(), nullptr, nullptr, ActorSpawnParameters);

#if WITH_EDITOR
	Result->SetActorLabel(NewObjectName);
#endif

	return Result;
}

void ANewTriggerBase::TryToRegister()
{
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		if (HasBeenRegisted) return;

		if (GetTriggerManager() != nullptr)
		{
			GetTriggerManager()->RegisterTrigger(this);

			if (TriggerTaskComponent == nullptr)
			{
				//The original code have make some mistakes to this actor, and the trigger task component is null but there is one instance object in the resource, so i need to find it out
				UTriggerTaskComponentBase* StoredTaskComponent = FindObject<UTriggerTaskComponentBase>(this, TEXT("TriggerTaskComponent"));

				if (StoredTaskComponent != nullptr)
				{
					TriggerTaskComponent = StoredTaskComponent;
				}
				else
				{
					TriggerTaskComponent = NewObject<UTriggerTaskComponentBase>(this, UTriggerTaskComponentBase::StaticClass(), TEXT("TriggerTaskComponent"));
				}
			}

			TArray<UTriggerTaskComponentBase*> Components;

			GetTriggerTaskComponents(Components);

			for (auto Component : Components)
			{
				if(Component == nullptr)
					continue;

				Component->RegisterTaskComponent();
			}

			HasBeenRegisted = true;
		}
	}
}

bool ANewTriggerBase::RemoveTriggerTaskComponentInternal(USceneComponent* LocalParentComponent, bool IncludeChildrenComponent)
{
	if(LocalParentComponent == nullptr)
		return false;

	/*
	* As the root component of the trigger should always be trigger task component,
	* When remove one trigger task component I need to check weather it is root component,
	* If it is a root component then I need to pick up one appropriate trigger task component as its new root component
	*/
	if (GetRootComponent() == LocalParentComponent)
	{
		TArray<UTriggerTaskComponentBase*> TriggerTaskComponents;
		GetTriggerTaskComponents(TriggerTaskComponents);

		for (auto LocalTriggerTaskComponent : TriggerTaskComponents)
		{
			if (LocalTriggerTaskComponent == GetRootComponent())
				continue;

			LocalTriggerTaskComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

			SetRootComponent(LocalTriggerTaskComponent);

			TriggerTaskComponent = LocalTriggerTaskComponent;

			TArray<USceneComponent*> ChildrenComponents;
			LocalParentComponent->GetChildrenComponents(false, ChildrenComponents);

			for (auto ChildComponent : ChildrenComponents)
			{
				if(ChildComponent == GetRootComponent())
					continue;

				ChildComponent->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
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

	TriggerTaskComponent = Cast<UTriggerTaskComponentBase>(GetRootComponent());

	return true;
}

void ANewTriggerBase::PostInitProperties()
{
	Super::PostInitProperties();

#if WITH_EDITOR
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &ANewTriggerBase::SelectedInEditor);
		GEditor->GetSelectedActors()->SelectionChangedEvent.AddUObject(this, &ANewTriggerBase::SelectedChangeInEditor);
	}
#endif

}

void ANewTriggerBase::PostActorCreated()
{
	Super::PostActorCreated();

	if (TriggerTaskComponent != nullptr)
	{
		TriggerTaskComponent->SetInstigator(GetInstigator());
	}
}

#if WITH_EDITOR

void ANewTriggerBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}

void ANewTriggerBase::SelectedInEditor(UObject* SelectedObject)
{
	if (SelectedObject == nullptr || SelectedObject != this) 
		return;

	if (TriggerTaskComponent == nullptr)
		return;

	TriggerTaskComponent->SelectedInEditor(SelectedObject);
}

void ANewTriggerBase::SelectedChangeInEditor(UObject* SelectedObject)
{
	if (SelectedObject == nullptr) return;

	ANewTriggerBase* Trigger = Cast<ANewTriggerBase>(SelectedObject);

	if (Trigger == nullptr) return;

}

//void ANewTriggerBase::OnChangeMap(uint32 Flag)
//{
//	TryToRegister();
//}
//
//void ANewTriggerBase::OnNewLevelAddToWorld(ULevel* Level, UWorld* World)
//{
//	TryToRegister();
//}

#endif


UTriggerManager* ANewTriggerBase::GetTriggerManager()
{
	return GEngine->GetEngineSubsystem<UTriggerManager>();
}

void ANewTriggerBase::RegisterChildTaskStateEvent(UTriggerTaskBase* Task)
{
	if (Task == nullptr)
		return;

	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_NotifyByOthers, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Prepare, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Active, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Skip, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Tick, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Resume, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Reset, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Finished, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Pause, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Stop, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_PostFinished, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->AddTriggerTaskStateUniqueListener(ETriggerTaskState::ETriggerTaskState_Sleeping, this, &ANewTriggerBase::TaskRunStatusCheck);

	RegistedStateEventTasks.Add(Task);

	for (auto ChildTask : Task->GetChildTasks())
	{
		if(ChildTask == nullptr || ChildTask == Task)
			continue;

		RegisterChildTaskStateEvent(ChildTask);
	}
}

void ANewTriggerBase::RemoveChildTaskStateEvent(UTriggerTaskBase* Task)
{
	int Index = RegistedStateEventTasks.Find(Task);

	if (Index == INDEX_NONE)
	{
		return;
	}

	if (!Task->IsValidLowLevel())
	{
		RegistedStateEventTasks.Empty();
		return;
	}
		
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Prepare, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Active, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Skip, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Tick, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Resume, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Reset, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Finished, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Pause, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Stop, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_PostFinished, this, &ANewTriggerBase::TaskRunStatusCheck);
	Task->RemoveTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_Sleeping, this, &ANewTriggerBase::TaskRunStatusCheck);

	RegistedStateEventTasks.Remove(Task);

	for (auto ChildTask : Task->GetChildTasks())
	{
		if (ChildTask == nullptr)
			continue;

		RemoveChildTaskStateEvent(ChildTask);
	}
}

void ANewTriggerBase::RemoveAllChildTaskStateEvent()
{
	TArray<UTriggerTaskBase*> CopyData = RegistedStateEventTasks;

	for (auto Task : CopyData)
	{
		RemoveChildTaskStateEvent(Task);
	}
}


void ANewTriggerBase::TaskRunStatusCheck( UTriggerTaskBase* Task)
{
	OnTaskRunning.Broadcast(Task);
}


bool ANewTriggerBase::CanbeToggled() const
{
	if (!CanRepeat() && IsAllTaskInThisTriggerFinished())
		return false;

	bool Result = ITriggerInterface::CanBeToggled();

	return Result;
}

bool ANewTriggerBase::CanRepeat() const
{
	bool Result = false;

	TArray<UTriggerTaskBase*> TriggerTasks;
	TriggerTaskComponent->GetAllTriggerTasks(TriggerTasks);

	for (auto TriggerTask : TriggerTasks)
	{
		if(TriggerTask == nullptr ||
		   TriggerTask->GetRepeatConditions() == nullptr)
			continue;

		if (TriggerTask->GetRepeatConditions()->IsSwitchOn())
		{
			Result = true;
			break;
		}
	}

	return Result;
}

bool ANewTriggerBase::HasBeenToggled()
{
	TArray<UTriggerTaskBase*> TriggerTasks;
	TriggerTaskComponent->GetAllTriggerTasks(TriggerTasks);

	for (auto TriggerTask : TriggerTasks)
	{
		if (TriggerTask == nullptr)
			continue;

		if (TriggerTask->GetCurrentTriggerTaskState() != ETriggerTaskState::ETriggerTaskState_Max)
		{
			return true;
		}
	}

	return false;
}

bool ANewTriggerBase::IsAllTaskInThisTriggerFinished() const
{
	bool Result = true;

	TArray<UTriggerTaskBase*> TriggerTasks;
	TriggerTaskComponent->GetAllTriggerTasks(TriggerTasks);

	for (auto TriggerTask : TriggerTasks)
	{
		if (TriggerTask == nullptr)
			continue;

		if (!TriggerTask->IsCompletelyFinished())
		{
			Result = false;
			break;
		}
	}

	return Result;
}



