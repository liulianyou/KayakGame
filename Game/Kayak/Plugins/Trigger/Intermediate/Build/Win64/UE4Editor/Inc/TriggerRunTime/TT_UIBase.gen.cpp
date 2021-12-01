// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/EffectTask/UI/TT_UIBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_UIBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_UIBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_UIBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_EffectBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTT_UIBase::StaticRegisterNativesUTT_UIBase()
	{
	}
	UClass* Z_Construct_UClass_UTT_UIBase_NoRegister()
	{
		return UTT_UIBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_UIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_UIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTT_EffectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_UIBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* Generate game play data to the target UI from this class\n*/" },
		{ "IncludePath", "TriggerTask/EffectTask/UI/TT_UIBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/TT_UIBase.h" },
		{ "ToolTip", "* Generate game play data to the target UI from this class" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_UIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_UIBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_UIBase_Statics::ClassParams = {
		&UTT_UIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_UIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_UIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_UIBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_UIBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_UIBase, 1688472280);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_UIBase>()
	{
		return UTT_UIBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_UIBase(Z_Construct_UClass_UTT_UIBase, &UTT_UIBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_UIBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_UIBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
