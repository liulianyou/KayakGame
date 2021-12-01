// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/MoveTask/TT_MoveBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_MoveBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_MoveBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_MoveBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTT_MoveBase::StaticRegisterNativesUTT_MoveBase()
	{
	}
	UClass* Z_Construct_UClass_UTT_MoveBase_NoRegister()
	{
		return UTT_MoveBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_MoveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_MoveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_MoveBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/MoveTask/TT_MoveBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/MoveTask/TT_MoveBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_MoveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_MoveBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_MoveBase_Statics::ClassParams = {
		&UTT_MoveBase::StaticClass,
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
		0x04B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_MoveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_MoveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_MoveBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_MoveBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_MoveBase, 1021667320);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_MoveBase>()
	{
		return UTT_MoveBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_MoveBase(Z_Construct_UClass_UTT_MoveBase, &UTT_MoveBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_MoveBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_MoveBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
