#include "Editor/ResespawnData/RespawnEditorPoint.h"
#include "Components/SplineComponent.h"
#include "Engine/Selection.h"
#include "RespawnData/RespawnTaskGroupData.h"
#include "Editor/ResespawnData/RespawnEditorGroupData.h"
#include "TT_Respawn.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

FRespawnPointSingleInfo FRespawnPointSingleInfo::InvaildData;

void FRespawnPointSingleInfo::UpdateRelationShipLine()
{
	if (RelationShipLine == nullptr || Owner == nullptr)
		return;

	FVector EndLocation = RespawnData->GetRespawnTaskOwner()->TryToGetOwnerActor()->GetActorLocation();

	if (EditorDataActor == nullptr)
	{
		int Index = Owner->GetMatchedIndexForData(RespawnData, GroupIndex, PointIndex);

		if (Index != INDEX_NONE)
		{
			TArray<AActor*> BelognedActors;

#if WITH_EDITOR
			RespawnData->GetBelongedEditorDataActor(BelognedActors, Owner);
#endif

			for (int i = 0; i < BelognedActors.Num(); i++)
			{
				ARespawnEditorGroupData* EditorData = Cast<ARespawnEditorGroupData>(BelognedActors[i]);

				if (EditorData != nullptr)
				{
					for (int MapInfoIndex = 0; MapInfoIndex < EditorData->MapInfos.Num(); MapInfoIndex++)
					{
						if (EditorData->MapInfos[MapInfoIndex].IsContainRespawnPoint(Owner))
						{
							if (EditorData->MapInfos[MapInfoIndex].GroupIndex == Owner->GetRespawnInfo()[Index].GroupIndex)
							{
								EndLocation = EditorData->GetActorLocation();
							}
						}
					}
				}
			}
		}
	}
	else
	{
		EndLocation = EditorDataActor->GetActorLocation();
	}

	RelationShipLine->SetLocationAtSplinePoint(0, Owner->GetActorLocation(), ESplineCoordinateSpace::World);
	RelationShipLine->SetLocationAtSplinePoint(1, EndLocation, ESplineCoordinateSpace::World);
}


void FRespawnPointSingleInfo::UpdateGroupAndPointIndex()
{

}


void FRespawnPointSingleInfo::ClearData(URespawnDataBase* RuntimeData)
{
	if (RespawnData == RuntimeData)
	{
		if (RelationShipLine)
		{
			RelationShipLine->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
			RelationShipLine->UnregisterComponent();
			RelationShipLine->DestroyComponent();
			RelationShipLine = nullptr;
		}
	}
}


ARespawnEditorPoint::ARespawnEditorPoint(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	bIsEditorOnlyActor = true;

#if WITH_EDITORONLY_DATA
	bIsEditorPreviewActor = true;
#endif

	SetReplicates(false);

	//RelationShipLine = CreateDefaultSubobject<USplineComponent>(TEXT("RelationShipLine"));
	//RelationShipLine->bSelectable = false;
	////Disable the Spline to be selected in the world
	//RelationShipLine->bModifiedByConstructionScript = true;
	//RelationShipLine->SetVisibility(false);

#if WITH_EDITOR
	FEditorDelegates::MapChange.AddUObject(this, &ARespawnEditorPoint::OnMapChanged);
	GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &ARespawnEditorPoint::OnSelectedInEditor);
#endif

}

void ARespawnEditorPoint::InitializeActor(URespawnDataBase* RespawnData, ARespawnEditorGroupData* EditorDataActor, int GroupIndex, int PointIndex)
{
	int Index = RespawnInfo.FindSingleInfo(RespawnData, GroupIndex, PointIndex);

	if (Index == INDEX_NONE)
	{
		FRespawnPointSingleInfo Info;
		Info.GroupIndex = GroupIndex;
		Info.PointIndex = PointIndex;
		Info.RespawnData = RespawnData;
		Info.EditorDataActor = EditorDataActor;
		Index = RespawnInfo.AddNewSingleInfo(Info);
	}
	
	{
		RespawnInfo[Index].SetOwner(this); 
		RespawnInfo[Index].EditorDataActor = EditorDataActor;
		RespawnInfo[Index].GroupIndex = GroupIndex;
		RespawnInfo[Index].PointIndex = PointIndex;
		RespawnInfo[Index].RespawnData = RespawnData;

		if (RespawnInfo[Index].RelationShipLine == nullptr)
		{
			RespawnInfo[Index].RelationShipLine = NewObject<USplineComponent>(this, USplineComponent::StaticClass());
			if (RespawnInfo[Index].RelationShipLine != nullptr)
			{
				RespawnInfo[Index].RelationShipLine->RegisterComponentWithWorld(GetWorld());
				RespawnInfo[Index].RelationShipLine->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
				RespawnInfo[Index].RelationShipLine->bSelectable = false;
				//Disable the Spline to be selected in the world
				RespawnInfo[Index].RelationShipLine->bModifiedByConstructionScript = true;
			}
		}

		RespawnInfo[Index].UpdateRelationShipLine();
	}
}

