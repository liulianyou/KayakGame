#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/CapsuleComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/CollisionProfile.h"
#include "Components/SplineComponent.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"

#if WITH_EDITOR
#include "Editor.h"
#include "Engine/Selection.h"
#include "Editor/EditorEngine.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/TextRenderComponent.h"
#endif

AAISpawnPointActor::AAISpawnPointActor(const FObjectInitializer& ObjectInitializer) :
    Super(ObjectInitializer)
    , bSetAllPlayerToAIThreat(false)
    , TextRelativeHeight(-1000)
    , TextWorldSize(26)
{
    //create components like character to show point.
    PreviewCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PreviewCapsule"));
    PreviewCapsuleComponent->InitCapsuleSize(34.0f, 88.0f);
    PreviewCapsuleComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);

    PreviewCapsuleComponent->CanCharacterStepUpOn = ECB_No;
    PreviewCapsuleComponent->SetShouldUpdatePhysicsVolume(true);
    PreviewCapsuleComponent->SetCanEverAffectNavigation(false);
    PreviewCapsuleComponent->bDynamicObstacle = true;
    RootComponent = PreviewCapsuleComponent;

#if WITH_EDITORONLY_DATA
    PreviewArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("PreviewArrow"));
    if (PreviewArrowComponent)
    {
        PreviewArrowComponent->ArrowColor = FColor(150, 200, 255);
        PreviewArrowComponent->SetupAttachment(PreviewCapsuleComponent);
        PreviewArrowComponent->bIsScreenSizeScaled = true;
    }
#endif

    PreviewMeshComponent = CreateOptionalDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewMesh"));
    if (PreviewMeshComponent)
    {
        PreviewMeshComponent->AlwaysLoadOnClient = true;
        PreviewMeshComponent->AlwaysLoadOnServer = true;
        PreviewMeshComponent->bOwnerNoSee = false;
        PreviewMeshComponent->bCastDynamicShadow = true;
        PreviewMeshComponent->bAffectDynamicIndirectLighting = true;
        PreviewMeshComponent->PrimaryComponentTick.TickGroup = TG_PrePhysics;
        PreviewMeshComponent->SetupAttachment(PreviewCapsuleComponent);
        static FName MeshCollisionProfileName(TEXT("CharacterMesh"));
        PreviewMeshComponent->SetCollisionProfileName(MeshCollisionProfileName);
        PreviewMeshComponent->SetGenerateOverlapEvents(false);
        PreviewMeshComponent->SetCanEverAffectNavigation(false);
    }
#if WITH_EDITOR

    TextComponent = CreateEditorOnlyDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
    if (TextComponent)
    {
        TextComponent->SetupAttachment(RootComponent);
        TextComponent->bHiddenInGame = false;
        TextComponent->SetText(FText::GetEmpty());
        TextComponent->SetHorizontalAlignment(EHTA_Center);
    }

    RelationShipLine = CreateDefaultSubobject<USplineComponent>(TEXT("RelationShipLine"));
    RelationShipLine->bSelectable = false;
    //Disable the Spline to be selected in the world
    RelationShipLine->bModifiedByConstructionScript = true;
    RelationShipLine->SetVisibility(false);
    RelationShipLine->SetupAttachment(RootComponent);

    if (HasAnyFlags(RF_ClassDefaultObject) && GetClass() == AAISpawnPointActor::StaticClass())
    {
        GEditor->GetSelectedActors()->SelectObjectEvent.AddUObject(this, &AAISpawnPointActor::OnSelectedInEditor);
    }

#endif
    SetActorEnableCollision(false);
}


void AAISpawnPointActor::PostLoad()
{
    Super::PostLoad();
    //hide line to spawner after level loaded.

#if WITH_EDITOR
    HidePreviewRelationShip();
    HideIndexText();
#endif
}

