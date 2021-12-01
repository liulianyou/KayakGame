#include "Editor/ResespawnData/RespawnEditorGroupData.h"
#include "RespawnData/RespawnTaskGroupData.h"
#include "Editor/ResespawnData/RespawnEditorPoint.h"
#include "EngineUtils.h" 
#include "TT_Respawn.h"
#include "Engine/World.h"
#include "Components/SplineComponent.h"
#include "Components/BillboardComponent.h"


ARespawnEditorGroupData::ARespawnEditorGroupData(const FObjectInitializer& Objectinitializer)
	:Super(Objectinitializer)
{
#if WITH_EDITORONLY_DATA
	SpriteComponent = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
	if (SpriteComponent)
	{
		// Structure to hold one-time initialization
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> RespawnEditorGroupDataTextureObject;
			FName ID_RespawnEditorGroupData;
			FText NAME_RespawnEditorGroupData;
			FConstructorStatics()
				: RespawnEditorGroupDataTextureObject(TEXT("/Trigger/Respawn"))
				, ID_RespawnEditorGroupData(TEXT("RespawnEditorGroupData"))
				, NAME_RespawnEditorGroupData(FText::FromString(TEXT("RespawnEditorGroupData")))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		SpriteComponent->Sprite = ConstructorStatics.RespawnEditorGroupDataTextureObject.Get();
		SpriteComponent->SetRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));
		SpriteComponent->bHiddenInGame = true;
		SpriteComponent->SpriteInfo.Category = ConstructorStatics.ID_RespawnEditorGroupData;
		SpriteComponent->SpriteInfo.DisplayName = ConstructorStatics.NAME_RespawnEditorGroupData;
		SpriteComponent->bIsScreenSizeScaled = true;
		SetRootComponent(SpriteComponent);
	}
#endif

	for (int i = 0; i < MapInfos.Num(); i++)
	{
		MapInfos[i].SetEditorDataOwer(this);
	}
	
}

int FRespawnEditorGroupDataMapInfo::IsContainRespawnPoint(ARespawnEditorPointBase* Point)
{
	return EditorPoints.Find(Cast<ARespawnEditorPoint>(Point));
}

void FRespawnEditorGroupDataMapInfo::UpdateRelationShipLine()
{
	if (RelationShipLine == nullptr ||
		EditorData == nullptr ||
		RuntimeData == nullptr ||
		RuntimeData->GetRespawnTaskOwner() == nullptr ||
		RuntimeData->GetRespawnTaskOwner()->TryToGetOwnerActor() == nullptr)
		return;

	RelationShipLine->SetLocationAtSplinePoint(0, EditorData->GetActorLocation(), ESplineCoordinateSpace::World);
	RelationShipLine->SetLocationAtSplinePoint(1, RuntimeData->GetRespawnTaskOwner()->TryToGetOwnerActor()->GetActorLocation(), ESplineCoordinateSpace::World);


	for (int i = 0; i < EditorPoints.Num(); i++)
	{
		if(EditorPoints[i] == nullptr)
			continue;

		EditorPoints[i]->UpdateRelationshipLine(EditorData);
	}
}

void FRespawnEditorGroupDataMapInfo::ClearData(URespawnDataBase* RuntimeDataParamater)
{
	if (RuntimeData == RuntimeDataParamater)
	{
		for (int i = 0; i < EditorPoints.Num(); i++)
		{
			if(EditorPoints[i] == nullptr)
				continue;
			EditorPoints[i]->ClearData(RuntimeDataParamater);
		}

		if (RelationShipLine)
		{
			RelationShipLine->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
			RelationShipLine->UnregisterComponent();
			RelationShipLine->DestroyComponent();
			RelationShipLine = nullptr;
		}
	}
}

void ARespawnEditorGroupData::Destroyed()
{
	Super::Destroyed();

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		for (int i = 0; i < MapInfos[MapInfoIndex].EditorPoints.Num(); i++)
		{
			ARespawnEditorPoint* Point = Cast<ARespawnEditorPoint>(MapInfos[MapInfoIndex].EditorPoints[i]);

			if (Point != nullptr)
			{
				Point->RemovePointInfo(MapInfos[MapInfoIndex].RuntimeData, MapInfos[MapInfoIndex].GroupIndex);
			}
		}
	}

}

void ARespawnEditorGroupData::InitializeData(URespawnDataBase* RespawnData)
{

}

void ARespawnEditorGroupData::ClearData(URespawnDataBase* RespawnData)
{
	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		if (MapInfos[MapInfoIndex].RuntimeData == RespawnData)
		{
			MapInfos[MapInfoIndex].ClearData(RespawnData);
			MapInfos.RemoveAt(MapInfoIndex--);
		}
	}

	MapInfos.Empty();
}

