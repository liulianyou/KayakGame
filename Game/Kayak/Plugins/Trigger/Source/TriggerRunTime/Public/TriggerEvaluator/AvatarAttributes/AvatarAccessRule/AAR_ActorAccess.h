#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/1
* Purpose:	This will get all actors according to some rules
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AvatarAccessRuleBase.h"
#include "FTriggerTask.h"

#include "AAR_ActorAccess.generated.h"

class UTriggerFilterBase;
class AActor;

/*
* The access which will use some filters to filter the avatars
*/
UCLASS(BlueprintType, Blueprintable, Abstract)
class TRIGGERRUNTIME_API UAAR_AvatarAccessWithFilter : public UAvatarAccessRuleBase
{
	GENERATED_UCLASS_BODY()

public:
	/*
	* Check weather the target object can pass the filter
	*/
	UFUNCTION(BlueprintCallable)
	bool IsFilterPassed( UObject* Object ) const;

public:

	/*
	* Which type of avatar this condition will focus
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Category="Filter")
	UTriggerFilterBase* AvatarFilter = nullptr;

};

/*
* Get all actors which is spawned after this instance of this class work
*/
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName = "AllSpawnedActors"))
class TRIGGERRUNTIME_API UAAR_AllSpawnedActors : public UAAR_AvatarAccessWithFilter
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UAvatarAccessRuleBase
	virtual void Initialize( UObject* Owner ) override;
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const override;
	//Override UAvatarAccessRuleBase


protected:
	UFUNCTION()
	void OnActorCreated( AActor* Actor );

	UFUNCTION()
	void OnActorDestroyed(AActor* Actor);


private:
	FDelegateHandle DelegateHandle;

	TArray<AActor*> Actors;
};

/*
* Get all actors in the world, this will take a lot resource,
* This will get all actors which is already existed at current world
*/
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "All Actors"))
class TRIGGERRUNTIME_API UAAR_AllActors : public UAAR_AvatarAccessWithFilter
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarAccessRuleBase
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const override;
	//Override UAvatarAccessRuleBase
};

/*
* Get all player controllers in this world.
* This will get all player controllers which is already exist at current world
*/
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "All Player Controllers"))
class TRIGGERRUNTIME_API UAAR_AllPlayerControllers : public UAAR_AvatarAccessWithFilter
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarAccessRuleBase
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const override;
	//Override UAvatarAccessRuleBase

public:

	//Flag to check weather this access will get all pawns which the player controller owned
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="AllPlayerControllers")
	bool IncludeControlledPawns = true;

};

UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "ActorsInMap"))
class TRIGGERRUNTIME_API UAAR_ActorsInMap : public UAAR_AvatarAccessWithFilter
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarAccessRuleBase
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const override;
	//Override UAvatarAccessRuleBase

public:

#if WITH_EDITOR

	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

#endif

public:
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Accessor")
	TArray<TSoftObjectPtr<AActor>> Actors;
};

/*
* This will get all actors who has toggled the trigger task
*/
UCLASS(BlueprintType, Blueprintable, meta = (DisplayName = "ToggleTriggerTaskActors"))
class TRIGGERRUNTIME_API UAAR_ActorsToggledTriggerTask : public UAAR_AvatarAccessWithFilter
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarAccessRuleBase
	virtual void GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const override;
	//Override UAvatarAccessRuleBase

private:
	
	/*
	* The task that need to check
	*/
	UPROPERTY(BlueprintReadOnly, Category = "ToggleTriggerTaskActors", meta = (AllowPrivateAccess = true))
	FTriggerTask TriggerTask;
};