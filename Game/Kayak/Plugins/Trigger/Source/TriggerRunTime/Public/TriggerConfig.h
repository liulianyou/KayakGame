#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/7
* Purpose:	This the config for this trigger system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "GameplayTagContainer.h"
#include "Engine/DeveloperSettings.h"
#include "Templates/SubclassOf.h"

#include "TriggerConfig.generated.h"

class AGameModeBase;
class UTriggerEventRewardManager;
class ATriggerEventSystemInfoBase;


UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Trigger Config"))
class TRIGGERRUNTIME_API UTriggerConfig : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|AI", meta = (MetaClass = "TriggerStaticsBase"))
	FSoftClassPath AIStaticsClassPath;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|SaveGame", meta = (MetaClass ="SaveGameSystemInfoBase"))
	FSoftClassPath TriggerSaveSystemHeadInfoClassPath;

	//The difficulties that this game should support for trigger at running time. it should as part of the Difficulties
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	FGameplayTagContainer ActiveDifficulties;

	//The all difficulties in this trigger system.This value should only be increased. If you add any new difficulty please do not remove it, or this will cause error. 
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	FGameplayTagContainer Difficulties;

	//The root tag which should be used by all tags in the trigger category
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	FGameplayTag RootTag;

	/*
	* Flag to check weather the game can divide the component according the categories to another single map.
	* Such as the Hard, normal, easy difficulty can be confined in one trigger persistent map by the designer at editor mode.
	* but when at running mode, each difficulty should load the corresponding level.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	bool CanDivideComponentToAnotherMap = false;

	/*
	* The class to hold the information for trigger system.
	* We can use this system to do some replication for the public information of trigger event system just like game mode state.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	TMap<TSubclassOf<AGameModeBase>, TSubclassOf<ATriggerEventSystemInfoBase>> TriggerSystemInfoClassMap;

	//When the target game mode have not set the event info class then will decay to use this default class
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Category")
	TSubclassOf<ATriggerEventSystemInfoBase> DefaultTriggerSystemInfoClass;

	//The default reward manager to operate the reward which is created by the trigger task
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Runtime|Reward")
	TSubclassOf<UTriggerEventRewardManager> DefalutTriggerEventRewardManagerClass;

#if WITH_EDITORONLY_DATA
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Editor|AI")
	FSoftObjectPath PreviewCharacterPath;


	/*
	* The start categories applied to the trigger system when we play at the editor.
	* It is default category which can be changed by any other ways
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config, Category = "Editor|Category")
	FGameplayTagContainer EditorDefaultStartTriggerCategories;

#endif

};
