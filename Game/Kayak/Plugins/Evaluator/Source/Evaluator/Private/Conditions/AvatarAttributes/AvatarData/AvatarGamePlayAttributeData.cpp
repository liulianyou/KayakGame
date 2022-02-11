#include "AvatarData/AvatarGamePlayAttributeData.h"
#include "GameFramework/Actor.h"
#include "CheckAvatarAttribute.h"
#include "AbilitySystemComponent.h"

UAvatarGamePlayAttributeData::UAvatarGamePlayAttributeData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	DelegateHandles.Empty();
}

bool UAvatarGamePlayAttributeData::IsDataExceedExpectation_Implementation()
{
	bool Result = true;

	TArray<UObject*> Avatars;
	GetAllAvatars(Avatars);

	for (auto Avatar : Avatars)
	{
		AActor* Actor = Cast<AActor>(Avatar);

		if(Actor == nullptr)
			continue;
		
		TArray<UAbilitySystemComponent*> Components;

		Actor->GetComponents<UAbilitySystemComponent>(Components);

		if(Components.Num() == 0)
			continue;

		bool IsMeet = false;

		for (auto ASC : Components)
		{
			float value = ASC->GetNumericAttribute(Attributes);

			float TargetValue = -INT_MAX;

			//When use the game play attribute to compare then just get its value from it
			if (CompareToTargetGameplayAttribute)
			{
				TargetValue = ASC->GetNumericAttribute(ComparedAttributes);
			}
			else
			{
				//If use percentage then use the max value 
				if (UsePercentage)
				{
					TargetValue = MaxValue;
				}
				else
				{
					//if not use the percentage and do not use the game play attribute, the goal is used to compare the attribute with the ThresholdValue directly
					TargetValue = ThresholdValue;
				}
			}

			if (UsePercentage)
			{
				TargetValue *= ThresholdValue / 100;
			}

			if (EnumHasAnyFlags(CompareType, ECompareOperation::Larger))
			{
				if (value > TargetValue)
				{
					IsMeet = true;
				}
			}

			if (EnumHasAnyFlags(CompareType, ECompareOperation::Smaller))
			{
				if (value < TargetValue)
				{
					IsMeet = true;
				}
			}

			if (IsMeet == false)
			{
				if (EnumHasAnyFlags(CompareType, ECompareOperation::Equal))
				{
					if (value == TargetValue)
					{
						IsMeet = true;
					}
				}
			}

			if (IsMeet)
			{
				break;
			}
		}

		if (IsMeet == false)
		{
			Result = false;
			break;
		}

	}

	return Result;
}

void UAvatarGamePlayAttributeData::Reset()
{
	Super::Reset();
}

void UAvatarGamePlayAttributeData::Initialize(UCheckAvatarAttribute* Owner)
{
	Super::Initialize(Owner);

	TArray<UObject*> Avatars;
	GetConditionOwner()->GetAvatars(Avatars);

	RegisterEvents(Avatars);
}

void UAvatarGamePlayAttributeData::OnAttributeChanged(const FOnAttributeChangeData& AttributeData)
{
	NotifyEvalutorContentChanged();
}

void UAvatarGamePlayAttributeData::RegisterEvents(const TArray<UObject*>& Avatars)
{
	for (int i = 0; i < Avatars.Num(); i++)
	{
		AActor* Actor = Cast<AActor>(Avatars[i]);

		if (Actor == nullptr)
			continue;

		TArray<UAbilitySystemComponent*> Components;

		Actor->GetComponents<UAbilitySystemComponent>(Components);

		for (auto ASC : Components)
		{
			FDelegateHandle DelegateHandle = ASC->GetGameplayAttributeValueChangeDelegate(Attributes).AddUObject(this, &UAvatarGamePlayAttributeData::OnAttributeChanged);

			DelegateHandles.Add(ASC, DelegateHandle);
		}
	}
}

void UAvatarGamePlayAttributeData::UnRegisterEvents(const TArray<UObject*>& Avatars)
{
	for (int i = 0; i < Avatars.Num(); i++)
	{
		AActor* Actor = Cast<AActor>(Avatars[i]);

		if (Actor == nullptr)
			continue;

		TArray<UAbilitySystemComponent*> Components;

		Actor->GetComponents<UAbilitySystemComponent>(Components);

		for (auto ASC : Components)
		{
			FDelegateHandle* DelegateHandlePtr = DelegateHandles.Find(ASC);

			if (DelegateHandlePtr != nullptr)
			{
				ASC->GetGameplayAttributeValueChangeDelegate(Attributes).Remove(DelegateHandles[ASC]);

				DelegateHandles.Remove(ASC);
			}
		}
	}
}

void UAvatarGamePlayAttributeData::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto DelegateHandleIT = DelegateHandles.CreateConstIterator(); DelegateHandleIT; ++DelegateHandleIT)
	{
		if (DelegateHandleIT.Key() == nullptr || !DelegateHandleIT.Key()->IsValidLowLevel())
		{
			continue;
		}

		DelegateHandleIT.Key()->GetGameplayAttributeValueChangeDelegate(Attributes).Remove(DelegateHandleIT.Value());
	}

	DelegateHandles.Empty();
}