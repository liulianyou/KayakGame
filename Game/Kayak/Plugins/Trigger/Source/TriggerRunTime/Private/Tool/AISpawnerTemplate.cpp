#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"
#include "Engine/Engine.h"
#include "Components/SplineComponent.h"
#include "TriggerType/SceneTrigger/SpawnerTriggerBase.h"

#if WITH_EDITOR
#include "Engine/Selection.h"
#include "Editor/EditorEngine.h"
#include "Components/BillboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#endif


FPointActor::FPointActor()
{

}
FPointActor::FPointActor(AAISpawnPointActor* InPoint)
    :Point(InPoint), SpawnMontages(InPoint->SpawnMontages)
{
}

AAISpawnerTemplate::AAISpawnerTemplate(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer), bIsAddingPoints(false)
{

#if WITH_EDITOR

    RelationShipLine = CreateDefaultSubobject<USplineComponent>(TEXT("RelationShipLine"));

    RelationShipLine->SetVisibility(false);
    RelationShipLine->bSelectable = false;
    //Disable the Spline to be selected in the world
    RelationShipLine->bModifiedByConstructionScript = true;
    SetRootComponent(RelationShipLine);

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
                , ID_AISpawnGroupDataTemplate(TEXT("AISpawnerTemplate"))
                , NAME_AISpawnGroupDataTemplate(FText::FromString(TEXT("AISpawnerTemplate")))
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

    if (HasAnyFlags(RF_ClassDefaultObject) && GetClass() == AAISpawnerTemplate::StaticClass())
    {
        GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &AAISpawnerTemplate::SelectedInEditor);
    }
#endif
    SetActorEnableCollision(false);
}

TArray<FPointActor>& AAISpawnerTemplate::GetSpawnPointsGroup()
{
    return SpawnPointsGroup;
}

void AAISpawnerTemplate::PostLoad()
{
    Super::PostLoad();
#if WITH_EDITOR
    HideSpawnerRelationShip();
#endif
}

void AAISpawnerTemplate::PostDuplicate(bool bDuplicateForPIE)
{
    Super::PostDuplicate(bDuplicateForPIE);

#if WITH_EDITOR
    // check the spawner is used in trigger, if no, remove.
    for (TMap<ASpawnerTriggerBase*, int32>::TConstIterator Iter(TriggerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Key())
        {
            if (Iter.Key()->IsUsedSpawner(this) == false)
            {
                TriggerAndCountMap.Remove(Iter.Key());
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnerTemplate::PostDuplicate Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }

    //construct connection to point.
    for (int16 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        AAISpawnPointActor* CurPoint = SpawnPointsGroup[i].Point;
        if (CurPoint)
        {
            CurPoint->UsedInSpawner(this);
        }
    }

    if (IsSpawnerSelectedInEditor())
    {//the object is duplicate, the selected delegate is not work here.
        //so switch the selected object if need.
        AAISpawnerTemplate* DefaultSpawner = AAISpawnerTemplate::StaticClass()->GetDefaultObject<AAISpawnerTemplate>();
        if (DefaultSpawner)
        {
            DefaultSpawner->SelectedInEditor(this);
        }
    }
#endif
    SetActorEnableCollision(false);
}

void AAISpawnerTemplate::Destroyed()
{
#if WITH_EDITOR

    //clear connection to spawner.
    for (int16 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        AAISpawnPointActor* CurPoint = SpawnPointsGroup[i].Point;
        if (CurPoint)
        {
            CurPoint->RemovedInSpawner(this);
        }
    }
    //remove spawner from trigger.
    for (TMap<ASpawnerTriggerBase*, int32>::TConstIterator Iter(TriggerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Value() > 0 && Iter.Key())
        {
            Iter.Key()->RemoveSpawnerFromGroup(this);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnerTemplate::Destroyed Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }

#endif
    Super::Destroyed();
}

#if WITH_EDITOR

void AAISpawnerTemplate::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);
    if (bSelectedInEditor)
    {
        ShowRelationshipWithPoint(true);
    }
}

void AAISpawnerTemplate::AddPointActor(AAISpawnPointActor* InPointActor)
{
    if (InPointActor)
    {
        SpawnPointsGroup.Add(InPointActor);
        if (bSelectedInEditor)
        {
            InPointActor->ShowPreviewRelationshipTo(GetActorLocation());
            UpdatePointIndexAfterEdit();
        }
        InPointActor->UsedInSpawner(this);
        //synchronize to trigger, if has.
        SynchronizeOnPointChange(false, SpawnPointsGroup.Num() - 1);
    }
}


bool AAISpawnerTemplate::IsUsedPoint(AAISpawnPointActor* InPointActor) const
{
    if (InPointActor == nullptr)
    {
        return false;
    }
    for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        if (SpawnPointsGroup[i].Point == InPointActor)
        {
            return true;
        }
    }
    return false;
}

