#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/16
* Purpose:	This is used to transfer game play data to UI for the designer to show some external UI at the specific point
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TT_EffectBase.h"

#include "TT_UIBase.generated.h"

class UUIDataBase;

/*
* Generate game play data to the target UI from this class
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_UIBase : public UTT_EffectBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
		


};