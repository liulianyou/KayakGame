// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerBlueprintLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBlueprintLib() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerBlueprintLib_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerBlueprintLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStaticsBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTS_AIStatics_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDeadSystemManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ECategoryFormat();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRuntimeContent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerBlueprintLib::execDebugBreak)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrintString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriggerBlueprintLib::DebugBreak(Z_Param_PrintString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetSubTriggerLevelDirectoryPath)
	{
		P_GET_OBJECT(ULevel,Z_Param_PersistenLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param_MapAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTriggerBlueprintLib::GetSubTriggerLevelDirectoryPath(Z_Param_PersistenLevel,Z_Param_MapAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetSubTriggerLevelAssetPath)
	{
		P_GET_OBJECT(ULevel,Z_Param_PersistenLevel);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubLevelName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MapAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTriggerBlueprintLib::GetSubTriggerLevelAssetPath(Z_Param_PersistenLevel,Z_Param_SubLevelName,Z_Param_MapAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execIsFirstTriggerNode)
	{
		P_GET_TINTERFACE(ITriggerInterface,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTriggerBlueprintLib::IsFirstTriggerNode(Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execIsValidTriggerCategory)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TriggerCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTriggerBlueprintLib::IsValidTriggerCategory(Z_Param_Out_TriggerCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerCategoryNodeName)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_Tag);
		P_GET_ENUM(ECategoryFormat,Z_Param_Phares);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTriggerBlueprintLib::GetTriggerCategoryNodeName(Z_Param_Out_Tag,ECategoryFormat(Z_Param_Phares));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execConvertPathReferencValueToVaild)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReferencePath);
		P_GET_UBOOL(Z_Param_Add_CSuffix);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UTriggerBlueprintLib::ConvertPathReferencValueToVaild(Z_Param_ReferencePath,Z_Param_Add_CSuffix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execAddRegionIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriggerBlueprintLib::AddRegionIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGameOver)
	{
		P_GET_TARRAY(APlayerController*,Z_Param_Players);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_GameOverReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTriggerBlueprintLib::GameOver(Z_Param_Players,Z_Param_URL,Z_Param_GameOverReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerEventRewardManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerEventRewardManager**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerEventRewardManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetOperationInfoManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperationInformationManager**)Z_Param__Result=UTriggerBlueprintLib::GetOperationInfoManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerRunTimeContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerRuntimeContent**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerRunTimeContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerSaveGameManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerSaveGameManager**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerSaveGameManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerManager**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerTaskManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskManager**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerTaskManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetAIStatics)
	{
		P_GET_OBJECT(UClass,Z_Param_StaticsClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTS_AIStatics**)Z_Param__Result=UTriggerBlueprintLib::GetAIStatics(Z_Param_StaticsClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetDeadSystemInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDeadSystemManager**)Z_Param__Result=UTriggerBlueprintLib::GetDeadSystemInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerTaskByClass)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_Component);
		P_GET_OBJECT(UClass,Z_Param_TriggerTaskClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskIndex);
		P_GET_UBOOL(Z_Param_OnlySearchInConfigured);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerTaskByClass(Z_Param_Component,Z_Param_TriggerTaskClass,Z_Param_TaskIndex,Z_Param_OnlySearchInConfigured);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerTaskByIndex)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_Component);
		P_GET_PROPERTY(FIntProperty,Z_Param_TaskIndex);
		P_GET_UBOOL(Z_Param_OnlySearchInConfigured);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerTaskByIndex(Z_Param_Component,Z_Param_TaskIndex,Z_Param_OnlySearchInConfigured);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execMakeAddContributor)
	{
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContributeRuleBase**)Z_Param__Result=UTriggerBlueprintLib::MakeAddContributor(Z_Param_Contributor,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execMakeCancleContributor)
	{
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveCount);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UContributeRuleBase**)Z_Param__Result=UTriggerBlueprintLib::MakeCancleContributor(Z_Param_Contributor,Z_Param_RemoveCount,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerBlueprintLib::execGetTriggerNetPlayerSupportFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerNetPlayerSupportComponent**)Z_Param__Result=UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UTriggerBlueprintLib::StaticRegisterNativesUTriggerBlueprintLib()
	{
		UClass* Class = UTriggerBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRegionIndex", &UTriggerBlueprintLib::execAddRegionIndex },
			{ "ConvertPathReferencValueToVaild", &UTriggerBlueprintLib::execConvertPathReferencValueToVaild },
			{ "DebugBreak", &UTriggerBlueprintLib::execDebugBreak },
			{ "GameOver", &UTriggerBlueprintLib::execGameOver },
			{ "GetAIStatics", &UTriggerBlueprintLib::execGetAIStatics },
			{ "GetDeadSystemInstance", &UTriggerBlueprintLib::execGetDeadSystemInstance },
			{ "GetOperationInfoManager", &UTriggerBlueprintLib::execGetOperationInfoManager },
			{ "GetSubTriggerLevelAssetPath", &UTriggerBlueprintLib::execGetSubTriggerLevelAssetPath },
			{ "GetSubTriggerLevelDirectoryPath", &UTriggerBlueprintLib::execGetSubTriggerLevelDirectoryPath },
			{ "GetTriggerCategoryNodeName", &UTriggerBlueprintLib::execGetTriggerCategoryNodeName },
			{ "GetTriggerEventRewardManager", &UTriggerBlueprintLib::execGetTriggerEventRewardManager },
			{ "GetTriggerManager", &UTriggerBlueprintLib::execGetTriggerManager },
			{ "GetTriggerNetPlayerSupportFromActor", &UTriggerBlueprintLib::execGetTriggerNetPlayerSupportFromActor },
			{ "GetTriggerRunTimeContent", &UTriggerBlueprintLib::execGetTriggerRunTimeContent },
			{ "GetTriggerSaveGameManager", &UTriggerBlueprintLib::execGetTriggerSaveGameManager },
			{ "GetTriggerTaskByClass", &UTriggerBlueprintLib::execGetTriggerTaskByClass },
			{ "GetTriggerTaskByIndex", &UTriggerBlueprintLib::execGetTriggerTaskByIndex },
			{ "GetTriggerTaskManager", &UTriggerBlueprintLib::execGetTriggerTaskManager },
			{ "IsFirstTriggerNode", &UTriggerBlueprintLib::execIsFirstTriggerNode },
			{ "IsValidTriggerCategory", &UTriggerBlueprintLib::execIsValidTriggerCategory },
			{ "MakeAddContributor", &UTriggerBlueprintLib::execMakeAddContributor },
			{ "MakeCancleContributor", &UTriggerBlueprintLib::execMakeCancleContributor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Add region index for all players.\n\x09* Notice: This is just a temporary way to store the region index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Add region index for all players.\n* Notice: This is just a temporary way to store the region index." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "AddRegionIndex", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics
	{
		struct TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms
		{
			FString ReferencePath;
			bool Add_CSuffix;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReferencePath;
		static void NewProp_Add_CSuffix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Add_CSuffix;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_ReferencePath = { "ReferencePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms, ReferencePath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_Add_CSuffix_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms*)Obj)->Add_CSuffix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_Add_CSuffix = { "Add_CSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_Add_CSuffix_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_ReferencePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_Add_CSuffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Convert the path which just use copy reference form the content in editor to valid path that we can use\n\x09* LoadClass to load the content form the browser content.\n\x09*/" },
		{ "CPP_Default_Add_CSuffix", "false" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Convert the path which just use copy reference form the content in editor to valid path that we can use\n* LoadClass to load the content form the browser content." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "ConvertPathReferencValueToVaild", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventConvertPathReferencValueToVaild_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics
	{
		struct TriggerBlueprintLib_eventDebugBreak_Parms
		{
			FString PrintString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrintString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrintString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::NewProp_PrintString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::NewProp_PrintString = { "PrintString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventDebugBreak_Parms, PrintString), METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::NewProp_PrintString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::NewProp_PrintString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::NewProp_PrintString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* We can invoke this function in the BP and set break point in it to view the call stack for the native code.\n\x09*/" },
		{ "CPP_Default_PrintString", "" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* We can invoke this function in the BP and set break point in it to view the call stack for the native code." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "DebugBreak", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventDebugBreak_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics
	{
		struct TriggerBlueprintLib_eventGameOver_Parms
		{
			TArray<APlayerController*> Players;
			FString URL;
			FString GameOverReason;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameOverReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGameOver_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGameOver_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_GameOverReason = { "GameOverReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGameOver_Parms, GameOverReason), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::NewProp_GameOverReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Notify the game over\n\x09*\n\x09* @param Players who's mission is failed\n\x09* @param GameOverReasn the reason why make this game over for these players \n\x09*/" },
		{ "CPP_Default_GameOverReason", "" },
		{ "CPP_Default_URL", "" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Notify the game over\n*\n* @param Players who's mission is failed\n* @param GameOverReasn the reason why make this game over for these players" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GameOver", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGameOver_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics
	{
		struct TriggerBlueprintLib_eventGetAIStatics_Parms
		{
			TSubclassOf<UTriggerStaticsBase>  StaticsClass;
			UTS_AIStatics* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StaticsClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::NewProp_StaticsClass = { "StaticsClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetAIStatics_Parms, StaticsClass), Z_Construct_UClass_UTriggerStaticsBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetAIStatics_Parms, ReturnValue), Z_Construct_UClass_UTS_AIStatics_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::NewProp_StaticsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the AIStatics for the AIs in the world\n\x09* @param  StaticsClass\x09The class for the AI Statics, If this value is none I will find AIStatics from the TriggerConfig\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get the AIStatics for the AIs in the world\n* @param  StaticsClass  The class for the AI Statics, If this value is none I will find AIStatics from the TriggerConfig" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetAIStatics", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetAIStatics_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics
	{
		struct TriggerBlueprintLib_eventGetDeadSystemInstance_Parms
		{
			UDeadSystemManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetDeadSystemInstance_Parms, ReturnValue), Z_Construct_UClass_UDeadSystemManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "DeadSystem" },
		{ "Comment", "//Interface to access to the dead system \n" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "Interface to access to the dead system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetDeadSystemInstance", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetDeadSystemInstance_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics
	{
		struct TriggerBlueprintLib_eventGetOperationInfoManager_Parms
		{
			UOperationInformationManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetOperationInfoManager_Parms, ReturnValue), Z_Construct_UClass_UOperationInformationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetOperationInfoManager", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetOperationInfoManager_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics
	{
		struct TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms
		{
			const ULevel* PersistenLevel;
			FString SubLevelName;
			FString MapAssetPath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistenLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistenLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubLevelName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapAssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_PersistenLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_PersistenLevel = { "PersistenLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms, PersistenLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_PersistenLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_PersistenLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_SubLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_SubLevelName = { "SubLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms, SubLevelName), METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_SubLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_SubLevelName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_MapAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_MapAssetPath = { "MapAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms, MapAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_MapAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_MapAssetPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_PersistenLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_SubLevelName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_MapAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the target map asset path\n\x09* \n\x09* @param MapAssetPath if this value is specified then when the PersistentLevel is null I will use this value as the base value\n\x09*/" },
		{ "CPP_Default_MapAssetPath", "" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get the target map asset path\n*\n* @param MapAssetPath if this value is specified then when the PersistentLevel is null I will use this value as the base value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetSubTriggerLevelAssetPath", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetSubTriggerLevelAssetPath_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics
	{
		struct TriggerBlueprintLib_eventGetSubTriggerLevelDirectoryPath_Parms
		{
			const ULevel* PersistenLevel;
			FString MapAssetPath;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistenLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PersistenLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapAssetPath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_PersistenLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_PersistenLevel = { "PersistenLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelDirectoryPath_Parms, PersistenLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_PersistenLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_PersistenLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_MapAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_MapAssetPath = { "MapAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelDirectoryPath_Parms, MapAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_MapAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_MapAssetPath_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetSubTriggerLevelDirectoryPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_PersistenLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_MapAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "CPP_Default_MapAssetPath", "" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetSubTriggerLevelDirectoryPath", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetSubTriggerLevelDirectoryPath_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerCategoryNodeName_Parms
		{
			FGameplayTag Tag;
			ECategoryFormat Phares;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Phares_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Phares;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerCategoryNodeName_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Tag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Phares_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Phares = { "Phares", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerCategoryNodeName_Parms, Phares), Z_Construct_UEnum_TriggerRunTime_ECategoryFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerCategoryNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Phares_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_Phares,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the target name in the target trigger category tag.\n\x09* The format in the tag which is used for category in trigger should be follow the rule:\n\x09* TriggerCategory.Difficulty.MapName.Scenario1.Scenario2.....\n\x09* \n\x09* #return empty means the target tag is invalid or do not contain the target node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get the target name in the target trigger category tag.\n* The format in the tag which is used for category in trigger should be follow the rule:\n* TriggerCategory.Difficulty.MapName.Scenario1.Scenario2.....\n*\n* #return empty means the target tag is invalid or do not contain the target node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerCategoryNodeName", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerCategoryNodeName_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerEventRewardManager_Parms
		{
			UTriggerEventRewardManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerEventRewardManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerEventRewardManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the reward manager which will hold all rewards which is created by the trigger event system\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get the reward manager which will hold all rewards which is created by the trigger event system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerEventRewardManager", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerEventRewardManager_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerManager_Parms
		{
			UTriggerManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerManager", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerManager_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerNetPlayerSupportFromActor_Parms
		{
			AActor* Actor;
			UTriggerNetPlayerSupportComponent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerNetPlayerSupportFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerNetPlayerSupportFromActor_Parms, ReturnValue), Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get the Trigger net player support interface form the target actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get the Trigger net player support interface form the target actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerNetPlayerSupportFromActor", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerNetPlayerSupportFromActor_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerRunTimeContent_Parms
		{
			UTriggerRuntimeContent* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerRunTimeContent_Parms, ReturnValue), Z_Construct_UClass_UTriggerRuntimeContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerRunTimeContent", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerRunTimeContent_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerSaveGameManager_Parms
		{
			UTriggerSaveGameManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerSaveGameManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerSaveGameManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerSaveGameManager", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerSaveGameManager_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms
		{
			UTriggerTaskComponentBase* Component;
			TSubclassOf<UTriggerTaskBase>  TriggerTaskClass;
			int32 TaskIndex;
			bool OnlySearchInConfigured;
			UTriggerTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TriggerTaskClass;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskIndex;
		static void NewProp_OnlySearchInConfigured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlySearchInConfigured;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms, Component), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_TriggerTaskClass = { "TriggerTaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms, TriggerTaskClass), Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms, TaskIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_OnlySearchInConfigured_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms*)Obj)->OnlySearchInConfigured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_OnlySearchInConfigured = { "OnlySearchInConfigured", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_OnlySearchInConfigured_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_TriggerTaskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_TaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_OnlySearchInConfigured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get trigger task by the index in the target component\n\x09*\n\x09* @param Component\x09The component which we will search for\n\x09* @param TaskIndex\x09The index of the specific task with the class of TriggerTaskClass\n\x09*/" },
		{ "CPP_Default_OnlySearchInConfigured", "true" },
		{ "CPP_Default_TaskIndex", "0" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get trigger task by the index in the target component\n*\n* @param Component      The component which we will search for\n* @param TaskIndex      The index of the specific task with the class of TriggerTaskClass" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerTaskByClass", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerTaskByClass_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms
		{
			UTriggerTaskComponentBase* Component;
			int32 TaskIndex;
			bool OnlySearchInConfigured;
			UTriggerTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TaskIndex;
		static void NewProp_OnlySearchInConfigured_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlySearchInConfigured;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms, Component), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_TaskIndex = { "TaskIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms, TaskIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_OnlySearchInConfigured_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms*)Obj)->OnlySearchInConfigured = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_OnlySearchInConfigured = { "OnlySearchInConfigured", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_OnlySearchInConfigured_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_TaskIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_OnlySearchInConfigured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get trigger task by the index in the target component\n\x09* \n\x09* @param Component\x09The component which we will search for\n\x09* @param TaskIndex\x09The index of the task in the component\n\x09* @param OnlySearchInConfigured\x09true means this index is for tasks which is configured by the designers\n\x09*/" },
		{ "CPP_Default_OnlySearchInConfigured", "true" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Get trigger task by the index in the target component\n*\n* @param Component      The component which we will search for\n* @param TaskIndex      The index of the task in the component\n* @param OnlySearchInConfigured true means this index is for tasks which is configured by the designers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerTaskByIndex", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerTaskByIndex_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics
	{
		struct TriggerBlueprintLib_eventGetTriggerTaskManager_Parms
		{
			UTriggerTaskManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventGetTriggerTaskManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "GetTriggerTaskManager", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventGetTriggerTaskManager_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics
	{
		struct TriggerBlueprintLib_eventIsFirstTriggerNode_Parms
		{
			TScriptInterface<ITriggerInterface> Trigger;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Trigger;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventIsFirstTriggerNode_Parms, Trigger), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventIsFirstTriggerNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventIsFirstTriggerNode_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Used to check weather this trigger component is the first node at the trigger chain.\n\x09* This function will query all task components and trigger task,  so it may use a lot of CPU resource\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Used to check weather this trigger component is the first node at the trigger chain.\n* This function will query all task components and trigger task,  so it may use a lot of CPU resource" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "IsFirstTriggerNode", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventIsFirstTriggerNode_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics
	{
		struct TriggerBlueprintLib_eventIsValidTriggerCategory_Parms
		{
			FGameplayTagContainer TriggerCategory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerCategory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_TriggerCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_TriggerCategory = { "TriggerCategory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventIsValidTriggerCategory_Parms, TriggerCategory), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_TriggerCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_TriggerCategory_MetaData)) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventIsValidTriggerCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventIsValidTriggerCategory_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_TriggerCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "IsValidTriggerCategory", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventIsValidTriggerCategory_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics
	{
		struct TriggerBlueprintLib_eventMakeAddContributor_Parms
		{
			AActor* Contributor;
			bool CanEverTick;
			float TickGradual;
			bool CanExecutedImmediately;
			bool NeedToCheckGameplayAbility;
			UContributeRuleBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeAddContributor_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeAddContributor_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeAddContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeAddContributor_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeAddContributor_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeAddContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeAddContributor_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeAddContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeAddContributor_Parms, ReturnValue), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_NeedToCheckGameplayAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "true" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "MakeAddContributor", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventMakeAddContributor_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics
	{
		struct TriggerBlueprintLib_eventMakeCancleContributor_Parms
		{
			AActor* Contributor;
			int32 RemoveCount;
			bool CanEverTick;
			float TickGradual;
			bool CanExecutedImmediately;
			bool NeedToCheckGameplayAbility;
			UContributeRuleBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemoveCount;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeCancleContributor_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_RemoveCount = { "RemoveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeCancleContributor_Parms, RemoveCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeCancleContributor_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeCancleContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeCancleContributor_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeCancleContributor_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeCancleContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerBlueprintLib_eventMakeCancleContributor_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerBlueprintLib_eventMakeCancleContributor_Parms), &Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBlueprintLib_eventMakeCancleContributor_Parms, ReturnValue), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_RemoveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_NeedToCheckGameplayAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Comment", "/*\n\x09* Make the cancel contributor for the interaction task\n\x09* \n\x09* @param Contributor\x09\x09\x09The Actor that who own this contribution\n\x09* @param RemoveCount\x09\x09\x09The count that this contribution will cancel the last contributions, -1 means will remove all contributors the player make before \n\x09* @param CanEverTick\x09\x09\x09""Flag to check weather this contribution can be tick in the tick function\n\x09* @param TickGradual\x09\x09\x09The gradual for this contribution to tick\n\x09* @param CanExecutedImmediately\x09""Flag to check weather this contribution will execute immediately when it added to interaction rule\n\x09*/" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "false" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
		{ "ToolTip", "* Make the cancel contributor for the interaction task\n*\n* @param Contributor                    The Actor that who own this contribution\n* @param RemoveCount                    The count that this contribution will cancel the last contributions, -1 means will remove all contributors the player make before\n* @param CanEverTick                    Flag to check weather this contribution can be tick in the tick function\n* @param TickGradual                    The gradual for this contribution to tick\n* @param CanExecutedImmediately Flag to check weather this contribution will execute immediately when it added to interaction rule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerBlueprintLib, nullptr, "MakeCancleContributor", nullptr, nullptr, sizeof(TriggerBlueprintLib_eventMakeCancleContributor_Parms), Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerBlueprintLib_NoRegister()
	{
		return UTriggerBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_AddRegionIndex, "AddRegionIndex" }, // 4086621453
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_ConvertPathReferencValueToVaild, "ConvertPathReferencValueToVaild" }, // 1001636147
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_DebugBreak, "DebugBreak" }, // 2446455310
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GameOver, "GameOver" }, // 1955201343
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetAIStatics, "GetAIStatics" }, // 1125530936
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetDeadSystemInstance, "GetDeadSystemInstance" }, // 2778466916
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetOperationInfoManager, "GetOperationInfoManager" }, // 175143579
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelAssetPath, "GetSubTriggerLevelAssetPath" }, // 2536345401
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetSubTriggerLevelDirectoryPath, "GetSubTriggerLevelDirectoryPath" }, // 2533130899
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerCategoryNodeName, "GetTriggerCategoryNodeName" }, // 1671337283
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerEventRewardManager, "GetTriggerEventRewardManager" }, // 2709456799
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerManager, "GetTriggerManager" }, // 3129635172
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerNetPlayerSupportFromActor, "GetTriggerNetPlayerSupportFromActor" }, // 3462438337
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerRunTimeContent, "GetTriggerRunTimeContent" }, // 1536918948
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerSaveGameManager, "GetTriggerSaveGameManager" }, // 3996864598
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByClass, "GetTriggerTaskByClass" }, // 2004979098
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskByIndex, "GetTriggerTaskByIndex" }, // 3588723485
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_GetTriggerTaskManager, "GetTriggerTaskManager" }, // 1537916834
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_IsFirstTriggerNode, "IsFirstTriggerNode" }, // 2595915164
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_IsValidTriggerCategory, "IsValidTriggerCategory" }, // 3784095632
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_MakeAddContributor, "MakeAddContributor" }, // 1903553185
		{ &Z_Construct_UFunction_UTriggerBlueprintLib_MakeCancleContributor, "MakeCancleContributor" }, // 54775439
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/TriggerBlueprintLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerBlueprintLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerBlueprintLib_Statics::ClassParams = {
		&UTriggerBlueprintLib::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerBlueprintLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerBlueprintLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerBlueprintLib, 2092904590);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerBlueprintLib>()
	{
		return UTriggerBlueprintLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerBlueprintLib(Z_Construct_UClass_UTriggerBlueprintLib, &UTriggerBlueprintLib::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerBlueprintLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerBlueprintLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
