#include "KayakGameAbilityBase.h"

UKayakGameAbilityBase::UKayakGameAbilityBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UGameplayTasksComponent* UKayakGameAbilityBase::GetGameplayTasksComponent(const UGameplayTask& Task) const
{
	return Super::GetGameplayTasksComponent(Task);
}
AActor* UKayakGameAbilityBase::GetGameplayTaskOwner(const UGameplayTask* Task) const
{
	return Super::GetGameplayTaskOwner(Task);
}
AActor* UKayakGameAbilityBase::GetGameplayTaskAvatar(const UGameplayTask* Task) const
{
	return Super::GetGameplayTaskAvatar(Task);
}
uint8 UKayakGameAbilityBase::GetGameplayTaskDefaultPriority() const
{
	return Super::GetGameplayTaskDefaultPriority();
}
void UKayakGameAbilityBase::OnGameplayTaskInitialized(UGameplayTask& Task)
{
	Super::OnGameplayTaskInitialized(Task);
}
void UKayakGameAbilityBase::OnGameplayTaskActivated(UGameplayTask& Task)
{
	Super::OnGameplayTaskActivated(Task);
}
void UKayakGameAbilityBase::OnGameplayTaskDeactivated(UGameplayTask& Task)
{
	Super::OnGameplayTaskDeactivated(Task);
}