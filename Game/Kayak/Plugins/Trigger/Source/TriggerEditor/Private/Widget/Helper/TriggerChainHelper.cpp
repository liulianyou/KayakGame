// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "Widget/Helper/TriggerChainHelper.h"
#include "NewTriggerBase.h"
#include "TriggerEvaluator/CheckTaskState.h"
#include "TriggerTaskComponent/TriggerTaskComponentBase.h"
#include "TriggerTaskComponent/Category/TriggerCategory.h"
#include "TriggerEvaluator/EvaluatorOperation.h"
#include "Widget/TriggerTreeViewObject.h"
#include "TriggerTaskComponent/EventChain/TriggerEventChainBase.h"
#include "TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h"

#include "GameplayTagContainer.h"
#include "UObject/Object.h"


#define FlagInList_Child 0
#define FlagInList_Head 1
#define FlagInList_Added 2


void FTriggerChainHelper::GenerateTriggerChainInfo(const TArray<ANewTriggerBase*>& TriggerArr)
{
	Trigger2ViewInfoIndexMap.Reserve(TriggerArr.Num());
	//first generate TriggersViewInfo.
	for (int32 i = 0; i < TriggerArr.Num(); ++i)
	{
		ANewTriggerBase* Trigger = TriggerArr[i];
		TriggersViewInfo.Add(FTriggerTagViewInfo(Trigger));
		if (Trigger2ViewInfoIndexMap.Contains(Trigger) == false)
		{//to get trigger index in TriggersViewInfo, for access TriggersViewInfo quickly.
			Trigger2ViewInfoIndexMap.Add(Trigger, i);
		}
	}

	for (int32 i = 0; i < TriggerArr.Num(); ++i)
	{
		ANewTriggerBase* Trigger = TriggerArr[i];
		TArray<UTriggerTaskComponentBase*> TaskComponents;
		Trigger->GetTriggerTaskComponents(TaskComponents);
		if (TaskComponents.Num() == 0)
		{//there are something wrong.
			continue;
		}
		//check all components about trigger.
		TMap<FName, uint8>& InTagName2IsInListMap = TriggersViewInfo[i].TagName2IsInListMap;
		for (int32 ComponentIndex = 0; ComponentIndex < TaskComponents.Num(); ++ComponentIndex)
		{
			CheckAllTask(Trigger, TaskComponents[ComponentIndex], InTagName2IsInListMap);
		}
	}
}

void FTriggerChainHelper::GenerateTriggerViewObject(TArray<UTriggerTreeViewObject*>& InTreeViewObjectArr, const FName InViewTag, UObject* InOuter)
{
	FTriggerChainChildInfo* ChainInfo = Tag2ChainMap.Find(InViewTag);
	if (ChainInfo == nullptr)
	{
		return;
	}
	//construct tree view object.
	TMap<ANewTriggerBase*, UTriggerTreeViewObject*> Trigger2TreeObjectMap;

	//get head triggers.
	for (int32 i = 0; i < TriggersViewInfo.Num(); ++i)
	{
		FTriggerTagViewInfo& TriggerInfo = TriggersViewInfo[i];
		uint8* TriggerFlag = TriggerInfo.TagName2IsInListMap.Find(InViewTag);
		if (TriggerFlag == nullptr)
		{//not in InViewTag list
			continue;
		}

		//gather all trigger in the InViewTag, and new UTriggerTreeViewObject, trigger-UTriggerTreeViewObject.
		UTriggerTreeViewObject* HeadObject = NewObject<UTriggerTreeViewObject>(InOuter);
		HeadObject->TriggerName = TriggerInfo.Trigger->GetActorLabel();//UKismetSystemLibrary::GetDisplayName
		HeadObject->Trigger = TriggerInfo.Trigger;
		Trigger2TreeObjectMap.Add(TriggerInfo.Trigger, HeadObject);

		if (IsTriggerAtHead(*TriggerFlag) == false)
		{//not at head.
			continue;
		}

		InTreeViewObjectArr.Add(HeadObject);
		HeadObject->TriggerLevel = 0;//start from 0.
		*TriggerFlag |= FlagInList_Added;//mark in the list.
	}

	//construct next nodes.
	for (int32 i = 0; i < InTreeViewObjectArr.Num(); ++i)
	{
		UTriggerTreeViewObject* TreeViewObject = InTreeViewObjectArr[i];
		TreeViewObject->ConstructNextNodesFilterByTag(Trigger2TreeObjectMap, InViewTag, *this, *ChainInfo);
	}

	//construct single ring nodes.
	TArray<ANewTriggerBase*> TriggersInSingleRing;
	for (int32 i = 0; i < TriggersViewInfo.Num(); ++i)
	{
		FTriggerTagViewInfo& TriggerInfo = TriggersViewInfo[i];
		uint8* FlagInList = TriggerInfo.TagName2IsInListMap.Find(InViewTag);
		if (FlagInList == nullptr || IsTriggerInList(*FlagInList))
		{
			continue;
		}
		TriggersInSingleRing.Add(TriggerInfo.Trigger);
	}
	while (TriggersInSingleRing.Num() > 0)
	{
		GenerateTriggerViewObjectForSingleRing(TriggersInSingleRing, InTreeViewObjectArr, InViewTag, Trigger2TreeObjectMap, *ChainInfo);
	}
}

