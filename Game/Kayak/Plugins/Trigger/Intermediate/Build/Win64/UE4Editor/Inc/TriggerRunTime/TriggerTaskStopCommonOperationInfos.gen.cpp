// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStopCommonOperationInfos() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_Destroyed_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_Destroyed();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStopInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_StopCondition_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_StopCondition();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks();
// End Cross Module References
	void UTriggerTaskStop_Destroyed::StaticRegisterNativesUTriggerTaskStop_Destroyed()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskStop_Destroyed_NoRegister()
	{
		return UTriggerTaskStop_Destroyed::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStopInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo|TriggerTaskStop" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStop_Destroyed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::ClassParams = {
		&UTriggerTaskStop_Destroyed::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStop_Destroyed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStop_Destroyed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStop_Destroyed, 484482345);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStop_Destroyed>()
	{
		return UTriggerTaskStop_Destroyed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStop_Destroyed(Z_Construct_UClass_UTriggerTaskStop_Destroyed, &UTriggerTaskStop_Destroyed::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStop_Destroyed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStop_Destroyed);
	void UTriggerTaskStop_StopCondition::StaticRegisterNativesUTriggerTaskStop_StopCondition()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskStop_StopCondition_NoRegister()
	{
		return UTriggerTaskStop_StopCondition::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStopInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo|TriggerTaskStop" },
		{ "Comment", "/*\n* Stop the trigger task by the stop conditions which is confined by the LD\n*/" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
		{ "ToolTip", "* Stop the trigger task by the stop conditions which is confined by the LD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStop_StopCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::ClassParams = {
		&UTriggerTaskStop_StopCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStop_StopCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStop_StopCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStop_StopCondition, 395749221);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStop_StopCondition>()
	{
		return UTriggerTaskStop_StopCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStop_StopCondition(Z_Construct_UClass_UTriggerTaskStop_StopCondition, &UTriggerTaskStop_StopCondition::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStop_StopCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStop_StopCondition);
	void UTriggerTaskStop_StopOtherRespawnTasks::StaticRegisterNativesUTriggerTaskStop_StopOtherRespawnTasks()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_NoRegister()
	{
		return UTriggerTaskStop_StopOtherRespawnTasks::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStopInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo|TriggerTaskStop" },
		{ "Comment", "/*\n* Stop the trigger task by the stop conditions which is confined by the LD\n*/" },
		{ "DisplayName", "StopOtherRespawnTasks" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStopInformation/TriggerTaskStopCommonOperationInfos.h" },
		{ "ToolTip", "* Stop the trigger task by the stop conditions which is confined by the LD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStop_StopOtherRespawnTasks>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::ClassParams = {
		&UTriggerTaskStop_StopOtherRespawnTasks::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStop_StopOtherRespawnTasks, 3091433523);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStop_StopOtherRespawnTasks>()
	{
		return UTriggerTaskStop_StopOtherRespawnTasks::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStop_StopOtherRespawnTasks(Z_Construct_UClass_UTriggerTaskStop_StopOtherRespawnTasks, &UTriggerTaskStop_StopOtherRespawnTasks::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStop_StopOtherRespawnTasks"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStop_StopOtherRespawnTasks);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
