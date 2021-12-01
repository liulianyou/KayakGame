#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	This is the base class for game ability which is used in our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Abilities/GameplayAbility.h"

#include "KayakGameAbilityBase.generated.h"

/*
* The base class of ability which is used for any skilles in our game
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Ability")
class KAYAK_API UKayakGameAbilityBase : public UGameplayAbility
{
	GENERATED_UCLASS_BODY()

public:

	//Override IGameplayTaskOwnerInterface
	virtual UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) const override;
	virtual AActor* GetGameplayTaskOwner(const UGameplayTask* Task) const override;
	virtual AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) const override;
	virtual uint8 GetGameplayTaskDefaultPriority() const override;
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) override;
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override;
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override;
	//Override IGameplayTaskOwnerInterface

};