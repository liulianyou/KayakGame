#include "Tool/Editor/AI/AIPreviewCharacter.h"
#include "TT_AISpawn.h"
#include "NewTriggerBase.h"
#include "TriggerTaskBase.h"
#include "Engine/Selection.h"
#include "Components/SplineComponent.h"
#include "Editor/AI/AISpawnGroupDataTemplate.h"

AAIPreviewCharacter::AAIPreviewCharacter(const FObjectInitializer& ObjectInitializer) :
Super(ObjectInitializer)
{
	SetCanBeDamaged(false);
	SetActorHiddenInGame(true);

	bIsEditorOnlyActor = true;
	
#if WITH_EDITORONLY_DATA
	bIsEditorPreviewActor = true;
#endif

	SetReplicates(false);

	RelationShipLine = CreateDefaultSubobject<USplineComponent>(TEXT("RelationShipLine"));
	RelationShipLine->bSelectable = false;
	//Disable the Spline to be selected in the world
	RelationShipLine->bModifiedByConstructionScript = true;
	RelationShipLine->SetVisibility(false);

}


void AAIPreviewCharacter::PostInitProperties()
{
	Super::PostInitProperties();
#if WITH_EDITORONLY_DATA
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &AAIPreviewCharacter::SelectedInEditor);
		GEditor->GetSelectedActors()->SelectionChangedEvent.AddUObject(this, &AAIPreviewCharacter::SelectedChangeInEditor);
	}
#endif
}


#if WITH_EDITORONLY_DATA

void AAIPreviewCharacter::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);
	FVector StartPosition = GetActorLocation();
	
	if (AISpawnGroupDataTemplate != nullptr)
	{
		UpdateSpilineEndPosition(AISpawnGroupDataTemplate->GetActorLocation());
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
	}

    OnTranslationEdit.Broadcast(this, DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);
}
void AAIPreviewCharacter::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

	if (AISpawnGroupDataTemplate != nullptr)
        AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);

    OnRotationEdit.Broadcast(this, DeltaRotation, bAltDown, bShiftDown, bCtrlDown);
}
void AAIPreviewCharacter::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);

	if (AISpawnGroupDataTemplate != nullptr)
        AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);

    OnScaleEdit.Broadcast(this, DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);
}


void  AAIPreviewCharacter::SelectedInEditor(UObject* SelectedActor)
{
	if (SelectedActor == nullptr)
	{
		RelationShipLine->SetVisibility(false);
		return;
	}

	AAIPreviewCharacter* PreviewCharacter = Cast<AAIPreviewCharacter>(SelectedActor);

	if (PreviewCharacter == nullptr || PreviewCharacter != this)
	{
		if (AISpawnTask != nullptr)
		{
			AISpawnTask->UpdateSpawnData(this);
		}
	}

	if (SelectedActor != nullptr && SelectedActor == this )
	{
		RelationShipLine->SetVisibility(true);
		if (AISpawnGroupDataTemplate != nullptr)
		{
			for (int i = 0; i < AISpawnGroupDataTemplate->PreviewCharacters.Num(); i++)
			{
				if (AISpawnGroupDataTemplate->PreviewCharacters[i] != this)
				{
					AISpawnGroupDataTemplate->PreviewCharacters[i]->SelectedInEditor(nullptr);
				}
			}

			UpdateSpilineEndPosition(AISpawnGroupDataTemplate->GetActorLocation());

			if (AISpawnGroupDataTemplate->RelationShipLine != nullptr)
			{
				AISpawnGroupDataTemplate->RelationShipLine->SetVisibility(true);
			}
		}
	}
	else
	{
		AAISpawnGroupDataTemplate* AISpawnGroupData = Cast<AAISpawnGroupDataTemplate>(SelectedActor);

		//If we select the AAISpawnGroupDataTemplate actor who own this AI previewer character we should skip this selected action
		bool SelectOwnerAISpawnGroupTempleteActor = false;

		if (AISpawnGroupData == AISpawnGroupDataTemplate)
			SelectOwnerAISpawnGroupTempleteActor = true;

		//If we selected the trigger which have data spawn the AAISpawnGroupDataTemplate Actor which spawn this character again, we should skip this selection action
		bool SelectedOwnerTrigger = false;

		if (AISpawnGroupDataTemplate != nullptr && AISpawnGroupDataTemplate->IsValidLowLevel())
		{
			ANewTriggerBase* Trigger = AISpawnGroupDataTemplate->GetOwnedTrigger();

			if (Trigger != nullptr && Trigger == SelectedActor)
				SelectedOwnerTrigger = true;
		}

		if (!(SelectOwnerAISpawnGroupTempleteActor || SelectedOwnerTrigger))
		{
			RelationShipLine->SetVisibility(false);
		}
	}
}

