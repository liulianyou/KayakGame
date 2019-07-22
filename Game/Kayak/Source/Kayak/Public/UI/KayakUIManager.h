/*
* Copyright form 2019-2019 YIYOU, Inc. All Rights Reserved.
* Author:	Liulianyou
* Time:		2019/7/22
* Purpose:	The manager class for Game UI.
*			Although the slate have some manage class and make some categories to distinguish different types of widget,
*			such as SGameLayerManager, EWindowsType...and so on, I think these presets do not meet all game circumstance.
*			I don't want to change too much Engine code to implement game function.
*/

#pragma once

#include "CoreMinimal.h"

#include "KayakUIManager.generated.h"

class UUserWidget;

UCLASS()
class KAYAK_API UKayakUIManager : public UObject
{
	GENERATED_UCLASS_BODY()
public:

public:
	UPROPERTY(Transient)
	TArray<UUserWidget*> OpenedWidgetCashed;

};