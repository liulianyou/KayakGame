#include "Widget/STriggerPointIndexPanel.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"

#include "Widgets/Text/STextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Types/PaintArgs.h"
#include "Layout/ArrangedChildren.h"
#include "Layout/LayoutUtils.h"
#include "Rendering/DrawElements.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateColor.h"
#include "Engine/Selection.h"
#include "Editor/EditorEngine.h"
#include "Widgets/SOverlay.h"
#include "Slate/SceneViewport.h"
#include "Widgets/SViewport.h"

#define DisablePointIndexPanel 1

TSharedPtr<STriggerPointIndexPanel> STriggerPointIndexPanel::InstancePanel = nullptr;

static bool bHidePanel = false;

void STriggerPointIndexPanel::InitPanel()
{
#if DisablePointIndexPanel
    return;
#endif
    if (InstancePanel.IsValid())
    {
        return;
    }
    SAssignNew(InstancePanel, STriggerPointIndexPanel);


    UEditorEngine* EditorEngine = CastChecked<UEditorEngine>(GEngine);
    FSceneViewport* EditorViewport = (FSceneViewport*)EditorEngine->GetActiveViewport();
    if (EditorViewport->GetClient() != STriggerPointIndexPanel::GetPerspectiveClient())
    {
        return;
    }
    
    if (EditorViewport && EditorViewport->GetViewportWidget().IsValid())
    {
        TWeakPtr<SViewport> ViewportWidget = EditorViewport->GetViewportWidget();
        FChildren* ViewportChildSlot = ViewportWidget.Pin()->GetChildren();
        if (ViewportChildSlot->Num() != 1)
        {
            return;
        }
        TSharedRef<SOverlay> ViewportChild = StaticCastSharedRef<SOverlay>(ViewportChildSlot->GetChildAt(0));
        ViewportChild->AddSlot()
            .HAlign(HAlign_Fill)
            .VAlign(VAlign_Fill)
            .Padding(0.0f)
            [
                InstancePanel.ToSharedRef()
            ]
        ;
    }
}

void STriggerPointIndexPanel::Clear()
{
    if (InstancePanel.IsValid())
    {
        //InstancePanel->GetSelectedObject.Unbind();
        InstancePanel.Reset();
    }
}

void STriggerPointIndexPanel::SetSelectedObject(UObject* CurSelected)
{
    if (InstancePanel.IsValid())
    {
        InstancePanel->SelectedInEditor(CurSelected);
    }
}

void STriggerPointIndexPanel::TogglePanelVisible()
{
    bHidePanel = !bHidePanel;
    if (InstancePanel.IsValid() && bHidePanel)
    {
        InstancePanel->SetVisibility(EVisibility::Collapsed);
    }
}

STriggerPointIndexPanel::STriggerPointIndexPanel()
    : Children(this)
{
    SetCanTick(false);
}

// void STriggerPointIndexPanel::BindGetSelectedDelegate(FGetSelectedObjectDelegate InGetSelectedObject)
// {
//     if (InstancePanel.IsValid())
//     {
//         InstancePanel->GetSelectedObject = InGetSelectedObject;
//     }
// }

void STriggerPointIndexPanel::Construct(const FArguments& InArgs)
{
    TextStyle = FCoreStyle::Get().GetWidgetStyle<FTextBlockStyle>("NormalText");
    TextStyle.SetFontSize(25);


    if (GEditor)
    {
        GEditor->GetSelectedActors()->SelectObjectEvent.AddSP(this, &STriggerPointIndexPanel::SelectedInEditor);
    }
}

STriggerPointIndexPanel::FSlot& STriggerPointIndexPanel::AddSlot()
{
    FSlot& NewSlot = *new FSlot();

    this->Children.Add(&NewSlot);

    Invalidate(EInvalidateWidget::Layout);

    return NewSlot;
}