void AAISpawnerTemplate::UsedInTrigger(ASpawnerTriggerBase* InTrigger)
{
    if (InTrigger == nullptr)
    {
        return;
    }
    int32* FindResult = TriggerAndCountMap.Find(InTrigger);
    if (FindResult == nullptr)
    {//no, add.
        TriggerAndCountMap.Add(InTrigger, 1);
        if (InTrigger->IsTriggerSelectedInEditor())
        {
            ShowSpawnerRelationshipTo(InTrigger->GetActorLocation());
        }
    }
    else
    {//count +1.
        ++(*FindResult);
    }
}

void AAISpawnerTemplate::RemovedInTrigger(ASpawnerTriggerBase* InTrigger)
{
    if (InTrigger == nullptr)
    {
        return;
    }

    int32* FindResult = TriggerAndCountMap.Find(InTrigger);
    if (FindResult == nullptr)
    {//there are something wrong.
        return;
    }
    else
    {//count +1.
        --(*FindResult);
        if ((*FindResult) < 1)
        {//the trigger not use the spawner any more.
            TriggerAndCountMap.Remove(InTrigger);

            if (InTrigger->IsTriggerSelectedInEditor())
            {
                HideSpawnerRelationShip();
            }
        }
    }
}

void AAISpawnerTemplate::ShowSpawnerRelationshipTo(FVector Endposition)
{
    if (RelationShipLine == nullptr)
    {
        return;
    }
    RelationShipLine->SetVisibility(true);
    const int32 NumberPoints = RelationShipLine->GetNumberOfSplinePoints();

    RelationShipLine->SetLocationAtSplinePoint(0, GetActorLocation(), ESplineCoordinateSpace::World);
    RelationShipLine->SetLocationAtSplinePoint(NumberPoints - 1, Endposition, ESplineCoordinateSpace::World);
}

void AAISpawnerTemplate::HideSpawnerRelationShip()
{
    if (RelationShipLine)
    {
        RelationShipLine->SetVisibility(false);
    }
}


void AAISpawnerTemplate::PreEditChange(FProperty* PropertyAboutToChange)
{
    if (PropertyAboutToChange == nullptr)
    {
        Super::PreEditChange(PropertyAboutToChange);
        return;
    }
    static const FName NAME_Point(TEXT("Point"));
    static const FName NAME_SpawnPointsGroup(TEXT("SpawnPointsGroup"));

    const FName PropertyName = PropertyAboutToChange->GetFName();

    if (PropertyAboutToChange && PropertyName == NAME_Point || PropertyName == NAME_SpawnPointsGroup)
    {
        //to record spawner pointer before edit, and compare with after edit.
        LastEditPointArr.Reserve(SpawnPointsGroup.Num());
        for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
        {
            LastEditPointArr.Add(SpawnPointsGroup[i].Point);
        }
    }
    Super::PreEditChange(PropertyAboutToChange);
}

void AAISpawnerTemplate::PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
    Super::PostEditChangeChainProperty(PropertyChangedEvent);

    if (PropertyChangedEvent.Property == nullptr)
    {
        return;
    }
    static const FName PointName("Point");
    static const FName SpawnPointsGroupName("SpawnPointsGroup");
    static const FName SpawnMontagesName("SpawnMontages");
    const FName PropertyName = PropertyChangedEvent.Property->GetFName();

    const int32 SpawnerGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnPointsGroup"));

    if (PropertyName == PointName)
    {
        PostEditPointProperty(PropertyChangedEvent);
        LastEditPointArr.Reset();
        UpdatePointIndexAfterEdit();
    }
    else if (PropertyName == SpawnPointsGroupName)
    {
        PostEditPointGroupProperty(PropertyChangedEvent);
        LastEditPointArr.Reset();
        UpdatePointIndexAfterEdit();
    }
    else if (PropertyName == SpawnMontagesName)
    {
        if (SpawnerGroupArrIndex < 0)
        {//array is cleared.
            for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
            {//can not figure out which point is modified, so update all point SpawnMontages.
                FPointActor& PointInfo = SpawnPointsGroup[i];
                if (PointInfo.Point)
                {
                    PointInfo.Point->SpawnMontages = PointInfo.SpawnMontages;
                }
            }
            //synchronize the spawner info to group data..
            SynchronizeOnPointChange( false, -1);
            return;
        }
        FPointActor& PointInfo = SpawnPointsGroup[SpawnerGroupArrIndex];
        if (PointInfo.Point)
        {
            PointInfo.Point->SpawnMontages = PointInfo.SpawnMontages;
        }
        SynchronizeOnPointChange(false, SpawnerGroupArrIndex);
    }

    //to do : other property.
    if (PropertyChangedEvent.ChangeType != EPropertyChangeType::ArrayClear
        && PropertyChangedEvent.ChangeType != EPropertyChangeType::ArrayRemove)
    {
        //synchronize the spawner info to group data.
    }
}

