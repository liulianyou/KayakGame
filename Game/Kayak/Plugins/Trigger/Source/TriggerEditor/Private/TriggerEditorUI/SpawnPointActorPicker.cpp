#include "TriggerEditorUI/SpawnPointActorPicker.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/SToolTip.h"
#include "EngineUtils.h"
#include "LevelEditorViewport.h"
#include "EditorModes.h"
#include "Engine/Selection.h"
#include "EditorModeManager.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"


const FEditorModeID FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker = TEXT("EM_SpawnPointActorPicker");

FEdModeSpawnPointActorPicker::FEdModeSpawnPointActorPicker()
{
}

void FEdModeSpawnPointActorPicker::Initialize()
{
    CursorDecoratorWindow = SWindow::MakeCursorDecorator();
    FSlateApplication::Get().AddWindow(CursorDecoratorWindow.ToSharedRef(), true);
    CursorDecoratorWindow->SetContent(
        SNew(SToolTip)
        .Text(this, &FEdModeSpawnPointActorPicker::GetCursorDecoratorText)
    );
}

void FEdModeSpawnPointActorPicker::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
    if (CursorDecoratorWindow.IsValid())
    {
        CursorDecoratorWindow->MoveWindowTo(FSlateApplication::Get().GetCursorPos() + FSlateApplication::Get().GetCursorSize());
    }

    FEdMode::Tick(ViewportClient, DeltaTime);
}

bool FEdModeSpawnPointActorPicker::MouseEnter(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y)
{
    PickState = EPickState::OverViewport;
    HoveredActor.Reset();
    return FEdMode::MouseEnter(ViewportClient, Viewport, x, y);
}

bool FEdModeSpawnPointActorPicker::MouseLeave(FEditorViewportClient* ViewportClient, FViewport* Viewport)
{
    PickState = EPickState::NotOverViewport;
    HoveredActor.Reset();
    return FEdMode::MouseLeave(ViewportClient, Viewport);
}

bool FEdModeSpawnPointActorPicker::MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y)
{
    if (ViewportClient == GCurrentLevelEditingViewportClient)
    {
        PickState = EPickState::OverViewport;
        HoveredActor.Reset();

        int32 HitX = Viewport->GetMouseX();
        int32 HitY = Viewport->GetMouseY();
        HHitProxy* HitProxy = Viewport->GetHitProxy(HitX, HitY);
        if (HitProxy != NULL && HitProxy->IsA(HActor::StaticGetType()))
        {
            HActor* ActorHit = static_cast<HActor*>(HitProxy);
            if (ActorHit->Actor != NULL)
            {
                AActor* Actor = ActorHit->Actor;
                while (Actor->IsChildActor())
                {
                    Actor = Actor->GetParentActor();
                }
                HoveredActor = Actor;
                PickState = IsActorValid(Actor) ? EPickState::OverActor : EPickState::OverIncompatibleActor;
            }
        }
    }
    else
    {
        PickState = EPickState::NotOverViewport;
        HoveredActor.Reset();
    }

    return true;
}

bool FEdModeSpawnPointActorPicker::LostFocus(FEditorViewportClient* ViewportClient, FViewport* Viewport)
{
    if (ViewportClient == GCurrentLevelEditingViewportClient)
    {
        // Make sure actor picking mode is disabled once the active viewport loses focus
        RequestDeletion();
        return true;
    }

    return false;
}

bool FEdModeSpawnPointActorPicker::InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event)
{
    if (ViewportClient == GCurrentLevelEditingViewportClient)
    {
        if (Key == EKeys::LeftMouseButton && Event == IE_Pressed)
        {
            // See if we clicked on an actor
            int32 HitX = Viewport->GetMouseX();
            int32 HitY = Viewport->GetMouseY();
            HHitProxy* HitProxy = Viewport->GetHitProxy(HitX, HitY);
            if (HitProxy != NULL && HitProxy->IsA(HActor::StaticGetType()))
            {
                HActor* ActorHit = static_cast<HActor*>(HitProxy);
                AActor* Actor = ActorHit->Actor;
                if (Actor->IsChildActor())
                {
                    Actor = Actor->GetParentActor();
                }
                if (IsActorValid(Actor))
                {
                    OnActorSelected.ExecuteIfBound(Actor);
                }
            }
            return true;
        }
        else if (Key == EKeys::Escape && Event == IE_Pressed)
        {
            RequestDeletion();
            return true;
        }
    }
    else
    {
        RequestDeletion();
    }

    return false;
}

bool FEdModeSpawnPointActorPicker::GetCursor(EMouseCursor::Type& OutCursor) const
{
    if (HoveredActor.IsValid() && PickState == EPickState::OverActor)
    {
        OutCursor = EMouseCursor::EyeDropper;
    }
    else
    {
        OutCursor = EMouseCursor::SlashedCircle;
    }

    return true;
}

bool FEdModeSpawnPointActorPicker::UsesToolkits() const
{
    return false;
}

bool FEdModeSpawnPointActorPicker::IsCompatibleWith(FEditorModeID OtherModeID) const
{
    // We want to be able to perform this action with all the built-in editor modes
    return OtherModeID != FBuiltinEditorModes::EM_None;
}

