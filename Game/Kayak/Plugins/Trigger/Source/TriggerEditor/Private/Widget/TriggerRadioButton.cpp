#include "TriggerEditor/Public/Widget/TriggerRadioButton.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Text/STextBlock.h"
#include "EditorStyle/Public/EditorStyleSet.h"
#include "PropertyEditor/Public/DetailLayoutBuilder.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

#include "TriggerTaskComponent/TriggerTaskComponent.h"

UTriggerRadioButton::UTriggerRadioButton(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), ButtonsOffset(4.0f), SelectedIndex(0)
{}

void UTriggerRadioButton::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	TriggersBox.Reset();
}

#if WITH_EDITOR
const FText UTriggerRadioButton::GetPaletteCategory()
{
	return NSLOCTEXT("UMG", "Editor", "Editor");
}

#endif

void UTriggerRadioButton::SetTextArrByObjects(const TArray<UObject*> ObjectsArr)
{
	DisplayTextArr.Reset();

	for (int32 i = 0; i < ObjectsArr.Num(); ++i)
	{
		DisplayTextArr.Add(ObjectsArr[i]->GetFName().ToString());
	}

	if (TriggersBox.IsValid() == false)
	{
		return;
	}

	FChildren* const BoxChildren = TriggersBox->GetChildren();
	int32 OldButtonsNum = BoxChildren->Num();

	for (int32 i = 0; i < ObjectsArr.Num(); ++i)
	{
		if (i < OldButtonsNum)
		{
			BoxChildren->GetChildAt(i)->SetVisibility(EVisibility::Visible);
		}
		else
		{
			AddButton(i);
		}
	}

	for (int32 i = ObjectsArr.Num(); i < OldButtonsNum; ++i)
	{
		BoxChildren->GetChildAt(i)->SetVisibility(EVisibility::Collapsed);
	}
}

void UTriggerRadioButton::SetTextArrByTriggerComponents(const TArray<UTriggerTaskComponentBase*> ObjectsArr)
{
	DisplayTextArr.Reset();

	for (int32 i = 0; i < ObjectsArr.Num(); ++i)
	{
		DisplayTextArr.Add(ObjectsArr[i]->GetFName().ToString());
	}

	if (TriggersBox.IsValid() == false)
	{
		return;
	}

	FChildren* const BoxChildren = TriggersBox->GetChildren();
	int32 OldButtonsNum = BoxChildren->Num();

	for (int32 i = 0; i < ObjectsArr.Num(); ++i)
	{
		if (i < OldButtonsNum)
		{
			BoxChildren->GetChildAt(i)->SetVisibility(EVisibility::Visible);
		}
		else
		{
			AddButton(i);
		}
	}

	for (int32 i = ObjectsArr.Num(); i < OldButtonsNum; ++i)
	{
		BoxChildren->GetChildAt(i)->SetVisibility(EVisibility::Collapsed);
	}
}

TSharedRef<SWidget> UTriggerRadioButton::RebuildWidget()
{
	SAssignNew(TriggersBox, SHorizontalBox);

	for (int32 i = 0; i < DisplayTextArr.Num(); ++i)
	{
		AddButton(i);
	}

	return TriggersBox.ToSharedRef();
}

ECheckBoxState UTriggerRadioButton::IsSelected(int32 Index) const
{
	return SelectedIndex == Index ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void UTriggerRadioButton::OnCheckedChanged(ECheckBoxState InCheckedState, int32 Index)
{
	if (InCheckedState == ECheckBoxState::Checked)
	{
		SelectedIndex = Index;
		OnRadioSelectChanged.Broadcast(Index);
	}
}

FText UTriggerRadioButton::GetText(int32 Index) const
{
	if (DisplayTextArr.Num() > Index)
	{
		return FText::FromString(DisplayTextArr[Index]);
	}
	else
	{
		return FText::GetEmpty();
	}
}

void UTriggerRadioButton::AddButton(int32 Index)
{//add button to horizontal box at the end.
	if (TriggersBox.IsValid() == false || TriggersBox->GetChildren()->Num() != Index || DisplayTextArr.Num() <= Index)
	{
		return;
	}
	TriggersBox->AddSlot()
		.HAlign(HAlign_Left)
		.VAlign(VAlign_Center)
		.Padding(ButtonsOffset, 0, 0, 0)
		[
			SNew(SCheckBox)
			.Style(FEditorStyle::Get(), "Property.ToggleButton.Middle")
			.IsChecked(TAttribute<ECheckBoxState>::Create(TAttribute<ECheckBoxState>::FGetter::CreateUObject(this, &UTriggerRadioButton::IsSelected, Index)))
			.OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UTriggerRadioButton::OnCheckedChanged, Index))
			.Padding(FMargin(6, 2))
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Text(TAttribute<FText>::Create(TAttribute<FText>::FGetter::CreateUObject(this, &UTriggerRadioButton::GetText, Index)))
				.Font(IDetailLayoutBuilder::GetDetailFont())
				.ColorAndOpacity(FSlateColor(FLinearColor(0.72f, 0.72f, 0.72f, 1.f)))
			]
		]
	;
}