void ARespawnEditorGroupData::InitializeEditorGroupData(URespawnDataBase* RespawnData, int LocalGroupIndex)
{
	InitializeData(RespawnData);

	int Index = FindRuntimeDataMapInfoIndex(RespawnData, LocalGroupIndex);

	//If don't find the matched data in this map info then add new one
	if (Index == INDEX_NONE)
	{
		FRespawnEditorGroupDataMapInfo Info;
		Info.SetEditorDataOwer(this);

		Info.RuntimeData = RespawnData;
		Info.GroupIndex = LocalGroupIndex;
		Info.RelationShipLine = NewObject<USplineComponent>(this, USplineComponent::StaticClass());
		

		if (Info.RelationShipLine)
		{
			Info.RelationShipLine->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
			Info.RelationShipLine->RegisterComponentWithWorld(GetWorld());

			Info.UpdateRelationShipLine();
		}
		
		Index = MapInfos.Add(Info);
	}

	MapInfos[Index].SetEditorDataOwer(this);
}

void ARespawnEditorGroupData::UpdateEditorViewInfoInternal(URespawnDataBase* RuntimeData)
{
	URespawnTaskGroupData* RespawnGroupData = Cast<URespawnTaskGroupData>(RuntimeData);

	if (RespawnGroupData == nullptr)
		return;

	//for (int i = 0; i < RespawnGroupData->Data.GruopInfos.Num(); i++)
	//{
	//	InitializeEditorGroupData(RuntimeData, i);
	//}

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		MapInfos[MapInfoIndex].UpdateRelationShipLine();

		if (MapInfos[MapInfoIndex].GroupIndex == INDEX_NONE)
		{
			continue;
		}

		if(MapInfos[MapInfoIndex].RuntimeData != RuntimeData)
			continue;

		for (int PointIndex = 0; PointIndex < RespawnGroupData->GetRespawnData().GruopInfos[MapInfos[MapInfoIndex].GroupIndex].GroupPoints.Num(); PointIndex++)
		{
			//Try to find matched point for the target data
			int EditorPointIndex = GetMathchedPointAtLocalPointsPool(MapInfoIndex, MapInfos[MapInfoIndex].GroupIndex, PointIndex);

			ARespawnEditorPoint* MatchedPoint = nullptr;

			if (EditorPointIndex == INDEX_NONE)
			{
				//If this data have not hold one editor point for target data then try to find it in the world
				MatchedPoint = GetMathchedPointAtWorldPointsPool(MapInfoIndex, MapInfos[MapInfoIndex].GroupIndex, PointIndex);

				if (MatchedPoint == nullptr)
				{
					//When there is no matched point in the world then create new one
					if (MapInfos[MapInfoIndex].CreateNewPointAutomatically)
					{
						if (RuntimeData != nullptr &&
							RuntimeData->GetRespawnTaskOwner() != nullptr &&
							RuntimeData->GetRespawnTaskOwner()->TryToGetOwnerActor() != nullptr)
						{
							MatchedPoint = GetWorld()->SpawnActor<ARespawnEditorPoint>(ARespawnEditorPoint::StaticClass(),
								GetActorLocation(),
								GetActorRotation());
						}
					}
				}

				if (MatchedPoint != nullptr)
				{
					MapInfos[MapInfoIndex].EditorPoints.Add(MatchedPoint);
				}
			}
			else
			{
				MatchedPoint = Cast<ARespawnEditorPoint>(MapInfos[MapInfoIndex].EditorPoints[EditorPointIndex]);
			}

			if (MatchedPoint != nullptr)
			{
				MatchedPoint->InitializeActor(RuntimeData, this, MapInfos[MapInfoIndex].GroupIndex, PointIndex);
				MatchedPoint->UpdatePointDataFromData(RuntimeData, MapInfos[MapInfoIndex].GroupIndex, PointIndex);
			}
		}
	}

	RemoveUnusedPointInfo(RuntimeData);
}

void ARespawnEditorGroupData::UpdateEditorViewInfo(URespawnDataBase* RuntimeData)
{
	if (RuntimeData != nullptr)
	{
		UpdateEditorViewInfoInternal(RuntimeData);
	}
}

bool ARespawnEditorGroupData::IsContainRespawnPoint(ARespawnEditorPointBase* Point)
{
	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		int Index = MapInfos[MapInfoIndex].IsContainRespawnPoint(Point);

		if (Index != INDEX_NONE)
			return true;
	}

	return false;
}

void ARespawnEditorGroupData::RemoveUnusedPointInfo(URespawnDataBase* RuntimeData)
{
	if (RuntimeData != nullptr)
	{
		for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
		{
			RemoveUnusedPointInfoInternal(RuntimeData, MapInfoIndex);
		}
	}
}

