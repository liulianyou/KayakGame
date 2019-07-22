/*
* Copyright form 2019-2019 YIYOU, Inc. All Rights Reserved.
* Author:	Liulianyou
* Time:		2019/7/21
* Purpose:	The login class which is the first game UI which the player will interact with it to log to the server.
*/

#pragma once

#include "CoreMinimal.h"

#include "KayakUIBase.h"

#include "KayakUILogin.generated.h"

class UButton;
class UEditableText;


UCLASS(Config = UI, hidedropdown)
class KAYAK_API UKayakUILogin : public UKayakUIBase
{
	GENERATED_UCLASS_BODY()
public:
	//Override the base class in the UUserWidget
	void NativePreConstruct() override;
	void NativeConstruct() override;
	void NativeDestruct() override;

public:
	UPROPERTY(meta = (BindWidget),Category="UI_Login")
	UButton* LoginButton;
	UPROPERTY(meta = (BindWidget), Category = "UI_Login")
	UButton* Options;
	UPROPERTY(meta = (BindWidget), Category = "UI_Login")
	UButton* Quit;

	UPROPERTY(meta = (BindWidget,OptionalWidget = true), Category = "UI_Login")
	UEditableText* UserName;
	UPROPERTY(meta = (BindWidget, OptionalWidget = true), Category = "UI_Login")
	UEditableText* Password;

	UPROPERTY(meta = (BindWidgetOptional), Category = "UI_Login")
	UEditableText* ServerIPAddress;

};
