#include "TT_SetActorVisibilityAndCollision.h"
#include "Components/ShapeComponent.h"
#include "Components/BillboardComponent.h"
#include "Net/UnrealNetwork.h"
#include "TriggerTaskResetInformationBase.h"

TArray<FSAV_ActorInfo> UTT_SetActorVisibilityAndCollision::OriginalActorInfos;
FSAV_ActorInfo FSAV_ActorInfo::InvaildActorInfo;

UTT_SetActorVisibilityAndCollision::UTT_SetActorVisibilityAndCollision(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	RunType = ERunType::ERunType_MutiCast;
}

void UTT_SetActorVisibilityAndCollision::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
}

void UTT_SetActorVisibilityAndCollision::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTT_SetActorVisibilityAndCollision, ReplicatedActorInformations);
}

void UTT_SetActorVisibilityAndCollision::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

bool UTT_SetActorVisibilityAndCollision::CanTick()
{
	return Super::CanTick();
}


bool UTT_SetActorVisibilityAndCollision::Prepare()
{
	if(!Super::Prepare())
		return false;

	Active();

	return true;
}


void UTT_SetActorVisibilityAndCollision::Active(bool ForceActive)
{
	Super::Active(ForceActive);

	MutiCast_SetVisibleAndCollision();

	Finished();
}

void UTT_SetActorVisibilityAndCollision::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_SetActorVisibilityAndCollision::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_SetActorVisibilityAndCollision::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_SetActorVisibilityAndCollision::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_SetActorVisibilityAndCollision::PostFinished()
{
	Super::PostFinished();
}

void UTT_SetActorVisibilityAndCollision::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_SetActorVisibilityAndCollision::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_SetActorVisibilityAndCollision::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	UTriggerTaskResetInformationBase* RestInformation = Cast<UTriggerTaskResetInformationBase>(Operation);

	if (RestInformation)
	{
		//Should reset before any other module 
		if (RestInformation->ResetType != ETriggerTaskResetType::ETriggerTaskResetType_ClearData)
		{
			ResetActorInfo();
		}
	}

	Super::Reset(Operation);

}

void UTT_SetActorVisibilityAndCollision::DestroyedActor(AActor* Actor)
{
	for (int i = 0; i < OriginalActorInfos.Num(); i++)
	{
		if (OriginalActorInfos[i].Actor == Actor)
		{
			OriginalActorInfos.RemoveAt(i--);
		}
	}
}

void UTT_SetActorVisibilityAndCollision::ResetActorInfo()
{
	for (auto OriginalActorInfo : OriginalActorInfos)
	{
		SetActorVisible(OriginalActorInfo);
		SetActorColliable(OriginalActorInfo);

	}

	OriginalActorInfos.Empty();
}

void UTT_SetActorVisibilityAndCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_SetActorVisibilityAndCollision::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);
	
	if(!Result)
		return false;

	return Prepare();
}

bool UTT_SetActorVisibilityAndCollision::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	return Result;
}

void UTT_SetActorVisibilityAndCollision::GetVisibleAndCollisionState(EVisibleType VisibleType, bool& Visible, bool& Collision)
{
	
	switch (VisibleType)
	{
	case EVisibleType::EVisibleType_InvisibleAndNoCollision:
		Visible = false; Collision = false;
		break;
	case EVisibleType::EVisibleType_InvisibleButCollision:
		Visible = false; Collision = true;
		break;
	case EVisibleType::EVisibleType_VisibleAndCollision:
		Visible = true; Collision = true;
		break;
	case EVisibleType::EVisibleType_VisibleButNoCollision:
		Visible = true; Collision = false;
		break;
	default:
		break;
	}
}

static EVisibleType GetVisibleType(bool Visible, bool Collision)
{
	EVisibleType Result = EVisibleType::EVisibleType_Max;

	if (Visible)
	{
		if (Collision)
		{
			Result = EVisibleType::EVisibleType_VisibleAndCollision;
		}
		else
		{
			Result = EVisibleType::EVisibleType_VisibleButNoCollision;
		}
	}
	else
	{
		if (Collision)
		{
			Result = EVisibleType::EVisibleType_InvisibleButCollision;
		}
		else
		{
			Result = EVisibleType::EVisibleType_InvisibleAndNoCollision;
		}
	}

	return Result;
}

