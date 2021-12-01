#include "Serialize/SerializeTest.h"


USerializeTestClassMemberObject::USerializeTestClassMemberObject(const FObjectInitializer& ObjectInitialize) :
	Super(ObjectInitialize)
{

}

USerializeTestClass::USerializeTestClass(const FObjectInitializer& ObjectInitialize) :
	Super(ObjectInitialize)
{

}

void USerializeTestClass::InitializeMemberValues()
{
	IntValue = 9999;
	IntArray.Add(8888);
	IntArray.Add(9999);

	BoolValue = true;
	BoolArray.Add(true);
	BoolArray.Add(false);

	FloatValue = 9999.0f;
	FloatArray.Add(8888.0f);
	FloatArray.Add(9999.0f);

	DoubleValue = 9999.0f;
	DoubleArray.Add(8888.0f);
	DoubleArray.Add(9999.0f);

	StringValue = TEXT("StringValue");
	StringArray.Add(TEXT("StringValue1"));
	StringArray.Add(TEXT("StringValue2"));

	MapValue.Add(TEXT("Key"), 9999);
	//UBT don't support nested containers
	//TMap<FString, int> MapValue1;
	//MapValue1.Add(TEXT("Key"), 8888);
	//MapArray.Add(MapValue);
	//MapArray.Add(MapValue1);

	EnumValue = ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_0;
	EnumArray.Add(ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_0);
	EnumArray.Add(ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_1);

	StructValue.IntValue = 9999;
	StructValue.Parent = this;
	FSerializeTestMemberStruct StructValue1;
	StructValue1.IntValue = 8888;
	StructValue1.Parent = this;
	StructArray.Add(StructValue);
	StructArray.Add(StructValue1);

	ObjectValue = NewObject<USerializeTestClassMemberObject>(this, TEXT("TestObjectValue"), RF_Public);
	ObjectValue->IntValue = 9999;
	ObjectValue->Parent = this;
	ObjectArray.Add(ObjectValue);

	USerializeTestClassMemberObject* ObjectValue1 = NewObject<USerializeTestClassMemberObject>(this, TEXT("TestObjectValue1"), RF_Public);
	ObjectValue1->IntValue = 9999;
	ObjectValue1->Parent = this;
	ObjectArray.Add(ObjectValue1);
}