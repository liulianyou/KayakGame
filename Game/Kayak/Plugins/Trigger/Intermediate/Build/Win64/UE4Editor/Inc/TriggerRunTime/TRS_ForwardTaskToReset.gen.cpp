// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/ResetStyle/TRS_ForwardTaskToReset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTRS_ForwardTaskToReset() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTRS_ForwardTaskToReset_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTRS_ForwardTaskToReset();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerResetStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType();
// End Cross Module References
	void UTRS_ForwardTaskToReset::StaticRegisterNativesUTRS_ForwardTaskToReset()
	{
	}
	UClass* Z_Construct_UClass_UTRS_ForwardTaskToReset_NoRegister()
	{
		return UTRS_ForwardTaskToReset::StaticClass();
	}
	struct Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerResetStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "DisplayName", "ForwardTaskToReset" },
		{ "IncludePath", "Tool/TriggerTaskStyle/ResetStyle/TRS_ForwardTaskToReset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/ResetStyle/TRS_ForwardTaskToReset.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType_MetaData[] = {
		{ "Category", "TRS_ForwardTaskToReset" },
		{ "Comment", "/*\n\x09* The reset type for target task to invoke\n\x09* This value should never be Customize or will cause infinite loop\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/ResetStyle/TRS_ForwardTaskToReset.h" },
		{ "ToolTip", "* The reset type for target task to invoke\n* This value should never be Customize or will cause infinite loop" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType = { "ResetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTRS_ForwardTaskToReset, ResetType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType, METADATA_PARAMS(Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::NewProp_ResetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTRS_ForwardTaskToReset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::ClassParams = {
		&UTRS_ForwardTaskToReset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTRS_ForwardTaskToReset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTRS_ForwardTaskToReset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTRS_ForwardTaskToReset, 2842361617);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTRS_ForwardTaskToReset>()
	{
		return UTRS_ForwardTaskToReset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTRS_ForwardTaskToReset(Z_Construct_UClass_UTRS_ForwardTaskToReset, &UTRS_ForwardTaskToReset::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTRS_ForwardTaskToReset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTRS_ForwardTaskToReset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