void ARespawnEditorPoint::ClearData(URespawnDataBase* RuntimeData)
{
	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo.GroupInfos[i].RespawnData == RuntimeData)
		{
			RespawnInfo.GroupInfos[i].ClearData(RuntimeData);
			RespawnInfo.GroupInfos.RemoveAt(i--);
		}
	}
}

void ARespawnEditorPoint::Destroyed()
{
	Super::Destroyed();

	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo.GroupInfos[i].EditorDataActor != nullptr)
		{
			RespawnInfo.GroupInfos[i].EditorDataActor->RemoveEditorPoint(this);
		}
	}
}



void ARespawnEditorPoint::GetMatchedIndexForData(TArray<int>& Indexs, URespawnDataBase* RuntimeData)
{
	Indexs.Empty();

	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo[i].RespawnData == RuntimeData)
		{
			Indexs.Add(i);
		}
	}
}

void ARespawnEditorPoint::GetMatchedIndexForData(TArray<int>& Indexs, URespawnDataBase* RuntimeData, int GroupIndex)
{
	Indexs.Empty();

	if (GroupIndex == INDEX_NONE)
	{
		GetMatchedIndexForData(Indexs, RuntimeData);
	}
	else
	{
		for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
		{
			if (RespawnInfo[i].RespawnData == RuntimeData && RespawnInfo[i].GroupIndex == GroupIndex)
			{
				Indexs.Add(i);
			}
		}
	}
}

int ARespawnEditorPoint::GetMatchedIndexForData(URespawnDataBase* RuntimeData, int GroupIndex, int PointIndex)
{
	for (int GroupInfoIndex = 0; GroupInfoIndex < RespawnInfo.GroupInfos.Num(); GroupInfoIndex++)
	{
		FRespawnPointSingleInfo& SingleInfo = RespawnInfo[GroupInfoIndex];

		if (SingleInfo.GroupIndex == GroupIndex &&
			SingleInfo.PointIndex == PointIndex &&
			SingleInfo.RespawnData == RuntimeData)
		{
			return GroupInfoIndex;
		}
	}

	return INDEX_NONE;
}

void ARespawnEditorPoint::UpdatePointDataFromData(URespawnDataBase* RuntimeData, int GroupIndex, int PawnIndex)
{
	int Index = GetMatchedIndexForData(RuntimeData, GroupIndex, PawnIndex);

	//There is no valid data in this point for runtime data 
	if (Index == INDEX_NONE)
		return;

	RespawnInfo[Index].GroupIndex = GroupIndex;
	RespawnInfo[Index].PointIndex = PawnIndex;
	RespawnInfo[Index].RespawnData = RuntimeData;

	if (RespawnInfo[Index].RelationShipLine == nullptr)
	{
		RespawnInfo[Index].RelationShipLine = NewObject<USplineComponent>(this);

		RespawnInfo[Index].RelationShipLine->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
		RespawnInfo[Index].RelationShipLine->RegisterComponentWithWorld(GetWorld());
	}
	RespawnInfo[Index].RelationShipLine->bSelectable = false;
	//Disable the Spline to be selected in the world
	RespawnInfo[Index].RelationShipLine->bModifiedByConstructionScript = true;
	int NumberPoints = RespawnInfo[Index].RelationShipLine->GetNumberOfSplinePoints();

	RespawnInfo[Index].UpdateRelationShipLine();

}

void ARespawnEditorPoint::UpdatePointDataFromData(URespawnDataBase* RuntimeData)
{
	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo[i].RespawnData == RuntimeData)
		{
			RespawnInfo[i].UpdateGroupAndPointIndex();
		}
	}
}


