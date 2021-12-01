// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetInformationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskResetInformationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskResetInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskResetInformationBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType();
// End Cross Module References
	void UTriggerTaskResetInformationBase::StaticRegisterNativesUTriggerTaskResetInformationBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskResetInformationBase_NoRegister()
	{
		return UTriggerTaskResetInformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics
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
	UObject* (*const Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperationInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetInformationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType_MetaData[] = {
		{ "Category", "OperationInformation|Reset" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType = { "ResetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskResetInformationBase, ResetType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::NewProp_ResetType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskResetInformationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::ClassParams = {
		&UTriggerTaskResetInformationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskResetInformationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskResetInformationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskResetInformationBase, 2562360637);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskResetInformationBase>()
	{
		return UTriggerTaskResetInformationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskResetInformationBase(Z_Construct_UClass_UTriggerTaskResetInformationBase, &UTriggerTaskResetInformationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskResetInformationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskResetInformationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
