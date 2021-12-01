// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_GameOver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_GameOver() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_GameOver_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_GameOver();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTT_GameOver::StaticRegisterNativesUTT_GameOver()
	{
	}
	UClass* Z_Construct_UClass_UTT_GameOver_NoRegister()
	{
		return UTT_GameOver::StaticClass();
	}
	struct Z_Construct_UClass_UTT_GameOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NextMapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_GameOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GameOver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/TT_GameOver.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GameOver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_GameOver_Statics::NewProp_NextMapName_MetaData[] = {
		{ "Category", "GameOver" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_GameOver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTT_GameOver_Statics::NewProp_NextMapName = { "NextMapName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_GameOver, NextMapName), METADATA_PARAMS(Z_Construct_UClass_UTT_GameOver_Statics::NewProp_NextMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GameOver_Statics::NewProp_NextMapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_GameOver_Statics::NewProp_NextMapName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_GameOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_GameOver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_GameOver_Statics::ClassParams = {
		&UTT_GameOver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTT_GameOver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GameOver_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_GameOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_GameOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_GameOver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_GameOver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_GameOver, 2248493470);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_GameOver>()
	{
		return UTT_GameOver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_GameOver(Z_Construct_UClass_UTT_GameOver, &UTT_GameOver::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_GameOver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_GameOver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
