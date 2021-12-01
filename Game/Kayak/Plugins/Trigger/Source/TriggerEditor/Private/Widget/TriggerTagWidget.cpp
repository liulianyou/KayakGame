// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "Widget/TriggerTagWidget.h"
#include "Widget/SCustomTagWidget.h"


UTriggerTagWidget::UTriggerTagWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}

#if WITH_EDITOR
const FText UTriggerTagWidget::GetPaletteCategory()
{
    return NSLOCTEXT("UMG", "Editor", "Editor");
}
#endif

void UTriggerTagWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    TagWidget.Reset();
    TagContainer.Reset();
}

TSharedRef<SWidget> UTriggerTagWidget::RebuildWidget()
{
    TagContainer = MakeShareable(new FGameplayTagContainer);

    TArray<SCustomTagWidget::FEditableGameplayTagContainerDatum> EditableContainers;
    EditableContainers.Add(SCustomTagWidget::FEditableGameplayTagContainerDatum(nullptr, TagContainer.Get()));
    TagWidget = SNew(SCustomTagWidget, EditableContainers)
        .Filter(FilterTag)
        .OnTagChanged(SCustomTagWidget::FOnTagChanged::CreateUObject(this, &UTriggerTagWidget::OnTagChanged))
        ;

    return TagWidget.ToSharedRef();
}

void UTriggerTagWidget::OnTagChanged()
{
    OnTriggerTagChanged.Broadcast(*(TagContainer.Get()));
}