void AAIPreviewCharacter::SelectedChangeInEditor(UObject* SelectedActor)
{

}

void AAIPreviewCharacter::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (AISpawnGroupDataTemplate != nullptr)
	{
		UpdateSpilineEndPosition(AISpawnGroupDataTemplate->GetActorLocation());
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
	}
		
}

void AAIPreviewCharacter::InitializeData(UTriggerTaskBase* Task, int Round, int Pawn)
{
	if (Task == nullptr)
		return;

	FPreviewInfo PreviewInfo;
	PreviewInfo.RoundIndex = Round;
	PreviewInfo.PawnIndex = Pawn;

	AISpawnTask = Cast<UTT_AISpawn>(Task);
	PreviewInfos.Add(PreviewInfo);
	NPCID = AISpawnTask->SpawnData.TotalPawns[PreviewInfo.RoundIndex].Pawns[PreviewInfo.PawnIndex].NPCID;
}

#endif

void AAIPreviewCharacter::SetCharacterLocation(FVector Location, FVector TargetLocation)
{
	SetActorLocation(Location);

	UpdateSpilineEndPosition(TargetLocation);

	if(AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetCharacterRotation(FRotator& Rotation)
{
	SetActorRotation(Rotation);

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetCharacterScale(FVector& Scale)
{
	SetActorScale3D(Scale);

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetCharacterTransform(FTransform& Transform)
{
	SetActorTransform(Transform);
	FVector Location = Transform.GetLocation();
	UpdateSplineStartPosition(Location);

	int NumberPoints = RelationShipLine->GetNumberOfSplinePoints();

	Location =  RelationShipLine->GetLocationAtSplinePoint(NumberPoints - 1, ESplineCoordinateSpace::World);

	UpdateSpilineEndPosition(Location);

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetDelayTime(float NewDelayTime)
{
	DelayTime = NewDelayTime;

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetWaitTime(float NewWaitTime)
{
	WaitTime = NewWaitTime;

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetAICommand(FAISpawnBehaviorCommand& NewCommand)
{
	AICommand = NewCommand;

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::SetNPCID(int NPCType)
{
	NPCID = NPCType;

	if (AISpawnGroupDataTemplate != nullptr)
		AISpawnGroupDataTemplate->ApplayAIPreviewDataToSpawnAIData(this);
}

void AAIPreviewCharacter::UpdateSpilineEndPosition(FVector Endposition)
{
	int NumberPoints = RelationShipLine->GetNumberOfSplinePoints();

	RelationShipLine->SetLocationAtSplinePoint(0,GetActorLocation(), ESplineCoordinateSpace::World);
	RelationShipLine->SetLocationAtSplinePoint(NumberPoints -1, Endposition, ESplineCoordinateSpace::World);
}

void AAIPreviewCharacter::UpdateSplineStartPosition(FVector& StartPosition)
{
	RelationShipLine->SetLocationAtSplinePoint(0, StartPosition, ESplineCoordinateSpace::World);
}

void AAIPreviewCharacter::BeginDestroy()
{
	Super::BeginDestroy();

#if WITH_EDITORONLY_DATA

	if (AISpawnTask != nullptr && AISpawnTask->IsValidLowLevel())
	{
		AISpawnTask->PreviewCharacterDestroyed(this);
	}
	
#endif
}

void AAIPreviewCharacter::Destroyed()
{
	Super::Destroyed();

	/*
	* If this happened there must be something wrong when spawn this actor with the same name
	*/
	if (GetOwner() != nullptr)
	{
		int Index = GetOwner()->Children.Find(this);

		if (Index == INDEX_NONE)
		{
			GetOwner()->Children.Add(this);
		}
	}
}

