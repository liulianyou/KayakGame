#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/7
* Purpose:	This is the base class for the statics of triggers
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Templates/SubclassOf.h"
#include "TriggerTaskBase.h"

#include "TriggerStaticsBase.generated.h"

/*
* I will use this class and all its derived class to inspect all the dates in the trigger system
*/
UCLASS(BlueprintType)
class TRIGGERRUNTIME_API UTriggerStaticsBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	

public:

	//The class we should inspect to trigger class
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|TriggerStatics")
	TArray<TSubclassOf<UTriggerTaskBase>> InspectorClasses;

private:

};