void ARespawnEditorPoint::UpdateRelationshipLine(ARespawnEditorDataBase* EditorData)
{
	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo[i].EditorDataActor == EditorData)
		{
			RespawnInfo[i].UpdateRelationShipLine();
		}
	}
}

FRespawnPointSingleInfo& ARespawnEditorPoint::GetPointInfo(URespawnDataBase* RuntimeData, ARespawnEditorDataBase* EditorData, int GroupIndex /* = INDEX_NONE */, int PawIndex /* = INDEX_NONE */)
{
	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		if (RespawnInfo[i].RespawnData == RuntimeData &&
			RespawnInfo[i].EditorDataActor == EditorData &&
			GroupIndex == RespawnInfo[i].GroupIndex &&
			PawIndex == RespawnInfo[i].PointIndex)
			return RespawnInfo[i];
	}

	return FRespawnPointSingleInfo::InvaildData;
}

void ARespawnEditorPoint::RemovePointInfo(URespawnDataBase* RuntimeData, int GroupIndex /* = INDEX_NONE */, int PawIndex /* = INDEX_NONE */)
{
	if (RuntimeData == nullptr)
		return;

	if (GroupIndex == INDEX_NONE)
	{
		for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
		{
			if (RespawnInfo[i].RespawnData == RuntimeData )
			{
				RespawnInfo.RemoveSindleInfo(i);
			}
		}
	}else if (PawIndex == INDEX_NONE)
	{
		for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
		{
			if (RespawnInfo[i].RespawnData == RuntimeData &&
				RespawnInfo[i].GroupIndex == GroupIndex)
			{
				RespawnInfo.RemoveSindleInfo(i);
			}
		}
	}
	else
	{
		int Index = GetMatchedIndexForData(RuntimeData, GroupIndex, PawIndex);

		RespawnInfo.RemoveSindleInfo(Index);
	}
	
}

void ARespawnEditorPoint::PostInitProperties()
{
	Super::PostInitProperties();
}

void ARespawnEditorPoint::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void ARespawnEditorPoint::ApplayLocalData()
{
	for (int i = 0; i < RespawnInfo.GroupInfos.Num(); i++)
	{
		RespawnInfo.GroupInfos[i].UpdateRelationShipLine();

		if(RespawnInfo.GroupInfos[i].RespawnData == nullptr)
			continue;
#if WITH_EDITOR
		RespawnInfo.GroupInfos[i].RespawnData->ApplyEditorConfigData(this);
#endif
	}
}

void ARespawnEditorPoint::OnMapChanged(uint32 MapChangeFlags)
{
	
}

void ARespawnEditorPoint::OnSelectedInEditor(UObject* Object)
{

}

void FRespawnPointGroupInfo::FindSingleInfo(TArray<int>& Indexs, URespawnDataBase* RespawnData)
{
	Indexs.Empty();

	for (int i = 0; i < GroupInfos.Num(); i++)
	{
		if (GroupInfos[i].RespawnData == RespawnData)
		{
			Indexs.Add(i);
		}
	}
}

int FRespawnPointGroupInfo::FindSingleInfo(URespawnDataBase* RespawnData, int LocalGroupIndex, int LocalPointIndex)
{
	int Result = INDEX_NONE;

	for (int i = 0; i < GroupInfos.Num(); i++)
	{
		if (GroupInfos[i].RespawnData == RespawnData &&
			GroupInfos[i].GroupIndex ==LocalGroupIndex &&
			GroupInfos[i].PointIndex == LocalPointIndex)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

int FRespawnPointGroupInfo::AddNewSingleInfo(const FRespawnPointSingleInfo& NewData)
{
	int Result = GroupInfos.Add(NewData);
	return Result;
}

void FRespawnPointGroupInfo::RemoveSindleInfo(int& index)
{
	if (!GroupInfos.IsValidIndex(index))
		return;

	FRespawnPointSingleInfo& Info = GroupInfos[index];

	if (Info.RelationShipLine != nullptr)
	{
		Info.RelationShipLine->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
		Info.RelationShipLine->UnregisterComponent();
		Info.RelationShipLine->DestroyComponent();
		Info.RelationShipLine = nullptr;
	}

	GroupInfos.RemoveAt(index--);
}

FRespawnPointSingleInfo& FRespawnPointGroupInfo::operator[](int index)
{
	checkSlow(GroupInfos.IsValidIndex(index));
	return GroupInfos[index];
}