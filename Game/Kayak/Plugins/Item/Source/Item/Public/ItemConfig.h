#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/23
* Purpose:	The configuration for item system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Templates/SubclassOf.h"

#include "ItemConfig.generated.h"

class UItemManager;
class UItemGlobal;

/*
* All global config of item system should be set here
*/
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Item Config"))
class ITEM_API UItemConfig : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* The class of item manager that the outer game used
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, config)
	TSoftClassPtr<UItemManager> ItemManagerClass;

	/*
	* The class which will be used to spawn new global instance for Item system
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, config)
	TSoftClassPtr<UItemGlobal> ItemGlobalClass;

};
