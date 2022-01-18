#pragma once

/*
* Author:	Liulianyou
* Time:		2021/1/6
* Purpose:	This is the item data that contain the default attribute for the run time data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "ItemData.h"

#include "ItemRuntimeData.generated.h"


UCLASS(BlueprintType, Blueprintable, Category = "Item|ItemRuntimeData")
class ITEM_API UItemRuntimeData : public UItemRuntimeDataBase
{
	GENERATED_UCLASS_BODY()

public:

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const;

public:
	
	//Override ItemRuntimeDataBase
	virtual void Initialize(UItemDataBase* ItemData) override;
	//Override ItemRuntimeDataBase


public:
	
	/*
	* All effects which will be used in differ
	*/
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_EffectMap, Category = "ItemData")
	TArray<FItemEffectDefiniation> EffectMap;

	/*
	* All game play abilities which will be used in different state.
	* These abilities should only be given to the owner avatar of the item
	*/
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_AbilityMap, Category = "ItemData")
	TArray<FItemAbilityDefiniation> AbilityMap;

	/*
	* The attributes which will be added to the avatar owner when it is used
	*/
	UPROPERTY(BlueprintReadWrite, ReplicatedUsing = OnRep_AttributeSetMap, Category = "ItemData")
	TArray<FItemAttributeSetDefinition> AttributeSetMap;

public:

	UFUNCTION()
	void OnRep_EffectMap(const TArray<FItemEffectDefiniation>& OldValue );

	UFUNCTION()
	void OnRep_AbilityMap( const TArray<FItemAbilityDefiniation>& OldValue );

	UFUNCTION()
	void OnRep_AttributeSetMap(const TArray<FItemAttributeSetDefinition>& OldValue );

};