#include "TriggerEditor/Public/Widget/TriggerDetailsView.h"

#include "PropertyEditor/Public/PropertyEditorModule.h"
#include "Widgets/Text/STextBlock.h"
#include "ObjectEditorUtils.h"
#include "Async/Async.h"

UTriggerDetailsView::UTriggerDetailsView(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{}

UObject* UTriggerDetailsView::GetSelectedObject() const
{
	return SelectedObject.Get();
}

void UTriggerDetailsView::SelectObject(UObject* NewObject)
{
	if (SelectedObject.Get() != NewObject)
	{
		SelectedObject = NewObject;
		SoftObjectPath = NewObject;
		OnObjectChanged();
	}
}

void UTriggerDetailsView::PostLoad()
{
	UWidget::PostLoad();

	if (!SelectedObject.IsValid() && SoftObjectPath.IsAsset() && bAutoLoadAsset)
	{
		AsyncTask(ENamedThreads::GameThread, [this]()
			{
				if (!HasAnyFlags(RF_BeginDestroyed))
				{
					SelectedObject = SoftObjectPath.TryLoad();
					BuildContentWidget();
				}
			});
	}
}

void UTriggerDetailsView::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	UWidget::PostEditChangeProperty(PropertyChangedEvent);

	if (IsDesignTime())
	{
		if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, ViewIdentifier)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bAllowFiltering)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bAllowFavoriteSystem)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bShowModifiedPropertiesOption)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bShowKeyablePropertiesOption)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bShowAnimatedPropertiesOption)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bShowScrollBar)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, bForceHiddenPropertyVisibility)
			|| PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UDetailsView, ColumnWidth))
		{
			SoftObjectPath = SelectedObject.Get();
			BuildContentWidget();
		}
	}
}

void UTriggerDetailsView::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	TriggersDetailViewWidget.Reset();
}

void UTriggerDetailsView::BuildContentWidget()
{
	TriggersDetailViewWidget.Reset();

	if (!GetDisplayWidget().IsValid())
	{
		return;
	}

	bool bCreateMissingWidget = true;
	FText MissingWidgetText = NSLOCTEXT("UMG", "EditorWidget", "Editor Only");

	if (GIsEditor)
	{
		UObject* ViewedObject = GetSelectedObject();
		if (ViewedObject == nullptr)
		{
			bool bIsLazyObjectNull = LazyObject.IsNull();
			if (bIsLazyObjectNull)
			{
				MissingWidgetText = NSLOCTEXT("UMG", "UndefinedObject", "Undefined Object");
			}
			else
			{
				MissingWidgetText = NSLOCTEXT("UMG", "UnloadedObject", "Unloaded Object");
			}
		}
		else
		{
			FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");

			FDetailsViewArgs DetailsViewArgs;
			DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
			DetailsViewArgs.bUpdatesFromSelection = false;
			DetailsViewArgs.bLockable = false;
			DetailsViewArgs.bShowPropertyMatrixButton = false;
			DetailsViewArgs.NotifyHook = this;

			DetailsViewArgs.ViewIdentifier = ViewIdentifier;
			DetailsViewArgs.bAllowSearch = bAllowFiltering;
			DetailsViewArgs.bAllowFavoriteSystem = bAllowFavoriteSystem;
			DetailsViewArgs.bShowOptions = false;//hide the combo button, DetailsViewArgs.bShowOptions
			DetailsViewArgs.bShowModifiedPropertiesOption = bShowModifiedPropertiesOption;
			DetailsViewArgs.bShowKeyablePropertiesOption = bShowKeyablePropertiesOption;
			DetailsViewArgs.bShowAnimatedPropertiesOption = bShowAnimatedPropertiesOption;
			DetailsViewArgs.bShowScrollBar = bShowScrollBar;
			DetailsViewArgs.bForceHiddenPropertyVisibility = bForceHiddenPropertyVisibility;
			DetailsViewArgs.ColumnWidth = ColumnWidth;
			DetailsViewArgs.bShowCustomFilterOption = false;

			TriggersDetailViewWidget = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
			TriggersDetailViewWidget->RegisterInstancedCustomPropertyLayout(USceneComponent::StaticClass(), FOnGetDetailCustomizationInstance());

// 			TriggersDetailViewWidget->SetCustomFilterLabel(NSLOCTEXT("UMG", "ShowAllParameters", "Show All Parameters"));
// 			TriggersDetailViewWidget->SetCustomFilterDelegate(FSimpleDelegate::CreateUObject(this, &UTriggerDetailsView::ToggleWhitelistedProperties));

			TriggersDetailViewWidget->SetIsPropertyVisibleDelegate(FIsPropertyVisible::CreateUObject(this, &UTriggerDetailsView::GetIsTriggerPropertyVisible));
 			TriggersDetailViewWidget->SetIsCustomRowVisibilityFilteredDelegate(FIsCustomRowVisibilityFiltered::CreateUObject(this, &UTriggerDetailsView::IsTriggerRowVisibilityFiltered));
 			TriggersDetailViewWidget->SetIsCustomRowVisibleDelegate(FIsCustomRowVisible::CreateUObject(this, &UTriggerDetailsView::GetIsTriggerRowVisible));
			TriggersDetailViewWidget->SetObject(ViewedObject);
			if (TriggersDetailViewWidget.IsValid())
			{
				GetDisplayWidget()->SetContent(TriggersDetailViewWidget.ToSharedRef());
				bCreateMissingWidget = false;
			}
			else
			{
				MissingWidgetText = NSLOCTEXT("UMG", "UnknownError", "Unknown Error");
			}
		}
	}

	if (bCreateMissingWidget)
	{
		GetDisplayWidget()->SetContent(
			SNew(STextBlock)
			.Text(MissingWidgetText)
		);
	}
}

void UTriggerDetailsView::OnObjectChanged()
{
	UObject* ViewedObject = GetSelectedObject();
	if (TriggersDetailViewWidget.IsValid() && ViewedObject != nullptr)
	{
		TriggersDetailViewWidget->SetObject(ViewedObject);
	}
	else
	{
		BuildContentWidget();
	}
}

bool UTriggerDetailsView::GetIsTriggerPropertyVisible(const FPropertyAndParent& PropertyAndParent) const
{
// 	if (!IsRowVisibilityFiltered())
// 	{
// 		return true;
// 	}
	if (PropertiesToHide.Contains(PropertyAndParent.Property.GetFName()))
	{
		return false;
	}

	UE_LOG(LogTemp, Log, TEXT("%s GetCategoryFName is '%s'"), *(PropertyAndParent.Property.GetFName().ToString())
		, *(FObjectEditorUtils::GetCategoryFName(&PropertyAndParent.Property).ToString()));
	if (CategoriesToHide.Contains(FObjectEditorUtils::GetCategoryFName(&PropertyAndParent.Property)))
	{
		return false;
	}

	return true;
}

bool UTriggerDetailsView::IsTriggerRowVisibilityFiltered() const
{
	return true;
}

bool UTriggerDetailsView::GetIsTriggerRowVisible(FName InRowName, FName InParentName) const
{
	if (PropertiesToHide.Contains(InRowName))
	{
		return false;
	}
	if (CategoriesToHide.Contains(InParentName))
	{
		return false;
	}
	return true;
}

void UTriggerDetailsView::ToggleWhitelistedProperties()
{

}