#include "ItemInventoryInterface.h"
#include "ItemDefinition.h"

UItemInventoryComponent* IItemInventoryInterface::GetItemInventoryComponent() const
{
	UItemInventoryComponent* Result = nullptr;

	if (_getUObject()->GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(IItemInventoryInterface, OnGetItemInventoryComponent)))
	{
		Result = OnGetItemInventoryComponent();

		if (Result == nullptr)
		{
			UE_LOG(LogItem, Fatal, TEXT("Please inplement the interface in the BP function << OnGetItemComponent >> of target object:%s!!!"), *_getUObject()->GetPathName());
		}
	}

	return nullptr;
}