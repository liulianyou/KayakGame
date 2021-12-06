#include "KayakRootWidgetBase.h"
#include "KayakUIInclude.h"
#include "KayakUIManager.h"
#include "Widgets/SOverlay.h"

UKayakRootWidgetBase::UKayakRootWidgetBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UKayakRootWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	AssignRootLayerWidgets(BottomRootWidget);
	AssignRootLayerWidgets(NormalRootWidget);
	AssignRootLayerWidgets(UpRootWidget);
}

UKayakUIBase* UKayakRootWidgetBase::GetLayerRootWidget(EWidgetLayer Layer)
{
	if (!LayerRootWidgets.IsValidIndex(int(Layer)))
	{
		UE_LOG(LogKayakUI, Error, TEXT("The total number of root widget for each layer should be correspond to the enumerator EWidgetLayer "));
		return nullptr;
	}

	return LayerRootWidgets[int(Layer)];
}

bool UKayakRootWidgetBase::AssignWigetToTargetLayer(UKayakUIBase* UIWidget, EWidgetLayer Layer, int ZOrder)
{
	UKayakUIBase* LayerRootWidget = GetLayerRootWidget(Layer);

	if(LayerRootWidget == nullptr)
		return false;

	TSharedRef<SWidget> RootInlayerWidget = LayerRootWidget->GetRootWidget()->TakeWidget();

	TSharedRef<SOverlay> OverLay = StaticCastSharedRef<SOverlay>(RootInlayerWidget);

	OverLay->AddSlot(ZOrder)[UIWidget->TakeWidget()];

	return true;
}

bool UKayakRootWidgetBase::RemoveWidget(UKayakUIBase* UIWidget)
{
	if(UIWidget == nullptr)
		return false;

	UIWidget->RemoveFromParent();

	return true;
}