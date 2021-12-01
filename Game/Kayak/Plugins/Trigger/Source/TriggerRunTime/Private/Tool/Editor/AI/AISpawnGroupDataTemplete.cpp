#include "Editor/AI/AISpawnGroupDataTemplate.h"

#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Components/SplineComponent.h"
#include "UObject/UObjectIterator.h"
#include "DrawDebugHelpers.h"
#include "TriggerConfig.h"
#include "Editor/AI/AIPreviewCharacter.h"

#include "NewTriggerBase.h"
#include "TriggerTaskBase.h"
#include "AISpawnDataGroup.h"
#include "TT_AISpawnBase.h"
#include "TriggerTaskComponentBase.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Engine/Selection.h"
#include "Editor/EditorEngine.h"
#include "Components/BillboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#endif

#if WITH_EDITOR

FDelegateHandle AAISpawnGroupDataTemplate::ObjectReplacedHanded;
TArray<AAISpawnGroupDataTemplate*> AAISpawnGroupDataTemplate::GroupDataTemplatePool;

#endif

AAISpawnGroupDataTemplate::AAISpawnGroupDataTemplate(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	RelationShipLine = CreateDefaultSubobject<USplineComponent>(TEXT("RelationShipLine"));

	RelationShipLine->SetVisibility(false);
	RelationShipLine->bSelectable = false;
	//Disable the Spline to be selected in the world
	RelationShipLine->bModifiedByConstructionScript = true;
	SetRootComponent(RelationShipLine);
	NetUpdateFrequency = 1.0f;
#if WITH_EDITOR
	
	PreviewCharacters.Empty();
	PosintsOffsetTransform.Empty();

	if (GEditor != nullptr && !AAISpawnGroupDataTemplate::ObjectReplacedHanded.IsValid())
	{
		AAISpawnGroupDataTemplate::ObjectReplacedHanded = GEditor->OnObjectsReplaced().AddStatic(&AAISpawnGroupDataTemplate::OnObjectReplaced);
	}

	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent)
	{
		// Structure to hold one-time initialization
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> AISpawnGroupDataTemplateTextureObject;
			FName ID_AISpawnGroupDataTemplate;
			FText NAME_AISpawnGroupDataTemplate;
			FConstructorStatics()
				: AISpawnGroupDataTemplateTextureObject(TEXT("/Trigger/timg"))
				, ID_AISpawnGroupDataTemplate(TEXT("AISpawnGroupDataTemplate"))
				, NAME_AISpawnGroupDataTemplate(FText::FromString(TEXT("AISpawnGroupDataTemplate")))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		SpriteComponent->Sprite = ConstructorStatics.AISpawnGroupDataTemplateTextureObject.Get();
		SpriteComponent->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
		SpriteComponent->bHiddenInGame = false;
		SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_AISpawnGroupDataTemplate;
		SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_AISpawnGroupDataTemplate;
		SpriteComponent->bIsScreenSizeScaled = true;

		SpriteComponent->SetupAttachment(RelationShipLine);
	}

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &AAISpawnGroupDataTemplate::SelectedInEditor);
		GEditor->GetSelectedActors()->SelectionChangedEvent.AddUObject(this, &AAISpawnGroupDataTemplate::SelectedChangeInEditor);

		//FEditorDelegates::PreSaveWorld.AddUObject(this, &AAISpawnGroupDataTemplate::SaveWorldInEditor);
	}
#endif

#if WITH_EDITORONLY_DATA
	
	/*
	* Each time new actor of this type is spawned I need to add to the TemplateActores so that the AISpawnDataGroup can inspect it
	*/
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		GroupDataTemplatePool.AddUnique(this);
	}
	
#endif

}



void AAISpawnGroupDataTemplate::OnAISpawnGroupDataTempleteAddedToWorld(AActor* Actor)
{
	if(Actor == nullptr)
		return;

	AAISpawnGroupDataTemplate* Template = Cast<AAISpawnGroupDataTemplate>(Actor);

	if(Template == nullptr)
		return;

#if WITH_EDITORONLY_DATA
	Template->ClearEditorInfo();
	InitializeAISpawnPointComponent(Template);
#endif
}

