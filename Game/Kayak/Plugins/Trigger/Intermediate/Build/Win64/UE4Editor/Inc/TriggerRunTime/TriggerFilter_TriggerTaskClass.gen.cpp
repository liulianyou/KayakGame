// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Filter/TriggerFilter_TriggerTaskClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerFilter_TriggerTaskClass() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTF_TriggerTaskClass_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTF_TriggerTaskClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
	void UTF_TriggerTaskClass::StaticRegisterNativesUTF_TriggerTaskClass()
	{
	}
	UClass* Z_Construct_UClass_UTF_TriggerTaskClass_NoRegister()
	{
		return UTF_TriggerTaskClass::StaticClass();
	}
	struct Z_Construct_UClass_UTF_TriggerTaskClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TriggerTaskClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTaskClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerTaskClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTF_TriggerTaskClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTF_TriggerTaskClass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/Filter/TriggerFilter_TriggerTaskClass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilter_TriggerTaskClass.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses_Inner = { "TriggerTaskClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The class of the trigger task which will used to match the data. \n\x09* If this value has not been specified then it means all trigger task can pass this filter\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilter_TriggerTaskClass.h" },
		{ "ToolTip", "* The class of the trigger task which will used to match the data.\n* If this value has not been specified then it means all trigger task can pass this filter" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses = { "TriggerTaskClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTF_TriggerTaskClass, TriggerTaskClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTF_TriggerTaskClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTF_TriggerTaskClass_Statics::NewProp_TriggerTaskClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTF_TriggerTaskClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTF_TriggerTaskClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTF_TriggerTaskClass_Statics::ClassParams = {
		&UTF_TriggerTaskClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTF_TriggerTaskClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTF_TriggerTaskClass_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTF_TriggerTaskClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTF_TriggerTaskClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTF_TriggerTaskClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTF_TriggerTaskClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTF_TriggerTaskClass, 1127093918);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTF_TriggerTaskClass>()
	{
		return UTF_TriggerTaskClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTF_TriggerTaskClass(Z_Construct_UClass_UTF_TriggerTaskClass, &UTF_TriggerTaskClass::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTF_TriggerTaskClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTF_TriggerTaskClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
