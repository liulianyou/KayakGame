// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerInterface.h"
#include "TriggerBlueprintLib.h"

// Add default functionality here for any ITriggerInterface functions that are not pure virtual.

FString ITriggerInterface::ConvertPathReferencValueToVaild(FString ReferencePath, bool Add_CSuffix) const
{
	return UTriggerBlueprintLib::ConvertPathReferencValueToVaild(ReferencePath, Add_CSuffix);
}

bool ITriggerInterface::GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const
{
	return Execute_OnGetBoxBounds(_getUObject(), Origin, HalfBoxExtent);
}

bool  ITriggerInterface::GetUniqueRuntimeID(int& OutID) const
{
	return Execute_OnGetUniqueRuntimeID(_getUObject(), OutID);
}

void ITriggerInterface::GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const
{
	TaskComponents.Empty();

	return Execute_OnGetTriggerTaskComponents(_getUObject(), TaskComponents);
}

bool ITriggerInterface::RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponents)
{
	UObject* Object = _getUObject();

	if (Object->GetClass()->IsFunctionImplementedInScript(TEXT("OnRemoveTriggerTaskComponentByID")))
	{
		return Execute_OnRemoveTriggerTaskComponentByID(Object, ComponentID, IncludeChildrenComponents);
	}

	return false;
}

TScriptInterface<ITriggerInterface> ITriggerInterface::DuplicateTrigger(ULevel* TargetLeve)
{
	UObject* Object = _getUObject();

	if (Object->GetClass()->IsFunctionImplementedInScript(TEXT("OnRemoveTriggerTaskComponentByID")))
	{
		return Execute_OnDuplicateTrigger(Object, TargetLeve);
	}

	return nullptr;
}


UTriggerTaskComponentBase* ITriggerInterface::AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent)
{
	UObject* Object = _getUObject();

	if (Object->GetClass()->IsFunctionImplementedInScript(TEXT("OnRemoveTriggerTaskComponentByID")))
	{
		return Execute_OnAddTriggerTaskComponent(Object, NewComponent);
	}

	return NewComponent;
}

bool ITriggerInterface::CanBeToggled() const
{	
	bool Result = true;
	Execute_OnCanBeToggled(_getUObject(), Result);
	return Result;
}