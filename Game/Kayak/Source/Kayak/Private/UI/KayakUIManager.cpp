#include "KayakUIManager.h"
#include "KayakRootWidgetBase.h"
#include "GameFramework/HUD.H"

UKayakUIManager::UKayakUIManager(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UKayakUIManager::BeginDestroy()
{
	Super::BeginDestroy();

	if (RootWidget)
	{
		RootWidget->RemoveFromParent();
		RootWidget = nullptr;
	}
}

void UKayakUIManager::ShowUI(UKayakUIBase* UserWidget/* = nullptr*/, EWidgetLayer Layer /*= EWidgetLayer::EMax*/, int ZOrder)
{
	if (GetRootWidget() == nullptr)
	{
		UE_LOG(LogKayakUI, Error, TEXT("There is no root UI to hold the target UI, Please check the above logs!!"));

		return;
	}

	if (GetRootWidget()->AssignWigetToTargetLayer(UserWidget, Layer, ZOrder))
	{
		OpenedWidget.Remove(UserWidget);
	}
}

void UKayakUIManager::Initialize(AKayakHUDBase* HUDOwner)
{
	Owner = HUDOwner;

	CreateRootWidgets();

	ProcessInitialUIData();

	OnInitialize(HUDOwner);
}


UKayakUIBase* UKayakUIManager::CreateWidget(TSubclassOf<UKayakUIBase> WidgetClass, APlayerController* PlayControler)
{
	if(WidgetClass == nullptr)
		return nullptr;

	UUserWidget* UserWidget = UUserWidget::CreateWidgetInstance(*PlayControler, WidgetClass, NAME_None);

	UKayakUIBase* KayakUI = Cast<UKayakUIBase>(UserWidget);

	if (KayakUI != nullptr)
	{
		OpenedWidget.Add(KayakUI);
	}
	else
	{
		UE_LOG(LogKayakUI, Error, TEXT("Please make the target widget deried from KayakUIBase %s"), *WidgetClass->GetName());
	}

	return KayakUI;
}

void UKayakUIManager::HideAllUIWithClass(TSubclassOf<UKayakUIBase> WidgetClass, bool Destroyed)
{
	
}	

void UKayakUIManager::HideUIInTargetLayer(EWidgetLayer WidgetLayer, bool Destroyed)
{
	
}

void UKayakUIManager::HideUIWithInstance(UKayakUIBase* UIInstance, bool Destroyed)
{
	
}

void UKayakUIManager::ProcessInitialUIData()
{
	if(GetHUDOwner()->GetNetOwningPlayer()->GetPlayerController(GetWorld()) == nullptr)
		return;

	for (int i = 0; i < InitialUIData.Num(); i++)
	{
		if(InitialUIData[i].UIClass == nullptr)
			continue;

		UKayakUIBase* KayakUI = CreateWidget(InitialUIData[i].UIClass, GetHUDOwner()->GetNetOwningPlayer()->GetPlayerController(GetWorld()));

		if (KayakUI != nullptr)
		{
			ShowUI(KayakUI, InitialUIData[i].Layer, InitialUIData[i].ZOrder);
		}
		else
		{
			UE_LOG(LogKayakUI, Error, TEXT("Please make suer the initialize UI is derived from KayakUIbase: %s"), *InitialUIData[i].UIClass->GetName());
		}
	}
}

void UKayakUIManager::CreateRootWidgets()
{
	if (RootWidgetClass == nullptr)
	{
		UE_LOG(LogKayakUI, Error, TEXT("Please specify the root widget class for UI manager: %s"), *GetClass()->GetName());
	}

	//This is at editor mode, and we want to view the target HUD without run the game
	if(GetHUDOwner()->GetNetOwningPlayer()->GetPlayerController(GetWorld()) == nullptr)
		return;

	UUserWidget* UserWidget = UUserWidget::CreateWidgetInstance(*GetHUDOwner()->GetNetOwningPlayer()->GetPlayerController(GetWorld()), RootWidgetClass, NAME_None);	
	
	if (UserWidget != nullptr)
	{
		RootWidget = Cast<UKayakRootWidgetBase>(UserWidget);

		if (RootWidget == nullptr)
		{
			UE_LOG(LogKayakUI, Error, TEXT("Can not create valid root widget, please the above log"));
		}
		else
		{
			RootWidget->AddToViewport();
		}
	}
	else
	{
		UE_LOG(LogKayakUI, Error, TEXT("Can not create valid root widget for UI manager"));
	}
}