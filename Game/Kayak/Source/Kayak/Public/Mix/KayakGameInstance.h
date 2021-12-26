#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	Game instance for KAYAK game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Engine/GameInstance.h"

#include "KayakGameInstance.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak")
class KAYAK_API UKayakGameInstance : public UGameInstance
{
	GENERATED_UCLASS_BODY()

public:

	//Override GaemInstace
	virtual void Init() override;
	//Override GameInstace


};