#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/8
* Purpose:	I will use this class to control how the target effect data can be activated.
*			some times one effect data will only active for the target player, it will not effect other players
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "DataActiveRuleBase.generated.h"

class UTriggerEffectDataBase;

UCLASS(BlueprintType, Blueprintable, Abstract, hidedropdown, Within = "TriggerEffectDataBase", Category = "EffectData")
class TRIGGERRUNTIME_API UDataActiveRuleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Effect Data")
	bool OnInitialize( UTriggerEffectDataBase* Owner );

	UFUNCTION(BlueprintCallable, Category = "Effect Data")
	virtual void Initialize(UTriggerEffectDataBase* Owner);

	UFUNCTION(BlueprintImplementableEvent, Category = "Effect Data")
	bool OnCanActive() const;

	/*
	* Function used to check weather the target data can be activated
	*/
	UFUNCTION(BlueprintCallable, Category = "Effect Data")
	virtual bool CanActive() const ;

private:
	
	UTriggerEffectDataBase* OwnerTriggerEffectData;
};