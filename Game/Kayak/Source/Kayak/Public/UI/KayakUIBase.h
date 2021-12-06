/*
* Copyright form 2019-2019 YIYOU, Inc. All Rights Reserved.
* Author:	Liulianyou
* Time:		2019/7/21
* Purpose:	The base UI class for my kayak game which is derived form UserWidget.
			
*/

#pragma once

#include "CoreMinimal.h"
#include "KayakUserWidget.h"

#include "KayakUIInclude.h"

#include "KayakUIBase.generated.h"


UCLASS(Config = UI, HideDropdown)
class KAYAK_API UKayakUIBase : public UKayakUserWidget
{
	GENERATED_UCLASS_BODY()

public:


	//Override the base class in the UUserWidget
	void NativePreConstruct() override;
	void NativeConstruct() override;
	void NativeDestruct() override;

public:

	/*
	* Get Default layer that this UI will lying at
	*/
	UFUNCTION(BlueprintNativeEvent, Category = "Kayak|UI")
	EWidgetLayer GetDefaultLayer();


private:

	//The default layer this widget will be shown, it can be override by the ShowUI in the UIManager
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Kayak|UI", meta = (AllowPrivateAccess = true))
	EWidgetLayer DefalutLayer;
};

