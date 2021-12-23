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
	TSubclassOf<UItemManager> ItemManagerClass;
};