void STriggerPointIndexPanel::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    SPanel::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);
//     if (GetSelectedObject.IsBound() == false)
//     {
//         return;
//     }
// 
//     UObject* Selected = GetSelectedObject.Execute();
    if (SelectedObject.IsValid() == false)
    {
        SetVisibility(EVisibility::Collapsed);
        return;
    }
    AAISpawnerTemplate* SelectedSpawner = Cast<AAISpawnerTemplate>(SelectedObject.Get());
    if (SelectedSpawner == nullptr)
    {
        SetVisibility(EVisibility::Collapsed);
        return;
    }

    const int16 PointNum = SelectedSpawner->SpawnPointsGroup.Num();
    TextStringArr.Reset();
    TextStringArr.Reserve(PointNum);
    TArray<FVector2D> ScreenPosArr;
    ScreenPosArr.Reserve(PointNum);
    TMap<AAISpawnPointActor*, int32> Point2IndexMap;

    FEditorViewportClient* ViewportClient = STriggerPointIndexPanel::GetPerspectiveClient();

    if (ViewportClient == nullptr)
    {
        return;
    }

    FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
        ViewportClient->Viewport,
        ViewportClient->GetScene(),
        ViewportClient->EngineShowFlags)
        .SetRealtimeUpdate(ViewportClient->IsRealtime()));
    FSceneView* SceneView = ViewportClient->CalcSceneView(&ViewFamily);
    if (SceneView == nullptr)
    {
        return;
    }
    FVector2D SceneViewSzie(SceneView->UnconstrainedViewRect.Width(), SceneView->UnconstrainedViewRect.Height());

    //APlayerController* Player = nullptr;
    for (int16 i = 0; i < PointNum; ++i)
    {
        if (SelectedSpawner->SpawnPointsGroup[i].Point == nullptr)
        {
            continue;
        }

        int32* IndexInArr = Point2IndexMap.Find(SelectedSpawner->SpawnPointsGroup[i].Point);
        if (IndexInArr)
        {
            TextStringArr[*IndexInArr] += TEXT(" , ");
            TextStringArr[*IndexInArr].AppendInt(i);
        }
        else
        {
            Point2IndexMap.Add(SelectedSpawner->SpawnPointsGroup[i].Point, TextStringArr.Num());
            TextStringArr.Add(FString::FromInt(i));
//             if (Player == nullptr)
//             {
//                 Player = UGameplayStatics::GetPlayerController(SelectedSpawner->SpawnPointsGroup[i].Point, 0);
//             }
            //UGameplayStatics::ProjectWorldToScreen(Player, SelectedSpawner->SpawnPointsGroup[i].Point->GetActorLocation(), ScreenPos);
            FVector4 ScreenPos4 = SceneView->WorldToScreen(SelectedSpawner->SpawnPointsGroup[i].Point->GetTextLocation());

            const float RHW = 1.0f / ScreenPos4.W;
            FPlane PosInScreenSpace = FPlane(ScreenPos4.X * RHW, ScreenPos4.Y * RHW, ScreenPos4.Z * RHW, ScreenPos4.W);

            // Move from projection space to normalized 0..1 UI space
            const float NormalizedX = (PosInScreenSpace.X / 2.f) + 0.5f;
            const float NormalizedY = 1.f - (PosInScreenSpace.Y / 2.f) - 0.5f;

            FVector2D ScreenPos(
                (NormalizedX * SceneViewSzie.X),
                (NormalizedY * SceneViewSzie.Y)
            );//this is the local position in scene view.

            ScreenPosArr.Add(ScreenPos);
        }
    }

    //new if need.
    for (int32 i = PointTextArr.Num(); i < TextStringArr.Num(); ++i)
    {
        TSharedPtr<STextBlock> TextBlock;
        AddSlot()
            [
                SAssignNew(TextBlock, STextBlock)
                .TextStyle(&TextStyle)
                .Visibility(EVisibility::HitTestInvisible)
            ];
        PointTextArr.Add(TextBlock);
    }

    //update
    const FGeometry& CachedGeometry = GetTickSpaceGeometry();
    for (int32 i = 0; i < TextStringArr.Num(); ++i)
    {
        TSharedPtr<STextBlock> TextWidget = PointTextArr[i].Pin();
        TextWidget->SetText(FText::FromString(TextStringArr[i]));
        TextWidget->SetVisibility(EVisibility::HitTestInvisible);
        //const FVector2D ViewportPosition = CachedGeometry.GetLocalSize() * (ScreenPosArr[i] / SceneViewSzie);
        Children[i].Offset = ScreenPosArr[i];//because the viewport geometry is the same with the panel, so use the ViewportPosition as local position.
        Children[i].Offset.X += -0.5f * TextWidget->GetDesiredSize().X;
    }

    //hide if need.
    for (int32 i = TextStringArr.Num(); i < PointTextArr.Num(); ++i)
    {
        PointTextArr[i].Pin()->SetVisibility(EVisibility::Collapsed);
    }
}

