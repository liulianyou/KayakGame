#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/28
* Purpose:	The base user widget which is used to create new UMG widget in our game.
*			If you want to create new widget through the left button form the User Widget button, You should make its parent to be this class
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Blueprint/UserWidget.h"

#include "KayakUserWidget.generated.h"

UCLASS(Blueprintable, BlueprintType, Abstract, Category = "KayakGame|UI")
class KAYAK_API UKayakUserWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()

public:
};