#pragma once

#include "CoreMinimal.h"
#include "Components/PanelSlot.h"
#include "Widgets/Layout/SSplitter.h"
#include "TriggerEditSplitterSlot.generated.h"

/**
 * Slot for Trigger Edit Splitter.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerEditSplitterSlot : public UPanelSlot
{
	GENERATED_UCLASS_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Layout|Trigger Edit Splitter Slot")
	float SizeValue;

public:

	void BuildSlot(TSharedRef<SSplitter> Spliter);

	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
protected:
	SSplitter::FSlot* Slot;
};