void AAISpawnGroupDataTemplate::GetAttachedSpawnPointsComponents(AActor* Actor, TArray<UAISpawnPointComponent*>& OutComponents)
{
	OutComponents.Empty();
	
	TInlineComponentArray<UActorComponent*> Components;
	Actor->GetComponents(Components);

	if (Components.Num() != 0)
	{
		for (auto Component : Components)
		{
			UAISpawnPointComponent* Temp = Cast<UAISpawnPointComponent>(Component);
			if (Temp != nullptr)
			{
				OutComponents.Add(Temp);
			}
		}
	}
	else
	{
		UActorComponent* Root = Actor->GetRootComponent();

		UAISpawnPointComponent* SpawnPointComponent = Cast<UAISpawnPointComponent>(Root);

		if (SpawnPointComponent != nullptr)
		{
			OutComponents.Add(SpawnPointComponent);
		}

		InternalGetSpawnPointComponents(Root, OutComponents);
	}

	OutComponents.Sort([](const UAISpawnPointComponent& Left, const UAISpawnPointComponent& Rright)->bool {
		if (Left.Index < Rright.Index)
			return true;
		else if (Left.Index == Rright.Index)
		{
			if (Left.GetName() < Rright.GetName())
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	});
}

void AAISpawnGroupDataTemplate::InternalGetSpawnPointComponents(UActorComponent* PC, TArray<UAISpawnPointComponent*>& OutComponents)
{
	if(PC == nullptr)
		return;

	USceneComponent* SceneComponent = Cast<USceneComponent>(PC);

	if(SceneComponent == nullptr)
		return;

	TArray<USceneComponent*> ChildComponents =  SceneComponent->GetAttachChildren();

	for (auto ChildrenComponent : ChildComponents)
	{
		UAISpawnPointComponent* SpawnPointComponent = Cast<UAISpawnPointComponent>(ChildrenComponent);

		if (SpawnPointComponent != nullptr)
		{
			OutComponents.Add(SpawnPointComponent);

			InternalGetSpawnPointComponents(ChildrenComponent, OutComponents);
		}
	}
}

void AAISpawnGroupDataTemplate::Destroyed()
{
#if WITH_EDITORONLY_DATA

	ClearEditorInfo();

	GroupDataTemplatePool.Remove(this);
#endif

	Super::Destroyed();

}

void AAISpawnGroupDataTemplate::BeginDestroy()
{
	Super::BeginDestroy();
}

void AAISpawnGroupDataTemplate::InitializeActor(UObject* Creator, int Round, int Group)
{
	TargetOwner = Creator;
	RoundIndex = Round;
	GroupIndex = Group;

#if WITH_EDITORONLY_DATA
	ClearEditorInfo();

	ShowRelationShipToTrigger();
#endif

	InitializeActorComponentData( Cast<UAISpawnDataGroup>(Creator), Round, Group );

	OnAISpawnGroupDataTempleteAddedToWorld(this);
}

ANewTriggerBase* AAISpawnGroupDataTemplate::GetOwnedTrigger()
{
	if(TargetOwner == nullptr)
		return nullptr;

	UAISpawnDataBase* AISpawnDataGroup = Cast<UAISpawnDataBase>(TargetOwner);

	if (AISpawnDataGroup != nullptr)
	{
		
		UTriggerTaskBase* Task = AISpawnDataGroup->GetTaskOwner();

		if(Task == nullptr)
			return nullptr;

		UTriggerTaskComponentBase* TTCB = Task->GetTriggerOwner();
		if(TTCB == nullptr)
			return nullptr;

		ANewTriggerBase* Trigger = Cast<ANewTriggerBase>(TTCB->GetOuter());

		if(Trigger == nullptr)
			return nullptr;

		return Trigger;
	}

	return nullptr;
}

void AAISpawnGroupDataTemplate::ApplayAIPreviewDataToSpawnAIData(AAIPreviewCharacter* Character)
{
	if(TargetOwner == nullptr || Character == nullptr)
		return;

	TArray<UAISpawnPointComponent*> SpawnPoints;

	GetAttachedSpawnPointsComponents(this, SpawnPoints);

	if(SpawnPoints.Num() == 0)
		return;

	PosintsOffsetTransform[Character->PawnIndex] = FTransform(
		Character->GetActorTransform().Rotator() - SpawnPoints[Character->PawnIndex]->GetComponentTransform().Rotator(),
		Character->GetActorTransform().GetLocation() - SpawnPoints[Character->PawnIndex]->GetComponentTransform().GetLocation(),
		Character->GetActorTransform().GetScale3D() - SpawnPoints[Character->PawnIndex]->GetComponentTransform().GetScale3D());

	UAISpawnDataBase* SpawnData = Cast<UAISpawnDataBase>(TargetOwner);

	if(SpawnData != nullptr)
		SpawnData->ApplayDataFromAIPreviewCharacter(Character);
}

void AAISpawnGroupDataTemplate::PostInitProperties()
{
	Super::PostInitProperties();
}

void AAISpawnGroupDataTemplate::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AAISpawnGroupDataTemplate::PostLoad()
{
	Super::PostLoad();
}

void AAISpawnGroupDataTemplate::ShowRelationShipToTrigger()
{
	if (TargetOwner == nullptr)
		return;

	{
		UAISpawnDataBase* SpawnDataGroup = Cast<UAISpawnDataBase>(TargetOwner);

		if(SpawnDataGroup == nullptr)
			return;

		UTriggerTaskBase* Task = Cast<UTriggerTaskBase>(SpawnDataGroup->GetTaskOwner());

		if(Task == nullptr)
			return;

		if(Task->GetTriggerOwner() == nullptr)
			return;
	
		AActor* Actor = Task->GetTriggerOwner()->GetOwner();

		if(Actor == nullptr)
			Actor = Cast<AActor>(Task->GetTriggerOwner()->GetOuter());

		if(Actor == nullptr)
			return;
		
		RelationShipLine->SetVisibility(true);

		RelationShipLine->SetLocationAtSplinePoint(0, GetActorLocation(), ESplineCoordinateSpace::World);

		int Number = RelationShipLine->GetNumberOfSplinePoints();

		RelationShipLine->SetLocationAtSplinePoint(Number - 1, Actor->GetActorLocation(), ESplineCoordinateSpace::World);
	}
}

bool AAISpawnGroupDataTemplate::GetActualTransform(UAISpawnDataGroup* Data, int PawnIndex, const FTransform& BaseTransform, FTransform& OutTransform)
{
	if (Data == nullptr)
	{
		OutTransform = BaseTransform;
		return false;
	}
		

	FSingleGroupDataInfo& GroupInfo = Data->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex];

	if (GroupInfo.AIDatas.Num() == 0)
	{
		OutTransform = BaseTransform;
		return false;
	}

	if (PawnIndex >= GroupInfo.AIDatas.Num() || PawnIndex < 0)
	{
		OutTransform = BaseTransform;
		return false;
	}

	if (GroupInfo.AIDatas[PawnIndex].AITransform.IsValid())
	{
		OutTransform = GroupInfo.AIDatas[PawnIndex].AITransform;
	}
	else
	{
		OutTransform = BaseTransform;
	}

	return true;
}

