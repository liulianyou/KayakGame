// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskRunHelp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskRunHelp() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRunHelp_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRunHelp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execNewMapLoaded)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewMapLoaded(Z_Param_MapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execTryToRemovePendingRuntimeInfo)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToRemovePendingRuntimeInfo(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execRunTriggerTaskWithRuntimeInfo)
	{
		P_GET_STRUCT_REF(FTriggerTaskRuntimeInfo,Z_Param_Out_RuntimeInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTriggerTaskWithRuntimeInfo(Z_Param_Out_RuntimeInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execRunTriggerTaskByID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SendMapAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_SendMapName);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_SenderComponentID);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_SenderTaskID);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetMapAssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetMapName);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_TargetComponentID);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_TargetTaskID);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTriggerTaskByID(Z_Param_SendMapAssetPath,Z_Param_SendMapName,Z_Param_Out_SenderComponentID,Z_Param_Out_SenderTaskID,Z_Param_TargetMapAssetPath,Z_Param_TargetMapName,Z_Param_Out_TargetComponentID,Z_Param_Out_TargetTaskID,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execRunTriggerTaskByTaskIndex)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_SenderComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_SenderTaskIndex);
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_ResourceComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetTaskIndex);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTriggerTaskByTaskIndex(Z_Param_SenderComponent,Z_Param_SenderTaskIndex,Z_Param_ResourceComponent,Z_Param_TargetTaskIndex,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execRunTriggerTask)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_SenderComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_SenderTask);
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_TargetComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RunTriggerTask(Z_Param_SenderComponent,Z_Param_SenderTask,Z_Param_TargetComponent,Z_Param_TargetTask,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRunHelp::execInitializeTriggerTaskRunHelp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTriggerTaskRunHelp();
		P_NATIVE_END;
	}
	void UTriggerTaskRunHelp::StaticRegisterNativesUTriggerTaskRunHelp()
	{
		UClass* Class = UTriggerTaskRunHelp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTriggerTaskRunHelp", &UTriggerTaskRunHelp::execInitializeTriggerTaskRunHelp },
			{ "NewMapLoaded", &UTriggerTaskRunHelp::execNewMapLoaded },
			{ "RunTriggerTask", &UTriggerTaskRunHelp::execRunTriggerTask },
			{ "RunTriggerTaskByID", &UTriggerTaskRunHelp::execRunTriggerTaskByID },
			{ "RunTriggerTaskByTaskIndex", &UTriggerTaskRunHelp::execRunTriggerTaskByTaskIndex },
			{ "RunTriggerTaskWithRuntimeInfo", &UTriggerTaskRunHelp::execRunTriggerTaskWithRuntimeInfo },
			{ "TryToRemovePendingRuntimeInfo", &UTriggerTaskRunHelp::execTryToRemovePendingRuntimeInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "InitializeTriggerTaskRunHelp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics
	{
		struct TriggerTaskRunHelp_eventNewMapLoaded_Parms
		{
			FString MapName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventNewMapLoaded_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::NewProp_MapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "NewMapLoaded", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventNewMapLoaded_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics
	{
		struct TriggerTaskRunHelp_eventRunTriggerTask_Parms
		{
			UTriggerTaskComponentBase* SenderComponent;
			UTriggerTaskBase* SenderTask;
			UTriggerTaskComponentBase* TargetComponent;
			UTriggerTaskBase* TargetTask;
			UOperationInformationBase* StartOperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderComponent = { "SenderComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTask_Parms, SenderComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderTask = { "SenderTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTask_Parms, SenderTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTask_Parms, TargetComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTask_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_SenderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Run the target trigger task in the target component, this function should be used all the point is exist at current map\n\x09* \n\x09* @param SenderComponent\x09The component who rise up this action to notify the task in target component to run\n\x09* @param TargetComponent\x09The component who will run the target task in it\n\x09* @param SenderTask\x09\x09\x09which task in the sender component to rise up this action\n\x09* @param TargetTask\x09\x09\x09which task will be run, if it is null then all tasks in the target component will run\n\x09* @param ExternalData\x09\x09""Data to describe how this action occurred\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
		{ "ToolTip", "* Run the target trigger task in the target component, this function should be used all the point is exist at current map\n*\n* @param SenderComponent        The component who rise up this action to notify the task in target component to run\n* @param TargetComponent        The component who will run the target task in it\n* @param SenderTask                     which task in the sender component to rise up this action\n* @param TargetTask                     which task will be run, if it is null then all tasks in the target component will run\n* @param ExternalData           Data to describe how this action occurred" },
		{ "WorldContext", "WorldContent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "RunTriggerTask", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventRunTriggerTask_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics
	{
		struct TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms
		{
			FString SendMapAssetPath;
			FString SendMapName;
			FGuid SenderComponentID;
			FGuid SenderTaskID;
			FString TargetMapAssetPath;
			FString TargetMapName;
			FGuid TargetComponentID;
			FGuid TargetTaskID;
			const UOperationInformationBase* StartOperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendMapAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendMapAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderComponentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderTaskID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SenderTaskID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMapAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetMapAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetMapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetComponentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTaskID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetTaskID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapAssetPath = { "SendMapAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, SendMapAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapName = { "SendMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, SendMapName), METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderComponentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderComponentID = { "SenderComponentID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, SenderComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderComponentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderTaskID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderTaskID = { "SenderTaskID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, SenderTaskID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderTaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderTaskID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapAssetPath = { "TargetMapAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, TargetMapAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapName = { "TargetMapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, TargetMapName), METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetComponentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetComponentID = { "TargetComponentID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, TargetComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetComponentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetTaskID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetTaskID = { "TargetTaskID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, TargetTaskID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetTaskID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetTaskID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SendMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_SenderTaskID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetMapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_TargetTaskID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Run the target trigger task in the target component, this function can be used when the map of the component(Sender/Target) have no been loaded\n\x09*\n\x09* @param SendMapAssetPath\x09\x09The path which the send map at\n\x09* @param SendMapName\x09\x09\x09Which map the sender component at\n\x09* @param SenderComponentID\x09\x09The ID of component who rise up this action to notify the task in target component to run\n\x09* @param ResourceComponentID\x09The component who will run the target task in it\n\x09* @param TargetMapAssetPath\x09\x09The path which the target map at\n\x09* @param TargetMapName\x09\x09\x09which map the target component at\n\x09* @param SenderTaskID\x09\x09\x09The ID of which task in the sender component to rise up this action\n\x09* @param TargetTaskID\x09\x09\x09The ID of which task will be run, if it is empty then all tasks in the target component will run\n\x09* @param ExternalData\x09\x09\x09""Data to describe how this action occurred\n\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
		{ "ToolTip", "* Run the target trigger task in the target component, this function can be used when the map of the component(Sender/Target) have no been loaded\n*\n* @param SendMapAssetPath               The path which the send map at\n* @param SendMapName                    Which map the sender component at\n* @param SenderComponentID              The ID of component who rise up this action to notify the task in target component to run\n* @param ResourceComponentID    The component who will run the target task in it\n* @param TargetMapAssetPath             The path which the target map at\n* @param TargetMapName                  which map the target component at\n* @param SenderTaskID                   The ID of which task in the sender component to rise up this action\n* @param TargetTaskID                   The ID of which task will be run, if it is empty then all tasks in the target component will run\n* @param ExternalData                   Data to describe how this action occurred" },
		{ "WorldContext", "WorldContent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "RunTriggerTaskByID", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventRunTriggerTaskByID_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics
	{
		struct TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms
		{
			UTriggerTaskComponentBase* SenderComponent;
			int32 SenderTaskIndex;
			UTriggerTaskComponentBase* ResourceComponent;
			int32 TargetTaskIndex;
			UOperationInformationBase* StartOperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SenderTaskIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceComponent;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetTaskIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderComponent = { "SenderComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms, SenderComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderTaskIndex = { "SenderTaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms, SenderTaskIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_ResourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_ResourceComponent = { "ResourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms, ResourceComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_ResourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_ResourceComponent_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_TargetTaskIndex = { "TargetTaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms, TargetTaskIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_SenderTaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_ResourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_TargetTaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Run the target trigger task in the target component, this function should be used all the point is exist at current map\n\x09*\n\x09* @param SenderComponent\x09The component who rise up this action to notify the task in target component to run\n\x09* @param TargetComponent\x09The component who will run the target task in it\n\x09* @param SenderTaskIndex\x09which task in the sender component to rise up this action\n\x09* @param TargetTaskIndex\x09which task will be run, if it is null then all tasks in the target component will run\n\x09* @param ExternalData\x09\x09""Data to describe how this action occurred\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
		{ "ToolTip", "* Run the target trigger task in the target component, this function should be used all the point is exist at current map\n*\n* @param SenderComponent        The component who rise up this action to notify the task in target component to run\n* @param TargetComponent        The component who will run the target task in it\n* @param SenderTaskIndex        which task in the sender component to rise up this action\n* @param TargetTaskIndex        which task will be run, if it is null then all tasks in the target component will run\n* @param ExternalData           Data to describe how this action occurred" },
		{ "WorldContext", "WorldContent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "RunTriggerTaskByTaskIndex", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventRunTriggerTaskByTaskIndex_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics
	{
		struct TriggerTaskRunHelp_eventRunTriggerTaskWithRuntimeInfo_Parms
		{
			FTriggerTaskRuntimeInfo RuntimeInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::NewProp_RuntimeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::NewProp_RuntimeInfo = { "RuntimeInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventRunTriggerTaskWithRuntimeInfo_Parms, RuntimeInfo), Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::NewProp_RuntimeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::NewProp_RuntimeInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::NewProp_RuntimeInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "RunTriggerTaskWithRuntimeInfo", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventRunTriggerTaskWithRuntimeInfo_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics
	{
		struct TriggerTaskRunHelp_eventTryToRemovePendingRuntimeInfo_Parms
		{
			FGuid ID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRunHelp_eventTryToRemovePendingRuntimeInfo_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to remove all PendingRuntime information which contain the ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
		{ "ToolTip", "* Try to remove all PendingRuntime information which contain the ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRunHelp, nullptr, "TryToRemovePendingRuntimeInfo", nullptr, nullptr, sizeof(TriggerTaskRunHelp_eventTryToRemovePendingRuntimeInfo_Parms), Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskRunHelp_NoRegister()
	{
		return UTriggerTaskRunHelp::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskRunHelp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskRunHelp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskRunHelp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_InitializeTriggerTaskRunHelp, "InitializeTriggerTaskRunHelp" }, // 2602733091
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_NewMapLoaded, "NewMapLoaded" }, // 3414286073
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTask, "RunTriggerTask" }, // 604377688
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByID, "RunTriggerTaskByID" }, // 3225003895
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskByTaskIndex, "RunTriggerTaskByTaskIndex" }, // 569904873
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_RunTriggerTaskWithRuntimeInfo, "RunTriggerTaskWithRuntimeInfo" }, // 2943230680
		{ &Z_Construct_UFunction_UTriggerTaskRunHelp_TryToRemovePendingRuntimeInfo, "TryToRemovePendingRuntimeInfo" }, // 1101734169
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskRunHelp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTaskRunHelp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskRunHelp.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskRunHelp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskRunHelp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskRunHelp_Statics::ClassParams = {
		&UTriggerTaskRunHelp::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskRunHelp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskRunHelp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskRunHelp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskRunHelp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskRunHelp, 622311424);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskRunHelp>()
	{
		return UTriggerTaskRunHelp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskRunHelp(Z_Construct_UClass_UTriggerTaskRunHelp, &UTriggerTaskRunHelp::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskRunHelp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskRunHelp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
