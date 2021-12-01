// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/DeadSystem/DeadSystemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadSystemManager() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDeadSystemManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDeadSystemManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UDeadSystemManager::StaticRegisterNativesUDeadSystemManager()
	{
	}
	UClass* Z_Construct_UClass_UDeadSystemManager_NoRegister()
	{
		return UDeadSystemManager::StaticClass();
	}
	struct Z_Construct_UClass_UDeadSystemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadSystemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadSystemManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool/DeadSystem/DeadSystemManager.h" },
		{ "ModuleRelativePath", "Public/Tool/DeadSystem/DeadSystemManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadSystemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadSystemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadSystemManager_Statics::ClassParams = {
		&UDeadSystemManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeadSystemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadSystemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadSystemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadSystemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadSystemManager, 976023776);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UDeadSystemManager>()
	{
		return UDeadSystemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadSystemManager(Z_Construct_UClass_UDeadSystemManager, &UDeadSystemManager::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UDeadSystemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadSystemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
