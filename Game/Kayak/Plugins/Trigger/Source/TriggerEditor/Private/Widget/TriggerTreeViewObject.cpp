#include "Widget/TriggerTreeViewObject.h"
#include "NewTriggerBase.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "Widget/Helper/TriggerChainHelper.h"


UTriggerTreeViewObject::UTriggerTreeViewObject(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), TriggerLevel(-1)
{}

void UTriggerTreeViewObject::TestData()
{
	if (TriggerLevel > 2)
	{
		return;
	}
	for (int32 i = 0; i < 9; ++i)
	{
		UTriggerTreeViewObject* Child = NewObject<UTriggerTreeViewObject>(this);
		Child->TriggerLevel = TriggerLevel + 1;
		Child->TriggerName = TriggerName;
		Child->TriggerName.AppendInt(i);
		NextNodesChildren.Add(Child);

		Child->TestData();
	}
}

void UTriggerTreeViewObject::ConstructNextNodes(TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap)
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	Trigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() == 0)
	{
		return;
	}

	UTriggerTaskComponent* TriggerCompoennt = Cast<UTriggerTaskComponent>(TaskComponents[0]);

	TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;
	TriggerCompoennt->GetChildTriggers(ChildTriggers);
	for (int32 NodeIndex = 0; NodeIndex < ChildTriggers.Num(); ++NodeIndex)
	{
        ANewTriggerBase* ChildTrigger = Cast<ANewTriggerBase>(ChildTriggers[NodeIndex].GetObject());

		UTriggerTreeViewObject** ChildTreeViewObject = Trigger2TreeObjectMap.Find(ChildTrigger);
		if (ChildTreeViewObject == nullptr)
		{
			continue;
		}
		if ((*ChildTreeViewObject)->TriggerLevel < 0)
		{//normal case.
			NextNodesChildren.Add(*ChildTreeViewObject);
			(*ChildTreeViewObject)->TriggerLevel = TriggerLevel + 1;
			(*ChildTreeViewObject)->ConstructNextNodes(Trigger2TreeObjectMap);
		}
		else if((*ChildTreeViewObject)->TriggerLevel < TriggerLevel)
		{//maybe form a ring.
			RingPointNodes.Add(*ChildTreeViewObject);
			(*ChildTreeViewObject)->RingPointNodes.Add(this);
		}
		else
		{//maybe repeated
			RepeatedNoes.Add(*ChildTreeViewObject);
		}
	}
}

void UTriggerTreeViewObject::ConstructNextNodesFilterByTag(TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap, const FName& InViewTag, FTriggerChainHelper& ChainHelper, const FTriggerChainChildInfo& ChainInfo)
{
    const TArray<ANewTriggerBase*>* ChildTriggersArr = ChainInfo.Parent2ChildMap.Find(Trigger);
    if (ChildTriggersArr == nullptr)
    {
        return;
    }

    for (int32 NodeIndex = 0; NodeIndex < ChildTriggersArr->Num(); ++NodeIndex)
    {
        const ANewTriggerBase* ChildTrigger = (*ChildTriggersArr)[NodeIndex];

        UTriggerTreeViewObject** ChildTreeViewObject = Trigger2TreeObjectMap.Find(ChildTrigger);
        if (ChildTreeViewObject == nullptr)
        {//unknown error.
            continue;
        }
        if ((*ChildTreeViewObject)->TriggerLevel < 0)
        {//normal case.
            NextNodesChildren.Add(*ChildTreeViewObject);
            (*ChildTreeViewObject)->TriggerLevel = TriggerLevel + 1;
            (*ChildTreeViewObject)->ConstructNextNodesFilterByTag(Trigger2TreeObjectMap, InViewTag, ChainHelper, ChainInfo);
            ChainHelper.MarkTriggerInTheList(ChildTrigger, InViewTag);
        }
        else if ((*ChildTreeViewObject)->TriggerLevel < TriggerLevel)
        {//maybe form a ring.
            RingPointNodes.Add(*ChildTreeViewObject);
            (*ChildTreeViewObject)->RingPointNodes.Add(this);
        }
        else
        {//maybe repeated
            RepeatedNoes.Add(*ChildTreeViewObject);
        }
    }
}
