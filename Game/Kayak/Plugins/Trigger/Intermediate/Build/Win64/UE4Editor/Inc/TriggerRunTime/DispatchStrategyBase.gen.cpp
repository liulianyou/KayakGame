// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerDispatchType/DispatchStragety/DispatchStrategyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDispatchStrategyBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDispatchStrategyBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDispatchStrategyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UDispatchStrategyBase::StaticRegisterNativesUDispatchStrategyBase()
	{
	}
	UClass* Z_Construct_UClass_UDispatchStrategyBase_NoRegister()
	{
		return UDispatchStrategyBase::StaticClass();
	}
	struct Z_Construct_UClass_UDispatchStrategyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDispatchStrategyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDispatchStrategyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerDispatchType/DispatchStragety/DispatchStrategyBase.h" },
		{ "ModuleRelativePath", "Public/TriggerDispatchType/DispatchStragety/DispatchStrategyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDispatchStrategyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDispatchStrategyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDispatchStrategyBase_Statics::ClassParams = {
		&UDispatchStrategyBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDispatchStrategyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDispatchStrategyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDispatchStrategyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDispatchStrategyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDispatchStrategyBase, 639438823);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UDispatchStrategyBase>()
	{
		return UDispatchStrategyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDispatchStrategyBase(Z_Construct_UClass_UDispatchStrategyBase, &UDispatchStrategyBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UDispatchStrategyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDispatchStrategyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