void AAISpawnerTemplate::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    static const FName RelativeLocationName("RelativeLocation");
    if (PropertyChangedEvent.MemberProperty && PropertyChangedEvent.MemberProperty->GetFName() == RelativeLocationName)
    {//update lines with point if location changed.
        if (IsSpawnerSelectedInEditor())
        {
            ShowRelationshipWithPoint(true);
        }
    }
}

bool AAISpawnerTemplate::IsSpawnerSelectedInEditor() const
{
    return bSelectedInEditor || IsSelectedInEditor();
}

void AAISpawnerTemplate::SelectedInEditor(UObject* SelectedObject)
{
    if (SelectedObject && SelectedObject->IsA(AAISpawnerTemplate::StaticClass()))
    {
        if (LastSelectedSpawner.Get() == SelectedObject)
        {
            return;
        }
        if (LastSelectedSpawner.IsValid())
        {
            LastSelectedSpawner->OnSelectedInEditor(false);
        }

        LastSelectedSpawner = Cast<AAISpawnerTemplate>(SelectedObject);
        LastSelectedSpawner->OnSelectedInEditor(true);
    }
    else
    {
        if (LastSelectedSpawner.IsValid())
        {
            LastSelectedSpawner->OnSelectedInEditor(false);
            LastSelectedSpawner.Reset();
        }
    }
}

void AAISpawnerTemplate::RemovePointFromGroup(AAISpawnPointActor* ToRemovedPoint)
{//called by point.
    for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        if (SpawnPointsGroup[i].Point != ToRemovedPoint)
        {
            continue;
        }
        //remove from data group.
        SynchronizeOnPointChange(true, i);

        SpawnPointsGroup.RemoveAt(i);
        --i;
    }
}

void AAISpawnerTemplate::UpdateInfoByPoint(AAISpawnPointActor* InPoint)
{//called by point.
    for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        if (SpawnPointsGroup[i].Point != InPoint)
        {
            continue;
        }
        SpawnPointsGroup[i].SpawnMontages = InPoint->GetSpawnMontages();

        //synchronize info to trigger.
        SynchronizeOnPointChange(false, i);
    }
}

void AAISpawnerTemplate::PostEditPointProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{//construct point to spawner connection.
    const int32 PointGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnPointsGroup"));
    if (PointGroupArrIndex == INDEX_NONE)
    {
        return;
    }
    AAISpawnPointActor* OldPoint = nullptr;
    if (LastEditPointArr.Num() > PointGroupArrIndex)
    {
        OldPoint = LastEditPointArr[PointGroupArrIndex];
    }
    AAISpawnPointActor* CurPoint = GetPointInGroupByIndex(PointGroupArrIndex);
    if (CurPoint != OldPoint)
    {
        if (OldPoint)
        {//remove old connection.
            OldPoint->RemovedInSpawner(this);
        }

        if (CurPoint)
        {//construct new connection.
            CurPoint->UsedInSpawner(this);
            SpawnPointsGroup[PointGroupArrIndex].SpawnMontages = CurPoint->GetSpawnMontages();
            //sync to data group.
            SynchronizeOnPointChange(false, PointGroupArrIndex);
        }
        else
        {
            SpawnPointsGroup[PointGroupArrIndex].SpawnMontages.Reset();
        }
    }
}

