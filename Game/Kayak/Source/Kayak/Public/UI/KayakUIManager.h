/*
* Copyright form 2019-2019 YIYOU, Inc. All Rights Reserved.
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	The manager class for Game UI.
*			Although the slate have some manage class and make some categories to distinguish different types of widget,
*			such as SGameLayerManager, EWindowsType...and so on, I think these presets do not meet all game circumstance.
*			I don't want to change too much Engine code to implement game function.
*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakUIManager.generated.h"

class UKayakUIBase;

UENUM(BlueprintType)
enum class EWidgetLayer : uint8
{
	EButtom,
	ENormal,
	ETop
};

/*
* This class will manager all widgets in our game.
* The instance of this class should never exist at dedicated server
*/
UCLASS(Blueprintable, Blueprintable, Config=UI, Category = "Kayak|UI")
class KAYAK_API UKayakUIManager : public UObject
{
	GENERATED_UCLASS_BODY()


public:

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

public:


	/*
	* Initialize this Manager by the HUD
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Kayak|UI", meta=(DisplayName="Initialize"))
	void OnInitialize(AKayakHUDBase* HUDOwner);

	/*
	* Initialize this Manager by the HUD
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	void Initialize( AKayakHUDBase* HUDOwner );

	/*
	* Create new widget according to the widget class
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	UUserWidget* CreateWidget( TSubclassOf<UKayakUIBase> WidgetClass, EWidgetLayer Layer = EWidgetLayer::ENormal);

	/*
	* Show all UI which have been opened
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	virtual void ShowUI();

	/*
	* Hide all UI with spcific UIclass 
	* 
	* @param Destroyed true means this UI will be removed from parent, false means just make it invisible
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	virtual void HideAllUIWithClass( TSubclassOf<UKayakUIBase> WidgetClass, bool Destroyed );

	/*
	* Hide all UI with spcific UIclass
	*
	* @param Destroyed true means this UI will be removed from parent, false means just make it invisible
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	virtual void HideUIInTargetLayer(EWidgetLayer WidgetLayer, bool Destroyed);

	/*
	* Hide all UI with spcific UIclass
	*
	* @param Destroyed true means this UI will be removed from parent, false means just make it invisible
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	virtual void HideUIWithInstance( UKayakUIBase* UIInstance, bool Destroyed);

#pragma region Get_Set_Implementation

	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	AKayakHUDBase* GetHUDOwner() const { return Owner; }

	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	const TArray<UKayakUIBase*>& GetAllOpenedWidgets() const { return OpenedWidget; }

	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	TArray<UKayakUIBase*>& GetAllOpenedWidgets_Mutable() { return OpenedWidget; }

#pragma endregion Get_Set_Implementation
private:

	UPROPERTY(Transient)
	TArray<UKayakUIBase*> OpenedWidget;

private:

	//The owner of this manager
	AKayakHUDBase* Owner = nullptr;

};