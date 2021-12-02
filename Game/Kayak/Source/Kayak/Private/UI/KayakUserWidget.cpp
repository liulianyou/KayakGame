#include "KayakUserWidget.h"


UKayakUserWidget::UKayakUserWidget(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UKayakUserWidget::Initialize(UKayakUIManager* UIManager)
{
	UIManagerOwner = UIManager;

	OnInitialize( UIManager );
}