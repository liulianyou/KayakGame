#include "TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_UI.h"
#include "TriggerTask/InteractionTask/TT_Interaction.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "TriggerDefinition.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

TArray<FOpenWidgetInfo> UInteractionEffect_UI::OpenedWidgets;

UInteractionEffect_UI::UInteractionEffect_UI(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	RunType = ERunType::ERunType_RunOnClient;

	WidgetInfos.Empty();

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		TearDownHandle = FWorldDelegates::OnWorldBeginTearDown.AddUObject(this, &UInteractionEffect_UI::WorldTearDown);
	}
}

void UInteractionEffect_UI::OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle)
{
	UInteractionOpenStyle* Style = Cast<UInteractionOpenStyle>(OpenStyle);

	if ( Style == nullptr || Style->GetIneractionInfo().Actor == nullptr)
		return;

	Super::OpenEffect(OpenStyle);

	EndInteractionType = EInteractionEndType::EInteractionEndType_Max;

	OpenWidget(Style->GetIneractionInfo());
}

void UInteractionEffect_UI::CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle)
{
	UInteractionCloseStyle* Style = Cast<UInteractionCloseStyle>(CloseStyle);

	if(Style == nullptr)
		return;

	Super::CloseEffect(CloseStyle);

	EndInteractionType = Style->GetEndType();

	CloseWidget(Style->GetIneractionInfo(), Style->GetEndType(), Style->IsRemoveInstance());
}

void UInteractionEffect_UI::ValueInInteractionRuleChanged(AActor* Causer, UInteractionRuleDataBase* Data)
{
	//The server will do nothing to the UI Effect as it only run on the client
	if (GetTaskOwner() != nullptr && GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		return;
	}

	/*
	* Flag to check weather the task have bind with widget.
	* As each time EndInteraction, I will remove the widget form the OpenedWidgets pool, 
	* If the widget pool don't contain any target widget width the WidgetClass I will remove target widget from parent.
	* but the widget will remove the interaction button only when interact successfully. so this will cause one situation:
	* The widget contain the target interaction button, but this effect have remove it from OpenedWidgets, so when new contribute to target widget, 
	* The widget will not get the data changed event
	*/
	CheckBindedWidget(Causer);

	for (auto It = OpenedWidgets.CreateIterator(); It; ++It)
	{
		if (It->Task != GetTaskOwner() || It->Widget == nullptr || !It->Widget->IsValidLowLevel())
			continue;
		CheckInteractionSupportForUpdate(It->Widget, Data);
	}
	
	Super::ValueInInteractionRuleChanged(Causer, Data);
}

void UInteractionEffect_UI::Reset(UOperationInformationBase* ResetOperation)
{
	for (int i = 0; i < OpenedWidgets.Num(); i++)
	{
		if (OpenedWidgets[i].Task == GetTaskOwner())
		{
			bool IsStillExist = false;
			auto ItTemp = OpenedWidgets.CreateIterator();
			for (; ItTemp; ++ItTemp)
			{
				if (OpenedWidgets[i].Task != ItTemp->Task &&
					OpenedWidgets[i].Widget == ItTemp->Widget)
				{
					IsStillExist = true;
					break;
				}
			}

			if (!IsStillExist)
			{
				OpenedWidgets[i].Widget->RemoveFromParent();
			}

			OpenedWidgets.RemoveAt(i--);
		}
	}
}

