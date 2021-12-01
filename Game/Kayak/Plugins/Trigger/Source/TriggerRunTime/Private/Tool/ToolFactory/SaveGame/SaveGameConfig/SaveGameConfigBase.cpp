#include "SaveGame/SaveGameConfig/SaveGameConfigBase.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"

USaveGameConfigBase::USaveGameConfigBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool USaveGameConfigBase::IsVaildConfigData()
{
	if (StrategyClass == nullptr)
		return false;

	return true;
}

USaveGameTArrayData::USaveGameTArrayData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Data.Empty();
}