void AAISpawnerTemplate::PostEditPointGroupProperty(FPropertyChangedChainEvent& PropertyChangedEvent)
{
    if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayRemove)
    {//on SpawnerGroup element is removed, remove the spawner info in data group.
        int32 RemovedIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnPointsGroup"));

        //sync to data group.
        SynchronizeOnPointChange(true, RemovedIndex);

        //remove old connection.
        if (LastEditPointArr.Num() > RemovedIndex)
        {
            AAISpawnPointActor* OldPoint = LastEditPointArr[RemovedIndex];
            if (OldPoint)
            {//remove old connection.
                OldPoint->RemovedInSpawner(this);
            }
        }
    }
    else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayClear)
    {
        //sync to data group.
        SynchronizeOnPointChange(true, -1);

        //clear old connection.
        for (int16 i = 0; i < LastEditPointArr.Num(); ++i)
        {
            AAISpawnPointActor* OldPoint = LastEditPointArr[i];
            if (OldPoint)
            {
                OldPoint->RemovedInSpawner(this);
            }
        }
    }
    else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
    {//set SpawnerGroup by copy-paste in property editor.

        int32 SetIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnPointsGroup"));
        if (SetIndex != INDEX_NONE)
        {//set element.
            PostEditPointProperty(PropertyChangedEvent);
            return;
        }
        SynchronizeOnPointChange(true, -1);
        //clear old connection.
        for (int16 i = 0; i < LastEditPointArr.Num(); ++i)
        {
            AAISpawnPointActor* OldPoint = LastEditPointArr[i];
            if (OldPoint)
            {
                OldPoint->RemovedInSpawner(this);
            }
        }

        SynchronizeOnPointChange(false, -1);
        //construct new connection to spawner.
        for (int16 i = 0; i < SpawnPointsGroup.Num(); ++i)
        {
            AAISpawnPointActor* CurPoint = SpawnPointsGroup[i].Point;
            if (CurPoint)
            {
                CurPoint->UsedInSpawner(this);
            }
        }
    }
    else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ArrayAdd)
    {
        const int32 PointGroupArrIndex = PropertyChangedEvent.GetArrayIndex(TEXT("SpawnPointsGroup"));
        SynchronizeOnPointChange(false, PointGroupArrIndex);
    }
}

void AAISpawnerTemplate::OnSelectedInEditor(bool bInSelected)
{
    if (bSelectedInEditor == bInSelected)
    {
        return;
    }
    if (bInSelected)
    {
        //hide the line to trigger. the set visibility is not work when actor is selected.
        ShowSpawnerRelationshipTo(GetActorLocation());
    }
    bSelectedInEditor = bInSelected;
    ShowRelationshipWithPoint(bInSelected);
    UpdatePointIndexAfterEdit();
}

void AAISpawnerTemplate::ShowRelationshipWithPoint(bool bToShow)
{
    //show RelationShipSpline.
    for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        if (SpawnPointsGroup[i].Point == nullptr)
        {
            continue;
        }

        if (bSelectedInEditor == false)
        {
            SpawnPointsGroup[i].Point->HidePreviewRelationShip();
            SpawnPointsGroup[i].Point->HideIndexText();
            continue;
        }

        SpawnPointsGroup[i].Point->ShowPreviewRelationshipTo(GetActorLocation());
    }
}

AAISpawnPointActor* AAISpawnerTemplate::GetPointInGroupByIndex(int32 Index)
{
    if (Index >= 0 && SpawnPointsGroup.Num() > Index)
    {
        return SpawnPointsGroup[Index].Point;
    }
    else
    {
        return nullptr;
    }
}

void AAISpawnerTemplate::SynchronizeOnPointChange(bool bRemoved, int32 PointIndex)
{
    if (bRemoved)
    {
        for (TMap<ASpawnerTriggerBase*, int32>::TConstIterator Iter(TriggerAndCountMap); Iter; ++Iter)
        {
            if (Iter.Value() > 0 && Iter.Key())
            {
                Iter.Key()->UpdateOnPointRemvedInSpawner(this, PointIndex);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("AAISpawnerTemplate::SynchronizeOnPointChange Remove Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
            }
        }
        return;
    }

    for (TMap<ASpawnerTriggerBase*, int32>::TConstIterator Iter(TriggerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Value() > 0 && Iter.Key())
        {
            Iter.Key()->UpdateOnPointUpdateInSpawner(this, PointIndex);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnerTemplate::SynchronizeOnPointChange Update Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }
}

void AAISpawnerTemplate::UpdatePointIndexAfterEdit()
{
    if (IsSpawnerSelectedInEditor() == false)
    {
        return;
    }

    TSet<AAISpawnPointActor*> PointSet;//to determine if first show or not.
    for (int32 i = 0; i < SpawnPointsGroup.Num(); ++i)
    {
        if (SpawnPointsGroup[i].Point == nullptr)
        {
            continue;
        }

        if (PointSet.Contains(SpawnPointsGroup[i].Point))
        {
            SpawnPointsGroup[i].Point->ShowIndexText(i, false);
        }
        else
        {
            SpawnPointsGroup[i].Point->ShowIndexText(i, true);
            PointSet.Add(SpawnPointsGroup[i].Point);
        }
    }
}

#endif