UUserWidget* UInteractionEffect_UI::CheckBindedWidget(AActor* Causer)
{
	//The server will do nothing to the UI Effect as it only run on the client
	if ((GetTaskOwner() != nullptr && GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_DedicatedServer)
		//If this task has been ended successfully then I don't need to check the widget
		|| EndInteractionType != EInteractionEndType::EInteractionEndType_Max)
	{
		return nullptr;
	}

	bool ContainAllBindedWidget = false;

	FInteractionInfo& InteractionInfo = Cast<UTT_Interaction>(GetTaskOwner())->GetValidInteractionInfo(Causer, TriggerInteractionStage::InteractingSatge, false);

	if (InteractionInfo == FInteractionInfo::InvaildValue)
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is one interaction info in the owner tas!!"));
		return nullptr;
	}

	if (WidgetInfos.Num() == 0 ||
		WidgetInfos.Num() <= int(InteractionInfo.Layer) ||
		*WidgetInfos[int(InteractionInfo.Layer)].WidgetClass == nullptr)
	{
		return nullptr;
	}

	int VaildIndex = -1;
	bool ExistOneInstanceInOpenedWidgetsForCurrentCuser = false;

	for (int i = 0; i < OpenedWidgets.Num(); i++)
	{
		if (OpenedWidgets[i].Widget != nullptr
			&& OpenedWidgets[i].Widget->IsValidLowLevel()
			&& OpenedWidgets[i].Widget->GetClass() == WidgetInfos[int(InteractionInfo.Layer)].WidgetClass)
		{

			VaildIndex = i;

			if (WidgetInfos[int(InteractionInfo.Layer)].IsExecutive 
				&& OpenedWidgets[i].Widget->GetOwningPlayerPawn() == Causer 
				&& OpenedWidgets[i].Task == GetTaskOwner())
			{
				ExistOneInstanceInOpenedWidgetsForCurrentCuser = true;
				break;
			}

			//There is one exist widget for this task
			continue;
		}
	}

	//Should never happen
	if (VaildIndex >= OpenedWidgets.Num())
	{
		UE_LOG(LogTrigger, Warning, TEXT("The widget index is invalid, This should never happen!!"));
		return nullptr;
	}

	if (ExistOneInstanceInOpenedWidgetsForCurrentCuser)
	{
		OpenedWidgets[VaildIndex].Task = Cast<UTT_Interaction>(GetTaskOwner());
		return OpenedWidgets[VaildIndex].Widget;
	}
	else if (VaildIndex != -1)
	{
		//The widget is opened but there is no task key to bind to it in OpenedWidgets
		FOpenWidgetInfo OpenWidgetInfo;
		OpenWidgetInfo.Task = Cast<UTT_Interaction>(GetTaskOwner());
		OpenWidgetInfo.Widget = OpenedWidgets[VaildIndex].Widget;
		OpenedWidgets.Add(OpenWidgetInfo);

		return OpenedWidgets[VaildIndex].Widget;
	}
	else
	{
		UClass* WidgetClass = *WidgetInfos[int(InteractionInfo.Layer)].WidgetClass;

		UUserWidget* Widget = UUserWidget::CreateWidgetInstance(*GetVaildWorld(Causer), WidgetClass, NAME_None);

		if (Widget != nullptr)
		{
			Widget->AddToViewport();

			CheckInteractionSupportForInitialize(Widget, GetTaskOwner());

			FOpenWidgetInfo OpenWidgetInfo;
			OpenWidgetInfo.Task = Cast<UTT_Interaction>(GetTaskOwner());
			OpenWidgetInfo.Widget = Widget;
			OpenedWidgets.Add(OpenWidgetInfo);

			return Widget;
		}
	}

	return nullptr;
}

void UInteractionEffect_UI::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

UUserWidget* UInteractionEffect_UI::OpenWidget(const FInteractionInfo& Info)
{
	if (GetTaskOwner() == nullptr || !GetTaskOwner()->IsValidLowLevel()||
		GetTaskOwner()->GetTriggerOwner() == nullptr ||
		!GetTaskOwner()->GetTriggerOwner()->IsValidLowLevel() ||
		//When we run dedicated server we should not open any widget UI
		GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		return nullptr;
	}

	if (WidgetInfos.Num() == 0 ||
		WidgetInfos.Num() <= int(Info.Layer)||
		*WidgetInfos[int(Info.Layer)].WidgetClass == nullptr)
	{
		return nullptr;
	}
	
	APawn* Pawn = GetInteractionPawn(Info.Actor);

	//This interaction actor must be one pawn and it should be local controlled
	if (Pawn == nullptr || !Pawn->IsLocallyControlled())
	{
		return nullptr;
	}

	UUserWidget* Widget = nullptr;
	
	//Check weather this widget should be the only one instance for the target class
	for (auto It = OpenedWidgets.CreateIterator(); It; ++It)
	{
		if (It->Widget != nullptr && It->Widget->IsValidLowLevel() && It->Widget->GetClass() == *WidgetInfos[int(Info.Layer)].WidgetClass &&
			WidgetInfos[int(Info.Layer)].IsExecutive &&
			It->Widget->GetOwningPlayerPawn() == Pawn)
		{
			bool Existed = false;

			for (int i = 0; i < OpenedWidgets.Num(); i++)
			{
				if (OpenedWidgets[i].Task == GetTaskOwner())
				{
					Existed = true;
					break;
				}
			}

			if (!Existed)
			{
				FOpenWidgetInfo OpenWidgetInfo;
				OpenWidgetInfo.Task = Cast<UTT_Interaction>(GetTaskOwner());
				OpenWidgetInfo.Widget = It->Widget;
				OpenedWidgets.Add(OpenWidgetInfo);
			}

			It->Widget->AddToViewport();

			CheckInteractionSupportForInitialize(It->Widget, GetTaskOwner());

			return It->Widget;

		}
	}

	UClass* WidgetClass = *WidgetInfos[int(Info.Layer)].WidgetClass;

	Widget = UUserWidget::CreateWidgetInstance(*GetVaildWorld(Info.Actor), WidgetClass, NAME_None);

	if (Widget != nullptr)
	{
		Widget->AddToViewport();

		CheckInteractionSupportForInitialize(Widget, GetTaskOwner());

		FOpenWidgetInfo OpenWidgetInfo;
		OpenWidgetInfo.Task = Cast<UTT_Interaction>(GetTaskOwner());
		OpenWidgetInfo.Widget = Widget;
		OpenedWidgets.Add(OpenWidgetInfo);
	}

	return Widget;
}

