#include "TriggerEditor/Public/Widget/TriggerEditSplitterSlot.h"

#include "Components/Widget.h"

UTriggerEditSplitterSlot::UTriggerEditSplitterSlot(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), Slot(nullptr)
{

}

void UTriggerEditSplitterSlot::BuildSlot(TSharedRef<SSplitter> Spliter)
{
	Slot = &Spliter->AddSlot()
		.Value(SizeValue)
		[
			Content == NULL ? SNullWidget::NullWidget : Content->TakeWidget()
		];
}

void UTriggerEditSplitterSlot::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	Slot = nullptr;
}