void FTriggerChainHelper::MarkTriggerInTheList(const ANewTriggerBase* InTrigger, const FName& InViewTag)
{
	const int32* IndexInViewInfo = Trigger2ViewInfoIndexMap.Find(InTrigger);
	if (IndexInViewInfo == nullptr)
	{
		return;
	}
	FTriggerTagViewInfo& TriggerViewInfo = TriggersViewInfo[*IndexInViewInfo];
	uint8* FlagInList = TriggerViewInfo.TagName2IsInListMap.Find(InViewTag);
	if (FlagInList)
	{//mark in the list.
		(*FlagInList) |= FlagInList_Added;
	}
}

void FTriggerChainHelper::CheckAllTask(ANewTriggerBase* InTrigger, UTriggerTaskComponentBase* InTriggerComponent, TMap<FName, uint8>& InTagName2IsInListMap)
{
	//check all task.
	TArray<UTriggerTaskBase*> TriggerTasks;
	InTriggerComponent->GetAllTriggerTasks(TriggerTasks);
	if (TriggerTasks.Num() == 0)
	{
		return;
	}
	TArray<FName> InTagArr;
	GetTriggerComponentTags(InTagArr, InTriggerComponent, [&InTagName2IsInListMap](const FName& InTagName)
	{
		uint8* TriggerFlag = InTagName2IsInListMap.Find(InTagName);
		if (TriggerFlag == nullptr)
		{//mark the trigger is a head, as default.
			InTagName2IsInListMap.Add(InTagName, FlagInList_Head);
		}
	});

	//TODO: GetTriggerComponentTags all triggers then GenerateChainInfoByPrerequisite, maybe faster.

	GenerateChainInfoByEventChain(InTrigger, InTriggerComponent, InTagArr, InTagName2IsInListMap);

    for (int32 i = 0; i < TriggerTasks.Num(); ++i)
    {
        if (TriggerTasks[i] == nullptr)
        {
            continue;
        }
        UTTSS_AnyConditionMeet* AnyConditionMeet = Cast<UTTSS_AnyConditionMeet>(TriggerTasks[i]->GetStartConditions());
        if (AnyConditionMeet == nullptr)
        {//only use UTTSS_AnyConditionMeet, for now.
            continue;
        }
        TArray<FTriggerTaskStyleMap>& Switches = AnyConditionMeet->GetSwitches();
        for (int32 SwitchIndex = 0; SwitchIndex < Switches.Num(); ++SwitchIndex)
        {
            //check prerequisite recursively.
            GenerateChainInfoByPrerequisite(InTrigger, InTagArr, InTagName2IsInListMap, Switches[SwitchIndex].Condition);
        }
    }
}

