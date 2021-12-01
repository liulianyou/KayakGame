// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroupPool.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSpawnDataGroupPool() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USimpleSpawnDataGroupPool_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USimpleSpawnDataGroupPool();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroupPool();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void USimpleSpawnDataGroupPool::StaticRegisterNativesUSimpleSpawnDataGroupPool()
	{
	}
	UClass* Z_Construct_UClass_USimpleSpawnDataGroupPool_NoRegister()
	{
		return USimpleSpawnDataGroupPool::StaticClass();
	}
	struct Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISpawnDataGroupPool,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple AISpawnDataGroupPool, like USimpleSpawnDataGroup.\n */" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroupPool.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/SimpleSpawnDataGroupPool.h" },
		{ "ToolTip", "Simple AISpawnDataGroupPool, like USimpleSpawnDataGroup." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleSpawnDataGroupPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::ClassParams = {
		&USimpleSpawnDataGroupPool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleSpawnDataGroupPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleSpawnDataGroupPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleSpawnDataGroupPool, 1911642919);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USimpleSpawnDataGroupPool>()
	{
		return USimpleSpawnDataGroupPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleSpawnDataGroupPool(Z_Construct_UClass_USimpleSpawnDataGroupPool, &USimpleSpawnDataGroupPool::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USimpleSpawnDataGroupPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleSpawnDataGroupPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
