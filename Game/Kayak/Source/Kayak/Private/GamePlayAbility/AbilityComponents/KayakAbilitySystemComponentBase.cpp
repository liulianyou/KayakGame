#include "KayakAbilitySystemComponentBase.h"

UKayakAbilitySystemComponentBase::UKayakAbilitySystemComponentBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UKayakAbilitySystemComponentBase::Initialize()
{
	OnInitialize();

	for (int i = 0; i < DefaultAttributesSetClasses.Num(); i++)
	{
		UAttributeSet** AttributeSetPtr = GetSpawnedAttributes_Mutable().FindByPredicate([&](const UAttributeSet* Data) {
			if (Data->GetClass() == DefaultAttributesSetClasses[i])
			{
				return true;
			}
			else
			{
				return false;
			}
			});

		if (AttributeSetPtr == nullptr)
		{
			InitStats(DefaultAttributesSetClasses[i], nullptr);
		}
	}
}

void UKayakAbilitySystemComponentBase::OnRegister()
{
	Super::OnRegister();
}

void UKayakAbilitySystemComponentBase::OnUnregister()
{
	Super::OnUnregister();
}