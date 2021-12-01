#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/18
* Purpose:	Show or Hide the specific actor in the game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTaskBase.h"

#include "TT_SetActorVisibilityAndCollision.generated.h"


UENUM(BlueprintType)
enum class EVisibleType : uint8
{
	EVisibleType_VisibleAndCollision 			UMETA(DisplayName = "Visible And Collision"),
	EVisibleType_VisibleButNoCollision 			UMETA(DisplayName = "Visible But No Collision"),
	EVisibleType_InvisibleButCollision 			UMETA(DisplayName = "Invisible But Collision"),
	EVisibleType_InvisibleAndNoCollision 		UMETA(DisplayName = "Invisible And No Collision"),
	EVisibleType_Max							UMETA(Hidden)
};

USTRUCT(BlueprintType, Blueprintable)
struct FSAV_ComponentInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	bool OverrideVisibleType = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = OverrideVisibleType), Category = "TriggerRunTime")
	EVisibleType VisibleType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	TSubclassOf<UPrimitiveComponent> ComponentClass;

	//This value only used when we try to reset the status
	UPrimitiveComponent* ResetComponent;
};


USTRUCT(BlueprintType, Blueprintable)
struct FSAV_ActorInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	AActor* Actor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	EVisibleType VisibleType;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	bool ProcessComponent = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition="ProcessComponent"), Category = "TriggerRunTime")
	TArray<FSAV_ComponentInfo> ComponentInfos;

	bool IsValid() const;

	static FSAV_ActorInfo InvaildActorInfo;
};

USTRUCT(BlueprintType)
struct FActorInformation
{
	GENERATED_BODY()

	UPROPERTY()
	AActor* Actor;

	UPROPERTY()
	bool FindFromActorInfos;
};


UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_SetActorVisibilityAndCollision : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void Serialize(FArchive& Ar) override;
public:

	//UFUNCTION(NetMulticast, Reliable)
	UFUNCTION(BlueprintNativeEvent)
	void MutiCast_SetVisibleAndCollision();

	void Rep_ActorInformations();

protected:

	void GetVisibleAndCollisionState( EVisibleType VisibleType, bool& Visible, bool& Collision );
	void SetActorVisible(FSAV_ActorInfo& Actor );
	void SetActorColliable(FSAV_ActorInfo& Actor);

	void AddActorOriginalInfos(FSAV_ActorInfo& Actor );

	void ResetActorInfo();

	void AddReplicatedActorInfo( const FSAV_ActorInfo& Actor, bool FindFromActorInfos);

	const FSAV_ActorInfo& GetActorInfo(const FActorInformation& Info);

	UFUNCTION()
	void Rep_ReplicatedActorInformations();

public:

	UFUNCTION()
	void DestroyedActor(AActor* Actor);

public:
	
	//Store all informations about visibility and collision of Actor
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRunTime")
	TArray<FSAV_ActorInfo> ActorInfos;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=Rep_ReplicatedActorInformations)
	TArray<FActorInformation> ReplicatedActorInformations;

private:
	
	//Restore the original visibility and collision of the actor
	static TArray<FSAV_ActorInfo> OriginalActorInfos;

};