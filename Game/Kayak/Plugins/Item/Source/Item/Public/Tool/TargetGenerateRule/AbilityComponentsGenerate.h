#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/20
* Purpose:	Used to generate all ability components which will be used apply GE/GA/GC/Attribute
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TargetGenerateRuleBase.h"

#include "AbilityComponentsGenerate.generated.h"

/*
* Used to get all ability components which will be used by the target runtime data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Category = "Item|TargetGenerate")
class ITEM_API UAbilityComponentsGenerate : public UTargetGenerateRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	
	virtual void GetTargets_Implementation(TArray<UObject *>& Targets, const UItemRuntimeData* RuntimeData ) const override;
	
};

UCLASS(Blueprintable, BlueprintType,  Category = "Item|TargetGenerate")
class ITEM_API UAbilityComponentsInAvaratorOwner : public UAbilityComponentsGenerate
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const override;

};

UCLASS(Blueprintable, BlueprintType, Category = "Item|TargetGenerate")
class ITEM_API UAbilityComponentsInInventoryOwner : public UAbilityComponentsGenerate
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const override;

};

UCLASS(Blueprintable, BlueprintType, Category = "Item|TargetGenerate")
class ITEM_API UAbilityComponentsInItemOwner : public UAbilityComponentsGenerate
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const override;

};

UCLASS(Blueprintable, BlueprintType, Category = "Item|TargetGenerate")
class ITEM_API UAbilityComponentsCustomize : public UAbilityComponentsGenerate
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets, const UItemRuntimeData* RuntimeData) const override;

};