void FTriggerChainHelper::GenerateChainInfoByPrerequisite(ANewTriggerBase* InTrigger, const TArray<FName>& InTagArr, TMap<FName, uint8>& InTagName2IsInListMap, UEvaluatorOperation* InPrerequisite)
{
	if (InPrerequisite == nullptr)
	{
		return;
	}
	for (int32 i = 0; i < InPrerequisite->Operators.Num(); ++i)
	{
		GenerateChainInfoByPrerequisite(InTrigger, InTagArr, InTagName2IsInListMap, InPrerequisite->Operators[i]);
	}
	const bool bComponentNoTagLimit = InTagArr.Num() == 0 || InTagArr[0] == TriggerNoTagName;
	for (int32 i = 0; i < InPrerequisite->Condtions.Num(); ++i)
	{
		//temp get parent-child relationship by UCheckTaskState, to be replaced.
		UCheckTaskState* ParentPrerequisite = Cast<UCheckTaskState>(InPrerequisite->Condtions[i]);
		if (ParentPrerequisite == nullptr)
		{
			continue;
		}
		for (int32 PrerequisiteTaskIndex = 0; PrerequisiteTaskIndex < ParentPrerequisite->TaskDatas.Num(); ++PrerequisiteTaskIndex)
		{
			UTriggerTaskBase* TriggerTask = ParentPrerequisite->GetTriggerTask(PrerequisiteTaskIndex);
			if (TriggerTask == nullptr)
			{
				continue;
			}
			UTriggerTaskComponentBase* ParentTaskComponent = TriggerTask->GetTriggerOwner();
			if (ParentTaskComponent == nullptr)
			{
				continue;
			}
			ANewTriggerBase* ParentTrigger = Cast<ANewTriggerBase>(ParentTaskComponent->GetOuter());
			if (ParentTrigger == nullptr)
			{
				continue;
			}
			if (bComponentNoTagLimit)
			{
				//InTrigger no tag limit, then just check ParentTrigger.
				TArray<FName> ParentTagArr;
				bool bIsParentNoTagLimit = GetTriggerComponentTags(ParentTagArr, ParentTaskComponent, TGetTagCall());
				if (bIsParentNoTagLimit)
				{//ParentTagArr & InTrigger, both no tag limit. 
					InTagName2IsInListMap[TriggerNoTagName] = FlagInList_Child;
					AddTriggerChain(InTrigger, ParentTrigger, TriggerNoTagName);
					continue;
				}
				for (int32 TagIndex = 0; TagIndex < ParentTagArr.Num(); ++TagIndex)
				{
					InTagName2IsInListMap[ParentTagArr[TagIndex]] = FlagInList_Child;
					AddTriggerChain(InTrigger, ParentTrigger, ParentTagArr[TagIndex]);
				}
				continue;
			}

			for (int32 TagIndex = 0; TagIndex < InTagArr.Num(); ++TagIndex)
			{//mark the trigger has parent.
				if (IsTriggerComponentRunInTag(InTagArr[TagIndex], ParentTaskComponent) == false)
				{//the tag is not in ParentTaskComponent.
					continue;
				}
				InTagName2IsInListMap[InTagArr[TagIndex]] = FlagInList_Child;
				AddTriggerChain(InTrigger, ParentTrigger, InTagArr[TagIndex]);
			}
		}
	}
}

void FTriggerChainHelper::GenerateChainInfoByEventChain(ANewTriggerBase* InTrigger, UTriggerTaskComponentBase* InTriggerComponent, const TArray<FName>& InTagArr, TMap<FName, uint8>& InTagName2IsInListMap)
{
	const bool bComponentNoTagLimit = InTagArr.Num() == 0 || InTagArr[0] == TriggerNoTagName;
	const TArray<UTriggerEventChainBase*>& EventChainsArr = InTriggerComponent->GetConstEventChains();
	for (int32 i = 0; i < EventChainsArr.Num(); ++i)
	{
		const UTriggerEventChainBase* EventChain = EventChainsArr[i];
		if (EventChain == nullptr)
		{
			continue;
		}
		const FGameplayTagContainer& EventChainTagCategory = EventChain->GetConstCategory();
		TArray<FGameplayTag> TagsInCategory;
		EventChainTagCategory.GetGameplayTagArray(TagsInCategory);

		TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;
		EventChain->GetChildTriggers(ChildTriggers);
		const int32 TriggersCount = ChildTriggers.Num();
		if (TriggersCount == 0)
		{//no child.
			continue;
		}

		if (TagsInCategory.Num() == 0)
		{//no tags, use InTagArr.
			for (int32 NodeIndex = 0; NodeIndex < TriggersCount; ++NodeIndex)
			{
				ANewTriggerBase* ChildTrigger = Cast<ANewTriggerBase>(ChildTriggers[NodeIndex].GetObject());
				if (ChildTrigger == nullptr)
				{
					continue;
				}
				TSet<FName> InterTagSet;
				GetTagIntersectionOfTrigger(ChildTrigger, InTagArr, bComponentNoTagLimit, InterTagSet);
				AddTriggerChainBySet(ChildTrigger, InTrigger, InterTagSet);
			}
			return;
		}

		//filter TagsInCategory by InTagArr, get intersection of TagsInCategory and InTagArr.
		for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
		{
			if (bComponentNoTagLimit || InTagArr.Contains(TagsInCategory[TagIndex].GetTagName()))
			{
				continue;
			}
			TagsInCategory.RemoveAt(TagIndex);
			--TagIndex;
		}

		if (TagsInCategory.Num() == 0)
		{//the intersection is null, error.
			return;
		}

		for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
		{
			const FName TagName = TagsInCategory[TagIndex].GetTagName();
			for (int32 NodeIndex = 0; NodeIndex < TriggersCount; ++NodeIndex)
			{
				ANewTriggerBase* ChildTrigger = Cast<ANewTriggerBase>(ChildTriggers[NodeIndex].GetObject());
				if (ChildTrigger == nullptr)
				{
					continue;
				}
				if (IsTagInTrigger(ChildTrigger, TagName) == false)
				{//the TagName is not in ChildTrigger.
					continue;
				}
				AddTriggerChain(ChildTrigger, InTrigger, TagName);
				MarkTriggerChildFlagInList(ChildTrigger, TagName);
			}
		}
	}
}