void UInteractionEffect_UI::CloseWidget(const FInteractionInfo& Info, EInteractionEndType EndType, bool RemoveInstance)
{
	if (GetTaskOwner() == nullptr || !GetTaskOwner()->IsValidLowLevel() ||
		GetTaskOwner()->GetTriggerOwner() == nullptr ||
		!GetTaskOwner()->GetTriggerOwner()->IsValidLowLevel()||
		GetTaskOwner()->GetTriggerOwner()->GetNetMode() == ENetMode::NM_DedicatedServer)
	{
		//When we run dedicated server we should not open any widget UI
		return ;
	}

	for (auto It = OpenedWidgets.CreateIterator(); It; ++It)
	{
		if (It->Task != GetTaskOwner() || It->Widget == nullptr  || !It->Widget->IsValidLowLevel())
			continue;
		{
			CheckInteractionSurpportForEnd(It->Widget, It->Task, EndType, RemoveInstance);

			UUserWidget* Widget = nullptr;
			UTT_Interaction* Task = nullptr;

			Widget = It->Widget;
			Task = It->Task;

			//Only when the target specify to remove the UI instance I will try to remove the UI
			if (RemoveInstance 
				&& (Info.Actor == nullptr || (Widget != nullptr && Widget->IsValidLowLevel() && Info.Actor == Widget->GetOwningPlayerPawn()) ||
				EndType == EInteractionEndType::EInteractionEndType_Success))
			{
				bool IsStillExist = false;
				auto ItTemp = OpenedWidgets.CreateIterator();
				for (; ItTemp; ++ItTemp)
				{
					if (Task != ItTemp->Task &&
						Widget == ItTemp->Widget)
					{
						IsStillExist = true;
						break;
					}
				}

				if (!IsStillExist)
				{
					Widget->RemoveFromParent();
				}
				else
				{
					//CheckInteractionSupportForInitialize(It.Value(), ItTemp.Key());
				}

				if (RemoveInstance)
				{
					OpenedWidgets.RemoveAt(It.GetIndex());
				}
			}
		}
	}
}

UWorld* UInteractionEffect_UI::GetVaildWorld(AActor* Actor)
{
	if (Actor == nullptr)
	{
		if (GetWorld() == nullptr)
		{
			return GWorld;
		}
		else
		{
			return GetWorld();
		}
	}

	APawn* Pawn = Cast<APawn>(Actor);

	APlayerController* PC = nullptr;

	if (Pawn != nullptr)
	{
		if (Pawn->GetWorld() == nullptr)
		{
			PC = Pawn->GetController<APlayerController>();
		}
		else
		{
			return Pawn->GetWorld();
		}
	}

	if (PC == nullptr)
	{
		PC = Cast<APlayerController>(GetTaskOwner()->GetInstigator());
	}
	else
	{
		if (PC->GetWorld() == nullptr)
		{
			if (GetWorld() == nullptr)
			{
				return GetWorld();
			}
			else
			{
				return GWorld;
			}
		}
		else
		{
			return PC->GetWorld();
		}
	}

	return GWorld;
}

void UInteractionEffect_UI::WorldTearDown(UWorld* World)
{
	if (GetWorld() == World)
	{
		CloseWidget(FInteractionInfo::InvaildValue, EInteractionEndType::EInteractionEndType_Cancle, true);

		FWorldDelegates::OnWorldBeginTearDown.Remove(TearDownHandle);
	}
}

APawn* UInteractionEffect_UI::GetInteractionPawn(AActor* Actor)
{
	APawn* Pawn = Cast<APawn>(Actor);

	if (Pawn == nullptr)
	{
		AController* Controller = Cast<AController>(Actor);
		if (Controller == nullptr)
		{
			return nullptr;
		}
		else if (!Controller->IsLocalController())
		{
			return nullptr;
		}
		else
		{
			Pawn = Controller->GetPawn();
		}
	}
	else
	{
		if (!Pawn->IsLocallyControlled())
		{
			return nullptr;
		}
	}

	return Pawn;
}

void UInteractionEffect_UI::BeginDestroy()
{
	//FInteractionInfo InteractionInfo;

	//CloseWidget(InteractionInfo, EInteractionEndType::EInteractionEndType_Interrupt);

	//for (int i = 0; i < OpenedWidgets.Num(); i++)
	//{
	//	if (OpenedWidgets[i].Task == GetOwnerTask())
	//	{
	//		CheckInteractionSurpportForEnd(OpenedWidgets[i].Widget, OpenedWidgets[i].Task, EInteractionEndType::EInteractionEndType_Success, true);
	//		OpenedWidgets.RemoveAt(i--);
	//	}
	//}

	Super::BeginDestroy();


}