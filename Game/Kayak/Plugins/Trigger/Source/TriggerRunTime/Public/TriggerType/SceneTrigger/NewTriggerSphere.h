#pragma once

/*
* Author:		Liulianyou
* Time:			2020/7/8
* Purpose:		This file hold the scenen trigger with the box collision
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerType/SceneTrigger/SceneTrigger.h"
#include "NewTriggerSphere.generated.h"

UCLASS(BlueprintType, Category = "Trigger|SceneTrigger")
class TRIGGERRUNTIME_API ANewTriggerSphere : public ASceneTrigger
{
	GENERATED_UCLASS_BODY()

public:

//#if WITH_EDITOR
//	//~ Begin AActor Interface.
//	virtual void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;
//	//~ End AActor Interface.
//#endif
};