bool AAISpawnGroupDataTemplate::InitializeActorComponentData(UAISpawnDataGroup* Data, int Round, int Group)
{
	TArray<UAISpawnPointComponent*> SpawnPoints;

	GetAttachedSpawnPointsComponents(this, SpawnPoints);

	if (Data == nullptr)
		return false;

	if (Data->RoundInfos.Num() == 0 ||
		RoundIndex >= Data->RoundInfos.Num() ||
		RoundIndex < 0)
		return false;

	if (Data->RoundInfos[RoundIndex].GroupSpawnDatas.Num() == 0 ||
		GroupIndex >= Data->RoundInfos[RoundIndex].GroupSpawnDatas.Num() ||
		GroupIndex < 0)
		return false;

	FSingleGroupDataInfo& GroupInfo = Data->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex];

	for (int i = 0; i < SpawnPoints.Num(); i++)
	{
		if (i >= GroupInfo.AIDatas.Num())
			break;

		//if (GroupInfo.AIDatas[i].AIClassType.IsValid())
		//{
		//	SpawnPoints[i]->AIClassType = GroupInfo.AIDatas[i].AIClassType;
		//}
		SpawnPoints[i]->AICommand = GroupInfo.AIDatas[i].AISpawnBehaviorCommand;
		float DelayTime = GroupInfo.AIDatas[i].DelayTime;
		SpawnPoints[i]->DelayTime = GroupInfo.AIDatas[i].DelayTime;
		SpawnPoints[i]->WaitTime = GroupInfo.AIDatas[i].WaitTime;
	}

	return true;
}

