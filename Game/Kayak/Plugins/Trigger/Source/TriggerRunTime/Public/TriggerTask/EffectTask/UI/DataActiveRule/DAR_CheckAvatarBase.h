#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/8
* Purpose:	this data will only active for the specific actors
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "DataActiveRuleBase.h"

#include "DAR_CheckAvatarBase.generated.h"

class UAvatarAccessRuleBase;

/*
* This class just used to warp the Avatar Access Rule
*/
UCLASS(BlueprintType, Blueprintable, Abstract, hidedropdown, Category = "EffectData")
class TRIGGERRUNTIME_API UDAR_CheckAvatarBase : public UDataActiveRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

	//Override DataActiveRuleBase
	virtual void Initialize(UTriggerEffectDataBase* Owner) override;
	virtual bool CanActive() const override;
	//Override DataActiveRuleBase
public:

	/*
	* Will use this access to get all the avatars
	*/
	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Category = "EffectData")
	UAvatarAccessRuleBase* AvatarAccessRule;

public:

	UFUNCTION()
	void AvatarChangedEventCallback(const TArray<UObject*>& Avatars, bool bIsAdded);

private:

	
	TArray<UObject*> Avatars;
};