void FTriggerChainHelper::AddTriggerChain(ANewTriggerBase* InTrigger, ANewTriggerBase* InParentTrigger, const FName InTag)
{
	FTriggerChainChildInfo* ChainInfo = Tag2ChainMap.Find(InTag);
	if (ChainInfo == nullptr)
	{
		Tag2ChainMap.Add(InTag, FTriggerChainChildInfo());
		ChainInfo = &Tag2ChainMap[InTag];
	}
	TArray<ANewTriggerBase*>* ChildArr = ChainInfo->Parent2ChildMap.Find(InParentTrigger);
	if (ChildArr == nullptr)
	{
		ChainInfo->Parent2ChildMap.Add(InParentTrigger, TArray<ANewTriggerBase*>());
		ChildArr = &ChainInfo->Parent2ChildMap[InParentTrigger];
	}

	ChildArr->AddUnique(InTrigger);
}

void FTriggerChainHelper::AddTriggerChainBySet(ANewTriggerBase* InTrigger, ANewTriggerBase* InParentTrigger, const TSet<FName>& InterTagSet)
{
	for (TSet<FName>::TConstIterator It = InterTagSet.CreateConstIterator(); It; ++It)
	{
		AddTriggerChain(InTrigger, InParentTrigger, *It);
		MarkTriggerChildFlagInList(InTrigger, *It);
	}
}

bool FTriggerChainHelper::IsTriggerComponentRunInTag(const FName InTag, const UTriggerTaskComponentBase* InTaskComponent) const
{
	const TArray<UTaskComponentCategory*>& TaskCategorysArr = InTaskComponent->GetConstCategories();
	bool bHasTag = false;
	for (int32 i = 0; i < TaskCategorysArr.Num(); ++i)
	{//get all game play tags of component.
		if (TaskCategorysArr[i] == nullptr)
		{
			continue;
		}
		TArray<FGameplayTag> TagsInCategory;
		const FGameplayTagContainer& Categories = TaskCategorysArr[i]->Categories;
		Categories.GetGameplayTagArray(TagsInCategory);

		for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
		{
			bHasTag = true;
			if (TagsInCategory[TagIndex].GetTagName() == InTag)
			{
				return true;
			}
		}
	}
	//if has tag, so no tag match InTag, otherwise, no tag means InTaskComponent match all tags.
	return !bHasTag;
}

bool FTriggerChainHelper::GetTriggerComponentTags(TArray<FName>& InTagArr, const UTriggerTaskComponentBase* InTaskComponent, TGetTagCall GetTagCall) const
{
	const TArray<UTaskComponentCategory*>& TaskCategorysArr = InTaskComponent->GetConstCategories();
	for (int32 i = 0; i < TaskCategorysArr.Num(); ++i)
	{//get all game play tags of component.
		if (TaskCategorysArr[i] == nullptr)
		{
			continue;
		}
		TArray<FGameplayTag> TagsInCategory;
		const FGameplayTagContainer& Categories = TaskCategorysArr[i]->Categories;
		Categories.GetGameplayTagArray(TagsInCategory);

		for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
		{
			InTagArr.Add(TagsInCategory[TagIndex].GetTagName());
			if (GetTagCall)
			{
				GetTagCall(InTagArr[TagIndex]);
			}
		}
	}

	if (InTagArr.Num() > 0)
	{
		return false;
	}
	InTagArr.Add(TriggerNoTagName);//add TriggerNoTagName as default tag, if component has no tag.
	if (GetTagCall)
	{
		GetTagCall(InTagArr[0]);
	}
	return true;
}