void AAISpawnGroupDataTemplate::OnAIPreviewCharacterDestroyed(AActor* DestroyedActor)
{
	//Liulianyou:: When the designer click the Trigger I will clear the old data and create new, so don't need to update the array
	//TArray<UAISpawnPointComponent*> SpawnPoints;

	//GetAttachedSpawnPointsComponents(this, SpawnPoints);

	// for (auto PreviewCharacter : PreviewCharacters)
	// {
	//	 if (PreviewCharacter == DestroyedActor)
	//	 {
	//		 PreviewCharacters.RemoveSwap(PreviewCharacter);

	//		 for (auto SpawnPoint : SpawnPoints)
	//		 {
	//			 if (SpawnPoint->GetPreviewCharacter() == PreviewCharacter)
	//			 {
	//				 SpawnPoint->SetPreviewCharacter(nullptr);
	//			 }
	//		 }

	//		 break;
	//	 }
	// }

}


#if WITH_EDITORONLY_DATA

void AAISpawnGroupDataTemplate::PreEditChange(FProperty* PropertyThatWillChange)
{
	Super::PreEditChange(PropertyThatWillChange);

}

void AAISpawnGroupDataTemplate::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	 
	UpdatePreviewCharacter(nullptr);
}

void AAISpawnGroupDataTemplate::SaveWorldInEditor(uint32 Type, class UWorld* World)
{
#if WITH_EDITOR
	GetWorld()->DestroyActor(this);
#endif
}

void AAISpawnGroupDataTemplate::SelectedInEditor(UObject* SelectedObject)
{
	if (PreviewCharacters.Num() != 0)
	{
		for (int i = 0; i < PreviewCharacters.Num(); i++)
		{
			if (PreviewCharacters[i] == nullptr 
				|| !PreviewCharacters[i]->IsValidLowLevel() 
				//If the preview character's owner is not this object means it is created for the _skelt object
				|| PreviewCharacters[i]->GetOwner() != this)
			{
				for (auto PreviewCharacter : PreviewCharacters)
				{
					if(PreviewCharacter == nullptr || !PreviewCharacter->IsValidLowLevel())
						continue;

					if (PreviewCharacter->GetWorld())
					{
						PreviewCharacter->GetWorld()->DestroyActor(PreviewCharacter);
					}
				}
				PreviewCharacters.Empty();
				break;
			}
		}
	}

	//When the develop select one of the actor in the world I need to display all AIPreview character
	if (PreviewCharacters.Num() == 0)
	{
		InitializeActor(TargetOwner, RoundIndex, GroupIndex);
	}
		

	if (SelectedObject != nullptr && SelectedObject == this)
	{
		ShowRelationShipToTrigger();

		//Second visible the specific RelationShipSpline
		for (int i = 0; i < PreviewCharacters.Num(); i++)
		{
			PreviewCharacters[i]->RelationShipLine->SetVisibility(true);

			PreviewCharacters[i]->UpdateSpilineEndPosition(GetActorLocation());
		}
	}
	else 
	{
		ANewTriggerBase* Trigger = GetOwnedTrigger();

		bool SelectedOwnedTrigger = false;

		if (Trigger != nullptr && Trigger == SelectedObject)
			SelectedOwnedTrigger = true;

		bool SelectedOwnedCharacter = false;

		for (int i = 0; i < PreviewCharacters.Num(); i++)
		{
			if (PreviewCharacters[i] != nullptr && PreviewCharacters[i] == SelectedObject)
			{
				SelectedOwnedCharacter = true;
				break;
			}
		}

		if (!(SelectedOwnedTrigger || SelectedOwnedCharacter))
		{
			for (int i = 0; i < PreviewCharacters.Num(); i++)
			{
				PreviewCharacters[i]->RelationShipLine->SetVisibility(false);
			}

			RelationShipLine->SetVisibility(false);
		}
	}
	

	if (TargetOwner != nullptr)
	{
		UAISpawnDataGroup* AISpawnDataGroup = Cast<UAISpawnDataGroup>(TargetOwner);

		
	}

}

void AAISpawnGroupDataTemplate::SelectedChangeInEditor(UObject* SelectedObject)
{
	if (SelectedObject == nullptr && SelectedObject != this)
		return;


}


