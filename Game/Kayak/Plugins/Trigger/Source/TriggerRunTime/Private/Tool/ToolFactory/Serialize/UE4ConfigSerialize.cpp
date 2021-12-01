#include "Serialize/UE4ConfigSerialize.h"
#include "UObject/UnrealType.h"

FString FUE4ConfigSerialize::ToString(UObject* Object)
{
	FString Result = Super::GetClassTypeString(Object);

	Result += Super::GetObjectPathString(Object);

	if (Object == nullptr)
	{
		return Result;
	}

	for (FProperty* Property = Object->GetClass()->PropertyLink; Property; Property = Property->PropertyLinkNext)
	{
		FString Key = Property->GetName();

		FArrayProperty* Array = CastField<FArrayProperty>(Property);

		if (Array)
		{
			FString CompleteKey = FString::Printf(TEXT("%s%s"),  TEXT("+"), *Key);

			FScriptArrayHelper_InContainer ArrayHelper(Array, Object);
			for (int32 i = 0; i < ArrayHelper.Num(); i++)
			{
				FString	Buffer;
				Array->Inner->ExportTextItem(Buffer, ArrayHelper.GetRawPtr(i), ArrayHelper.GetRawPtr(i), Object, 0);
				
				Result += FString::Printf(TEXT("%s=%s%s"), *CompleteKey, *Buffer, TRIGGERSERIALIZE_LINETERMINATE);
			}
		}
		else
		{
			TCHAR TempKey[MAX_SPRINTF] = TEXT("");

			for (int32 Index = 0; Index < Property->ArrayDim; Index++)
			{
				if (Property->ArrayDim != 1)
				{
					FCString::Sprintf(TempKey, TEXT("%s[%i]"), *Property->GetName(), Index);
					Key = TempKey;
				}

				FString	Value;
				Property->ExportText_InContainer(Index, Value, Object, Object, Object, 0);

				Result += FString::Printf(TEXT("%s=%s%s"), *Key, *Value, TRIGGERSERIALIZE_LINETERMINATE);
			}
		}
	}

	return Result;
}

FString FUE4ConfigSerialize::GetSpecialValue(const FString& SerializeString, FString Identification , FString Delimetor)
{
	FString Result = Super::GetSpecialValue(SerializeString, Identification, Delimetor);

	return Result;
}

void FUE4ConfigSerialize::FromString(UObject* OutObject, const FString& StringValue)
{
	if (OutObject == nullptr)
	{
		return;
	}

	TArray<FString> Sections;
	StringValue.ParseIntoArray(Sections, TRIGGERSERIALIZE_LINETERMINATE);

	//Get Single value form the sections
	auto GetSingleValue = [&Sections](FString& Key)->FString
	{
		for (int i = 2; i < Sections.Num(); i++)
		{
			int Index = Sections[i].Find(Key);

			if (Index == INDEX_NONE)
				continue;

			TArray<FString> Values;
			Sections[i].ParseIntoArray(Values, TEXT("="));

			if (Values[0] != Key)
				continue;

			return Values[1];
		}

		return TEXT("");
	};

	auto GetArrayValue = [&Sections](FString& Key, TArray<FString>& OutValues)
	{
		OutValues.Empty();

		for (int i = 2; i < Sections.Num(); i++)
		{
			int Index = Sections[i].Find(Key);

			if (Index == INDEX_NONE)
				continue;

			TArray<FString> Values;
			Sections[i].ParseIntoArray(Values, TEXT("="));

			OutValues.Add(Values[1]);
		}
	};

	for (FProperty* Property = OutObject->GetClass()->PropertyLink; Property; Property = Property->PropertyLinkNext)
	{
		FString Key = Property->GetName();

		FArrayProperty* Array = CastField<FArrayProperty>(Property);
		if (Array == NULL)
		{
			for (int32 i = 0; i < Property->ArrayDim; i++)
			{
				if (Property->ArrayDim != 1)
				{
					Key = FString::Printf(TEXT("%s[%i]"), *Property->GetName(), i);
				}
				
				int index = StringValue.Find(Key);

				if (index != INDEX_NONE)
				{
					FString Value = GetSingleValue(Key);

					if (!Value.IsEmpty() && Property->ImportText(*Value, Property->ContainerPtrToValuePtr<uint8>(OutObject, i), 0, OutObject) == NULL)
					{
						
					}
				}
			}
		}
		else
		{
			TArray<FString> Values;
			GetArrayValue(Key, Values);

			if (Values.Num() > 0)
			{
				FScriptArrayHelper_InContainer ArrayHelper(Array, OutObject);
				ArrayHelper.EmptyAndAddValues(Values.Num());
				for (int32 i = Values.Num() - 1, c = 0; i >= 0; i--, c++)
				{
					Array->Inner->ImportText(*Values[i], ArrayHelper.GetRawPtr(c), 0, OutObject);
				}
			}
		}
	}
}