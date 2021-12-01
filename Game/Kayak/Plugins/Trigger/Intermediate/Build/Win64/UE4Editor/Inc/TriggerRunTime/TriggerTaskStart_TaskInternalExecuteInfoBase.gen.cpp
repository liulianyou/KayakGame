// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStart_TaskInternalExecuteInfoBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_BeginPlay_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_BeginPlay();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskStart_TaskInternalExecutionInfoBase::execGetParentOperationInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperationInformationBase**)Z_Param__Result=P_THIS->GetParentOperationInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStart_TaskInternalExecutionInfoBase::execSetParentOperationInfo)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInformation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentOperationInfo(Z_Param_OperationInformation);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticRegisterNativesUTriggerTaskStart_TaskInternalExecutionInfoBase()
	{
		UClass* Class = UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParentOperationInfo", &UTriggerTaskStart_TaskInternalExecutionInfoBase::execGetParentOperationInfo },
			{ "SetParentOperationInfo", &UTriggerTaskStart_TaskInternalExecutionInfoBase::execSetParentOperationInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics
	{
		struct TriggerTaskStart_TaskInternalExecutionInfoBase_eventGetParentOperationInfo_Parms
		{
			UOperationInformationBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskInternalExecutionInfoBase_eventGetParentOperationInfo_Parms, ReturnValue), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase, nullptr, "GetParentOperationInfo", nullptr, nullptr, sizeof(TriggerTaskStart_TaskInternalExecutionInfoBase_eventGetParentOperationInfo_Parms), Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics
	{
		struct TriggerTaskStart_TaskInternalExecutionInfoBase_eventSetParentOperationInfo_Parms
		{
			UOperationInformationBase* OperationInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInformation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::NewProp_OperationInformation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::NewProp_OperationInformation = { "OperationInformation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskInternalExecutionInfoBase_eventSetParentOperationInfo_Parms, OperationInformation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::NewProp_OperationInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::NewProp_OperationInformation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::NewProp_OperationInformation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase, nullptr, "SetParentOperationInfo", nullptr, nullptr, sizeof(TriggerTaskStart_TaskInternalExecutionInfoBase_eventSetParentOperationInfo_Parms), Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_NoRegister()
	{
		return UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStartInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_GetParentOperationInfo, "GetParentOperationInfo" }, // 589561911
		{ &Z_Construct_UFunction_UTriggerTaskStart_TaskInternalExecutionInfoBase_SetParentOperationInfo, "SetParentOperationInfo" }, // 300122386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::NewProp_ParentOperationInfo_MetaData[] = {
		{ "Comment", "/*\n\x09* The parent toggle information who own this info as this owner task of this info is restarted when this task finished\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* The parent toggle information who own this info as this owner task of this info is restarted when this task finished" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::NewProp_ParentOperationInfo = { "ParentOperationInfo", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskStart_TaskInternalExecutionInfoBase, ParentOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::NewProp_ParentOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::NewProp_ParentOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::NewProp_ParentOperationInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_TaskInternalExecutionInfoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::ClassParams = {
		&UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::PropPointers),
		0,
		0x04B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_TaskInternalExecutionInfoBase, 513279298);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_TaskInternalExecutionInfoBase>()
	{
		return UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase(Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase, &UTriggerTaskStart_TaskInternalExecutionInfoBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_TaskInternalExecutionInfoBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_TaskInternalExecutionInfoBase);
	DEFINE_FUNCTION(UTriggerTaskStart_BeginPlay::execStartTaskAtBeginPlay)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_StartedTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_BeginPlay**)Z_Param__Result=UTriggerTaskStart_BeginPlay::StartTaskAtBeginPlay(Z_Param_StartedTask,Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_BeginPlay::StaticRegisterNativesUTriggerTaskStart_BeginPlay()
	{
		UClass* Class = UTriggerTaskStart_BeginPlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTaskAtBeginPlay", &UTriggerTaskStart_BeginPlay::execStartTaskAtBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics
	{
		struct TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms
		{
			UTriggerTaskBase* StartedTask;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_BeginPlay* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartedTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_StartedTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_StartedTask = { "StartedTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms, StartedTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_StartedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_StartedTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_BeginPlay_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_StartedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Created new operation to start the trigger task at begin play state\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Created new operation to start the trigger task at begin play state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_BeginPlay, nullptr, "StartTaskAtBeginPlay", nullptr, nullptr, sizeof(TriggerTaskStart_BeginPlay_eventStartTaskAtBeginPlay_Parms), Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_BeginPlay_NoRegister()
	{
		return UTriggerTaskStart_BeginPlay::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_BeginPlay_StartTaskAtBeginPlay, "StartTaskAtBeginPlay" }, // 3500270449
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This information used to store the the target trigger task running at begin play\n*/" },
		{ "DisplayName", "BeginPlay" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* This information used to store the the target trigger task running at begin play" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_BeginPlay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::ClassParams = {
		&UTriggerTaskStart_BeginPlay::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_BeginPlay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_BeginPlay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_BeginPlay, 989660770);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_BeginPlay>()
	{
		return UTriggerTaskStart_BeginPlay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_BeginPlay(Z_Construct_UClass_UTriggerTaskStart_BeginPlay, &UTriggerTaskStart_BeginPlay::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_BeginPlay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_BeginPlay);
	DEFINE_FUNCTION(UTriggerTaskStart_StartTaskByStartConditions::execStartTaskByStartConditions)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_StartedTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_StartTaskByStartConditions**)Z_Param__Result=UTriggerTaskStart_StartTaskByStartConditions::StartTaskByStartConditions(Z_Param_StartedTask,Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_StartTaskByStartConditions::StaticRegisterNativesUTriggerTaskStart_StartTaskByStartConditions()
	{
		UClass* Class = UTriggerTaskStart_StartTaskByStartConditions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTaskByStartConditions", &UTriggerTaskStart_StartTaskByStartConditions::execStartTaskByStartConditions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics
	{
		struct TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms
		{
			UTriggerTaskBase* StartedTask;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_StartTaskByStartConditions* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartedTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartedTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_StartedTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_StartedTask = { "StartedTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms, StartedTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_StartedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_StartedTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_StartedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Created new operation to start the trigger task when the start condition passed\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Created new operation to start the trigger task when the start condition passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions, nullptr, "StartTaskByStartConditions", nullptr, nullptr, sizeof(TriggerTaskStart_StartTaskByStartConditions_eventStartTaskByStartConditions_Parms), Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_NoRegister()
	{
		return UTriggerTaskStart_StartTaskByStartConditions::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_StartTaskByStartConditions_StartTaskByStartConditions, "StartTaskByStartConditions" }, // 3434908202
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* this information stands for when the task is finished and try to restart due to some conditions\n*/" },
		{ "DisplayName", "StartTaskByStartConditions" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* this information stands for when the task is finished and try to restart due to some conditions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_StartTaskByStartConditions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::ClassParams = {
		&UTriggerTaskStart_StartTaskByStartConditions::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_StartTaskByStartConditions, 3610892621);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_StartTaskByStartConditions>()
	{
		return UTriggerTaskStart_StartTaskByStartConditions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_StartTaskByStartConditions(Z_Construct_UClass_UTriggerTaskStart_StartTaskByStartConditions, &UTriggerTaskStart_StartTaskByStartConditions::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_StartTaskByStartConditions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_StartTaskByStartConditions);
	DEFINE_FUNCTION(UTriggerTaskStart_TaskFinishedToNotifyChild::execTaskFinishedToNotifyChild)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ParentTask);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ChildTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_TaskFinishedToNotifyChild**)Z_Param__Result=UTriggerTaskStart_TaskFinishedToNotifyChild::TaskFinishedToNotifyChild(Z_Param_ParentTask,Z_Param_ChildTask,Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_TaskFinishedToNotifyChild::StaticRegisterNativesUTriggerTaskStart_TaskFinishedToNotifyChild()
	{
		UClass* Class = UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskFinishedToNotifyChild", &UTriggerTaskStart_TaskFinishedToNotifyChild::execTaskFinishedToNotifyChild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics
	{
		struct TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms
		{
			UTriggerTaskBase* ParentTask;
			UTriggerTaskBase* ChildTask;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_TaskFinishedToNotifyChild* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentTask = { "ParentTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms, ParentTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ChildTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms, ChildTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ChildTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ChildTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Created new operation to start the trigger task when its parent task is finished and try to notify the child task\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Created new operation to start the trigger task when its parent task is finished and try to notify the child task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild, nullptr, "TaskFinishedToNotifyChild", nullptr, nullptr, sizeof(TriggerTaskStart_TaskFinishedToNotifyChild_eventTaskFinishedToNotifyChild_Parms), Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_NoRegister()
	{
		return UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_TaskFinishedToNotifyChild_TaskFinishedToNotifyChild, "TaskFinishedToNotifyChild" }, // 590488011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This information will be generated when the task is finished and try to notify the child task to run\n*/" },
		{ "DisplayName", "TaskFinishedToNotifyChild" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* This information will be generated when the task is finished and try to notify the child task to run" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_TaskFinishedToNotifyChild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::ClassParams = {
		&UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_TaskFinishedToNotifyChild, 528191473);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_TaskFinishedToNotifyChild>()
	{
		return UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild(Z_Construct_UClass_UTriggerTaskStart_TaskFinishedToNotifyChild, &UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_TaskFinishedToNotifyChild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_TaskFinishedToNotifyChild);
	DEFINE_FUNCTION(UTriggerTaskStart_NotifyChildNode::execNotifyChildNode)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_FinishedTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_NotifyChildNode**)Z_Param__Result=UTriggerTaskStart_NotifyChildNode::NotifyChildNode(Z_Param_FinishedTask,Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_NotifyChildNode::StaticRegisterNativesUTriggerTaskStart_NotifyChildNode()
	{
		UClass* Class = UTriggerTaskStart_NotifyChildNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyChildNode", &UTriggerTaskStart_NotifyChildNode::execNotifyChildNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics
	{
		struct TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms
		{
			UTriggerTaskBase* FinishedTask;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_NotifyChildNode* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_FinishedTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_FinishedTask = { "FinishedTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms, FinishedTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_FinishedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_FinishedTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_FinishedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Create new operation to start task in the child nodes of the trigger task component\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Create new operation to start task in the child nodes of the trigger task component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode, nullptr, "NotifyChildNode", nullptr, nullptr, sizeof(TriggerTaskStart_NotifyChildNode_eventNotifyChildNode_Parms), Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_NoRegister()
	{
		return UTriggerTaskStart_NotifyChildNode::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_NotifyChildNode_NotifyChildNode, "NotifyChildNode" }, // 3472594825
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This is class used to store the information when the task is finished and want to notify the trigger owner to notify other trigger to run trigger task\n*/" },
		{ "DisplayName", "NotifyChildNode" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* This is class used to store the information when the task is finished and want to notify the trigger owner to notify other trigger to run trigger task" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_NotifyChildNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::ClassParams = {
		&UTriggerTaskStart_NotifyChildNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_NotifyChildNode, 2108907424);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_NotifyChildNode>()
	{
		return UTriggerTaskStart_NotifyChildNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_NotifyChildNode(Z_Construct_UClass_UTriggerTaskStart_NotifyChildNode, &UTriggerTaskStart_NotifyChildNode::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_NotifyChildNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_NotifyChildNode);
	void UTriggerTaskStart_RepeatTaskBase::StaticRegisterNativesUTriggerTaskStart_RepeatTaskBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_NoRegister()
	{
		return UTriggerTaskStart_RepeatTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This information will be generated when the task run repeatedly\n*/" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* This information will be generated when the task run repeatedly" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_RepeatTaskBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::ClassParams = {
		&UTriggerTaskStart_RepeatTaskBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x04B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_RepeatTaskBase, 2325592691);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_RepeatTaskBase>()
	{
		return UTriggerTaskStart_RepeatTaskBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_RepeatTaskBase(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase, &UTriggerTaskStart_RepeatTaskBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_RepeatTaskBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_RepeatTaskBase);
	DEFINE_FUNCTION(UTriggerTaskStart_RepeatConditionsWithNoStyles::execRepeatConditionsWithNoStyles)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_RepeatConditionsWithNoStyles**)Z_Param__Result=UTriggerTaskStart_RepeatConditionsWithNoStyles::RepeatConditionsWithNoStyles(Z_Param_Causer,Z_Param_TargetTask,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticRegisterNativesUTriggerTaskStart_RepeatConditionsWithNoStyles()
	{
		UClass* Class = UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RepeatConditionsWithNoStyles", &UTriggerTaskStart_RepeatConditionsWithNoStyles::execRepeatConditionsWithNoStyles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics
	{
		struct TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms
		{
			UObject* Causer;
			UTriggerTaskBase* TargetTask;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_RepeatConditionsWithNoStyles* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_TargetTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Create new operation to start the trigger task when there is no specific styles in the repeat condition\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Create new operation to start the trigger task when there is no specific styles in the repeat condition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles, nullptr, "RepeatConditionsWithNoStyles", nullptr, nullptr, sizeof(TriggerTaskStart_RepeatConditionsWithNoStyles_eventRepeatConditionsWithNoStyles_Parms), Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_NoRegister()
	{
		return UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_TaskInternalExecutionInfoBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_RepeatConditionsWithNoStyles_RepeatConditionsWithNoStyles, "RepeatConditionsWithNoStyles" }, // 1524891169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This operation should occurred when the the repeat condition has meet the condition, then the repeat conditions have no specific styles then go to start the target task directly\n*/" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* This operation should occurred when the the repeat condition has meet the condition, then the repeat conditions have no specific styles then go to start the target task directly" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_RepeatConditionsWithNoStyles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::ClassParams = {
		&UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_RepeatConditionsWithNoStyles, 1638064764);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_RepeatConditionsWithNoStyles>()
	{
		return UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles(Z_Construct_UClass_UTriggerTaskStart_RepeatConditionsWithNoStyles, &UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_RepeatConditionsWithNoStyles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_RepeatConditionsWithNoStyles);
	DEFINE_FUNCTION(UTriggerTaskStart_RepeatTaskWhenReachState::execGetTaskState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETriggerTaskState*)Z_Param__Result=P_THIS->GetTaskState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStart_RepeatTaskWhenReachState::execSetTaskState)
	{
		P_GET_ENUM(ETriggerTaskState,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTaskState(ETriggerTaskState(Z_Param_value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStart_RepeatTaskWhenReachState::execRepeatTaskWhenReachState)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_GET_ENUM(ETriggerTaskState,Z_Param_TargetState);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStart_RepeatTaskWhenReachState**)Z_Param__Result=UTriggerTaskStart_RepeatTaskWhenReachState::RepeatTaskWhenReachState(Z_Param_Causer,Z_Param_TargetTask,ETriggerTaskState(Z_Param_TargetState),Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_RepeatTaskWhenReachState::StaticRegisterNativesUTriggerTaskStart_RepeatTaskWhenReachState()
	{
		UClass* Class = UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskState", &UTriggerTaskStart_RepeatTaskWhenReachState::execGetTaskState },
			{ "RepeatTaskWhenReachState", &UTriggerTaskStart_RepeatTaskWhenReachState::execRepeatTaskWhenReachState },
			{ "SetTaskState", &UTriggerTaskStart_RepeatTaskWhenReachState::execSetTaskState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics
	{
		struct TriggerTaskStart_RepeatTaskWhenReachState_eventGetTaskState_Parms
		{
			ETriggerTaskState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventGetTaskState_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState, nullptr, "GetTaskState", nullptr, nullptr, sizeof(TriggerTaskStart_RepeatTaskWhenReachState_eventGetTaskState_Parms), Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics
	{
		struct TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms
		{
			UObject* Causer;
			UTriggerTaskBase* TargetTask;
			ETriggerTaskState TargetState;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskStart_RepeatTaskWhenReachState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetTask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, TargetState), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_TargetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Create new operation when the target trigger task reach to the target state\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* Create new operation when the target trigger task reach to the target state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState, nullptr, "RepeatTaskWhenReachState", nullptr, nullptr, sizeof(TriggerTaskStart_RepeatTaskWhenReachState_eventRepeatTaskWhenReachState_Parms), Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics
	{
		struct TriggerTaskStart_RepeatTaskWhenReachState_eventSetTaskState_Parms
		{
			ETriggerTaskState value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::NewProp_value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_RepeatTaskWhenReachState_eventSetTaskState_Parms, value), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::NewProp_value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState, nullptr, "SetTaskState", nullptr, nullptr, sizeof(TriggerTaskStart_RepeatTaskWhenReachState_eventSetTaskState_Parms), Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_NoRegister()
	{
		return UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStart_RepeatTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_GetTaskState, "GetTaskState" }, // 4243266991
		{ &Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_RepeatTaskWhenReachState, "RepeatTaskWhenReachState" }, // 1096906074
		{ &Z_Construct_UFunction_UTriggerTaskStart_RepeatTaskWhenReachState_SetTaskState, "SetTaskState" }, // 1892138125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* this information stands for when the task is finished and try to restart due to some conditions\n*/" },
		{ "DisplayName", "RepeatTaskWhenReachState" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_TaskInternalExecuteInfoBase.h" },
		{ "ToolTip", "* this information stands for when the task is finished and try to restart due to some conditions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_RepeatTaskWhenReachState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::ClassParams = {
		&UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_RepeatTaskWhenReachState, 1048461994);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_RepeatTaskWhenReachState>()
	{
		return UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_RepeatTaskWhenReachState(Z_Construct_UClass_UTriggerTaskStart_RepeatTaskWhenReachState, &UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_RepeatTaskWhenReachState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_RepeatTaskWhenReachState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