void AAISpawnPointActor::PostDuplicate(bool bDuplicateForPIE)
{
    Super::PostDuplicate(bDuplicateForPIE);

#if WITH_EDITOR
    // check the point is used in spawner, if no, remove.
    for (TMap<AAISpawnerTemplate*, int32>::TConstIterator Iter(SpawnerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Key())
        {
            if (Iter.Key()->IsUsedPoint(this) == false)
            {
                SpawnerAndCountMap.Remove(Iter.Key());
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnPointActor::PostDuplicate Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }
#endif
    SetActorEnableCollision(false);
}

void AAISpawnPointActor::Destroyed()
{
#if WITH_EDITORONLY_DATA
    ClearEditorInfo();

    //remove point from spawner.
    for (TMap<AAISpawnerTemplate*, int32>::TConstIterator Iter(SpawnerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Value() > 0 && Iter.Key())
        {
            Iter.Key()->RemovePointFromGroup(this);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnPointActor::Destroyed Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }
#endif

    Super::Destroyed();
}

const TArray<UAnimMontage*>& AAISpawnPointActor::GetSpawnMontages() const
{
    return SpawnMontages;
}


bool AAISpawnPointActor::IsSetAllPlayerToAIThreat() const
{
    return bSetAllPlayerToAIThreat;
}

FVector AAISpawnPointActor::GetTextLocation() const
{
#if WITH_EDITOR
    if (TextComponent)
    {
        return TextComponent->GetComponentLocation();
    }
#endif
    FVector TextLocation(GetActorLocation());
    TextLocation.Z += 120;
    return TextLocation;
}

#if WITH_EDITOR

void AAISpawnPointActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);
    if (PropertyChangedEvent.Property == nullptr)
    {
        return;
    }

    if (bEditorApplyTransform)
    {
        return;
    }

    static const FName PreviewMeshName("PreviewMesh");
    static const FName SpawnMontagesName("SpawnMontages");
    static const FName RelativeLocationName("RelativeLocation");
    static const FName RelativeRotationName("RelativeRotation");
    static const FName RelativeScale3DName("RelativeScale3D");
    static const FName SetAllPlayerToAIThreatName("bSetAllPlayerToAIThreat");

    FName PropertyName = PropertyChangedEvent.Property->GetFName();
    if (PropertyName == PreviewMeshName)
    {
        if (PreviewMeshComponent)
        {
            PreviewMeshComponent->SetStaticMesh(PreviewMesh);
        }
    }
    else if (SpawnMontagesName == PropertyName || 
        (PropertyChangedEvent.MemberProperty && (PropertyChangedEvent.MemberProperty->GetFName() == RelativeLocationName
            || PropertyChangedEvent.MemberProperty->GetFName() == RelativeRotationName
            || PropertyChangedEvent.MemberProperty->GetFName() == RelativeScale3DName))
        || SetAllPlayerToAIThreatName == PropertyName)
    {
        SynchronizeToSpanwer();
    }
    else
    {
        if (PreviewMeshComponent)
        {
            PreviewMeshComponent->SetRelativeLocation(PreviewMeshLocation);
            PreviewMeshComponent->SetRelativeRotation(PreviewMeshRotation);
        }
        UpdateTextRender();
    }

}

void AAISpawnPointActor::EditorApplyTranslation(const FVector& DeltaTranslation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    bEditorApplyTransform = true;

    Super::EditorApplyTranslation(DeltaTranslation, bAltDown, bShiftDown, bCtrlDown);
    SynchronizeToSpanwer();
    bEditorApplyTransform = false;
}

void AAISpawnPointActor::EditorApplyRotation(const FRotator& DeltaRotation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    bEditorApplyTransform = true;

    Super::EditorApplyRotation(DeltaRotation, bAltDown, bShiftDown, bCtrlDown);

    SynchronizeToSpanwer();
    bEditorApplyTransform = false;
}

void AAISpawnPointActor::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
    bEditorApplyTransform = true;

    Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);

    SynchronizeToSpanwer();
    bEditorApplyTransform = false;
}

void AAISpawnPointActor::ShowPreviewRelationshipTo(FVector Endposition)
{
    if (RelationShipLine)
    {
        RelationShipLine->SetVisibility(true);
        int NumberPoints = RelationShipLine->GetNumberOfSplinePoints();
        RelationShipLine->SetLocationAtSplinePoint(0, GetActorLocation(), ESplineCoordinateSpace::World);
        RelationShipLine->SetLocationAtSplinePoint(NumberPoints - 1, Endposition, ESplineCoordinateSpace::World);
    }
}

