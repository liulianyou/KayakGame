#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/3
* Purpose:	The ability system component which is used for the AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakCharacterAbilitySystemComponentBase.h"

#include "KayakAIAbilitySystemComponent.generated.h"



UCLASS(Blueprintable, BlueprintType, Category = "Kayak|Ability")
class KAYAK_API UKayakAIAbilitySystemComponent : public UKayakCharacterAbilitySystemComponentBase
{
	GENERATED_UCLASS_BODY()

public:

};