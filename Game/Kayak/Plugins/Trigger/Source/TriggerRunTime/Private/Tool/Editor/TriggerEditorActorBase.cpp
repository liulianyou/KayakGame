#include "Editor/TriggerEditorActorBase.h"

ATriggerEditorActorBase::ATriggerEditorActorBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	bIsEditorOnlyActor = true;
	
#if WITH_EDITORONLY_DATA
	bIsEditorPreviewActor = true;
#endif

	SetActorHiddenInGame(true);

	SetReplicates(false);
}

