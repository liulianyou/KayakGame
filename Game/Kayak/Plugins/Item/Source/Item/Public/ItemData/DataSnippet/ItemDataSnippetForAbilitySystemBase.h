#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/23
* Purpose:	This is used to give the ability component of target object some default values
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "ItemDataSnippetBase.h"

#include "ItemDataSnippetForAbilitySystemBase.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UAttributeSet;

UCLASS(Blueprintable, BlueprintType, Category = "Item|SnippetData")
class ITEM_API UItemDataSnippetForAbilitySystemBase : public UItemDataSnippetBase
{
	GENERATED_UCLASS_BODY()

public:

	//UObject
	virtual void BeginDestroy() override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	//UObject

	
protected:

	UFUNCTION()
	virtual void OnRep_Effects( const TArray<TSubclassOf<UGameplayEffect>>& OldValue);

	UFUNCTION()
	virtual void OnRep_Abilities( const TArray<TSubclassOf<UGameplayAbility>>& OldValue );

	UFUNCTION()
	virtual void OnRep_Attributes( const TArray<TSubclassOf<UAttributeSet>>& OldValue);

public:

	/*
	* The game play effect which will be applied when this data snippet has been activated
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Effects, Category = "SnippetData")
	TArray<TSubclassOf<UGameplayEffect>> Effects;
	ITEMDATASNIPPET_PROPERTY_DEFINITION(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UGameplayEffect>>, Effects);
	
	/*
	* The game play abilities which will be applied when this data snippet has been activated
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Abilities, Category = "SnippetData")
	TArray<TSubclassOf<UGameplayAbility>> Abilities;
	ITEMDATASNIPPET_PROPERTY_DEFINITION(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UGameplayAbility>>, Abilities);

	/*
	* The attribute which will be applied when this data snippet has been activated
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Attributes, Category = "SnippetData")
	TArray<TSubclassOf<UAttributeSet>> Attributes;
	ITEMDATASNIPPET_PROPERTY_DEFINITION(UItemDataSnippetForAbilitySystemBase, TArray<TSubclassOf<UAttributeSet>>, Attributes);


};