void FEdModeSpawnPointActorPicker::Exit()
{
    OnActorSelected = FOnActorSelected();
    OnGetAllowedClasses = FOnGetAllowedClasses();
    OnShouldFilterActor = FOnShouldFilterActor();

    if (CursorDecoratorWindow.IsValid())
    {
        CursorDecoratorWindow->RequestDestroyWindow();
        CursorDecoratorWindow.Reset();
    }

    HoveredActor.Reset();
    PickState = EPickState::NotOverViewport;

    FEdMode::Exit();
}

FText FEdModeSpawnPointActorPicker::GetCursorDecoratorText() const
{
    switch (PickState)
    {
    default:
    case EPickState::NotOverViewport:
        return NSLOCTEXT("PropertyPicker", "PickActor_NotOverViewport", "Pick an actor by clicking on it in the active level viewport");
    case EPickState::OverViewport:
        return NSLOCTEXT("PropertyPicker", "PickActor_NotOverActor", "Pick an actor by clicking on it");
    case EPickState::OverIncompatibleActor:
    {
        if (HoveredActor.IsValid())
        {
            FFormatNamedArguments Arguments;
            Arguments.Add(TEXT("Actor"), FText::FromString(HoveredActor.Get()->GetName()));
            return FText::Format(NSLOCTEXT("PropertyPicker", "PickActor_OverIncompatibleActor", "{Actor} is incompatible"), Arguments);
        }
        else
        {
            return NSLOCTEXT("PropertyPicker", "PickActor_NotOverActor", "Pick an actor by clicking on it");
        }
    }
    case EPickState::OverActor:
    {
        if (HoveredActor.IsValid())
        {
            FFormatNamedArguments Arguments;
            Arguments.Add(TEXT("Actor"), FText::FromString(HoveredActor.Get()->GetName()));
            return FText::Format(NSLOCTEXT("PropertyPicker", "PickActor_OverActor", "Pick {Actor}"), Arguments);
        }
        else
        {
            return NSLOCTEXT("PropertyPicker", "PickActor_NotOverActor", "Pick an actor by clicking on it");
        }
    }
    }
}

bool FEdModeSpawnPointActorPicker::IsActorValid(const AActor* const Actor) const
{
    bool bIsValid = false;

    if (Actor)
    {
        bool bHasValidClass = true;
        if (OnGetAllowedClasses.IsBound())
        {
            bHasValidClass = false;

            TArray<const UClass*> AllowedClasses;
            OnGetAllowedClasses.Execute(AllowedClasses);
            for (const UClass* AllowedClass : AllowedClasses)
            {
                if (Actor->IsA(AllowedClass))
                {
                    bHasValidClass = true;
                    break;
                }
            }
        }

        bool bHasValidActor = true;
        if (OnShouldFilterActor.IsBound())
        {
            bHasValidActor = OnShouldFilterActor.Execute(Actor);
        }

        bIsValid = bHasValidClass && bHasValidActor;
    }

    return bIsValid;
}


void FSpawnPointActorPicker::TogglePointActorPickMode()
{
    FEditorModeTools& ModeTools = GLevelEditorModeTools();

    if (ModeTools.IsModeActive(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker))
    {
        ModeTools.DeactivateMode(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker);
    }
    else
    {
        InitSpawner();
        if (SelectedSpawner.IsValid() == false)
        {
            return;
        }
        // Activate the mode
        ModeTools.ActivateMode(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker);

        // Set the required delegates
        FEdModeSpawnPointActorPicker* Mode = GLevelEditorModeTools().GetActiveModeTyped<FEdModeSpawnPointActorPicker>(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker);
        if (ensure(Mode))
        {
            Mode->OnActorSelected = FEdModeSpawnPointActorPicker::FOnActorSelected::CreateRaw(this, &FSpawnPointActorPicker::SelectActor);
            Mode->OnGetAllowedClasses = FEdModeSpawnPointActorPicker::FOnGetAllowedClasses::CreateRaw(this, &FSpawnPointActorPicker::OnGetAllowedClasses);
        }
    }
}

void FSpawnPointActorPicker::SelectActor(AActor* SelectedActor)
{
    if (SelectedActor == nullptr)
    {
        return;
    }
    UE_LOG(LogTemp, Log, TEXT("SelectActor %s "), *SelectedActor->GetActorLabel());
    if (SelectedSpawner.IsValid())
    {
        SelectedSpawner->AddPointActor(Cast<AAISpawnPointActor>(SelectedActor));
    }
}

void FSpawnPointActorPicker::OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses)
{
    AllowedClasses.Empty();
    AllowedClasses.Add(ATriggerEditorActorBase::StaticClass());
}

void FSpawnPointActorPicker::InitSpawner()
{
    if (!IsInGameThread())
    {
        return;
    }
    if (!GIsEditor)
    {
        return;
    }
    if (GEditor->PlayWorld || GIsPlayInEditorWorld)
    {
        return;
    }
    SelectedSpawner.Reset();
    
    for (FSelectionIterator Iter(*GEditor->GetSelectedActors()); Iter; ++Iter)
    {
        AAISpawnerTemplate* Actor = Cast<AAISpawnerTemplate>(*Iter);

        if (Actor == nullptr || Actor->IsPendingKill())
        {
            continue;
        }
        UWorld* World = Actor->GetWorld();
        if (World == nullptr || World->WorldType != EWorldType::Editor)
        {
            continue;
        }
        if (SelectedSpawner.IsValid())
        {
            SelectedSpawner.Reset();
            UE_LOG(LogTemp, Warning, TEXT("Selected Spawners more than One !!!"));
            return;
        }
        SelectedSpawner = Actor;
    }
}