void UTT_SetActorVisibilityAndCollision::SetActorVisible(FSAV_ActorInfo& ActorInfo)
{
	if (ActorInfo.Actor == nullptr || !ActorInfo.Actor->IsValidLowLevel())
	{
		UE_LOG(LogTrigger, Error, TEXT("No vaild Actor data in %s"), *GetName());
		return;
	}

	bool ActorVisible, ActorCollison;
	GetVisibleAndCollisionState(ActorInfo.VisibleType, ActorVisible, ActorCollison);

	if (!ActorInfo.ProcessComponent || ActorInfo.ComponentInfos.Num() == 0)
	{
		ActorInfo.Actor->GetRootComponent()->SetVisibility(ActorVisible, true);
	}
	else
	{
		for (int i = 0; i < ActorInfo.ComponentInfos.Num(); i++)
		{
			TArray<UActorComponent*> Components;

			ActorInfo.Actor->GetComponents(ActorInfo.ComponentInfos[i].ComponentClass, Components);

			for (auto Component : Components)
			{
				bool ComponentVisible = ActorVisible;
				bool ComponentCollision = ActorCollison;
				
				if (ActorInfo.ComponentInfos[i].OverrideVisibleType)
				{
					GetVisibleAndCollisionState(ActorInfo.ComponentInfos[i].VisibleType, ComponentVisible, ComponentCollision);
				}

				UPrimitiveComponent* PC = Cast<UPrimitiveComponent>(Component);
				if (PC != nullptr)
				{
					PC->SetVisibility(ComponentVisible);
				}
			}
		}
	}
	
	//The collision component should never be displayed
	UActorComponent* Component = ActorInfo.Actor->GetComponentByClass(UShapeComponent::StaticClass());

	if (Component != nullptr)
	{
		UShapeComponent* ShapeComponent = Cast<UShapeComponent>(Component);

		if (ShapeComponent != nullptr)
		{
			ShapeComponent->SetVisibility(false);
		}
	}

#if WITH_EDITORONLY_DATA

	//The Billboard component is only used for the editor 
	Component = ActorInfo.Actor->GetComponentByClass(UBillboardComponent::StaticClass());

	if (Component != nullptr)
	{
		UBillboardComponent* BillboardComponent = Cast<UBillboardComponent>(Component);

		if (BillboardComponent != nullptr)
		{
			BillboardComponent->SetVisibility(false);
		}
	}

#endif

	//Actor->GetRootComponent()->SetHiddenInGame(!Visible, true);
}

void UTT_SetActorVisibilityAndCollision::SetActorColliable(FSAV_ActorInfo& ActorInfo)
{
	if (ActorInfo.Actor == nullptr || !ActorInfo.Actor->IsValidLowLevel())
	{
		UE_LOG(LogTrigger, Error, TEXT("No vaild Actor data in %s"), *GetName());
		return;
	}
	
	bool ActorVisible, ActorCollison;
	GetVisibleAndCollisionState(ActorInfo.VisibleType, ActorVisible, ActorCollison);

	if (ActorInfo.ProcessComponent)
	{
		if (ActorInfo.ComponentInfos.Num() == 0)
		{
			UE_LOG(LogTrigger, Warning, TEXT("Try to process components in the actor but there is no component data in this class to process, So change to process Actor!!"));

			if (ActorInfo.Actor != nullptr)
			{
				ActorInfo.Actor->SetActorEnableCollision(ActorCollison);

				return;
			}
		}
		else
		{
			for (int i = 0; i < ActorInfo.ComponentInfos.Num(); i++)
			{
				TArray<UActorComponent*> Components;
				ActorInfo.Actor->GetComponents(ActorInfo.ComponentInfos[i].ComponentClass, Components);
				
				for (auto Component : Components)
				{
					bool ComponentVisible = ActorVisible;
					bool ComponentCollision = ActorCollison;

					if (ActorInfo.ComponentInfos[i].OverrideVisibleType)
					{
						GetVisibleAndCollisionState(ActorInfo.ComponentInfos[i].VisibleType, ComponentVisible, ComponentCollision);
					}

					UPrimitiveComponent* PC = Cast<UPrimitiveComponent>(Component);
					if (PC != nullptr)
					{
						PC->SetCollisionEnabled(ComponentCollision ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision);
					}
				}
			}
		}
	}
	else
	{
		ActorInfo.Actor->SetActorEnableCollision(ActorCollison);
	}
}

