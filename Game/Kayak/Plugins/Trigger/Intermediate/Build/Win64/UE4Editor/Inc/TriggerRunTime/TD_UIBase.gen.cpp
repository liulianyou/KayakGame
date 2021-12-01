// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerDescriptor/TD_UIBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTD_UIBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTD_UIBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTD_UIBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerDescriptorBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTD_UIBase::StaticRegisterNativesUTD_UIBase()
	{
	}
	UClass* Z_Construct_UClass_UTD_UIBase_NoRegister()
	{
		return UTD_UIBase::StaticClass();
	}
	struct Z_Construct_UClass_UTD_UIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alias_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Alias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTD_UIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerDescriptorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTD_UIBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerDescriptor/TD_UIBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TD_UIBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Alias_MetaData[] = {
		{ "Category", "Descriptor" },
		{ "Comment", "/*\n\x09* The alias which can be modified by the LD\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TD_UIBase.h" },
		{ "ToolTip", "* The alias which can be modified by the LD" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Alias = { "Alias", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTD_UIBase, Alias), METADATA_PARAMS(Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Alias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Alias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Descriptor" },
		{ "Comment", "/*\n\x09* The description can be modified by the LD\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TD_UIBase.h" },
		{ "ToolTip", "* The description can be modified by the LD" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTD_UIBase, Description), METADATA_PARAMS(Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTD_UIBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Alias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTD_UIBase_Statics::NewProp_Description,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTD_UIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTD_UIBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTD_UIBase_Statics::ClassParams = {
		&UTD_UIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTD_UIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTD_UIBase_Statics::PropPointers),
		0,
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTD_UIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTD_UIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTD_UIBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTD_UIBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTD_UIBase, 128344074);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTD_UIBase>()
	{
		return UTD_UIBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTD_UIBase(Z_Construct_UClass_UTD_UIBase, &UTD_UIBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTD_UIBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTD_UIBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
