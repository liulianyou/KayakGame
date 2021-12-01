// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroup.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSpawnDataGroup() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USimpleSpawnDataGroup_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USimpleSpawnDataGroup();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroup();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void USimpleSpawnDataGroup::StaticRegisterNativesUSimpleSpawnDataGroup()
	{
	}
	UClass* Z_Construct_UClass_USimpleSpawnDataGroup_NoRegister()
	{
		return USimpleSpawnDataGroup::StaticClass();
	}
	struct Z_Construct_UClass_USimpleSpawnDataGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleSpawnDataGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISpawnDataGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleSpawnDataGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple AISpawnDataGroup for ASpawnerTriggerBase. not spawn AISpawnGroupDataTemplate. \n */" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroup.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroup.h" },
		{ "ToolTip", "Simple AISpawnDataGroup for ASpawnerTriggerBase. not spawn AISpawnGroupDataTemplate." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleSpawnDataGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleSpawnDataGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleSpawnDataGroup_Statics::ClassParams = {
		&USimpleSpawnDataGroup::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleSpawnDataGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSpawnDataGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleSpawnDataGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleSpawnDataGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleSpawnDataGroup, 2571437893);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USimpleSpawnDataGroup>()
	{
		return USimpleSpawnDataGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleSpawnDataGroup(Z_Construct_UClass_USimpleSpawnDataGroup, &USimpleSpawnDataGroup::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USimpleSpawnDataGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleSpawnDataGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
