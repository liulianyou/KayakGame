#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/25
* Purpose:	This is the base actor which is only used in the editor
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Actor.h"

#include "TriggerEditorActorBase.generated.h"

UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API ATriggerEditorActorBase : public AActor
{
	GENERATED_UCLASS_BODY()
};