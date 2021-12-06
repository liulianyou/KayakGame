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

#include "Templates/SharedPointer.h"
#include "Widgets/SWidget.h"

#include "KayakUIInclude.h"

#include "KayakUIManager.generated.h"

class UKayakUIBase;
class UKayakRootWidgetBase;

/*
* The initial data that when the target manager is created, the new UI will be opened
*/
USTRUCT(BlueprintType)
struct FInitialUIData
{
	GENERATED_BODY()

	//The class of UI that will be used to create new UI
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kayak|UI")
	TSubclassOf<UKayakUIBase> UIClass;

	//Which layer the new class will be assigned to
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kayak|UI")
	EWidgetLayer Layer;

	//The depth of the target UI in the specific layer
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kayak|UI")
	int ZOrder = 0;
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
	UKayakUIBase* CreateWidget( TSubclassOf<UKayakUIBase> WidgetClass, APlayerController* PlayControler);

	/*
	* Show the target UI to the target layer.
	* 
	* @param UserWidget null means this function will show all opened UI
	* @param Layer which layer the target user widget will be showed, if this value is EMax means the target widget will showed according to itself
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	virtual void ShowUI(UKayakUIBase* UserWidget = nullptr, EWidgetLayer Layer = EWidgetLayer::EMax, int ZOrder = 0);

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
	* Hide all UI with specific UIclass
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

	UFUNCTION(BlueprintCallable, Category = "Kayak|UI")
	UKayakRootWidgetBase* GetRootWidget() const { return RootWidget; }

#pragma endregion Get_Set_Implementation

public:
	
	//The initialize data that is used to create new UI when this manager is created by the HUD
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Kayak|UI")
	TArray<FInitialUIData> InitialUIData;

	//The class of root widget that this manager will maintain all UI created from this
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Kayak|UI")
	TSubclassOf<UKayakRootWidgetBase> RootWidgetClass;

private:

	/*
	* Process the initial UI data, this function is invoked at
	*/
	void ProcessInitialUIData();

	//Create root widgets for this manager
	void CreateRootWidgets();

private:

	UPROPERTY(Transient)
	TArray<UKayakUIBase*> OpenedWidget;

	//All the widget that is created but have not been showed on the screen
	UPROPERTY(Transient)
	TArray<UKayakUIBase*> CreatedWidget;

private:

	//The owner of this manager
	AKayakHUDBase* Owner = nullptr;

	/*
	* The widget for root widget of each layer.
	* Use slate widget directly as the  
	*/
	UPROPERTY()
	UKayakRootWidgetBase* RootWidget = nullptr;

};