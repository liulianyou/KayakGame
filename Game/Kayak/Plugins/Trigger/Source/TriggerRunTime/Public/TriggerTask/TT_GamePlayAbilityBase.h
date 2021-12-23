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
class UAvatarAccessRuleBase;
class UAbilitySystemComponent;

/*
* This task is used to give one ability to the target actor not only the player
* If you used this task you must make sure the ability which this task used have inherited form the interface: IGamePlayAbilitySupportInterface
*/
UCLASS( BlueprintType, Blueprintable, abstract, Category = "TriggerRuntime", meta=(DisplayName = "TT_GameplayAbility"))
class TRIGGERRUNTIME_API UTT_GamePlayAbilityBase : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:

	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	UAbilitySystemComponent* GetGameplayAbilitySystem( UObject* Target = nullptr );

	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	const TArray<UObject*>& GetAllAvatars() const { return Avaters; }

	/*
	* End this task by the ability.
	* This function should be invoked by the ability which is support for the IGamePlayAbilitySupportInterface
	* 
	* @param FinishTask true means the trigger task will be finished by the ability, false means this task only end all other abilities which is casted at this trigger task
	*/
	UFUNCTION(BlueprintCallable, Category = "GamePlayAbility")
	virtual void EndByAbility( UGameplayAbility* Ability, bool FinishTask );

protected:
	
	/*
	* End this task
	* 
	* @param FinishThisTask true means this funciton will finish this task
	*/
	void EndTaskInternal( bool FinishThisTask = false );

	//When new ability is added to target actor then I need to initialize this ability so that it can hold the information of this task
	void InitializeAbilityByTriggerTask(FGameplayAbilitySpecHandle& AbilityHandle, UAbilitySystemComponent* Component);

	//Each actor who have this trigger task, it should have one ability system component to support ability system
	void RegisterAbilityComponentToOwnerActor();

	void GiveAbility( UObject* Avater );

	//Remove the ability in the target avatar if it has
	void RemoveAbility(UObject* Avater);

	//Remove the ability in the target avatar if it has
	void RemoveAbility(UAbilitySystemComponent* Avater);

	/*
	* Add new Avatar to the pool which is inspected by this trigger task
	*/
	void AddNewAvatar(UObject* NewAvatar);

	/*
	* Remove the target avatar for the pool
	*/
	void RemoveAvater(UObject* OldAvatar);

protected:

	UFUNCTION()
	void OnAvatarsChangedEvent(const TArray<UObject*>& Avatars, bool bIsAdded);

	//Called when one ability is ended
	void OnAbilityEnd(const FAbilityEndedData&);

public:

	//The ability that this task will will give the other player
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	TSubclassOf<UGameplayAbility> AbilityClass;

	/*
	* How to get the target avatar that will give its new ability
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	UAvatarAccessRuleBase* AvatarAccesses;

	//The level the target ability will use
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	int Level = 1;

	//The shortcut of input to active this ability
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "GamePlayAbility")
	int InputID = INDEX_NONE;

private:

	/*
	* The map for the ability which is applied to the target Avatar.
	* Key:		AbilityComponent who own the value ability
	* Value:	The ability which is owned by the key AbilityComponent
	*/
	TMap<UAbilitySystemComponent*, FGameplayAbilitySpecHandle> AbilityHandles;

	//The total avatars that this task should inspect
	TArray<UObject*>  Avaters;
};