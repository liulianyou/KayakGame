#pragma once

#include "CoreMinimal.h"
#include "Widgets/SPanel.h"
#include "Layout/Children.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "SlotBase.h"
#include "Layout/Margin.h"
#include "Layout/Visibility.h"
#include "Styling/CoreStyle.h"

class FSceneView;
class STextBlock;
class FEditorViewportClient;

/**
 * 
 */
class TRIGGEREDITOR_API STriggerPointIndexPanel : public SPanel
{
public:
    //DECLARE_DELEGATE_RetVal(UObject*, FGetSelectedObjectDelegate)
    
    class FSlot : public TSlotBase<FSlot>
    {
    public:
        FSlot()
            : TSlotBase<FSlot>()
        { }

        FVector2D Offset;
    };

	SLATE_BEGIN_ARGS(STriggerPointIndexPanel)
	{}
	SLATE_END_ARGS()

    static void InitPanel();
    static void Clear();
    static void SetSelectedObject(UObject* CurSelected);
    static void TogglePanelVisible();
    //static void BindGetSelectedDelegate(FGetSelectedObjectDelegate InGetSelectedObject);

    STriggerPointIndexPanel();
	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

    FSlot& AddSlot();

    // SWidget interface
    virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
    virtual void OnArrangeChildren(const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren) const override;
    virtual FChildren* GetChildren() override;
    virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
    // End of SWidget interface
protected:
    // Begin SWidget overrides.
    virtual FVector2D ComputeDesiredSize(float) const override;
    // End SWidget overrides.


    void SelectedInEditor(UObject* CurSelectedObject);
    static FSceneView* GetSceneView();
    static FEditorViewportClient* GetPerspectiveClient();
protected:
    //FGetSelectedObjectDelegate GetSelectedObject;
    TArray<FString> TextStringArr;
    TArray<TWeakPtr<STextBlock>> PointTextArr;

    FTextBlockStyle TextStyle;

    TPanelChildren<FSlot> Children;

    TWeakObjectPtr<UObject> SelectedObject;
private:
    static TSharedPtr<STriggerPointIndexPanel> InstancePanel;
};
