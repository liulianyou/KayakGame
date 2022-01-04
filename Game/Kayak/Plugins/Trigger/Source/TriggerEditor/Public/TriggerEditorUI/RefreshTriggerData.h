#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/4
* Purpose:	This the config for this trigger system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Blueprint/UserWidget.h"

#include "RefreshTriggerData.generated.h"

class UCheckBox;
class UButton;

UCLASS(Blueprintable, BlueprintType)
class TRIGGEREDITOR_API URefreshTriggerDataWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()
	
public:

	virtual void NativeConstruct() override;

protected:

	UFUNCTION()
	void OnClickRefreshRewardID();

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UCheckBox*	SourceControlAutomatically;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* RefreshAll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UButton* RefreshRewardID;
};