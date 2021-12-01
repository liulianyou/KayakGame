#pragma once

/*
* Author:	Liulianyou
* Time:		2020/7/27
* Purpose:  This task used to reset all game inform to the target save point,
*			If there is no save point information, It maybe save to the initialization state 
*			When the player once enter the map.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTask/TriggerTaskBase.h"

#include "TT_Reset.generated.h"

UENUM(BlueprintType)
enum class EResetType : uint8
{
	//Only reset attributes of character, no other values
	EResetType_ResetCharacterAttributes		UMETA(DisplayName = "Reset Character attributes"),
	//Only reset triggers.
	EResetType_ResetTriggers				UMETA(DisplayName = "Reset triggers"),
	//We will reset all aspects of this game mode, just like the player reload this map
	EResetType_ResetALL						UMETA(DisplayName = "Reset all"),
};

/*
* 
*/
class TRIGGERRUNTIME_API IResetSupportInterface
{
};

UCLASS(BlueprintType, Blueprintable, config = "Game", Category = "Trigger|Task")
class TRIGGERRUNTIME_API UTT_Reset : public UTriggerTaskBase
{

	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
	UFUNCTION(BlueprintCallable, Category = "Trigger|Task")
	void ResetTrigger();
	UFUNCTION(BlueprintCallable, Category = "Trigger|Task")
	void ResetCharacterAttributes();
	UFUNCTION(BlueprintCallable, Category = "Trigger|Task")
	void ResetAll();

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Trigger|Task")
	bool ResetToLastSavePoint;

	//Different reset type will cause different appearance
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Trigger|Task")
	EResetType ResetType;
};