int ARespawnEditorGroupData::FindRuntimeDataMapInfoIndex(URespawnDataBase* RuntimeData)
{
	int Index = INDEX_NONE;

	for (int i = 0; i < MapInfos.Num(); i++)
	{
		if (MapInfos[i].RuntimeData == RuntimeData)
		{
			Index = i;

			break;
		}
	}

	return Index;
}

int ARespawnEditorGroupData::FindRuntimeDataMapInfoIndex(URespawnDataBase* RuntimeData, int LocalGroupIndex)
{
	int Index = INDEX_NONE;

	for (int i = 0; i < MapInfos.Num(); i++)
	{
		if (MapInfos[i].RuntimeData == RuntimeData && LocalGroupIndex == MapInfos[i].GroupIndex)
		{
			Index = i;

			break;
		}
	}

	return Index;
}

void ARespawnEditorGroupData::RemoveEditorPoint(ARespawnEditorPoint* Point)
{
	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		bool HaveFindCorrespondPoint = false;

		for (int i = 0; i < MapInfos[MapInfoIndex].EditorPoints.Num(); i++)
		{
			if (MapInfos[MapInfoIndex].EditorPoints[i] == Point)
			{
				URespawnTaskGroupData* GroupData = Cast<URespawnTaskGroupData>(MapInfos[MapInfoIndex].RuntimeData);

				HaveFindCorrespondPoint = true;

				if (GroupData != nullptr)
				{
					//First remove data in the runtime data
					{
						TArray<int> Indexs;

						Point->GetMatchedIndexForData(Indexs, GroupData);

						for (int PointIndex = 0; PointIndex < Indexs.Num(); PointIndex++)
						{
							GroupData->GetRespawnData().RemoveData(MapInfos[MapInfoIndex].GroupIndex, Point->GetRespawnInfo()[Indexs[PointIndex]].PointIndex);
						}
					}

					//Second update the index of point in the point info
					{
						TArray<FRespawnPointSingleInfo*> PointInfos;
						GetMatchedPointInfo(PointInfos, MapInfos[MapInfoIndex].RuntimeData, MapInfos[MapInfoIndex].GroupIndex);

						TArray<int> Indexs;
						Point->GetMatchedIndexForData(Indexs, GroupData, MapInfos[MapInfoIndex].GroupIndex);

						TArray<FRespawnPointSingleInfo> ComparePointInfos;

						for (int PointIndex = 0; PointIndex < Indexs.Num(); PointIndex++)
						{
							ComparePointInfos.Add(Point->GetRespawnInfo()[Indexs[PointIndex]]);
						}
						
						ComparePointInfos.Sort([](const FRespawnPointSingleInfo& A, const FRespawnPointSingleInfo& B) {
							if (A.PointIndex < B.PointIndex)
								return true;
							else return false;
						});
						
						for (int LocallIndex = 0; LocallIndex < ComparePointInfos.Num(); LocallIndex++)
						{
							for (int LocalPointInfoIndex = 0; LocalPointInfoIndex < PointInfos.Num(); LocalPointInfoIndex++)
							{
								if (ComparePointInfos[LocallIndex].PointIndex < PointInfos[LocalPointInfoIndex]->PointIndex)
								{
									PointInfos[LocalPointInfoIndex]->PointIndex--;
								}
							}
							
						}
					}

					MapInfos[MapInfoIndex].EditorPoints.RemoveAt(i--);
				}
			}
		}
	}

}

void ARespawnEditorGroupData::RemoveUnusedPointInfoInternal(URespawnDataBase* RuntimeData, int MapInfoIndex)
{
	URespawnTaskGroupData* GroupData = Cast<URespawnTaskGroupData>(RuntimeData);

	if (GroupData == nullptr || !MapInfos.IsValidIndex(MapInfoIndex))
		return;

	for (int i = 0; i < MapInfos[MapInfoIndex].EditorPoints.Num(); i++)
	{
		if(MapInfos[MapInfoIndex].EditorPoints[i] == nullptr)
			continue;

		FRespawnPointGroupInfo& CopyData = MapInfos[MapInfoIndex].EditorPoints[i]->GetRespawnInfo();

		for (int InfoIndex = 0; InfoIndex < CopyData.GroupInfos.Num(); InfoIndex++)
		{
			if (CopyData[InfoIndex].RespawnData == GroupData)
			{
				if (CopyData[InfoIndex].GroupIndex >= GroupData->Data.GruopInfos.Num())
				{
					CopyData.RemoveSindleInfo(InfoIndex);
				}
				else if (CopyData[InfoIndex].PointIndex >= GroupData->Data.GruopInfos[CopyData[InfoIndex].GroupIndex].GroupPoints.Num())
				{
					CopyData.RemoveSindleInfo(InfoIndex);
				}
			}
		}
	}
}