bool FTriggerChainHelper::IsTriggerAtHead(const uint8 InFlag) const
{
	return InFlag & FlagInList_Head;
}

bool FTriggerChainHelper::IsTriggerInList(const uint8 InFlag) const
{
	return InFlag & FlagInList_Added;
}

void FTriggerChainHelper::GenerateTriggerViewObjectForSingleRing(TArray<ANewTriggerBase*>& InTriggersInSingleRing, TArray<UTriggerTreeViewObject*>& InTreeViewObjectArr, const FName& InViewTag, TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap, const FTriggerChainChildInfo& ChainInfo)
{
	if (InTriggersInSingleRing.Num() == 0)
	{
		return;
	}
	ANewTriggerBase* Trigger = nullptr;
	for (int32 i = 0; i < InTriggersInSingleRing.Num(); ++i)
	{
		if (IsTriggerInRing(InTriggersInSingleRing[i], ChainInfo))
		{//get a trigger in ring, but this may not resolve all trigger chain view when the triggers form two or more rings.
			Trigger = InTriggersInSingleRing[i];
			InTriggersInSingleRing.RemoveAt(i);
			break;
		}
	}
	if (Trigger == nullptr)
	{//unknown error, just get a trigger to continue generation process.
		Trigger = InTriggersInSingleRing[0];
		InTriggersInSingleRing.RemoveAt(0);
	}
	UTriggerTreeViewObject** ViewObject = Trigger2TreeObjectMap.Find(Trigger);
	if (ViewObject == nullptr)
	{//unknown error
		return;
	}
	InTreeViewObjectArr.Add(*ViewObject);
	(*ViewObject)->TriggerLevel = 0;//start from 0.
	const int32* IndexInViewInfo = Trigger2ViewInfoIndexMap.Find(Trigger);
	if (IndexInViewInfo == nullptr)
	{//unknown error.
		return;
	}
	FTriggerTagViewInfo& TriggerInfo = TriggersViewInfo[*IndexInViewInfo];
	uint8* FlagInList = TriggerInfo.TagName2IsInListMap.Find(InViewTag);
	if (FlagInList == nullptr)
	{//unknown error
		return;
	}
	*FlagInList |= FlagInList_Added;//mark in the list.

	//construct next nodes for the ring.
	(*ViewObject)->ConstructNextNodesFilterByTag(Trigger2TreeObjectMap, InViewTag, *this, ChainInfo);

	//remove child triggers in InTriggersInSingleRing.
	for (int32 i = 0; i < InTriggersInSingleRing.Num(); ++i)
	{
		ANewTriggerBase* LeftTrigger = InTriggersInSingleRing[i];
		const int32* IndexInViewInfoTemp = Trigger2ViewInfoIndexMap.Find(Trigger);
		if (IndexInViewInfoTemp == nullptr)
		{//unknown error.
			InTriggersInSingleRing.RemoveAt(i);
			--i;
			continue;
		}
		FTriggerTagViewInfo& TriggerInfoTemp = TriggersViewInfo[*IndexInViewInfoTemp];
		uint8* FlagInListTemp = TriggerInfoTemp.TagName2IsInListMap.Find(InViewTag);
		if (FlagInListTemp == nullptr)
		{//unknown error
			InTriggersInSingleRing.RemoveAt(i);
			--i;
			continue;
		}
		if (IsTriggerInList(*FlagInListTemp))
		{
			InTriggersInSingleRing.RemoveAt(i);
			--i;
		}
	}
}

bool FTriggerChainHelper::IsTriggerInRing(const ANewTriggerBase* InTrigger, const FTriggerChainChildInfo& ChainInfo) const
{
	const TArray<ANewTriggerBase*>* ChildArr = ChainInfo.Parent2ChildMap.Find(InTrigger);
	if (ChildArr == nullptr)
	{
		return false;
	}
	for (int32 i = 0; i < ChildArr->Num(); ++i)
	{
		if (IsTriggerHasChild((*ChildArr)[i], InTrigger, ChainInfo))
		{
			return true;
		}
	}
	return false;
}