void AAISpawnGroupDataTemplate::UpdatePreviewCharacter(UAISpawnPointComponent* SpawnComponent)
{
	if (PreviewCharacters.Num() == 0 && SpawnComponent != nullptr)
	{
		InitializeActor(TargetOwner, RoundIndex, GroupIndex);
	}

	//When the designer drag the actor in the world the transform information should be changed in the EditorApplayXXXXX function not here
	if (!bEditorApplyTransform)
	{
		TArray<UAISpawnPointComponent*> SpawnPoints;

		GetAttachedSpawnPointsComponents(this, SpawnPoints);

		for (int i = 0; i < SpawnPoints.Num(); i++)
		{
			if (i >= PreviewCharacters.Num())
				break;

			if (SpawnPoints[i] == SpawnComponent || SpawnComponent == nullptr)
			{
				if (PreviewCharacters[i] != nullptr || !PreviewCharacters[i]->IsValidLowLevel())
					continue;

				PreviewCharacters[i]->SetActorTransform(SpawnPoints[i]->GetComponentTransform());

				PreviewCharacters[i]->UpdateSpilineEndPosition(SpawnPoints[i]->GetComponentTransform().GetLocation());

				SpawnPoints[i]->SetPreviewCharacter(PreviewCharacters[i]);
			}
		}
	}
}

void AAISpawnGroupDataTemplate::ClearEditorInfo()
{
	TArray<UAISpawnPointComponent*> SpawnPoints;

	GetAttachedSpawnPointsComponents(this, SpawnPoints);

	for (int i = 0; i < SpawnPoints.Num(); i++)
	{
		SpawnPoints[i]->SetPreviewCharacter(nullptr);
	}

	for (int i = 0; i < PreviewCharacters.Num(); i++)
	{
		if (PreviewCharacters[i] != nullptr && PreviewCharacters[i]->IsValidLowLevel())
		{
			if (PreviewCharacters[i]->GetWorld())
			{
				PreviewCharacters[i]->GetWorld()->DestroyActor(PreviewCharacters[i]);
			}
		}	
	}

	Children.Empty();

	PreviewCharacters.Empty();
	PosintsOffsetTransform.Empty();
}

void AAISpawnGroupDataTemplate::InitializeAISpawnPointComponent(AAISpawnGroupDataTemplate* Actor)
{
	if(GetClass()->GetDefaultObject() == this)
		return;

	TArray<UAISpawnPointComponent*> SpawnPoints;

	GetAttachedSpawnPointsComponents(Actor, SpawnPoints);

	for (int i = 0; i < SpawnPoints.Num(); i++)
	{
		UAISpawnPointComponent* Point = Cast<UAISpawnPointComponent>(SpawnPoints[i]);

		if (Point == nullptr ||
			(Point->GetPreviewCharacter() != nullptr && SpawnPoints[i]->GetPreviewCharacter()->IsValidLowLevel()))
			continue;
		
		AAIPreviewCharacter* Character = SpawnNewAIPreview(Actor, Point, i);

		UAISpawnDataGroup* GroupData = Cast<UAISpawnDataGroup>(TargetOwner);

		if (GroupData != nullptr && Character != nullptr)
		{
			if (i >= GroupData->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].PreviewCharacterNames.Num())
			{
				GroupData->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].PreviewCharacterNames.Add(Character->GetName());
			}
			else if (GroupData->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].PreviewCharacterNames[i] != Character->GetName())
			{
				GroupData->RoundInfos[RoundIndex].GroupSpawnDatas[GroupIndex].PreviewCharacterNames[i] = Character->GetName();
			}
		}
	}
}

bool AAISpawnGroupDataTemplate::FindAppropriateAIPreviewCharacter(FString& Name, int AIIndex)
{
	UAISpawnDataGroup* GroupData = Cast<UAISpawnDataGroup>(TargetOwner);

	if (GroupData == nullptr)
		return false;

	for (int LocalRoundIndex = 0; LocalRoundIndex < GroupData->RoundInfos.Num(); LocalRoundIndex++)
	{
		for (int LocalGroupIndex = 0; LocalGroupIndex < GroupData->RoundInfos[LocalRoundIndex].GroupSpawnDatas.Num(); LocalGroupIndex++)
		{
			if (GroupData->RoundInfos[LocalRoundIndex].GroupSpawnDatas[LocalGroupIndex].AISpawnGroupDataTemplate == this)
			{
				if (AIIndex < 0 || AIIndex >= GroupData->RoundInfos[LocalRoundIndex].GroupSpawnDatas[LocalGroupIndex].PreviewCharacterNames.Num())
					return false;

				Name = GroupData->RoundInfos[LocalRoundIndex].GroupSpawnDatas[LocalGroupIndex].PreviewCharacterNames[AIIndex];
				return true;
			}
		}
	}

	return false;
}

