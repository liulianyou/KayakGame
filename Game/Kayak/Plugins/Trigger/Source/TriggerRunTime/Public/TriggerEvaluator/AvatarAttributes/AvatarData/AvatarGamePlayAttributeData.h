#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/31
* Purpose:	This data will only focus on the game play set on the target object
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AttributeSet.h"
#include "Misc/EnumClassFlags.h"
#include "AvatarData/AvatarInspectedDataBase.h"
#include "GameplayEffectTypes.h"
#include "AvatarGamePlayAttributeData.generated.h"

class UAbilitySystemComponent;

UENUM(BlueprintType)
enum class ECompareOperation : uint8
{
	PlaceHold							UMETA(Hidden),
	Equal = 1 << 0						UMETA(DisplayName = "="),
	Larger = 1 << 1						UMETA(DisplayName = ">"),
	Smaller = 1 << 2					UMETA(DisplayName = "<"),
	LargerAndEqual = Equal | Larger		UMETA(DisplayName = ">="),
	SmallerAndEqual = Equal | Smaller	UMETA(DisplayName = "<="),
};

ENUM_CLASS_FLAGS(ECompareOperation);

UCLASS(BlueprintType, Blueprintable)
class TRIGGERRUNTIME_API UAvatarGamePlayAttributeData :public UAvatarInspectedDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarInspectedDataBase
	virtual bool IsDataExceedExpectation_Implementation() override;
	virtual void Reset() override;
	virtual void Initialize(UCheckAvatarAttribute* Owner) override;
	virtual void BeginDestroy() override;
	virtual void RegisterEvents(const TArray<UObject*>& Avatars) override;
	virtual void UnRegisterEvents(const TArray<UObject*>& Avatars) override;
	//Override UAvatarInspectedDataBase

public:

	void OnAttributeChanged(const FOnAttributeChangeData& AttributeData);

public:

	//The attribute this data inspect
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AvatarData")
	FGameplayAttribute Attributes;

	/*
	* How to check this attributes
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AvatarData")
	ECompareOperation CompareType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AvatarData")
	bool CompareToTargetGameplayAttribute = false;

	/*
	* Weather this data will only focus on the percentage
	* When this value is true means the value will be percentage
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "!CompareToTargetGameplayAttribute"), Category = "AvatarData")
	bool UsePercentage = false;

	/*
	* the value which will used to compare
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AvatarData")
	float ThresholdValue = 0.f;

	/*
	* the value which will used to compare
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "!CompareToTargetGameplayAttribute && UsePercentage"), Category = "AvatarData")
	float MaxValue = 0.f;

	//The attribute which should be compared with the Attribute
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "CompareToTargetGameplayAttribute"), Category = "AvatarData")
	FGameplayAttribute ComparedAttributes;

private:
	
	/*
	* The specific delegate for changes at the target attribute
	*/
	TMap<UAbilitySystemComponent*, FDelegateHandle> DelegateHandles;

};