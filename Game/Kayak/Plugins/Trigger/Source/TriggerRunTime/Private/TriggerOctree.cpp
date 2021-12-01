#include "TriggerOctree.h"
#include "TriggerTaskComponentBase.h"


FTriggerOctreeElement::FTriggerOctreeElement(TScriptInterface<ITriggerInterface> Trigger):
	TriggerData(Trigger)
{
	FVector Origin, HalfBoxExtend;
	if (Trigger->GetBoxBounds(Origin, HalfBoxExtend))
	{
		Bounds.BoxExtent = HalfBoxExtend;
		Bounds.Origin = Origin;
	}
}

FTriggerOctreeElement::~FTriggerOctreeElement()
{

}

bool FTriggerOctreeElement::IsVaild()
{
	if (TriggerData)
		return true;
	else
		return false;
}

FTriggerOctree::FTriggerOctree(const FVector& Origin, float Radius) :
	TOctree2<FTriggerOctreeElement, FTriggerOctreeSemantics>(Origin, Radius)
{
	TriggerMapInfo.Empty();
}

FTriggerOctree::~FTriggerOctree()
{
	TriggerMapInfo.Empty();
}

void FTriggerOctree::AddNode(TScriptInterface<ITriggerInterface> Trigger)
{
	//Don't process CDO of the target object
	if (Trigger.GetObject()->HasAnyFlags(RF_ClassDefaultObject))
		return;
	
	//When this trigger has exist then remove it
	RemoveNode(Trigger);

	FTriggerOctreeElement OctreeElement(Trigger);

	if (OctreeElement.IsVaild())
	{
		AddElement(OctreeElement);
	}
}

void FTriggerOctree::UpdateNode(TScriptInterface<ITriggerInterface> Trigger)
{

}


void FTriggerOctree::RemoveNode(TScriptInterface<ITriggerInterface> Trigger)
{
	//Don't process CDO of the target object
	if (Trigger.GetObject()->HasAnyFlags(RF_ClassDefaultObject))
		return;

	int UniqueID;

	if( !Trigger->GetUniqueRuntimeID(UniqueID))
		return;

	FOctreeElementId2* OctreeElementID = TriggerMapInfo.Find(UniqueID);

	//When this trigger has exist then remove it
	if (OctreeElementID != nullptr)
	{
		RemoveNode(*OctreeElementID);
	}

	//When remove node form octree also remove it form local pool
	TriggerMapInfo.Remove(UniqueID);

	TArray<UTriggerTaskComponentBase*> Components;
	Trigger->GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		TArray<UTriggerTaskComponentBase*>* ComponentsPtr = ComponentMaps.Find(Component->GetComponentID());

		if (ComponentsPtr == nullptr)
			continue;

		int Index = ComponentsPtr->Find(Component);

		if (Index != INDEX_NONE)
		{
			ComponentsPtr->RemoveAt(Index);
		}

		if (ComponentsPtr->Num() == 0)
		{
			ComponentMaps.Remove(Component->GetComponentID());
		}
	}
}

void FTriggerOctree::RemoveNode(const FOctreeElementId2& ElementID)
{
	//const FTriggerOctreeElement& Element = GetElementById(ElementID);

	RemoveElement(ElementID);
}

void FTriggerOctreeSemantics::SetElementId(FTriggerOctreeSemantics::FOctree& OctreeOwner, const FTriggerOctreeElement& Element, FOctreeElementId2 Id)
{
	int UniqueID = -1;
	if (Element.GetTriggerData()->GetUniqueRuntimeID(UniqueID))
	{
		((FTriggerOctree&)OctreeOwner).AddNewInstanceToMapInfo(UniqueID, Id);
	}
}

void FTriggerOctree::AddNewInstanceToMapInfo(const uint32 OwnerUniqueId, FOctreeElementId2 Id)
{
	TriggerMapInfo.Add(OwnerUniqueId, Id);

	FTriggerOctreeElement& Element = GetElementById(Id);

	TArray<UTriggerTaskComponentBase*> Components;

	Element.GetTriggerData()->GetTriggerTaskComponents(Components);

	for (auto Component : Components)
	{
		if(Component == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*>* ComponetnPtr =  ComponentMaps.Find(Component->GetComponentID());

		if (ComponetnPtr == nullptr)
		{
			TArray<UTriggerTaskComponentBase*> LocalComponents;
			LocalComponents.Add(Component);

			ComponentMaps.Add(Component->GetComponentID(), LocalComponents);
		}
		else if(ComponetnPtr->Find( Component) == INDEX_NONE)
		{
			ComponentMaps[Component->GetComponentID()].Add(Component);
		}
	}
}
