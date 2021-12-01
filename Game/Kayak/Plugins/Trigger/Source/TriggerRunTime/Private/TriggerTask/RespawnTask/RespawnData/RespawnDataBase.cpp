#include "RespawnDataBase.h"
#include "TT_Respawn.h"

URespawnDataBase::URespawnDataBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void URespawnDataBase::InitializeData(UTT_Respawn* Owner)
{
	RespawnTaskOwner = Owner;

#if WITH_EDITORONLY_DATA
	CreateEditorViewInfo();
#endif

}

#if WITH_EDITORONLY_DATA

void URespawnDataBase::GetBelongedEditorDataActor(TArray<AActor*>& BelongedActors, ARespawnEditorPointBase* RespawnPoint)
{
	BelongedActors.Empty();

	if (GetRespawnTaskOwner())
		BelongedActors. Add(GetRespawnTaskOwner()->TryToGetOwnerActor());

}

#endif



