// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/Serialize/SerializeTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializeTest() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSerializeTestMemberStruct();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USerializeTestClass_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USerializeTestClassMemberObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USerializeTestClassMemberObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USerializeTestClass();
// End Cross Module References
	static UEnum* ESerializeTestClassMemberEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ESerializeTestClassMemberEnum"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ESerializeTestClassMemberEnum>()
	{
		return ESerializeTestClassMemberEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESerializeTestClassMemberEnum(ESerializeTestClassMemberEnum_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ESerializeTestClassMemberEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum_Hash() { return 3987045669U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESerializeTestClassMemberEnum"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_0", (int64)ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_0 },
				{ "ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_1", (int64)ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_1 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ESerializeTestClassMemberEnum_0.DisplayName", "Test1" },
				{ "ESerializeTestClassMemberEnum_0.Name", "ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_0" },
				{ "ESerializeTestClassMemberEnum_1.DisplayName", "Test2" },
				{ "ESerializeTestClassMemberEnum_1.Name", "ESerializeTestClassMemberEnum::ESerializeTestClassMemberEnum_1" },
				{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ESerializeTestClassMemberEnum",
				"ESerializeTestClassMemberEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSerializeTestMemberStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializeTestMemberStruct, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SerializeTestMemberStruct"), sizeof(FSerializeTestMemberStruct), Get_Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSerializeTestMemberStruct>()
{
	return FSerializeTestMemberStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSerializeTestMemberStruct(FSerializeTestMemberStruct::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SerializeTestMemberStruct"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSerializeTestMemberStruct
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSerializeTestMemberStruct()
	{
		UScriptStruct::DeferCppStructOps<FSerializeTestMemberStruct>(FName(TEXT("SerializeTestMemberStruct")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSerializeTestMemberStruct;
	struct Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializeTestMemberStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSerializeTestMemberStruct, IntValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSerializeTestMemberStruct, Parent), Z_Construct_UClass_USerializeTestClass_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::NewProp_Parent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SerializeTestMemberStruct",
		sizeof(FSerializeTestMemberStruct),
		alignof(FSerializeTestMemberStruct),
		Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializeTestMemberStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SerializeTestMemberStruct"), sizeof(FSerializeTestMemberStruct), Get_Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSerializeTestMemberStruct_Hash() { return 3865692502U; }
	void USerializeTestClassMemberObject::StaticRegisterNativesUSerializeTestClassMemberObject()
	{
	}
	UClass* Z_Construct_UClass_USerializeTestClassMemberObject_NoRegister()
	{
		return USerializeTestClassMemberObject::StaticClass();
	}
	struct Z_Construct_UClass_USerializeTestClassMemberObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerializeTestClassMemberObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClassMemberObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool/ToolFactory/Serialize/SerializeTest.h" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClassMemberObject, IntValue), METADATA_PARAMS(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_IntValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClassMemberObject, Parent), Z_Construct_UClass_USerializeTestClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_Parent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USerializeTestClassMemberObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClassMemberObject_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerializeTestClassMemberObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerializeTestClassMemberObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerializeTestClassMemberObject_Statics::ClassParams = {
		&USerializeTestClassMemberObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USerializeTestClassMemberObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClassMemberObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerializeTestClassMemberObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerializeTestClassMemberObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerializeTestClassMemberObject, 1102382264);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USerializeTestClassMemberObject>()
	{
		return USerializeTestClassMemberObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerializeTestClassMemberObject(Z_Construct_UClass_USerializeTestClassMemberObject, &USerializeTestClassMemberObject::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USerializeTestClassMemberObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerializeTestClassMemberObject);
	void USerializeTestClass::StaticRegisterNativesUSerializeTestClass()
	{
	}
	UClass* Z_Construct_UClass_USerializeTestClass_NoRegister()
	{
		return USerializeTestClass::StaticClass();
	}
	struct Z_Construct_UClass_USerializeTestClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IntArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[];
#endif
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoolArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DoubleValue;
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_DoubleArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoubleArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DoubleArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MapValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnumValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumArray_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EnumArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnumArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StructArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StructArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerializeTestClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool/ToolFactory/Serialize/SerializeTest.h" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, IntValue), METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntValue_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, FloatValue), METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	void Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((USerializeTestClass*)Obj)->BoolValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USerializeTestClass), &Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray_Inner = { "BoolArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray = { "BoolArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, BoolArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleValue = { "DoubleValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, DoubleValue), METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleValue_MetaData)) };
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray_Inner = { "DoubleArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray = { "DoubleArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, DoubleArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, StringValue), METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_ValueProp = { "MapValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_Key_KeyProp = { "MapValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue = { "MapValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, MapValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue_MetaData[] = {
		{ "Comment", "//UBT don't support nested containers\n//UPROPERTY()\n//TArray<TMap<FString, int>> MapArray;\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
		{ "ToolTip", "UBT don't support nested containers\nUPROPERTY()\nTArray<TMap<FString, int>> MapArray;" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue = { "EnumValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, EnumValue), Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_Inner = { "EnumArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_TriggerRunTime_ESerializeTestClassMemberEnum, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray = { "EnumArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, EnumArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructValue = { "StructValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, StructValue), Z_Construct_UScriptStruct_FSerializeTestMemberStruct, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray_Inner = { "StructArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSerializeTestMemberStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray = { "StructArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, StructArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, ObjectValue), Z_Construct_UClass_USerializeTestClassMemberObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray_Inner = { "ObjectArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USerializeTestClassMemberObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/Serialize/SerializeTest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray = { "ObjectArray", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USerializeTestClass, ObjectArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USerializeTestClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_IntArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_FloatArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_BoolArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_DoubleArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StringArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_MapValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_EnumArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_StructArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USerializeTestClass_Statics::NewProp_ObjectArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerializeTestClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerializeTestClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerializeTestClass_Statics::ClassParams = {
		&USerializeTestClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USerializeTestClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USerializeTestClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USerializeTestClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerializeTestClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerializeTestClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerializeTestClass, 3302923705);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USerializeTestClass>()
	{
		return USerializeTestClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerializeTestClass(Z_Construct_UClass_USerializeTestClass, &USerializeTestClass::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USerializeTestClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerializeTestClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
