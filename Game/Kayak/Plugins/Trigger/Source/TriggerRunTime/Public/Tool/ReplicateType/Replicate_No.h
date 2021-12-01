#pragma once

/*
* Author:	Liulianyou
* Time:		2021/2/19
* Purpose:	will not replicate the target object no matter any conditions
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ReplicateType/ReplicateTypeBase.h"

#include "Replicate_No.generated.h"


UCLASS(BlueprintType, Blueprintable, Category = "TriggerRunttime")
class TRIGGERRUNTIME_API UReplicate_No : public UReplicateTypeBase
{
	GENERATED_UCLASS_BODY()

public:

	virtual bool CanReplicate_Implementation() override;

};