#pragma once
/*
* Author:		Liulianyou
* Time:			2021/1/25
* Purpose:		The internal data struct to hold all triggers in the scene
*/

#include "CoreMinimal.h"
#include "Math/GenericOctree.h"
#include "Templates/SharedPointer.h"

#include "TriggerInterface.h"

class UTriggerTaskComponentBase;


struct TRIGGERRUNTIME_API FTriggerOctreeElement
{
public:
	FTriggerOctreeElement(TScriptInterface<ITriggerInterface> Trigger);
	~FTriggerOctreeElement();

public:
	bool IsVaild();

	const FBoxSphereBounds& GetBounds() const { return Bounds; }
	TScriptInterface<ITriggerInterface> GetTriggerData() const { return TriggerData; }

private:

	//Bounds for the target trigger
	FBoxSphereBounds Bounds;

	//The ID which stands for the target trigger, This value is runtime ID
	TScriptInterface<ITriggerInterface> TriggerData;

};

struct FTriggerOctreeSemantics
{
	typedef TOctree2<FTriggerOctreeElement, FTriggerOctreeSemantics> FOctree;
	enum { MaxElementsPerLeaf = 16 };
	enum { MinInclusiveElementsPerNode = 7 };
	enum { MaxNodeDepth = 12 };

	typedef TInlineAllocator<MaxElementsPerLeaf> ElementAllocator;

	FORCEINLINE static const FBoxSphereBounds& GetBoundingBox(const FTriggerOctreeElement& TriggerData)
	{
		return TriggerData.GetBounds();
	}

	//For now this not used in UE4
	FORCEINLINE static bool AreElementsEqual(const FTriggerOctreeElement& A, const FTriggerOctreeElement& B)
	{
		if (A.GetTriggerData() == B.GetTriggerData())
			return true;
		else
			return false;
	}

	FORCEINLINE static void ApplyOffset(FTriggerOctreeElement& Element, const FVector& InOffset)
	{
		ensureMsgf(false, TEXT("Not implemented yet"));
	}

	static void SetElementId(FOctree& OctreeOwner, const FTriggerOctreeElement& Element, FOctreeElementId2 Id);
};

class TRIGGERRUNTIME_API FTriggerOctree : public TOctree2<FTriggerOctreeElement, FTriggerOctreeSemantics>, public TSharedFromThis<FTriggerOctree, ESPMode::ThreadSafe>
{

public:
	FTriggerOctree(const FVector& Origin, float Radius);
	virtual ~FTriggerOctree();

public:

	//Add new node to this Octree
	void AddNode(TScriptInterface<ITriggerInterface> Trigger);

	//Update the exist node
	void UpdateNode(TScriptInterface<ITriggerInterface> Trigger);

	//Remove the node from octree
	void RemoveNode(TScriptInterface<ITriggerInterface> Trigger);

	const TMap< uint32, FOctreeElementId2 >& GetTriggerDataMapInfo() const {return TriggerMapInfo;}
	const TMap< uint32, FOctreeElementId2 >& GetTriggerDataMapInfo() { return TriggerMapInfo; }

	const TMap<FGuid, TArray<UTriggerTaskComponentBase*>>& GetTriggerComponentMaps() const { return ComponentMaps; }
	const TMap<FGuid, TArray<UTriggerTaskComponentBase*>>& GetTriggerComponentMaps() { return ComponentMaps; }

protected:

	friend struct FTriggerOctreeSemantics;
	//When new octree element added to the node I need to add this element to local map info
	void AddNewInstanceToMapInfo(const uint32 OwnerUniqueId, FOctreeElementId2 Id);

private:

	void RemoveNode(const FOctreeElementId2& ElementID);

private:

	//Key is the Unique Trigger Id(Runtime ID), Value is the OctreeElementId in the Octree
	TMap< uint32, FOctreeElementId2 > TriggerMapInfo;

	/*
	* The map for component of ID.
	* When we want to find one component form the ID we should first search in this cashed map. this will reduce the CPU.
	* If we run on the listener or editor mode the same ID maybe have several Component: Component At Server, Component At Client1, Component At Client2......
	*/
	TMap<FGuid, TArray<UTriggerTaskComponentBase*>> ComponentMaps;
};
