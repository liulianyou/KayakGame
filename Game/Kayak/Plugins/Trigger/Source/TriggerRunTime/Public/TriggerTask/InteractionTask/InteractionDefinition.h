#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/24
* Purpose:	The total definition for interaction task, include marcos, struct
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "InteractionDefinition.generated.h"

class AActor;

namespace TriggerInteractionStage
{
	static FString InteractingSatge = TEXT("InteractingSatge");
	static FString ActiveInteractStage = TEXT("ActiveInteractStage");
	static FString AllStage = TEXT("AllStage");
}


/*
* This should can be changed by the config value for customize
*/
UENUM(BlueprintType)
enum class EInteractionType : uint8
{
	EInteractionType_Blood		UMETA(DisplayName = "Blood"),
	EInteractionType_Armor		UMETA(DisplayName = "Armor"),
	EInteractionType_Bullet		UMETA(DisplayName = "Bullet"),
	EInteractionType_Grenade	UMETA(DisplayName = "Grenade"),
};

/*
* The layer for different actors
*/
UENUM(BlueprintType)
enum class EActorLayer : uint8
{
	EActorLayer_Insignator								UMETA(DisplayName = "Insignator"),
	EActorLayer_DefaultSlot = EActorLayer_Insignator	UMETA(DispalyName = "Default Slot")
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FInteractionInfo
{
public:
	GENERATED_BODY()

public:
	//The actor who rise up this interaction task
	UPROPERTY(BlueprintReadWrite)
	AActor* Actor = nullptr;

	UPROPERTY(BlueprintReadWrite)
	EActorLayer Layer = EActorLayer::EActorLayer_DefaultSlot;

	//Which stage in the interaction info
	UPROPERTY(BlueprintReadWrite)
	FString InteractStage;

public:
	friend bool operator==(const FInteractionInfo& Left, const FInteractionInfo& Right);
	friend bool operator==(const FInteractionInfo& Left, const AActor*& Right);
public:
	static FInteractionInfo InvaildValue;

};

bool operator==(const FInteractionInfo& Left, const FInteractionInfo& Right);
bool operator==(const FInteractionInfo& Left, const AActor*& Right);
