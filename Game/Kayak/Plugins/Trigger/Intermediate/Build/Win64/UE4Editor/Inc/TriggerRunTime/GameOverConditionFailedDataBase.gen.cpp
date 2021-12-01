// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionFailedDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverConditionFailedDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UGameOverConditionFailedDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UGameOverConditionFailedDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UGameOverConditionFailedDataBase::StaticRegisterNativesUGameOverConditionFailedDataBase()
	{
	}
	UClass* Z_Construct_UClass_UGameOverConditionFailedDataBase_NoRegister()
	{
		return UGameOverConditionFailedDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionFailedDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/GameOverConditionData/GameOverConditionFailedDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverConditionFailedDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::ClassParams = {
		&UGameOverConditionFailedDataBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameOverConditionFailedDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameOverConditionFailedDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameOverConditionFailedDataBase, 3551595878);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UGameOverConditionFailedDataBase>()
	{
		return UGameOverConditionFailedDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameOverConditionFailedDataBase(Z_Construct_UClass_UGameOverConditionFailedDataBase, &UGameOverConditionFailedDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UGameOverConditionFailedDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverConditionFailedDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
