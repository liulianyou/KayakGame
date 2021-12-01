#include "Editor/ResespawnData/RespawnEditorPointBase.h"

ARespawnEditorPointBase::ARespawnEditorPointBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SetCanBeDamaged(false);
	SetActorHiddenInGame(true);
	SetReplicates(false);
	SetActorEnableCollision(false);
	bIsEditorOnlyActor = true; 
#if WITH_EDITORONLY_DATA
	bIsEditorPreviewActor = true;
#endif

	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		//FWorldDelegates::
	}

}

#if WITH_EDITOR
void ARespawnEditorPointBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	ApplayLocalData();
}

void ARespawnEditorPointBase::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

	ApplayLocalData();
}

void ARespawnEditorPointBase::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);

	ApplayLocalData();
}

void ARespawnEditorPointBase::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);

	ApplayLocalData();
}
#endif                                                                       