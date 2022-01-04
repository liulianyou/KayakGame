#include "RefreshTriggerData.h"

#include "Components/Button.h"
#include "Components/CheckBox.h"

#include "TriggerBlueprintLib.h"
#include "TriggerEventRewardManager.h"

URefreshTriggerDataWidget::URefreshTriggerDataWidget(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{
	
}

void URefreshTriggerDataWidget::NativeConstruct()
{
	if (RefreshRewardID != nullptr)
	{
		if (!RefreshRewardID->OnClicked.IsAlreadyBound(this, &URefreshTriggerDataWidget::OnClickRefreshRewardID))
		{
			RefreshRewardID->OnClicked.AddDynamic(this, &URefreshTriggerDataWidget::OnClickRefreshRewardID);
		}
	}
}

void URefreshTriggerDataWidget::OnClickRefreshRewardID()
{
	UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

	if(RewardManager == nullptr)
		return;

	RewardManager->RefreshRewradID(nullptr);
}
