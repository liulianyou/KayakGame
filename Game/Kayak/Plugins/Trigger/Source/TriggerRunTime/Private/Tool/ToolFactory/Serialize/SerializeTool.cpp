#include "Serialize/SerializeToolBase.h"
#include "TriggerDefinition.h"

void FSerializeToolBase::FromString(UObject* OutObject, const FString& StringValue)
{
	
}

FString FSerializeToolBase::GetSpecialValue(const FString& SerializeString, FString Identification, FString Delimetor)
{
	TArray<FString> Values;

	SerializeString.ParseIntoArray(Values, TRIGGERSERIALIZE_LINETERMINATE);

	int Index = Values[0].Find(Identification);

	if (Index == INDEX_NONE)
	{
		return TEXT("");
	}

	TArray<FString> ClassType;
	Values[0].ParseIntoArray(ClassType, *Delimetor);

	if (ClassType.Num() < 2)
	{
		return TEXT("");
	}

	return ClassType[1];
}

FString FSerializeToolBase::GetClassTypeString(UObject* Object)
{
	FString Result = ClassTypeIdentification + FString(VariableValueContent);

	if (Object == nullptr || !Object->IsValidLowLevel())
	{
		return TEXT("");
	}

	TArray<FStringFormatArg> Formats;
	Formats.Add(Object->GetClass()->GetPathName());

	Result = FString::Format(*Result, Formats);

	Result += TRIGGERSERIALIZE_LINETERMINATE;

	return Result;
}

FString FSerializeToolBase::GetObjectPathString(UObject* Object)
{
	FString Result = ObjectInstancePath + FString(VariableValueContent);

	if (Object == nullptr)
	{
		return TEXT("");
	}

	TArray<FStringFormatArg> Formats;
	Formats.Add(Object->GetPathName());

	Result = FString::Format(*Result, Formats);

	Result += TRIGGERSERIALIZE_LINETERMINATE;

	return Result;
}

UObject* FSerializeToolBase::GetOutObject(UClass* Class, FString ObjectPath, int& IndexLayer)
{
	return GetTransientPackage();
}
