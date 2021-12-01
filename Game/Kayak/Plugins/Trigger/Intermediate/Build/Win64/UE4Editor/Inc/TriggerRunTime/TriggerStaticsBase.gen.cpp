// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/TriggerStatics/TriggerStaticsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerStaticsBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStaticsBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStaticsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
	void UTriggerStaticsBase::StaticRegisterNativesUTriggerStaticsBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerStaticsBase_NoRegister()
	{
		return UTriggerStaticsBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerStaticsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InspectorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InspectorClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerStaticsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerStaticsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* I will use this class and all its derived class to inspect all the dates in the trigger system\n*/" },
		{ "IncludePath", "Tool/ToolFactory/TriggerStatics/TriggerStaticsBase.h" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TriggerStaticsBase.h" },
		{ "ToolTip", "* I will use this class and all its derived class to inspect all the dates in the trigger system" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses_Inner = { "InspectorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses_MetaData[] = {
		{ "Category", "TriggerRuntime|TriggerStatics" },
		{ "Comment", "//The class we should inspect to trigger class\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TriggerStaticsBase.h" },
		{ "ToolTip", "The class we should inspect to trigger class" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses = { "InspectorClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerStaticsBase, InspectorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerStaticsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerStaticsBase_Statics::NewProp_InspectorClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerStaticsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerStaticsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerStaticsBase_Statics::ClassParams = {
		&UTriggerStaticsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerStaticsBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStaticsBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerStaticsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStaticsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerStaticsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerStaticsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerStaticsBase, 3851008060);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerStaticsBase>()
	{
		return UTriggerStaticsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerStaticsBase(Z_Construct_UClass_UTriggerStaticsBase, &UTriggerStaticsBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerStaticsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerStaticsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
