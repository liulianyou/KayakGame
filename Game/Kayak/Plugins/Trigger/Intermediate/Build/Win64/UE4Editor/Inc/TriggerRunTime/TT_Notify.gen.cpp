// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_Notify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_Notify() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_NotifyBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_NotifyBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTT_NotifyBase::StaticRegisterNativesUTT_NotifyBase()
	{
	}
	UClass* Z_Construct_UClass_UTT_NotifyBase_NoRegister()
	{
		return UTT_NotifyBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_NotifyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_NotifyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_NotifyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trigger" },
		{ "IncludePath", "TriggerTask/TT_Notify.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_Notify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_NotifyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_NotifyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_NotifyBase_Statics::ClassParams = {
		&UTT_NotifyBase::StaticClass,
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
		0x04A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_NotifyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_NotifyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_NotifyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_NotifyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_NotifyBase, 438494233);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_NotifyBase>()
	{
		return UTT_NotifyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_NotifyBase(Z_Construct_UClass_UTT_NotifyBase, &UTT_NotifyBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_NotifyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_NotifyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
