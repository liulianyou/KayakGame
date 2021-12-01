#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/15
* Purpose:	This is the base class for the data which will used in the interaction rule.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "InteractionRuleDataBase.generated.h"



#define SFPWI(x) x##SERIALIZED_FOR_RPC_WITH_InteractionRuleData

#define STRING(X) SFPWI(X)



/*
* The inner data that the interaction rule will change
* As the BP don't support struct polymorphisms, I use the Object to implement it
* 
* If you have properties need to seialized to be used in the RPC function with FInteractionRuleData you should make it has info (SFPWI):
* eg. UPROPERTY(Meta=(ShortTooltip=SFPWI()))
*/
UCLASS(Abstract, hidedropdown, editinlinenew, DefaultToInstanced, Within = "InteractionRuleBase")
class TRIGGERRUNTIME_API UInteractionRuleDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
#pragma region NetSupport
	virtual bool IsSupportedForNetworking() const { return true; }
#pragma endregion NetSupport

public:

	UFUNCTION(BlueprintCallable)
	virtual void Reset();

	/*
	* Check weather this data is processing by the interaction rule.
	*/
	virtual bool IsProcessing() PURE_VIRTUAL(&UInteractionRuleDataBase::IsProcessing(), return false;);

};

