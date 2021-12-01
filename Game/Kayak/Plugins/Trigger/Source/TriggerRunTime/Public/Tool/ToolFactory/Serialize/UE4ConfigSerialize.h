#pragma once

/*
* Author:	Liulianyou
* Time:		2020/11/2
* Purpose:	Serialize the object to UE4 Config string just like in the .ini file
*/
#include "Templates/SharedPointer.h"
#include "SerializeToolBase.h"

/*
* This class will serialzie all values which have the UPROPERTY() marcos
*/
class TRIGGERRUNTIME_API FUE4ConfigSerialize :public TSharedFromThis<FUE4ConfigSerialize>, public FSerializeToolBase
{
public:

	ClassInfo(FUE4ConfigSerialize, FSerializeToolBase);

public:
	//Override TriggerToolInterface
	virtual void InitlalizeTriggerTool() {};
	//Override TriggerToolInterface

	//Override SerializeToolBase
	virtual FString ToString(UObject* Object) override;
	virtual FString GetSpecialValue(const FString& SerializeString, FString Identification = ClassTypeIdentification, FString Delimetor = TEXT(":")) override;
	//Override SerializeToolBase

protected:
	//Override SerializeToolBase
	virtual void FromString(UObject* OutObject, const FString& StringValue);
	//Override SerializeToolBase
};