bool FTriggerChainHelper::IsTriggerHasChild(const ANewTriggerBase* InParentTrigger, const ANewTriggerBase* InCheckTrigger, const FTriggerChainChildInfo& ChainInfo) const
{
	const TArray<ANewTriggerBase*>* ChildArr = ChainInfo.Parent2ChildMap.Find(InParentTrigger);
	if (ChildArr == nullptr)
	{
		return false;
	}
	for (int32 i = 0; i < ChildArr->Num(); ++i)
	{
		if ((*ChildArr)[i] == InCheckTrigger)
		{
			return true;
		}
		if (IsTriggerHasChild((*ChildArr)[i], InCheckTrigger, ChainInfo))
		{
			return true;
		}
	}
	return false;
}

void FTriggerChainHelper::GetTagIntersectionOfTrigger(const ANewTriggerBase* InCheckTrigger, const TArray<FName>& InTagArr, const bool bComponentNoTagLimit, TSet<FName>& InterTagSet)
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	InCheckTrigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() == 0)
	{//unknown error.
		return;
	}
	bool IsAllComponentsNoTags = false;
	for (int32 ComponentIndex = 0; ComponentIndex < TaskComponents.Num(); ++ComponentIndex)
	{
		bool bHasTag = false;
		const TArray<UTaskComponentCategory*>& ComponentCategorysArr = TaskComponents[ComponentIndex]->GetConstCategories();
		for (int32 i = 0; i < ComponentCategorysArr.Num(); ++i)
		{//get all game play tags of component.
			if (ComponentCategorysArr[i] == nullptr)
			{
				continue;
			}
			TArray<FGameplayTag> TagsInCategory;
			const FGameplayTagContainer& Categories = ComponentCategorysArr[i]->Categories;
			Categories.GetGameplayTagArray(TagsInCategory);

			for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
			{
				bHasTag = true;
				if (bComponentNoTagLimit || InTagArr.Contains(TagsInCategory[TagIndex].GetTagName()))
				{
					InterTagSet.Add(TagsInCategory[TagIndex].GetTagName());
				}
			}
		}
		if (bHasTag == false)
		{
			InterTagSet.Empty();
			if (bComponentNoTagLimit)
			{//both no tag limit.
				InterTagSet.Add(TriggerNoTagName);
				return;
			}
			//all InTagArr are in.
			for (int32 TagIndex = 0; TagIndex < InTagArr.Num(); ++TagIndex)
			{
				InterTagSet.Add(InTagArr[TagIndex]);
			}
			return;
		}
	}
}

bool FTriggerChainHelper::IsTagInTrigger(const ANewTriggerBase* InCheckTrigger, const FName& InTag)
{
	TArray<UTriggerTaskComponentBase*> TaskComponents;
	InCheckTrigger->GetTriggerTaskComponents(TaskComponents);
	if (TaskComponents.Num() == 0)
	{//unknown error.
		return false;
	}
	for (int32 ComponentIndex = 0; ComponentIndex < TaskComponents.Num(); ++ComponentIndex)
	{
		bool bHasTag = false;
		const TArray<UTaskComponentCategory*>& ComponentCategorysArr = TaskComponents[ComponentIndex]->GetConstCategories();
		for (int32 i = 0; i < ComponentCategorysArr.Num(); ++i)
		{//get all game play tags of component.
			if (ComponentCategorysArr[i] == nullptr)
			{
				continue;
			}
			TArray<FGameplayTag> TagsInCategory;
			const FGameplayTagContainer& Categories = ComponentCategorysArr[i]->Categories;
			Categories.GetGameplayTagArray(TagsInCategory);

			for (int32 TagIndex = 0; TagIndex < TagsInCategory.Num(); ++TagIndex)
			{
				bHasTag = true;
				if (TagsInCategory[TagIndex].GetTagName() == InTag)
				{
					return true;
				}
			}
		}
		if (bHasTag == false)
		{//the component has no tag, so any filter tag is in.
			return true;
		}
	}
	return false;
}

void FTriggerChainHelper::MarkTriggerChildFlagInList(const ANewTriggerBase* InTrigger, const FName& InTag)
{
	const int32* IndexInView = Trigger2ViewInfoIndexMap.Find(InTrigger);
	if (IndexInView == nullptr)
	{
		return;
	}
	FTriggerTagViewInfo& ViewInfo = TriggersViewInfo[*IndexInView];
	uint8* FlagInList = ViewInfo.TagName2IsInListMap.Find(InTag);
	if (FlagInList == nullptr)
	{
		ViewInfo.TagName2IsInListMap.Add(InTag, FlagInList_Child);
	}
	else
	{
		*FlagInList = FlagInList_Child;
	}
}
