#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TriggerTreeViewObject.generated.h"

class ANewTriggerBase;
class FTriggerChainHelper;
struct FTriggerChainChildInfo;

/**
 * the trigger related data for tree view.
 */
UCLASS(BlueprintType)
class TRIGGEREDITOR_API UTriggerTreeViewObject : public UObject
{
	GENERATED_UCLASS_BODY()

	
public:
	void TestData();

	void ConstructNextNodes(TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap);

    void ConstructNextNodesFilterByTag(TMap<ANewTriggerBase*, UTriggerTreeViewObject*>& Trigger2TreeObjectMap, const FName& InViewTag, FTriggerChainHelper& ChainHelper, const FTriggerChainChildInfo& ChainInfo);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TriggerTreeView")
	FString TriggerName;

	//the depth level in tree view, start from 0.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TriggerTreeView")
	int32 TriggerLevel;

	//the children of the node in tree view, no ring, no repeat.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TriggerTreeView")
	TArray<UObject*> NextNodesChildren;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TriggerTreeView")
	TArray<UObject*> RingPointNodes;
	
	// repeat with trigger before
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TriggerTreeView")
	TArray<UObject*> RepeatedNoes;

	UPROPERTY(Transient, BlueprintReadOnly)
	ANewTriggerBase* Trigger;
};