AAIPreviewCharacter* AAISpawnGroupDataTemplate::SpawnNewAIPreview(AAISpawnGroupDataTemplate* Actor,  UAISpawnPointComponent* Point, int AIIndex)
{
	FActorSpawnParameters ActorSpawnParameter;

	ActorSpawnParameter.OverrideLevel = Actor->GetLevel();
	ActorSpawnParameter.Owner = Actor;

	FString Name;
	if (FindAppropriateAIPreviewCharacter(Name, AIIndex))
	{
		FString LevelNamePrefix = GetTypedOuter<ULevel>()->GetOuter()->GetName() +TEXT("_");
		if (Name.Find(LevelNamePrefix) == INDEX_NONE)
		{
			Name = LevelNamePrefix + Name;
		}
		ActorSpawnParameter.Name = *Name;
	}

	Point->SetVisibility(false, true);

	UClass* AIPreviewClass = AAIPreviewCharacter::StaticClass();

	UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	if (TriggerConfig != nullptr && TriggerConfig->PreviewCharacterPath.IsValid())
	{
		UBlueprint* ObjClass = Cast<UBlueprint>(TriggerConfig->PreviewCharacterPath.TryLoad());

		if (ObjClass != nullptr && ObjClass->GeneratedClass->IsChildOf(AIPreviewClass))
		{
			AIPreviewClass = ObjClass->GeneratedClass;
		}
	}

	FTransform Transform;

	const FTransform& PointTransform = Point->GetComponentTransform();

	UAISpawnDataGroup* GroupData = Cast<UAISpawnDataGroup>(TargetOwner);

	GetActualTransform(GroupData, AIIndex, PointTransform, Transform);

	AAIPreviewCharacter* AIPreivewCharacter = Cast<AAIPreviewCharacter>(
		GWorld->SpawnActor(AIPreviewClass, &Transform, ActorSpawnParameter));

	if (AIPreivewCharacter == nullptr)
		return nullptr;

	Actor->PosintsOffsetTransform.Add(FTransform(
		AIPreivewCharacter->GetActorTransform().Rotator() - PointTransform.Rotator(),
		AIPreivewCharacter->GetActorTransform().GetLocation() - PointTransform.GetLocation(),
		AIPreivewCharacter->GetActorTransform().GetScale3D() - PointTransform.GetScale3D()));


	AIPreivewCharacter->OnDestroyed.AddDynamic(this, &AAISpawnGroupDataTemplate::OnAIPreviewCharacterDestroyed);

	AIPreivewCharacter->AISpawnGroupDataTemplate = Actor;
	AIPreivewCharacter->RoundIndex = RoundIndex;
	AIPreivewCharacter->GroupIndex = GroupIndex;
	AIPreivewCharacter->PawnIndex = AIIndex;
	
	if (AIIndex >= 0 && AIIndex < Actor->PreviewCharacters.Num())
	{
		Actor->PreviewCharacters[AIIndex] = AIPreivewCharacter;
	}
	else
	{
		Actor->PreviewCharacters.Add(AIPreivewCharacter);
	}

	Point->SetPreviewCharacter(AIPreivewCharacter);

	return AIPreivewCharacter;
}

 void AAISpawnGroupDataTemplate::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	 bEditorApplyTransform = true;

	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);

	//After apply I need to reset it false to avoid bug: when we change the position of the spawn component in the default object class the AIPreivewCharacter will not change its position on the world
	bEditorApplyTransform = false;

	for (auto PreviewCharacter : PreviewCharacters)
	{
		if(PreviewCharacter == nullptr)
			continue;

		PreviewCharacter->SetCharacterLocation(PreviewCharacter->GetActorLocation() + DeltaTranslation, GetActorLocation());
	}

	ShowRelationShipToTrigger();
	
	if (TargetOwner != nullptr)
	{
		UAISpawnDataGroup* AISpawnDataGroup = Cast<UAISpawnDataGroup>(TargetOwner);

		if (AISpawnDataGroup != nullptr)
		{
			FTransform InTransform = GetActorTransform();
			AISpawnDataGroup->UpdateGroupSpawnTempleteTransform(this, InTransform);
		}
	}
}
 void AAISpawnGroupDataTemplate::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
 {
	 bEditorApplyTransform = true;

	 Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

	 //After apply I need to reset it false to avoid bug: when we change the position of the spawn component in the default object class the AIPreivewCharacter will not change its position on the world
	 bEditorApplyTransform = false;

	 for (auto PreviewCharacter : PreviewCharacters)
	 {
		 if (PreviewCharacter == nullptr)
			 continue;

		 FVector Direction = PreviewCharacter->GetActorLocation() - GetActorLocation();

		 FVector NewPosition = DeltaRotation.RotateVector(Direction);

		 PreviewCharacter->SetCharacterLocation(GetActorLocation() + NewPosition, GetActorLocation());
	 }

	 if (TargetOwner != nullptr)
	 {
		 UAISpawnDataGroup* AISpawnDataGroup = Cast<UAISpawnDataGroup>(TargetOwner);

		 if (AISpawnDataGroup != nullptr)
		 {
			 FTransform InTransform = GetActorTransform();
			 AISpawnDataGroup->UpdateGroupSpawnTempleteTransform(this, InTransform);
		 }
	 }
 }

 void AAISpawnGroupDataTemplate::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
 {
	 bEditorApplyTransform = true;

	 Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);
	 
	 //After apply I need to reset it false to avoid bug: when we change the position of the spawn component in the default object class the AIPreivewCharacter will not change its position on the world
	 bEditorApplyTransform = false;

	 for (auto PreviewCharacter : PreviewCharacters)
	 {
		 if (PreviewCharacter == nullptr)
			 continue;

		FVector Scale = PreviewCharacter->GetActorScale3D() + DeltaScale;

		 PreviewCharacter->SetCharacterScale(Scale);
	 }

	 if (TargetOwner != nullptr)
	 {
		 UAISpawnDataGroup* AISpawnDataGroup = Cast<UAISpawnDataGroup>(TargetOwner);

		 if (AISpawnDataGroup != nullptr)
		 {
			 FTransform InTransform = GetActorTransform();
			 AISpawnDataGroup->UpdateGroupSpawnTempleteTransform(this, InTransform);
		 }
	 }
 }


