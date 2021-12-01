#pragma once

/*
* Author:		Liulianyou
* Time:			2020/11/2
* Purpose:		This is used to serialize UObject to different format,
*/

#include "CoreMinimal.h"

#include "UObject/Object.h"

#include "TriggerToolInterface.h"

#define ClassTypeIdentification TEXT("TriggerClassType:")
#define ObjectInstancePath		TEXT("ObjectInstancePath:")
#define VariableValueContent	TEXT("{0}")

//AS the server and client may use different LineTerminate so I need to use the static string
//Maybe I should change it at runtime if I have time
#define TRIGGERSERIALIZE_LINETERMINATE TEXT("/r/n")

/*
* Base class to serialize the UObject to string value
*/
class TRIGGERRUNTIME_API FSerializeToolBase : public TSharedFromThis<FSerializeToolBase>, public TriggerToolInterface
{
	ClassInfo(FSerializeToolBase, TriggerToolInterface)

public:
	/*
	* Convert the Object to string value;
	*/
	virtual FString ToString( UObject* Object ) = 0;

	/*
	*  Serialize the object's value form the target string value;
	*  @param OutObject this value can be null, if it is null I will create new object to it to 
	*/
	template<class T>
	void FromString(UObject*& OutObject, const FString& StringValue);

	/*
	* Get the target class type value which will used to new object to 
	*/
	virtual FString GetSpecialValue( const FString& SerializeString , FString Identification = ClassTypeIdentification, FString Delimetor = TEXT(":"));
	
	FString GetClassTypeString(UObject* Object);

	FString GetObjectPathString(UObject* Object);

	/*
	*  Get the outer from the object path, 
	*/
	virtual UObject* GetOutObject( UClass* Class, FString ObjectPath, int& IndexLayer);

protected:
	
	virtual void FromString(UObject* OutObject, const FString& StringValue);

};


template<class T>
void FSerializeToolBase::FromString(UObject*& OutObject, const FString& StringValue)
{
	
	FString ClassType = GetSpecialValue(StringValue);

	if (ClassType.IsEmpty())
	{
		UE_LOG(LogTrigger, Error, TEXT("Invaild serialize string value with not Class type identificaiton!!"));
		return;
	}

	UClass* Class = nullptr;

	if (!ClassType.IsEmpty())
	{
		Class = LoadClass<T>(GetTransientPackage(), *ClassType);
	}

	if (OutObject != nullptr && OutObject->IsValidLowLevel() && !OutObject->IsA(Class))
	{
		UE_LOG(LogTrigger, Error, TEXT("The inport object's type is not suit for this serialized string!!!"));
		return;
	}

	if (OutObject == nullptr)
	{
		int IndexLayer = -1;
		OutObject = NewObject<T>(GetOutObject(Class, GetSpecialValue(StringValue, ObjectInstancePath), IndexLayer), Class);
	}

	if(OutObject == nullptr)
		return;

	FromString(OutObject, StringValue);
}