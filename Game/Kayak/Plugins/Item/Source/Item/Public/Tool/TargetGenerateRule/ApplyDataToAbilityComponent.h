#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/20
* Purpose:	Used to generate all ability components which will be used apply GE/GA/GC/Attribute
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "DataAppliedRuleBase.h"

#include "Templates/SubclassOf.h"

#include "ApplyDataToAbilityComponent.generated.h"

class UGameplayEffect;
class UGameplayAbility;
class UAttributeSet;

/*
* Used to get all ability components which will be used by the target runtime data
*/
UCLASS(Blueprintable, BlueprintType, Abstract, hidedropdown, Category = "Item|DataAppliedRule")
class ITEM_API UDAR_AbilityComponents : public UDataAppliedRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	
	virtual void GetTargets_Implementation(TArray<UObject *>& Targets) const override;
	virtual void ApplyData_Implementation() override;

public:
	
	UFUNCTION(BlueprintCallable)
	void SetEffects(TArray<TSubclassOf<UGameplayEffect>>& Value) { Effects.Append(Value); }
	UFUNCTION(BlueprintCallable)
	void SetAbilities(TArray<TSubclassOf<UGameplayAbility>>& Value) { Abilities.Append(Value); }
	UFUNCTION(BlueprintCallable)
	void SetAttributes(TArray<TSubclassOf<UAttributeSet>>& Value) { Attributes.Append(Value); }

	UFUNCTION(BlueprintCallable)
	const TArray<TSubclassOf<UGameplayEffect>>& GetEffects() const{ return Effects; }
	UFUNCTION(BlueprintCallable)
	const TArray<TSubclassOf<UGameplayAbility>>& GetAbilities()const { return Abilities; }
	UFUNCTION(BlueprintCallable)
	const TArray<TSubclassOf<UAttributeSet>>& GetAttributes()const { return Attributes; }

private:

	UPROPERTY()
	TArray<TSubclassOf<UGameplayEffect>> Effects;

	UPROPERTY()
	TArray<TSubclassOf<UGameplayAbility>> Abilities;

	UPROPERTY()
	TArray<TSubclassOf<UAttributeSet>> Attributes;
};

UCLASS(Blueprintable, BlueprintType,  Category = "Item|TargetGenerate", meta=(DisplayName="Ability Component in the Avatar"))
class ITEM_API UDAR_AbilityComponentsInAvaratorOwner : public UDAR_AbilityComponents
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets) const override;
	virtual void ApplyData_Implementation() override;

};

UCLASS(Blueprintable, BlueprintType, Category = "Item|TargetGenerate", meta = (DisplayName = "Ability Component in the owner"))
class ITEM_API UDAR_AbilityComponentsInInventoryOwner : public UDAR_AbilityComponents
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets) const override;
	virtual void ApplyData_Implementation() override;

};

UCLASS(Blueprintable, BlueprintType, Category = "Item|TargetGenerate", meta = (DisplayName = "Ability Component in the item"))
class ITEM_API UDAR_AbilityComponentsInItemOwner : public UDAR_AbilityComponents
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetTargets_Implementation(TArray<UObject*>& Targets) const override;
	virtual void ApplyData_Implementation() override;
};