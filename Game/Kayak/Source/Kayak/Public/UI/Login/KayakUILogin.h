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


UCLASS(Config = UI, HideDropdown)
class KAYAK_API UKayakUILogin : public UKayakUIBase
{
	GENERATED_UCLASS_BODY()
public:
	//Override the base class in the UUserWidget
	void NativePreConstruct() override;
	void NativeConstruct() override;
	void NativeDestruct() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget),Category="UI_Login")
	UButton* LoginButton;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget), Category = "UI_Login")
	UButton* Options;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget), Category = "UI_Login")
	UButton* Quit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget,OptionalWidget = true), Category = "UI_Login")
	UEditableText* UserName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget, OptionalWidget = true), Category = "UI_Login")
	UEditableText* Password;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidgetOptional), Category = "UI_Login")
	UEditableText* ServerIPAddress;

};
