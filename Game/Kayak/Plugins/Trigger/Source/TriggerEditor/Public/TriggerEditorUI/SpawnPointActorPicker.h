#pragma once

#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EdMode.h"

class AAISpawnerTemplate;

/**
 * copy from FEdModeActorPicker.
 */
class TRIGGEREDITOR_API FEdModeSpawnPointActorPicker : public FEdMode
{
public:
    const static FEditorModeID EM_SpawnPointActorPicker;

    DECLARE_DELEGATE_OneParam(FOnGetAllowedClasses, TArray<const UClass*>&);
    DECLARE_DELEGATE_OneParam(FOnActorSelected, AActor*);
    DECLARE_DELEGATE_RetVal_OneParam(bool, FOnShouldFilterActor, const AActor*);

    enum class EPickState : uint8
    {
        NotOverViewport,
        OverViewport,
        OverIncompatibleActor,
        OverActor,
    };

public:
    FEdModeSpawnPointActorPicker();

    /** Begin FEdMode interface */
    virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
    virtual bool MouseEnter(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y) override;
    virtual bool MouseLeave(FEditorViewportClient* ViewportClient, FViewport* Viewport) override;
    virtual bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 x, int32 y) override;
    virtual bool LostFocus(FEditorViewportClient* ViewportClient, FViewport* Viewport) override;
    virtual bool InputKey(FEditorViewportClient* ViewportClient, FViewport* Viewport, FKey Key, EInputEvent Event) override;
    virtual bool GetCursor(EMouseCursor::Type& OutCursor) const override;
    virtual bool UsesToolkits() const override;
    virtual bool IsCompatibleWith(FEditorModeID OtherModeID) const override;
    virtual void Initialize() override;
    /** End FEdMode interface */

    /** End the mode */
    virtual void Exit() override;

    /** Delegate used to display information about picking near the cursor */
    FText GetCursorDecoratorText() const;

    bool IsActorValid(const AActor* const Actor) const;

    /** Flag for display state */
    TWeakObjectPtr<AActor> HoveredActor;

    /** Flag for display state */
    EPickState PickState;

    /** The window that owns the decorator widget */
    TSharedPtr<SWindow> CursorDecoratorWindow;

    /** Delegates used to pick actors */
    FOnActorSelected OnActorSelected;
    FOnGetAllowedClasses OnGetAllowedClasses;
    FOnShouldFilterActor OnShouldFilterActor;
};


/*
* pick point actor for spawner.
*/
class TRIGGEREDITOR_API FSpawnPointActorPicker
{
public:
    void TogglePointActorPickMode();

protected:
    void SelectActor(AActor* SelectedActor);
    void OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses);

    //get selected spawner, copy from GetSelectedLevelActors.
    void InitSpawner();
protected:
    TWeakObjectPtr<AAISpawnerTemplate> SelectedSpawner;
};