void UTT_SetActorVisibilityAndCollision::AddActorOriginalInfos(FSAV_ActorInfo& ActorInfo)
{
	if(ActorInfo.Actor == nullptr && !ActorInfo.Actor->IsValidLowLevel())
		return;

	//First check weather we have restore its initial state
	for (auto Info : OriginalActorInfos)
	{
		if (Info.Actor == ActorInfo.Actor)
		{
			return;
		}
	}

	FSAV_ActorInfo Value;

	Value.ProcessComponent = ActorInfo.ProcessComponent;
	Value.Actor = ActorInfo.Actor;

	if (!ActorInfo.Actor->OnDestroyed.IsAlreadyBound(this, &UTT_SetActorVisibilityAndCollision::DestroyedActor))
	{
		ActorInfo.Actor->OnDestroyed.AddDynamic(this, &UTT_SetActorVisibilityAndCollision::DestroyedActor);
	}

	Value.VisibleType = GetVisibleType(Value.Actor->GetRootComponent()->GetVisibleFlag(), Value.Actor->GetActorEnableCollision());

	if (ActorInfo.ProcessComponent)
	{
		for (auto ComponentInfo : ActorInfo.ComponentInfos)
		{
			TArray<UActorComponent*> Components;
			ActorInfo.Actor->GetComponents(ComponentInfo.ComponentClass, Components);

			for (int i = 0; i < Components.Num(); i++)
			{
				FSAV_ComponentInfo ComponentStatus;

				UPrimitiveComponent* PC = Cast<UPrimitiveComponent>(Components[i]);

				if(PC == nullptr)
					continue;

				ComponentStatus.ResetComponent = PC;
				
				ComponentStatus.OverrideVisibleType = ComponentInfo.OverrideVisibleType;

				ComponentStatus.VisibleType = GetVisibleType(PC->GetVisibleFlag(), PC->GetCollisionEnabled() != ECollisionEnabled::NoCollision);	

				Value.ComponentInfos.Add(ComponentStatus);
			}
		}
	}

	OriginalActorInfos.Add(Value);
}

void UTT_SetActorVisibilityAndCollision::MutiCast_SetVisibleAndCollision_Implementation()
{
	for (auto ActorInfo : ActorInfos)
	{
		if (ActorInfo.Actor == nullptr)
			continue;

		AddActorOriginalInfos(ActorInfo);
		SetActorVisible(ActorInfo);
		SetActorColliable(ActorInfo);
		AddReplicatedActorInfo(ActorInfo, true);
	}
}

bool FSAV_ActorInfo::IsValid() const
{
	if (Actor == nullptr)
		return false;
	else
		return true;
}


void UTT_SetActorVisibilityAndCollision::AddReplicatedActorInfo(const FSAV_ActorInfo& ActorInfo, bool FindFromActorInfos)
{
	FActorInformation* RepInfo = ReplicatedActorInformations.FindByPredicate([&ActorInfo](const FActorInformation& Data) {
		if (ActorInfo.Actor == Data.Actor)
			return true;
		else
			return false;
	});

	if (RepInfo == nullptr)
	{
		FActorInformation LocalInfo;
		LocalInfo.Actor = ActorInfo.Actor;
		LocalInfo.FindFromActorInfos = FindFromActorInfos;
		ReplicatedActorInformations.Add(LocalInfo);
	}
}

const FSAV_ActorInfo& UTT_SetActorVisibilityAndCollision::GetActorInfo(const FActorInformation& Info)
{
	auto F = [&](const TArray<FSAV_ActorInfo>& Infos) -> const FSAV_ActorInfo& {
		const FSAV_ActorInfo* LocalInfo = Infos.FindByPredicate([&Info](const FSAV_ActorInfo& Data) {
			if (Info.Actor == Data.Actor)
				return true;
			else
				return false;
		});

		if (LocalInfo != nullptr)
		{
			return *LocalInfo;
		}
		else
		{
			return FSAV_ActorInfo::InvaildActorInfo;
		}
	};

	if (Info.FindFromActorInfos)
	{
		return F(ActorInfos);
	}
	else
	{
		return F(OriginalActorInfos);
	}
}

void UTT_SetActorVisibilityAndCollision::Rep_ReplicatedActorInformations()
{
	for (int i = 0; i < ReplicatedActorInformations.Num(); i++)
	{
		if (ReplicatedActorInformations[i].Actor == nullptr)
			continue;

		const FSAV_ActorInfo& LocalInfo = GetActorInfo(ReplicatedActorInformations[i]);

		if (LocalInfo.IsValid())
		{
			SetActorVisible(const_cast<FSAV_ActorInfo&>(LocalInfo));
			SetActorColliable(const_cast<FSAV_ActorInfo&>(LocalInfo));
		}
	}
}