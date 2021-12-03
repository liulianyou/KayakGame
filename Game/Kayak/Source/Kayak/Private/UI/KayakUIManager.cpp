#include "KayakUIManager.h"


UKayakUIManager::UKayakUIManager(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UKayakUIManager::BeginDestroy()
{
	Super::BeginDestroy();
}

void UKayakUIManager::ShowUI()
{

}

void UKayakUIManager::Initialize(AKayakHUDBase* HUDOwner)
{
	Owner = HUDOwner;

	OnInitialize(HUDOwner);
}


UUserWidget* UKayakUIManager::CreateWidget(TSubclassOf<UKayakUIBase> WidgetClass, EWidgetLayer Layer/* = EWidgetLayer::ENormal*/)
{
	return nullptr;
}

