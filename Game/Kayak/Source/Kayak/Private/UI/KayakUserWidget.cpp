#include "KayakUserWidget.h"


UKayakUserWidget::UKayakUserWidget(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UKayakUserWidget::InitializeByUIManager(UKayakUIManager* UIManager)
{
	UIManagerOwner = UIManager;

	OnInitializeByUIManager( UIManager );
}