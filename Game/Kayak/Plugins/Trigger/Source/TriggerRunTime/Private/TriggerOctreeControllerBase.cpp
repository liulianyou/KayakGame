#include "TriggerOctreeControllerBase.h"
#include "TriggerDefinition.h"
#include "TriggerTaskComponentBase.h"

UTriggerOctreeControllerBase::UTriggerOctreeControllerBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


void UTriggerOctreeControllerBase::ConstructOctreeData()
{
	if (TriggerOctree.IsValid())
	{
		TriggerOctree.Reset();
	}

	TriggerOctree = MakeShareable(new FTriggerOctree(FVector(0,0,0), 65569));
}

void UTriggerOctreeControllerBase::GetAllTriggersInsideBox( TArray<UObject*>& TriggerDatas, FVector Original, FVector BoxExtent)
{
	if (!TriggerOctree.IsValid())
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no vaild Octree to hold all trigger information when call function GetAllTriggersInsideBox!"));
		return;
	}

	TriggerDatas.Empty();

	TArray<FTriggerOctreeElement> OctreeElements;

	GetOctreeElementsFormBox(OctreeElements, Original, BoxExtent);

	for (int i = 0; i < OctreeElements.Num(); i++)
	{
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		OctreeElements[i].GetTriggerData()->GetTriggerTaskComponents(TaskComponents);

		for (int j = 0; j < TaskComponents.Num(); j++)
		{
			TriggerDatas.AddUnique(TaskComponents[j]->GetOwner());
		}
	}
}

void UTriggerOctreeControllerBase::GetAllTriggerTasksInSideBox(TArray<UTriggerTaskBase*> TriggerTasks, FVector Original, FVector BoxExtent)
{
	if (!TriggerOctree.IsValid())
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no vaild Octree to hold all trigger information when call function GetAllTriggerTasksInSideBox!"));
		return;
	}

	TriggerTasks.Empty();

	TArray<FTriggerOctreeElement> OctreeElements;

	GetOctreeElementsFormBox(OctreeElements, Original, BoxExtent);

	for (int i = 0; i < OctreeElements.Num(); i++)
	{
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		OctreeElements[i].GetTriggerData()->GetTriggerTaskComponents(TaskComponents);

		for (int j = 0; j < TaskComponents.Num(); j++)
		{
			TArray<UTriggerTaskBase*> LocalTriggerTasks;
			TaskComponents[j]->GetAllTriggerTasks(LocalTriggerTasks);
			TriggerTasks.Append(LocalTriggerTasks);
		}
	}
}

void UTriggerOctreeControllerBase::GetAllTriggerComponentsByID( TArray<UTriggerTaskComponentBase*>& OutComponents, const FGuid& ID)
{
	OutComponents.Empty();

	if(!GetTriggerOctreeData().IsValid())
		return;

	const TMap<FGuid, TArray<UTriggerTaskComponentBase*>>&  ComponentMaps = GetTriggerOctreeData()->GetTriggerComponentMaps();

	const TArray<UTriggerTaskComponentBase*>* Components = ComponentMaps.Find(ID);

	if(Components == nullptr)
		return;
	else
	{
		for (auto Component : *Components)
		{
			if (Component == nullptr || !Component->IsValidLowLevel())
				continue;

			OutComponents.AddUnique(Component);
		}
	}
}


void UTriggerOctreeControllerBase::GetOctreeElementsFormBox(TArray<FTriggerOctreeElement>& OuterElements, FVector Origin, FVector BoxExtent)
{
	FBoxCenterAndExtent Box(Origin, BoxExtent);

	TriggerOctree->FindElementsWithBoundsTest(Box, [&](const FTriggerOctreeElement& Element) {
		OuterElements.Add(Element);
		});
}

void UTriggerOctreeControllerBase::GetOctreeElementsFromTriggerData(TScriptInterface<ITriggerInterface> TriggerData, TArray<FTriggerOctreeElement>& Elements)
{
	if (!TriggerOctree.IsValid())
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no vaild Octree to hold all trigger information when call function GetOctreeElementIDFromTriggerData!"));
		return;
	}

	Elements.Empty();
	
	FVector Origin, BoxExtent;

	if (!TriggerData->GetBoxBounds(Origin, BoxExtent))
		return;

	GetOctreeElementsFormBox(Elements, Origin, BoxExtent);
}

FOctreeElementId2 UTriggerOctreeControllerBase::GetOctreeElementIDFromTriggerData(TScriptInterface<ITriggerInterface> TriggerData)
{
	if (!TriggerOctree.IsValid())
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no vaild Octree to hold all trigger information when call function GetOctreeElementIDFromTriggerData!"));
		return FOctreeElementId2();
	}

	int UniqueID = -1;

	if (!TriggerData->GetUniqueRuntimeID(UniqueID))
	{
		return FOctreeElementId2();
	}

	const FOctreeElementId2* ElementID = TriggerOctree->GetTriggerDataMapInfo().Find(UniqueID);

	if (ElementID == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Please check the data in octree as there is not target Trigger data, maybe you need to add it first"));

		return FOctreeElementId2();
	}

	return *ElementID;
}


