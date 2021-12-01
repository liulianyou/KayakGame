#pragma once

/*
* Author:		Liulianyou
* Time:			2020/11/3
* Purpose:		This is the test class for the serialize class
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "SerializeTest.generated.h"

class USerializeTestClass;

UENUM()
enum class ESerializeTestClassMemberEnum : uint8
{
	ESerializeTestClassMemberEnum_0	UMETA(DisplayName = "Test1"),
	ESerializeTestClassMemberEnum_1	UMETA(DisplayName = "Test2")
};

USTRUCT()
struct FSerializeTestMemberStruct
{
	GENERATED_BODY()

	UPROPERTY()
	int IntValue;

	UPROPERTY()
	USerializeTestClass* Parent;

};

UCLASS()
class TRIGGERRUNTIME_API USerializeTestClassMemberObject : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY()
	int IntValue;

	UPROPERTY()
	USerializeTestClass* Parent;

};

UCLASS()
class TRIGGERRUNTIME_API USerializeTestClass : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	void InitializeMemberValues();

public:

	UPROPERTY()
	int IntValue;
	UPROPERTY()
	TArray<int> IntArray;
	UPROPERTY()
	float FloatValue;
	UPROPERTY()
	TArray<float> FloatArray;
	UPROPERTY()
	bool BoolValue;
	UPROPERTY()
	TArray<bool> BoolArray;
	UPROPERTY()
	double DoubleValue;
	UPROPERTY()
	TArray<double> DoubleArray;
	UPROPERTY()
	FString StringValue;
	UPROPERTY()
	TArray<FString> StringArray;
	UPROPERTY()
	TMap<FString, int>	MapValue;
	//UBT don't support nested containers
	//UPROPERTY()
	//TArray<TMap<FString, int>> MapArray;
	UPROPERTY()
	ESerializeTestClassMemberEnum	EnumValue;
	UPROPERTY()
	TArray<ESerializeTestClassMemberEnum> EnumArray;
	UPROPERTY()
	FSerializeTestMemberStruct	StructValue;
	UPROPERTY()
	TArray<FSerializeTestMemberStruct> StructArray;
	UPROPERTY()
	USerializeTestClassMemberObject*	ObjectValue;
	UPROPERTY()
	TArray<USerializeTestClassMemberObject*> ObjectArray;
};