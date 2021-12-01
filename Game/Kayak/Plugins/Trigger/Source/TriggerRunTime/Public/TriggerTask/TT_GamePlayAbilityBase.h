#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/18
* Purpose:	This is uesed to give some other character one game play ability
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Abilities/GameplayAbility.h"

#include "TriggerTaskBase.h"

#include "TT_GamePlayAbilityBase.generated.h"

class AActor;
class UAbilitySystemComponent;

/*
* This task is used to give one ability to the target actor not only the player
* If you used this task you must make sure the ability which this task used have inherited form the interface: IGamePlayAbilityInterface
*/
UCLASS( BlueprintType, Blueprintable, abstract, Category = "TriggerRuntime", meta=(DisplayName = "TT_GameplayAbility"))
class TRIGGERRUNTIME_API UTT_GamePlayAbilityBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:

	/*
	* Get the actor which will apply this ability to
*	* @param Target		if this value is none I will find the actor form the mostly toggled information
* 	*/
	UFUNCTION(BlueprintNativeEvent, Category = "GamePlayAbility")
	AActor* GetApplayedActor( UObject* Target = nullptr );

	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	UAbilitySystemComponent* GetGameplayAbilitySystem( UObject* Target = nullptr );

protected:
	
	//When new ability is added to target actor then I need to initialize this ability so that it can hold the information of this task
	void InitializeAbilityByTriggerTask(FGameplayAbilitySpecHandle& AbilityHandle, UAbilitySystemComponent* Component);

public:

	//The ability that this task will will give the other player
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	TSubclassOf<UGameplayAbility> AbilityClass;

	//Flag to check weather this ability is used by this trigger self, such as create one area filled with fire
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	bool UsedBySelf;

	//Flag to check weather this ability can be used automatically
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	bool ActiveAbilityAutomatically;

	//The level the target ability will use
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	int Level = 1;

	//The shortcut of input to active this ability
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	int InputID = INDEX_NONE;

private:
	UGameplayAbility* GamePlayAbility;

	TArray<FGameplayAbilitySpecHandle> AbilityHandles;
};