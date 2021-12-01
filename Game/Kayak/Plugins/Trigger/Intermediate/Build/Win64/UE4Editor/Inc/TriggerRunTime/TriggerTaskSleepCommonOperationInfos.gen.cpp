// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskSleepInformation/TriggerTaskSleepCommonOperationInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskSleepCommonOperationInfos() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskSleep_SleepConditions();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskSleepInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskSleep_SleepConditions::StaticRegisterNativesUTriggerTaskSleep_SleepConditions()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_NoRegister()
	{
		return UTriggerTaskSleep_SleepConditions::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskSleepInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskSleepInformation/TriggerTaskSleepCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskSleepInformation/TriggerTaskSleepCommonOperationInfos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskSleep_SleepConditions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::ClassParams = {
		&UTriggerTaskSleep_SleepConditions::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskSleep_SleepConditions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskSleep_SleepConditions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskSleep_SleepConditions, 201851820);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskSleep_SleepConditions>()
	{
		return UTriggerTaskSleep_SleepConditions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskSleep_SleepConditions(Z_Construct_UClass_UTriggerTaskSleep_SleepConditions, &UTriggerTaskSleep_SleepConditions::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskSleep_SleepConditions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskSleep_SleepConditions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
