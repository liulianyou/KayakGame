// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"


#define TriggerNoTagName TEXT("CustomNameForNoTag")


class ANewTriggerBase;
class UTriggerTaskComponentBase;
class UEvaluatorOperation;
class UTriggerTreeViewObject;

struct FTriggerChainChildInfo
{
    TMap<ANewTriggerBase*, TArray<ANewTriggerBase*>> Parent2ChildMap;
    //TArray<ANewTriggerBase*> HeadArr;
};

struct FTriggerTagViewInfo
{
    ANewTriggerBase* Trigger;
    TMap<FName, uint8> TagName2IsInListMap;//to mark triggers not in list, and the triggers is a single ring relationship like A->B->C->A.
    //the uint8, is the flag to mark the trigger state in list, x1 means it is a head, x0 means it is the node, 1x means has add to the list.
    FTriggerTagViewInfo(ANewTriggerBase* InTrigger)
        :Trigger(InTrigger)
    {}
};

/**
 * Helper to construct trigger chain.
 */
class FTriggerChainHelper
{
public:
    typedef TFunction<void(const FName& InTagName)> TGetTagCall;

    void GenerateTriggerChainInfo(const TArray<ANewTriggerBase*>& TriggerArr);

    void GenerateTriggerViewObject(TArray<UTriggerTreeViewObject*>& InTreeViewObjectArr, const FName InViewTag, UObject* InOuter);

    void MarkTriggerInTheList(const ANewTriggerBase* InTrigger, const FName& InViewTag);
private:
    void CheckAllTask(ANewTriggerBase* InTrigger, UTriggerTaskComponentBase* InTriggerComponent, TMap<FName, uint8>& InTagName2IsInListMap);
    void GenerateChainInfoByPrerequisite(ANewTriggerBase* InTrigger, const TArray<FName>& InTagArr, TMap<FName, uint8>& InTagName2IsInListMap, UEvaluatorOperation* InPrerequisite);
    void GenerateChainInfoByEventChain(ANewTriggerBase* InTrigger, UTriggerTaskComponentBase* InTriggerComponent, const TArray<FName>& InTagArr, TMap<FName, uint8>& InTagName2IsInListMap);

    void AddTriggerChain(ANewTriggerBase* InTrigger, ANewTriggerBase* InParentTrigger, const FName InTag);
    void AddTriggerChainBySet(ANewTriggerBase* InTrigger, ANewTriggerBase* InParentTrigger, const TSet<FName>& InterTagSet);

    bool IsTriggerComponentRunInTag(const FName InTag, const UTriggerTaskComponentBase* InTaskComponent) const;
    bool GetTriggerComponentTags(TArray<FName>& InTagArr, const UTriggerTaskComponentBase* InTaskComponent, TGetTagCall GetTagCall) const;

    bool IsTriggerAtHead(const uint8 InFlag) const;
    bool IsTriggerInList(const uint8 InFlag) const;
    void GenerateTriggerViewObjectForSingleRing(TArray<ANewTriggerBase*>& InTriggersInSingleRing, TArray<UTriggerTreeViewObject*>& InTreeViewObjectArr, const FName& InViewTag, TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap, const FTriggerChainChildInfo& ChainInfo);
    bool IsTriggerInRing(const ANewTriggerBase* InTrigger, const FTriggerChainChildInfo& ChainInfo) const;
    bool IsTriggerHasChild(const ANewTriggerBase* InParentTrigger, const ANewTriggerBase* InCheckTrigger, const FTriggerChainChildInfo& ChainInfo) const;
    void GetTagIntersectionOfTrigger(const ANewTriggerBase* InCheckTrigger, const TArray<FName>& InTagArr, const bool bComponentNoTagLimit, TSet<FName>& InterTagSet);
    bool IsTagInTrigger(const ANewTriggerBase* InCheckTrigger, const FName& InTag);
    void MarkTriggerChildFlagInList(const ANewTriggerBase* InTrigger, const FName& InTag);
protected:
    TMap<FName, FTriggerChainChildInfo> Tag2ChainMap;
    TArray<FTriggerTagViewInfo> TriggersViewInfo;
    TMap<ANewTriggerBase*, int32> Trigger2ViewInfoIndexMap;
};
