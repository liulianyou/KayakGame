#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Styling/SlateTypes.h"
#include "TriggerEditSplitter.generated.h"

class SSplitter;

/**
 * wrapper for splitter
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerEditSplitter : public UPanelWidget
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	FSplitterStyle SplitterStyle;

public:
#if WITH_EDITOR
	// UWidget interface
	virtual const FText GetPaletteCategory() override;
	// End UWidget interface
#endif

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:

	// UPanelWidget
	virtual UClass* GetSlotClass() const override;
	virtual void OnSlotAdded(UPanelSlot* InSlot) override;
	virtual void OnSlotRemoved(UPanelSlot* InSlot) override;
	// End UPanelWidget

protected:
	// UWidget interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	// End of UWidget interface

protected:
	TSharedPtr<SSplitter> Splitter;
};