void AAISpawnPointActor::HidePreviewRelationShip()
{
    if (RelationShipLine)
    {
        RelationShipLine->SetVisibility(false);
    }
}

void AAISpawnPointActor::UsedInSpawner(AAISpawnerTemplate* InSpawner)
{
    if (InSpawner == nullptr)
    {
        return;
    }
    int32* FindResult = SpawnerAndCountMap.Find(InSpawner);
    if (FindResult == nullptr)
    {//no, add.
        SpawnerAndCountMap.Add(InSpawner, 1);
        if (InSpawner->IsSpawnerSelectedInEditor())
        {
            ShowPreviewRelationshipTo(InSpawner->GetActorLocation());
        }
    }
    else
    {//count +1.
        ++(*FindResult);
    }
}

void AAISpawnPointActor::RemovedInSpawner(AAISpawnerTemplate* InSpawner)
{
    if (InSpawner == nullptr)
    {
        return;
    }

    int32* FindResult = SpawnerAndCountMap.Find(InSpawner);
    if (FindResult == nullptr)
    {//there are something wrong.
        return;
    }
    else
    {//count +1.
        --(*FindResult);
        if ((*FindResult) < 1)
        {//the spawner not use the point any more.
            SpawnerAndCountMap.Remove(InSpawner);

            if (InSpawner->IsSpawnerSelectedInEditor())
            {
                HidePreviewRelationShip();
                HideIndexText();
            }
        }
    }
}

void AAISpawnPointActor::ShowIndexText(int32 IndexValue, bool bNeedInit)
{
    if (bNeedInit)
    {
        IndexText = FString::FromInt(IndexValue);
    }
    else
    {
        IndexText += TEXT(" , ");
        IndexText.AppendInt(IndexValue);
    }

    if (TextComponent)
    {
        TextComponent->SetText(FText::FromString(IndexText));
        TextComponent->SetVisibility(true);
    }
}

void AAISpawnPointActor::HideIndexText()
{
    IndexText.Reset();
    if (TextComponent)
    {
        TextComponent->SetVisibility(false);
    }
}

void AAISpawnPointActor::UpdateTextRender()
{
    if (TextComponent)
    {
        TextComponent->SetRelativeLocation(FVector(0, 0, TextRelativeHeight));

        if (TextMaterial)
        {
            TextComponent->SetTextMaterial(TextMaterial);
        }
        if (Font)
        {
            TextComponent->SetFont(Font);
        }
        TextComponent->SetTextRenderColor(TextRenderColor);
        TextComponent->SetWorldSize(TextWorldSize);
    }
}

void AAISpawnPointActor::SynchronizeToSpanwer()
{
    //synchronize point info to spawner.
    for (TMap<AAISpawnerTemplate*, int32>::TConstIterator Iter(SpawnerAndCountMap); Iter; ++Iter)
    {
        if (Iter.Value() > 0 && Iter.Key())
        {
            Iter.Key()->UpdateInfoByPoint(this);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("AAISpawnPointActor::SynchrionizeToSpanwer Error %s %d %d"), *GetActorLabel(), Iter.Value(), Iter.Key());
        }
    }

//     if (TextComponent)
//     {
//         FRotator ActorRotation = GetActorRotation();
//         ActorRotation.Yaw = -ActorRotation.Yaw;
//         TextComponent->SetRelativeRotation(ActorRotation);
//     }
}

void AAISpawnPointActor::OnSelectedInEditor(UObject* SelectedObject)
{
    AAISpawnPointActor* Point = Cast<AAISpawnPointActor>(SelectedObject);
    if (Point)
    {
        //hide the line to spawner.
        Point->ShowPreviewRelationshipTo(Point->GetActorLocation());
    }
}

void AAISpawnPointActor::ClearEditorInfo()
{
    Children.Empty();
}

#endif