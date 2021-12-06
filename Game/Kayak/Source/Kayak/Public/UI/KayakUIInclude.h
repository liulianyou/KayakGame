#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/6
* Purpose:	The public includes for UI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakUIInclude.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogKayakUI, Log, All);

//The default layer for all UI in our game
UENUM(BlueprintType)
enum class EWidgetLayer : uint8
{
	EBottom		UMETA(DisplayName = "Bottom"),
	ENormal		UMETA(DisplayName = "Normal"),
	ETop		UMETA(DisplayName = "Top"),
	EMax		UMETA(DisplayName = "JustCaluateMaxNum")
};