int ARespawnEditorGroupData::GetMathchedPointAtLocalPointsPool(int MapInfoIndex, int LocalGroupIndex, int PointIndex)
{
	int Result = INDEX_NONE;

	if (!MapInfos.IsValidIndex(MapInfoIndex))
		return Result;

	for (int EditorPointIndex = 0; EditorPointIndex < MapInfos[MapInfoIndex].EditorPoints.Num(); EditorPointIndex++)
	{
		if(MapInfos[MapInfoIndex].EditorPoints[EditorPointIndex] == nullptr)
			continue;

		int Index = MapInfos[MapInfoIndex].EditorPoints[EditorPointIndex]->GetMatchedIndexForData(MapInfos[MapInfoIndex].RuntimeData, LocalGroupIndex, PointIndex);

		if (Index != INDEX_NONE)
		{
			Result = EditorPointIndex;
			break;
		}
			
	}

	return Result;
}

void ARespawnEditorGroupData::GetMatchedPointInfo(TArray<FRespawnPointSingleInfo*>& PointInfos, URespawnDataBase* RuntimeData, int GroupIndex)
{
	PointInfos.Empty();

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		for (int PointIndex = 0; PointIndex < MapInfos[MapInfoIndex].EditorPoints.Num(); PointIndex++)
		{
			TArray<int> Indexs;

			if (MapInfos[MapInfoIndex].EditorPoints[PointIndex] != nullptr)
			{
				MapInfos[MapInfoIndex].EditorPoints[PointIndex]->GetMatchedIndexForData(Indexs, RuntimeData, GroupIndex);

				for (int i = 0; i < Indexs.Num(); i++)
				{
					PointInfos.Add(&MapInfos[MapInfoIndex].EditorPoints[PointIndex]->GetRespawnInfo()[Indexs[i]]);
				}
			}
		}
	}
}

ARespawnEditorPoint* ARespawnEditorGroupData::GetMathchedPointAtWorldPointsPool(int MapInfoIndex, int LocalGroupIndex, int PointIndex)
{

	if (!MapInfos.IsValidIndex(MapInfoIndex))
		return nullptr;

	for (TActorIterator<ARespawnEditorPoint> it(GetWorld()); it; ++it)
	{
		ARespawnEditorPoint* EditorPoint = *it;

		if (EditorPoint->GetMatchedIndexForData(MapInfos[MapInfoIndex].RuntimeData, LocalGroupIndex, PointIndex) != INDEX_NONE)
		{
			return EditorPoint;
		}
	}

	return nullptr;
}

#if WITH_EDITOR

void ARespawnEditorGroupData::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		MapInfos[MapInfoIndex].UpdateRelationShipLine();
	}
}

void ARespawnEditorGroupData::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		MapInfos[MapInfoIndex].UpdateRelationShipLine();
	}

}

void ARespawnEditorGroupData::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		MapInfos[MapInfoIndex].UpdateRelationShipLine();
	}
}


void ARespawnEditorGroupData::ApplyEditorConfigData(ARespawnEditorPointBase* PointInfo)
{
	ARespawnEditorPoint* Point = Cast<ARespawnEditorPoint>(PointInfo);

	if (Point == nullptr)
		return;

	for (int MapInfoIndex = 0; MapInfoIndex < MapInfos.Num(); MapInfoIndex++)
	{
		for (int i = 0; i < MapInfos[MapInfoIndex].EditorPoints.Num(); i++)
		{
			if (MapInfos[MapInfoIndex].EditorPoints[i] == Point)
			{
				TArray<FRespawnPointSingleInfo>& Infos = Point->GetRespawnInfo().GroupInfos;
				for (int DataIndex = 0; DataIndex < Infos.Num(); DataIndex++)
				{
					if (Infos[DataIndex].RespawnData == MapInfos[MapInfoIndex].RuntimeData)
					{
						URespawnTaskGroupData* RespawnData = Cast<URespawnTaskGroupData>(MapInfos[MapInfoIndex].RuntimeData);

						if (RespawnData != nullptr)
						{
							TArray<int> Indexs;
							Point->GetMatchedIndexForData(Indexs, MapInfos[MapInfoIndex].RuntimeData);

							for (int EditorPointInfoIndex = 0; EditorPointInfoIndex < Indexs.Num(); EditorPointInfoIndex++)
							{
								FSingleRespawnPointInfo SingleInfo;
								SingleInfo.Transform = Point->GetActorTransform();
								SingleInfo.PreFilterCondition = Point->GetPreFilterCondition();
								SingleInfo.PostProcess.Append(Point->GetPostProcess());
								RespawnData->Data.SetData(Infos[DataIndex].GroupIndex, Infos[DataIndex].PointIndex, SingleInfo);
							}
						}
					}
				}
			}
		}
	}
}

#endif