#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "TriggerTreeEntryWidget.generated.h"


class UTriggerTreeViewObject;

/**
 * Trigger Tree Entry Widget.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerTreeEntryWidget : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_UCLASS_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedTrigger, UTriggerTreeViewObject*, SelectedTreeObject);
public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnSelectedTrigger OnSelectedTrigger;

	UFUNCTION(BlueprintCallable)
	void OnTriggerSelectedCall();

	UFUNCTION(BlueprintCallable)
	bool IsTreeItemExpanded() const;
	
	UFUNCTION(BlueprintCallable)
	void ToggleExpansion();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TriggerUnSelected();
	
	UFUNCTION(BlueprintImplementableEvent)
	void TriggerSelected();

	bool IsSameTrigger(UTriggerTreeViewObject* InObject) const;
protected:
	UPROPERTY(BlueprintReadWrite, Category = "TriggerTree")
	UTriggerTreeViewObject* TriggerObject;
};
