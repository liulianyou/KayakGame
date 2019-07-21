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

UCLASS()
class KAYAK_API UKayakUILogin : public UKayakUIBase
{
	GENERATED_UCLASS_BODY()
public:
	//Override the base class in the UUserWidget
	void NativePreConstruct() ;
	void NativeConstruct() ;
	void NativeDestruct() ;

public:


};
