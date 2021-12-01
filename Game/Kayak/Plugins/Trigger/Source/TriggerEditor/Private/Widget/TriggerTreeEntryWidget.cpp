
#include "TriggerEditor/Public/Widget/TriggerTreeEntryWidget.h"
#include "Slate/SObjectTableRow.h"



UTriggerTreeEntryWidget::UTriggerTreeEntryWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UTriggerTreeEntryWidget::OnTriggerSelectedCall()
{
	OnSelectedTrigger.Broadcast(TriggerObject);
	TriggerSelected();
}

bool UTriggerTreeEntryWidget::IsTreeItemExpanded() const
{
	return IsListItemExpanded();
}

void UTriggerTreeEntryWidget::ToggleExpansion()
{
	TSharedPtr<SWidget> ContentWidget = GetCachedWidget();
	if (ContentWidget.IsValid())
	{
		TSharedPtr<SObjectTableRow<UObject*>> RowWidget = StaticCastSharedPtr<SObjectTableRow<UObject*>>(ContentWidget);
		RowWidget->ToggleExpansion();
	}
}

bool UTriggerTreeEntryWidget::IsSameTrigger(UTriggerTreeViewObject* InObject) const
{
	return InObject == TriggerObject;
}
