#include "TriggerEffectDataBase.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Net/UnrealNetwork.h"

UTriggerEffectDataBase::UTriggerEffectDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

UTriggerTaskBase* UTriggerEffectDataBase::GetTaskOwner()
{
	if(TaskOwner != nullptr)
		return TaskOwner;

	return GetTypedOuter<UTriggerTaskBase>();
}

void UTriggerEffectDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	/*
	* Make the replicator to inspect the replicated properties in the BP task
	*/
	UBlueprintGeneratedClass* BPClass = Cast<UBlueprintGeneratedClass>(GetClass());
	if (BPClass != NULL)
	{
		BPClass->GetLifetimeBlueprintReplicationList(OutLifetimeProps);
	}

	//DOREPLIFETIME(UTriggerEffectDataBase, DataStatus);
}

bool UTriggerEffectDataBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	return false;
}

void UTriggerEffectDataBase::BeginDestroy()
{
	Super::BeginDestroy();
}

void UTriggerEffectDataBase::Initialize(UTriggerTaskBase* InTaskOwner)
{
	TaskOwner = InTaskOwner;

	OnInitialize(InTaskOwner);

	SetDataStatus(EffectDataStatus::ACTIVED);
}

void UTriggerEffectDataBase::OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle)
{
	OnOpenEffect(OpenStyle);

	SetDataStatus(EffectDataStatus::OPENED);
}

void UTriggerEffectDataBase::CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle)
{
	if (!IsGarbageCollecting())
	{
		OnCloseEffect(CloseStyle);

		TArray<UObject*> InspectedObjects;
		GetInspectedObjects(InspectedObjects);

		//Try to notify the inspected object to end it
		for (auto Object : InspectedObjects)
		{
			TryToEndTargetObject(Object, CloseStyle);
		}
	}
	else
	{
		//When at GC state delete all local resource directly
	}

	SetDataStatus(EffectDataStatus::CLOSED);
}
	

void UTriggerEffectDataBase::UpdateData( const FName& DataName )
{
	OnUpdateData(DataName);

	//Notify the other module that this data there is some data is changed at this data, they should do some corresponding things
	DataChanged.Broadcast(this, DataName);

	TArray<UObject*> InspectedObjects;
	GetInspectedObjects(InspectedObjects);

	//When the data is changed I need to notify the inspected objects to do some changes
	for (auto Object : InspectedObjects)
	{
		TryToUpdateTargetObject(Object, DataName);
	}
}

void UTriggerEffectDataBase::Reset(UOperationInformationBase* ResetOperation)
{
	OnReset(ResetOperation);

	SetDataStatus(EffectDataStatus::ACTIVED);
}

void UTriggerEffectDataBase::GetInspectedObjects_Implementation(TArray<UObject*>& Objects)
{
	Objects.Empty();
}

void UTriggerEffectDataBase::TryToInitializeTargetObject(UObject* TargetObject)
{
	if(TargetObject == nullptr)
		return;

	if (!TargetObject->GetClass()->ImplementsInterface(UEffectSuportInterface::StaticClass()))
		return;

	IEffectSuportInterface* EffectSupport = Cast<IEffectSuportInterface>(TargetObject);

	if (EffectSupport == nullptr)
	{
		IEffectSuportInterface::Execute_BP_OnInitaizleFormTriggerTask(TargetObject, this);
	}
	else
	{
		EffectSupport->InitaizleFormTriggerTask(this);
	}
}

void UTriggerEffectDataBase::TryToUpdateTargetObject(UObject* TargetObject, const FName& ChangedDataName)
{
	if (TargetObject == nullptr)
		return;

	if (!TargetObject->GetClass()->ImplementsInterface(UEffectSuportInterface::StaticClass()))
		return;

	IEffectSuportInterface* EffectSupport = Cast<IEffectSuportInterface>(TargetObject);

	if (EffectSupport == nullptr)
	{
		IEffectSuportInterface::Execute_BP_TriggerTaskDataChanged(TargetObject, this, ChangedDataName);
	}
	else
	{
		EffectSupport->TriggerTaskDataChanged(this, ChangedDataName);
	}

}

void UTriggerEffectDataBase::TryToEndTargetObject(UObject* TargetObject, UTriggerEffectDataOperationStyleBase* EndStyle)
{
	if (TargetObject == nullptr)
		return;

	if (!TargetObject->GetClass()->ImplementsInterface(UEffectSuportInterface::StaticClass()))
		return;

	IEffectSuportInterface* EffectSupport = Cast<IEffectSuportInterface>(TargetObject);

	if (EffectSupport == nullptr)
	{
		IEffectSuportInterface::Execute_BP_EndEffect(TargetObject, this, EndStyle);
	}
	else
	{
		EffectSupport->EndEffect(this, EndStyle);
	}
}

bool UTriggerEffectDataBase::IsClosed()
{
	return DataStatus == EffectDataStatus::CLOSED;
}

bool UTriggerEffectDataBase::CanBeOpened( const TArray<UObject*>& Causers )
{
	bool Result = true;

	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanBeOpened")))
	{
		Result = OnCanBeOpened(Causers);
	}

	return  Result && ( DataStatus != EffectDataStatus::OPENED);
}

bool UTriggerEffectDataBase::CanBeClosed(const TArray<UObject*>& Causers)
{
	bool Result = true;

	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanBeClosed")))
	{
		Result = OnCanBeClosed(Causers);
	}

	return Result && (DataStatus == EffectDataStatus::OPENED);
}

void UTriggerEffectDataBase::SetDataStatus(FString CurrentStatus)
{
	if(DataStatus == CurrentStatus)
		return;

	DataStatus = CurrentStatus;
}

//void UTriggerEffectDataBase::Rep_OnDataStatus()
//{
//	
//}