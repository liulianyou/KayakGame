// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverConditionDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UGameOverConditionDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UGameOverConditionDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UGameOverConditionDataBase::StaticRegisterNativesUGameOverConditionDataBase()
	{
	}
	UClass* Z_Construct_UClass_UGameOverConditionDataBase_NoRegister()
	{
		return UGameOverConditionDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverConditionDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverConditionDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverConditionDataBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionDataBase.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverConditionDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverConditionDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOverConditionDataBase_Statics::ClassParams = {
		&UGameOverConditionDataBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameOverConditionDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverConditionDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOverConditionDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOverConditionDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOverConditionDataBase, 602555244);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UGameOverConditionDataBase>()
	{
		return UGameOverConditionDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOverConditionDataBase(Z_Construct_UClass_UGameOverConditionDataBase, &UGameOverConditionDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UGameOverConditionDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverConditionDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
