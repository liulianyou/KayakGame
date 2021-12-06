#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/5
* Purpose:	This is the root widget that is just used for common usage, you can treat it as one demo
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakRootWidgetBase.h"

#include "KayakCommonRootWidget.generated.h"

UCLASS(Blueprintable, Blueprintable, Config = UI, Category = "Kayak|UI")
class KAYAK_API UKayakCommonRootWidget : public UKayakRootWidgetBase
{
	GENERATED_UCLASS_BODY()

public:

	
};