/*
* Copyright form 2019-2019 YIYOU, Inc. All Rights Reserved.
* Author:	Liulianyou
* Time:		2019/7/21
* Purpose:	The base UI class for my kayak game which is derived form UserWidget.
			
*/

#pragma once

#include "CoreMinimal.h"
#include "UserWidget.h"

#include "KayakUIBase.generated.h"

UCLASS(Config = UI, HideDropdown)
class KAYAK_API UKayakUIBase : public UUserWidget
{
	GENERATED_UCLASS_BODY()

public:
	//Override the base class in the UUserWidget
	void NativePreConstruct() override;
	void NativeConstruct() override;
	void NativeDestruct() override;

public:

	//True means this widget will disable other widget's input states.
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsModalWidget;
};

