#pragma once

#include "CoreMinimal.h"
#include "Components/DetailsView.h"
#include "TriggerDetailsView.generated.h"

/**
 * Details View for Triggers.
 */
UCLASS()
class TRIGGEREDITOR_API UTriggerDetailsView : public UDetailsView
{
	GENERATED_UCLASS_BODY()
public:
	
	UPROPERTY(EditAnywhere, Category = "View")
	TArray<FName> CategoriesToHide;

	UPROPERTY(EditAnywhere, Category = "View")
	TArray<FName> PropertiesToHide;
	
public:
	UFUNCTION(BlueprintCallable, Category = "View")
	UObject* GetSelectedObject() const;

	UFUNCTION(BlueprintCallable, Category = "View")
	void SelectObject(UObject* NewObject);

	//~ UObject interface
	virtual void PostLoad() override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	//~ End of UObject interface
protected:
	//~ UWidget interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	// End of UWidget interface

	virtual void BuildContentWidget() override;
	virtual void OnObjectChanged() override;


	bool GetIsTriggerPropertyVisible(const FPropertyAndParent& PropertyAndParent) const;
	bool IsTriggerRowVisibilityFiltered() const;
	bool GetIsTriggerRowVisible(FName InRowName, FName InParentName) const;

	void ToggleWhitelistedProperties();
protected:
	TSharedPtr<IDetailsView> TriggersDetailViewWidget;

	TWeakObjectPtr<UObject> SelectedObject;
};
