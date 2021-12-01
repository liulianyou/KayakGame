#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "TriggerRadioButton.generated.h"


class SHorizontalBox;
class UTriggerTaskComponentBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriggerRadioButtonSelectChanged, int32, NewSelectIndex);

/**
 * Simple radio button, for trigger editor panel.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerRadioButton : public UWidget
{
	GENERATED_UCLASS_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	float ButtonsOffset;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Style")
	TArray<FString> DisplayTextArr;
public:
	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override;
#endif
	
	UFUNCTION(BlueprintCallable, Category = "View")
	void SetTextArrByObjects(const TArray<UObject*> ObjectsArr);
	
	UFUNCTION(BlueprintCallable, Category = "View")
	void SetTextArrByTriggerComponents(const TArray<UTriggerTaskComponentBase*> ObjectsArr);

protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;

	ECheckBoxState IsSelected(int32 Index) const;
	void OnCheckedChanged(ECheckBoxState InCheckedState, int32 Index);

	FText GetText(int32 Index) const;
	
	void AddButton(int32 Index);
public:

	/** Called when the checked state has changed */
	UPROPERTY(BlueprintAssignable, Category="TriggerRadioButton|Event")
	FOnTriggerRadioButtonSelectChanged OnRadioSelectChanged;

protected:
	TSharedPtr<SHorizontalBox> TriggersBox;

	int32 SelectedIndex;
};
