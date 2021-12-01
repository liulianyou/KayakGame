// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseCommonOperationInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskPauseCommonOperationInfos() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskPause_PauseConditions_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskPause_PauseConditions();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskPauseInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerTaskPause_PauseConditions::StaticRegisterNativesUTriggerTaskPause_PauseConditions()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskPause_PauseConditions_NoRegister()
	{
		return UTriggerTaskPause_PauseConditions::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskPauseInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskPauseInformation/TriggerTaskPauseCommonOperationInfos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskPause_PauseConditions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::ClassParams = {
		&UTriggerTaskPause_PauseConditions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskPause_PauseConditions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskPause_PauseConditions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskPause_PauseConditions, 1684787398);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskPause_PauseConditions>()
	{
		return UTriggerTaskPause_PauseConditions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskPause_PauseConditions(Z_Construct_UClass_UTriggerTaskPause_PauseConditions, &UTriggerTaskPause_PauseConditions::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskPause_PauseConditions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskPause_PauseConditions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