void STriggerPointIndexPanel::OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const
{
    for (int32 ChildIndex = 0; ChildIndex < Children.Num(); ++ChildIndex)
    {
        const FSlot& CurChild = Children[ChildIndex];
        const EVisibility ChildVisibility = CurChild.GetWidget()->GetVisibility();
        if (ArrangedChildren.Accepts(ChildVisibility))
        {
            ArrangedChildren.AddWidget(ChildVisibility, AllottedGeometry.MakeChild(
                CurChild.GetWidget(),
                CurChild.Offset,
                CurChild.GetWidget()->GetDesiredSize()
            ));
        }
    }
}

FChildren* STriggerPointIndexPanel::GetChildren()
{
    return &Children;
}

int32 STriggerPointIndexPanel::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    FArrangedChildren ArrangedChildren(EVisibility::Visible);
    {
        // The box panel has no visualization of its own; it just visualizes its children.
        ArrangeChildren(AllottedGeometry, ArrangedChildren);
    }


    FPaintArgs NewArgs = Args.WithNewParent(this);
    const bool bChildrenEnabled = ShouldBeEnabled(bParentEnabled);


    for (int32 ChildIndex = 0; ChildIndex < ArrangedChildren.Num(); ++ChildIndex)
    {
        FArrangedWidget& CurArrangedWidget = ArrangedChildren[ChildIndex];

        CurArrangedWidget.Widget->Paint(
            NewArgs,
            CurArrangedWidget.Geometry,
            MyCullingRect,
            OutDrawElements,
            LayerId,
            InWidgetStyle,
            bChildrenEnabled);
    }

    return LayerId;
}

FVector2D STriggerPointIndexPanel::ComputeDesiredSize(float) const
{
    return FVector2D(1920, 1080);
}

void STriggerPointIndexPanel::SelectedInEditor(UObject* CurSelectedObject)
{
    if (bHidePanel)
    {
        return;
    }
    if (SelectedObject.Get() == CurSelectedObject)
    {
        return;
    }
    AAISpawnerTemplate* SelectedSpawner = Cast<AAISpawnerTemplate>(CurSelectedObject);
    if (SelectedSpawner == nullptr)
    {
        SelectedObject.Reset();
        SetVisibility(EVisibility::Collapsed);
    }
    else
    {
        SelectedObject = CurSelectedObject;
        SetCanTick(true);
        SetVisibility(EVisibility::HitTestInvisible);
    }
}

FSceneView* STriggerPointIndexPanel::GetSceneView()
{
    FEditorViewportClient* ViewportClient = STriggerPointIndexPanel::GetPerspectiveClient();

    if (ViewportClient)
    {
        FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
            ViewportClient->Viewport,
            ViewportClient->GetScene(),
            ViewportClient->EngineShowFlags)
            .SetRealtimeUpdate(ViewportClient->IsRealtime()));

        return ViewportClient->CalcSceneView(&ViewFamily);
    }

    return nullptr;
}

FEditorViewportClient* STriggerPointIndexPanel::GetPerspectiveClient()
{
    FSceneViewport* EditorViewport = (FSceneViewport*)GEditor->GetActiveViewport();
    if (EditorViewport && EditorViewport->GetClient())
    {
        FEditorViewportClient* ViewportClient = StaticCast<FEditorViewportClient*>(EditorViewport->GetClient());
        // We only care about perspective viewpo1rts
        if (ViewportClient && ViewportClient->IsPerspective())
        {
            return ViewportClient;
        }
    }

    const TArray<FEditorViewportClient*>& ClientArr = GEditor->GetAllViewportClients();
    for (int16 i = 0; i < GEditor->GetAllViewportClients().Num(); ++i)
    {
        if (ClientArr[i] && ClientArr[i]->IsPerspective())
        {
            return ClientArr[i];
        }
    }
    return nullptr;
}

