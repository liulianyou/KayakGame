#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class of ability system component which will manager all game play abilities
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "AbilitySystemComponent.h"

#include "KayakAbilitySystemComponentBase.generated.h"



UCLASS(Blueprintable, BlueprintType, Abstract, Categroy = "Kayak")
class KAYAK_API UKayakAbilitySystemComponentBase : public UAbilitySystemComponent
{
	GENERATED_UCLASS_BODY()




public:
	
	/*
	* The default attributes set that will be applied to this component
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Kayak|Ability")
	TArray<TSubclassOf<UAttributeSet>> DefaultAttributesSetClasses;
};

