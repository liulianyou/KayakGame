#include "UIData/UIEffectDataBase.h"
#include "Blueprint/UserWidget.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"

TArray<UIEffectDataBase::FEffectWidgetInternalData> UUIEffectDataBase::Widgets;

UUIEffectDataBase::UUIEffectDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UUIEffectDataBase::BeginDestroy()
{
	Super::BeginDestroy();

	RemoveUserWidget();
}

void UUIEffectDataBase::OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle)
{
	if(UIClass == nullptr)
		return;

	Super::OpenEffect(OpenStyle);

	if (GetTaskOwner() != nullptr && GetTaskOwner()->GetTriggerOwner() != nullptr
		&& (GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone
			|| GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client))
	{
		Super::OpenEffect(OpenStyle);

		UserWidget = CreateNewWidget();

		//When open effect I need to initialize target object.
		TryToInitializeTargetObject(UserWidget);
	}
}

void UUIEffectDataBase::CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle)
{
	//remove invalid data directly
	if (GetUserWidget() == nullptr || !GetUserWidget()->IsValidLowLevel())
	{
		RemoveUserWidget();
	}

	Super::CloseEffect(CloseStyle);

	if (GetTaskOwner() != nullptr && GetTaskOwner()->GetTriggerOwner() != nullptr
		&& (GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Standalone
			|| GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_Client))
	{
		Super::CloseEffect(CloseStyle);

		//This data don't hold any widget, remove invalid data directly
		if (GetUserWidget() == nullptr || !GetUserWidget()->IsValidLowLevel())
		{
			return;
		}

		bool CanRemove = true;

		if (IsExclusive)
		{
			UIEffectDataBase::FEffectWidgetInternalData* WidgetData = Widgets.FindByPredicate([&](const UIEffectDataBase::FEffectWidgetInternalData& Data) {
				if (Data.UserWidget == nullptr || !Data.UserWidget->IsValidLowLevel())
					return false;

				if (Data.UserWidget == GetUserWidget()
					//When it is the same task with trigger task or is exclusive
					&& Data.Task != GetTaskOwner())
					return true;

				return false;
			});

			if (WidgetData != nullptr)
			{
				CanRemove = false;
			}
		}
		
		if (CanRemove)
		{
			RemoveUserWidget();
		}
	}
}

void UUIEffectDataBase::GetInspectedObjects(TArray<UObject*>& InpectedObjects)
{
	Super::GetInspectedObjects(InpectedObjects);

	InpectedObjects.Add(GetUserWidget());
}

bool UUIEffectDataBase::CanBeOpened(const TArray<UObject*>& Causers)
{
	bool Result = Super::CanBeOpened(Causers);

	if(Result == false)
		return Result;

	TArray<APlayerController*> Controllers;

	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		Controllers.Add(It->Get());
	}

	Result = Causers.Num() == 0 || Controllers.Num() == 0;

	//if it is not active for the toggled actor means it will active for every client
	if(!ActiveAtOnlyToggledActor)
		return true;

	bool IsAnyCauser = false;

	for (int i = 0; i < Causers.Num(); i++)
	{
		if(Causers[i] == nullptr)
			continue;

		IsAnyCauser = false;

		APlayerController* PC = Cast<APlayerController>(Causers[i]);

		if (PC == nullptr)
		{
			APawn* Pawn = Cast<APawn>(Causers[i]);

			if (Pawn != nullptr)
			{
				PC = Cast<APlayerController>(Pawn->GetController());
			}
		}

		if (PC == nullptr)
			continue;

		if (Controllers.Find(PC) != INDEX_NONE)
		{
			Result = true;

			break;
		}
	}

	/*
	* If all the value in the causers is null means this Data should be effect on any connection
	*/
	if(IsAnyCauser)
		Result = true;
		

	return Result;
}

bool UUIEffectDataBase::CanBeClosed(const TArray<UObject*>& Causers)
{
	bool Result = Super::CanBeClosed(Causers);

	if (Result == false)
		return Result;

	TArray<APlayerController*> Controllers;

	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		Controllers.Add(It->Get());
	}

	Result = Causers.Num() == 0 || Controllers.Num() == 0;

	bool IsAnyCauser = true;

	for (int i = 0; i < Causers.Num(); i++)
	{
		if (Causers[i] == nullptr)
			continue;

		IsAnyCauser = false;

		APlayerController* PC = Cast<APlayerController>(Causers[i]);

		if (PC == nullptr)
		{
			APawn* Pawn = Cast<APawn>(Causers[i]);

			if (Pawn != nullptr)
			{
				PC = Cast<APlayerController>(Pawn->GetController());
			}
		}

		if (PC == nullptr)
			continue;

		if (Controllers.Find(PC) != INDEX_NONE)
		{
			Result = true;

			break;
		}
	}

	/*
	* If all the value in the causers is null means this Data should be effect on any connection
	*/
	if (IsAnyCauser)
		Result = true;

	return Result;
}

void UUIEffectDataBase::RemoveUserWidget()
{
	for (int i = 0; i < Widgets.Num(); i++)
	{
		if (Widgets[i].UserWidget == UserWidget)
		{
			Widgets.RemoveAt(i--);
		}
	}

	if (UserWidget != nullptr && UserWidget->IsValidLowLevel())
	{
		UserWidget->RemoveFromParent();
	
	}

	UserWidget = nullptr;
}

void UUIEffectDataBase::RemoveInvalidWidgetFromPool()
{
	for (int i = 0; i < Widgets.Num(); i++)
	{
		if (Widgets[i].UserWidget == nullptr || !Widgets[i].UserWidget->IsValidLowLevel() ||
			!Widgets[i].UserWidget->GetIsVisible())
		{
			Widgets.RemoveAt(i--);
		}
	}
}

UUserWidget* UUIEffectDataBase::CreateNewWidget()
{
	//When we try to create new one, I need to remove all invalid widget in the Widgets pool
	RemoveInvalidWidgetFromPool();

	UIEffectDataBase::FEffectWidgetInternalData* WidgetData = Widgets.FindByPredicate([&]( const UIEffectDataBase::FEffectWidgetInternalData& Data){
		if(Data.UserWidget == nullptr || !Data.UserWidget->IsValidLowLevel())
			return false;

		if (Data.UserWidget->IsA(UIClass) 
			//Only care the same world
			&& Data.UserWidget->GetWorld() == GetWorld() 
			//When it is the same task with trigger task or is exclusive
			&& (Data.Task == GetTaskOwner() || IsExclusive))
			return true;

		return false;
	});

	if (WidgetData == nullptr)
	{
		UUserWidget* NewWidget = UUserWidget::CreateWidgetInstance(*GetWorld(), UIClass, NAME_None);
		if (NewWidget)
		{
			NewWidget->AddToViewport();
		}

		UIEffectDataBase::FEffectWidgetInternalData NewData;

		NewData.Task = GetTaskOwner();
		NewData.UserWidget = NewWidget;

		Widgets.Add(NewData);

		return  NewWidget;
	}
	else
	{
		//If this widget has been closed on the widget BP I need to reopen it
		if (!WidgetData->UserWidget->GetIsVisible())
		{
			WidgetData->UserWidget->AddToViewport();
		}

		return WidgetData->UserWidget;
	}
}