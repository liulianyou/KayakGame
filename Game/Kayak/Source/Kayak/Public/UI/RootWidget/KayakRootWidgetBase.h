#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/6
* Purpose:	This is the root widget which will hold all UI in the target game mode
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Templates/SubclassOf.h"

#include "KayakUIBase.h"

#include "KayakRootWidgetBase.generated.h"

#define AssignRootLayerWidgets( RootLayerWidget )\
	if (RootLayerWidget == nullptr)\
	{\
		UE_LOG(LogKayak, Error, TEXT("The root layer widget %s should never be null, you should add one in the widget BP class!! "), #RootLayerWidget);\
	}\
	else\
	{\
		LayerRootWidgets.Add(RootLayerWidget);\
	}

UCLASS(BlueprintType, Blueprintable, Abstract, Config = UI, Category = "Kayak|UI")
class KAYAK_API UKayakRootWidgetBase : public UKayakUserWidget
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UUserWidget
	virtual void NativeConstruct() override;
	//Override UUserWidget

public:
	
	//Get the root widget for each layer
	UFUNCTION(BlueprintCallable, Category="Kayak|UI")
	UKayakUIBase* GetLayerRootWidget( EWidgetLayer Layer );

	/*
	* Assign the widget to the target UI
	* 
	* #return true mean the target UI have been assigned successfully
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	bool AssignWigetToTargetLayer( UKayakUIBase* UIWidget, EWidgetLayer Layer, int ZOrder = 0);

	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	bool RemoveWidget(UKayakUIBase* UIWidget);

private:

	UPROPERTY(meta = (BindWidget))
	UKayakUIBase* BottomRootWidget;

	UPROPERTY(meta = (BindWidget))
	UKayakUIBase* NormalRootWidget;

	UPROPERTY(meta = (BindWidget))
	UKayakUIBase* UpRootWidget;

private:

	/*
	* The widgets that will hold all ui for different UI
	* Its length should be same as enumerator of EWidgetLayer
	*/
	TArray<UKayakUIBase*> LayerRootWidgets; 
};

