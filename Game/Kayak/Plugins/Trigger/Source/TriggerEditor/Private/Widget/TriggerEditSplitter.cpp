#include "TriggerEditor/Public/Widget/TriggerEditSplitter.h"

#include "Widgets/Layout/SSplitter.h"
#include "EditorStyle/Public/EditorStyleSet.h"

#include "TriggerEditor/Public/Widget/TriggerEditSplitterSlot.h"

UTriggerEditSplitter::UTriggerEditSplitter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SplitterStyle = FEditorStyle::Get().GetWidgetStyle<FSplitterStyle>("DetailsView.Splitter");
}

#if WITH_EDITOR
const FText UTriggerEditSplitter::GetPaletteCategory()
{
	return NSLOCTEXT("UMG", "Editor", "Editor");
}
#endif


void UTriggerEditSplitter::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	Splitter.Reset();
}

UClass* UTriggerEditSplitter::GetSlotClass() const
{
	return UTriggerEditSplitterSlot::StaticClass();
}

void UTriggerEditSplitter::OnSlotAdded(UPanelSlot* InSlot)
{
	// Add the child to the live canvas if it already exists
	if (Splitter.IsValid())
	{
		CastChecked<UTriggerEditSplitterSlot>(InSlot)->BuildSlot(Splitter.ToSharedRef());
	}
}

void UTriggerEditSplitter::OnSlotRemoved(UPanelSlot* InSlot)
{
	if (Splitter.IsValid())
	{
		TSharedPtr<SWidget> Widget = InSlot->Content->GetCachedWidget();
		if (Widget.IsValid())
		{
			//to do.
		}
	}
}

TSharedRef<SWidget> UTriggerEditSplitter::RebuildWidget()
{
	Splitter = SNew(SSplitter)
		.Style(&SplitterStyle);

	for (UPanelSlot* PanelSlot : Slots)
	{
		if (UTriggerEditSplitterSlot* TypedSlot = Cast<UTriggerEditSplitterSlot>(PanelSlot))
		{
			TypedSlot->Parent = this;
			TypedSlot->BuildSlot(Splitter.ToSharedRef());
		}
	}

	return Splitter.ToSharedRef();
}
