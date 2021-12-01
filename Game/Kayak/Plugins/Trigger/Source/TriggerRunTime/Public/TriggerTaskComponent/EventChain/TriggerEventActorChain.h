#pragma once

/*
* Author:	Liulianyou
* Time:		2021/7/28
* Purpose:	This chain will hold the actor trigger as its default node type.
*			This file will process all trigger's which type is Actor
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerEventChainBase.h"

#include "TriggerEventActorChain.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime|EventInfo" )
class TRIGGERRUNTIME_API UTriggerEventActorChain : public UTriggerEventChainBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override TriggerEventChainBase
	virtual EAddNewNodeResult AddChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& Category, bool NeedUpdateParentNodeInChildNode = true) override;
	virtual void RemoveChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& Category, bool NeedUpdateParentNodeInChildNode = true) override;
	virtual void GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& Category) const override;
	virtual EAddNewNodeResult AddParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeInParentNode) override;
	virtual void RemoveParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeInParentNode) override;
	virtual void GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter) const override;
	virtual bool CanHoldTargetObject_Implementation(UObject* Object) const override;
	virtual void UpdateNextComponentInfo() override;
	//Override TriggerEventChainBase

public:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent) override;
	virtual void PreEditChange(FProperty* PropertyAboutToChange) override;
#endif

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "EventInfo")
	TArray<TSoftObjectPtr<AActor>> ChildNodes; 

protected:

	UPROPERTY(VisibleAnywhere, Category = "EventInfo", meta = (DisplayAfter = "NextComponentInfos"))
	TArray<TSoftObjectPtr<AActor>> ParentNodes;

private:

#if WITH_EDITORONLY_DATA

	/*
	* Cashed nodes used to update its parent nodes when the ChildNodes have changed in property
	*
	* I can use it to check weather I can manipulate the parent info in the child node
	*/
	TArray<TScriptInterface<ITriggerInterface>> CashedChildNodes;
	TArray<TScriptInterface<ITriggerInterface>> CashedParentNodes;

#endif

};