#endif

#if WITH_EDITOR

 AAISpawnGroupDataTemplate* AAISpawnGroupDataTemplate::FindAppropicateTemplateActors(UObject* TargetData, int RoundIndex, int GroupIndex)
 {
	 AAISpawnGroupDataTemplate* Result = false;

	 //Before find any appropriate actor, I need to remove all invalid actor
	 for (int i = 0; i < GroupDataTemplatePool.Num(); i++)
	 {
		 if (GroupDataTemplatePool[i] == nullptr || !GroupDataTemplatePool[i]->IsValidLowLevel())
		 {
			 GroupDataTemplatePool.RemoveAt(i--);
		 }
	 }

	 AAISpawnGroupDataTemplate** FindPtr = GroupDataTemplatePool.FindByPredicate([&](const AAISpawnGroupDataTemplate* Data) {
		 if (Data == nullptr || !Data->IsValidLowLevel())
			 return false;

		 if (Data->GetTargetOwner() == TargetData && RoundIndex == Data->GetRoundIndex() && GroupIndex == Data->GetGroupIndex())
			 return true;
		 else
			 return false;
	 });

	 if (FindPtr != nullptr)
	 {
		 Result = *FindPtr;
	 }

	 return Result;
 }

 void AAISpawnGroupDataTemplate::OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewMap)
 {
	 for (auto It = OldToNewMap.CreateConstIterator(); It ; ++It)
	 {
		 UAISpawnPointComponent* Key = Cast<UAISpawnPointComponent>(It->Key);

		 if(Key == nullptr)
			continue;

		 UAISpawnPointComponent* Value = Cast<UAISpawnPointComponent>(It->Value);

		 if (Value == nullptr)
			 continue;

		//Update the new information in BP to Preview character after the designer click the compile button 
		 {
			 AAISpawnGroupDataTemplate* AISpawnGroupDataTemplete = Cast<AAISpawnGroupDataTemplate>(Value->GetOwner());

			 if (AISpawnGroupDataTemplete == nullptr)
				 continue;

			 TArray<UAISpawnPointComponent*> SpawnPoints;

			 AISpawnGroupDataTemplete->GetAttachedSpawnPointsComponents(AISpawnGroupDataTemplete, SpawnPoints);

			 if (AISpawnGroupDataTemplete->PreviewCharacters.Num() != 0)
			 {
				 for (auto PreivewCharacter : AISpawnGroupDataTemplete->PreviewCharacters)
				 {
					 if (PreivewCharacter == nullptr)
					 {
						 continue;
					 }

					 PreivewCharacter->AISpawnGroupDataTemplate = AISpawnGroupDataTemplete;
				 }

				 {
					 for (int i = 0; i < SpawnPoints.Num(); i++)
					 {
						 if (i >= AISpawnGroupDataTemplete->PreviewCharacters.Num() ||
							 AISpawnGroupDataTemplete->PreviewCharacters[i] == nullptr ||
							 !AISpawnGroupDataTemplete->PreviewCharacters[i]->IsValidLowLevel())
						 {
							 AISpawnGroupDataTemplete->SpawnNewAIPreview(AISpawnGroupDataTemplete, SpawnPoints[i], i);
						 }

						 if (AISpawnGroupDataTemplete->GetTargetOwner() == nullptr)
						 {
							 FTransform T = FTransform(
								 SpawnPoints[i]->GetComponentTransform().Rotator() + AISpawnGroupDataTemplete->PosintsOffsetTransform[i].Rotator(),
								 SpawnPoints[i]->GetComponentTransform().GetLocation() + AISpawnGroupDataTemplete->PosintsOffsetTransform[i].GetLocation(),
								 SpawnPoints[i]->GetComponentTransform().GetScale3D() + AISpawnGroupDataTemplete->PosintsOffsetTransform[i].GetScale3D()
							 );
							 AISpawnGroupDataTemplete->PreviewCharacters[i]->SetCharacterTransform(T);
						 }
						 else
						 {
							 const UAISpawnDataGroup* GroupData = Cast<UAISpawnDataGroup>(AISpawnGroupDataTemplete->GetTargetOwner());

							 FSingleGroupDataInfo& Data = (const_cast<UAISpawnDataGroup*>(GroupData))->RoundInfos[AISpawnGroupDataTemplete->RoundIndex].GroupSpawnDatas[AISpawnGroupDataTemplete->GroupIndex];

							 AISpawnGroupDataTemplete->PreviewCharacters[i]->SetCharacterTransform(Data.AIDatas[i].AITransform);
						 }
					 }
				 }

				ANewTriggerBase* Trigger = Cast<ANewTriggerBase>(AISpawnGroupDataTemplete->GetOwner());

				if(Trigger == nullptr || Trigger->TriggerTaskComponent == nullptr)
				continue;

				TArray<UTriggerTaskBase*> TriggerTasks;
				Trigger->TriggerTaskComponent->GetAllTriggerTasks(TriggerTasks);

				for (int TaskIndex = 0; TaskIndex < TriggerTasks.Num(); TaskIndex++)
				{
					UTT_AISpawnBase* AISpawnTask = Cast<UTT_AISpawnBase>(TriggerTasks[TaskIndex]);

					if(AISpawnTask == nullptr)
						continue;

					UAISpawnDataGroup* GroupData = Cast<UAISpawnDataGroup>(AISpawnTask->AISpawnData);
					
					if (GroupData != nullptr)
					{
						for (int j = 0; j < AISpawnTask->AISpawnData->GetMaxRound(); j++)
						{
							for (int GroupIndex = 0; GroupIndex < GroupData->RoundInfos[j].GroupSpawnDatas.Num(); GroupIndex++)
							{
								FSingleGroupDataInfo& Data = GroupData->RoundInfos[j].GroupSpawnDatas[GroupIndex];
								if (Data.AISpawnGroupDataTemplate == AISpawnGroupDataTemplete)
								{
									for (int AIIndex = 0; AIIndex < Data.AIDatas.Num(); AIIndex++)
									{
										if (AIIndex >= SpawnPoints.Num())
											continue;

										FSinglePawnData& AIData = Data.AIDatas[AIIndex];
										SpawnPoints[AIIndex]->DelayTime = AIData.DelayTime;
										SpawnPoints[AIIndex]->WaitTime = AIData.WaitTime;
										SpawnPoints[AIIndex]->AICommand = AIData.AISpawnBehaviorCommand;
										SpawnPoints[AIIndex]->SetPreviewCharacter(AISpawnGroupDataTemplete->PreviewCharacters[AIIndex]);
									}
								}
							}
						}
					}
				}
			 }
		 }
	 }
 }
#endif

