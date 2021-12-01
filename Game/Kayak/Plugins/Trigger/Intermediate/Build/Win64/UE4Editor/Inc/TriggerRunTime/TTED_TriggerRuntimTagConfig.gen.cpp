// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTED_TriggerRuntimTagConfig() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTriggerTag_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTriggerTag();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
// End Cross Module References
	DEFINE_FUNCTION(UTTED_TriggerRuntimeTagConfig::execOnTriggerTaskStateChange)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerTaskStateChange(Z_Param_Task);
		P_NATIVE_END;
	}
	void UTTED_TriggerRuntimeTagConfig::StaticRegisterNativesUTTED_TriggerRuntimeTagConfig()
	{
		UClass* Class = UTTED_TriggerRuntimeTagConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerTaskStateChange", &UTTED_TriggerRuntimeTagConfig::execOnTriggerTaskStateChange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics
	{
		struct TTED_TriggerRuntimeTagConfig_eventOnTriggerTaskStateChange_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTED_TriggerRuntimeTagConfig_eventOnTriggerTaskStateChange_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig, nullptr, "OnTriggerTaskStateChange", nullptr, nullptr, sizeof(TTED_TriggerRuntimeTagConfig_eventOnTriggerTaskStateChange_Parms), Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_NoRegister()
	{
		return UTTED_TriggerRuntimeTagConfig::StaticClass();
	}
	struct Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinishedTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkippedTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkippedTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SleepTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StopTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PauseTagContanier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeTagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResumeTagContanier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskExternalDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTTED_TriggerRuntimeTagConfig_OnTriggerTaskStateChange, "OnTriggerTaskStateChange" }, // 3124667782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|ExternalData" },
		{ "DisplayName", "RuntimeTag" },
		{ "IncludePath", "Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StartTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task star to run\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task star to run" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StartTagContanier = { "StartTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, StartTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StartTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StartTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ActiveTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task at Active state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task at Active state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ActiveTagContanier = { "ActiveTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, ActiveTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ActiveTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ActiveTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_FinishedTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task finished\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task finished" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_FinishedTagContanier = { "FinishedTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, FinishedTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_FinishedTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_FinishedTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SkippedTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task skipped\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task skipped" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SkippedTagContanier = { "SkippedTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, SkippedTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SkippedTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SkippedTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SleepTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task at Sleep state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task at Sleep state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SleepTagContanier = { "SleepTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, SleepTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SleepTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SleepTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StopTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task at stopped state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task at stopped state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StopTagContanier = { "StopTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, StopTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StopTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StopTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_PauseTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task at Pause state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task at Pause state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_PauseTagContanier = { "PauseTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, PauseTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_PauseTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_PauseTagContanier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ResumeTagContanier_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The tags that will be exposed to the trigger event system when the target task at Resume state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that will be exposed to the trigger event system when the target task at Resume state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ResumeTagContanier = { "ResumeTagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTED_TriggerRuntimeTagConfig, ResumeTagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ResumeTagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ResumeTagContanier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StartTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ActiveTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_FinishedTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SkippedTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_SleepTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_StopTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_PauseTagContanier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::NewProp_ResumeTagContanier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTED_TriggerRuntimeTagConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::ClassParams = {
		&UTTED_TriggerRuntimeTagConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTTED_TriggerRuntimeTagConfig, 3492810577);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTTED_TriggerRuntimeTagConfig>()
	{
		return UTTED_TriggerRuntimeTagConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTTED_TriggerRuntimeTagConfig(Z_Construct_UClass_UTTED_TriggerRuntimeTagConfig, &UTTED_TriggerRuntimeTagConfig::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTTED_TriggerRuntimeTagConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTED_TriggerRuntimeTagConfig);
	void UCheckTriggerTag::StaticRegisterNativesUCheckTriggerTag()
	{
	}
	UClass* Z_Construct_UClass_UCheckTriggerTag_NoRegister()
	{
		return UCheckTriggerTag::StaticClass();
	}
	struct Z_Construct_UClass_UCheckTriggerTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TagContanier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TagContanier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckTriggerTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTriggerTag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* The condition used to check weather the trigger event system have the specific tag container\n*/" },
		{ "DisplayName", "CheckTriggerTag" },
		{ "IncludePath", "Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The condition used to check weather the trigger event system have the specific tag container" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTriggerTag_Statics::NewProp_TagContanier_MetaData[] = {
		{ "Category", "CheckTriggerTag" },
		{ "Comment", "/*\n\x09* The tags that this condition need to check in the trigger event system\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TTED_TriggerRuntimTagConfig.h" },
		{ "ToolTip", "* The tags that this condition need to check in the trigger event system" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTriggerTag_Statics::NewProp_TagContanier = { "TagContanier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckTriggerTag, TagContanier), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UCheckTriggerTag_Statics::NewProp_TagContanier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTriggerTag_Statics::NewProp_TagContanier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckTriggerTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTriggerTag_Statics::NewProp_TagContanier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckTriggerTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckTriggerTag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckTriggerTag_Statics::ClassParams = {
		&UCheckTriggerTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckTriggerTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTriggerTag_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckTriggerTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTriggerTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckTriggerTag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckTriggerTag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckTriggerTag, 1787817632);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckTriggerTag>()
	{
		return UCheckTriggerTag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckTriggerTag(Z_Construct_UClass_UCheckTriggerTag, &UCheckTriggerTag::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckTriggerTag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckTriggerTag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
