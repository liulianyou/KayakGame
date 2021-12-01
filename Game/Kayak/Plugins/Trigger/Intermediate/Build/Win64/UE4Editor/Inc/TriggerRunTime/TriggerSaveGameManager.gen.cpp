// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSaveGameManager() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameStrategyBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameConfigBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerSaveGameManager::execConstructLocalFileConfigData)
	{
		P_GET_UBOOL(Z_Param_IsLoading);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_OBJECT(USaveGameSystemInfoBase,Z_Param_SystemHeadInfo);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGameConfigBase**)Z_Param__Result=P_THIS->ConstructLocalFileConfigData(Z_Param_IsLoading,Z_Param_UserIndex,Z_Param_SlotName,Z_Param_SystemHeadInfo,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execGetAllSaveGameStrategyClasses)
	{
		P_GET_TARRAY_REF(TSubclassOf<USaveGameStrategyBase> ,Z_Param_Out_OutClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllSaveGameStrategyClasses(Z_Param_Out_OutClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execUnRegisterSaveGameObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegisterSaveGameObject(Z_Param_Object,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execRegisterSaveGameObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterSaveGameObject(Z_Param_Object,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execLoadGame)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveGameConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame(Z_Param_SaveGameConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execSaveGame)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveGameConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame(Z_Param_SaveGameConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerSaveGameManager::execGetSaveGameStrategyInstance)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveGameStrategyBase**)Z_Param__Result=P_THIS->GetSaveGameStrategyInstance(Z_Param_Class);
		P_NATIVE_END;
	}
	void UTriggerSaveGameManager::StaticRegisterNativesUTriggerSaveGameManager()
	{
		UClass* Class = UTriggerSaveGameManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConstructLocalFileConfigData", &UTriggerSaveGameManager::execConstructLocalFileConfigData },
			{ "GetAllSaveGameStrategyClasses", &UTriggerSaveGameManager::execGetAllSaveGameStrategyClasses },
			{ "GetSaveGameStrategyInstance", &UTriggerSaveGameManager::execGetSaveGameStrategyInstance },
			{ "LoadGame", &UTriggerSaveGameManager::execLoadGame },
			{ "RegisterSaveGameObject", &UTriggerSaveGameManager::execRegisterSaveGameObject },
			{ "SaveGame", &UTriggerSaveGameManager::execSaveGame },
			{ "UnRegisterSaveGameObject", &UTriggerSaveGameManager::execUnRegisterSaveGameObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics
	{
		struct TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms
		{
			bool IsLoading;
			int32 UserIndex;
			FString SlotName;
			USaveGameSystemInfoBase* SystemHeadInfo;
			TSubclassOf<USaveGameStrategyBase>  Class;
			USaveGameConfigBase* ReturnValue;
		};
		static void NewProp_IsLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLoading;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UserIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemHeadInfo;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_IsLoading_SetBit(void* Obj)
	{
		((TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms*)Obj)->IsLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_IsLoading = { "IsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms), &Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_IsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_SystemHeadInfo = { "SystemHeadInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms, SystemHeadInfo), Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms, Class), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms, ReturnValue), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_IsLoading,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_SystemHeadInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Construct config data which is used for LocalFile save game tool\n\x09* \n\x09* @param IsLoading\x09\x09""flag to check weather this config data is used for loading, true means for loading, false means for saving\n\x09* @param Class the\x09\x09strategy class which will used to process the potential data\n\x09* @param UserIndex\x09\x09the index of current save data should be saved\n\x09* @param SlotName\x09\x09the name of current save data file at disk\n\x09* @param SystemHeadInfo\x09the head information that the target strategy will process. if this value is null then I will use the global config value \n\x09* #return Config data with class USaveGameLocalFileData\n\x09*/" },
		{ "CPP_Default_Class", "None" },
		{ "CPP_Default_SystemHeadInfo", "None" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Construct config data which is used for LocalFile save game tool\n*\n* @param IsLoading              flag to check weather this config data is used for loading, true means for loading, false means for saving\n* @param Class the              strategy class which will used to process the potential data\n* @param UserIndex              the index of current save data should be saved\n* @param SlotName               the name of current save data file at disk\n* @param SystemHeadInfo the head information that the target strategy will process. if this value is null then I will use the global config value\n* #return Config data with class USaveGameLocalFileData" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "ConstructLocalFileConfigData", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventConstructLocalFileConfigData_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics
	{
		struct TriggerSaveGameManager_eventGetAllSaveGameStrategyClasses_Parms
		{
			TArray<TSubclassOf<USaveGameStrategyBase> > OutClasses;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OutClasses_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::NewProp_OutClasses_Inner = { "OutClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::NewProp_OutClasses = { "OutClasses", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventGetAllSaveGameStrategyClasses_Parms, OutClasses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::NewProp_OutClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::NewProp_OutClasses,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "GetAllSaveGameStrategyClasses", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventGetAllSaveGameStrategyClasses_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics
	{
		struct TriggerSaveGameManager_eventGetSaveGameStrategyInstance_Parms
		{
			TSubclassOf<USaveGameStrategyBase>  Class;
			USaveGameStrategyBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventGetSaveGameStrategyInstance_Parms, Class), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventGetSaveGameStrategyInstance_Parms, ReturnValue), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Get the global save game strategy instance\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Get the global save game strategy instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "GetSaveGameStrategyInstance", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventGetSaveGameStrategyInstance_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics
	{
		struct TriggerSaveGameManager_eventLoadGame_Parms
		{
			USaveGameConfigBase* SaveGameConfig;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::NewProp_SaveGameConfig = { "SaveGameConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventLoadGame_Parms, SaveGameConfig), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::NewProp_SaveGameConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Load save data and parse it to restore the game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Load save data and parse it to restore the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "LoadGame", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventLoadGame_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics
	{
		struct TriggerSaveGameManager_eventRegisterSaveGameObject_Parms
		{
			UObject* Object;
			TSubclassOf<USaveGameStrategyBase>  Class;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventRegisterSaveGameObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventRegisterSaveGameObject_Parms, Class), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Register the target object to trigger save game system. so that the trigger save game tool can save these objects.\n\x09*\n\x09* @param Object\x09\x09The target object which will be saved\n\x09* @param Class\x09\x09The strategy class which will be used to save the target object, if it is null means I will search all strategy class to register target object\n\x09*/" },
		{ "CPP_Default_Class", "None" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Register the target object to trigger save game system. so that the trigger save game tool can save these objects.\n*\n* @param Object         The target object which will be saved\n* @param Class          The strategy class which will be used to save the target object, if it is null means I will search all strategy class to register target object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "RegisterSaveGameObject", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventRegisterSaveGameObject_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics
	{
		struct TriggerSaveGameManager_eventSaveGame_Parms
		{
			USaveGameConfigBase* SaveGameConfig;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameConfig;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::NewProp_SaveGameConfig = { "SaveGameConfig", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventSaveGame_Parms, SaveGameConfig), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::NewProp_SaveGameConfig,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Save some informations of current game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Save some informations of current game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "SaveGame", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventSaveGame_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics
	{
		struct TriggerSaveGameManager_eventUnRegisterSaveGameObject_Parms
		{
			UObject* Object;
			TSubclassOf<USaveGameStrategyBase>  Class;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventUnRegisterSaveGameObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameManager_eventUnRegisterSaveGameObject_Parms, Class), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Unregister the target object to trigger save game system.\n\x09*\n\x09* @param Object\x09\x09The target object which will be removed for target strategy\n\x09* @param Class\x09\x09The strategy class which inspect the object, if it is null means I will search all strategy class to unregister target object\n\x09*/" },
		{ "CPP_Default_Class", "None" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Unregister the target object to trigger save game system.\n*\n* @param Object         The target object which will be removed for target strategy\n* @param Class          The strategy class which inspect the object, if it is null means I will search all strategy class to unregister target object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameManager, nullptr, "UnRegisterSaveGameObject", nullptr, nullptr, sizeof(TriggerSaveGameManager_eventUnRegisterSaveGameObject_Parms), Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerSaveGameManager_NoRegister()
	{
		return UTriggerSaveGameManager::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerSaveGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveSystemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveSystemInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerSaveGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerSaveGameManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_ConstructLocalFileConfigData, "ConstructLocalFileConfigData" }, // 3269958712
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_GetAllSaveGameStrategyClasses, "GetAllSaveGameStrategyClasses" }, // 3167377886
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_GetSaveGameStrategyInstance, "GetSaveGameStrategyInstance" }, // 422261198
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_LoadGame, "LoadGame" }, // 199779195
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_RegisterSaveGameObject, "RegisterSaveGameObject" }, // 3143490371
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_SaveGame, "SaveGame" }, // 3795665703
		{ &Z_Construct_UFunction_UTriggerSaveGameManager_UnRegisterSaveGameObject, "UnRegisterSaveGameObject" }, // 2115811083
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerSaveGameManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "/*\n* Delegate which is used to preprocess the save data.\n* \n* #return the final save strategy class which can process target data\n*///DECLARE_DELEGATE_RetVal_OneParam(TSubclassOf<USaveGameStrategyBase>, FOnSaveStrategyPreProcessDelegate, const TArray<uint8>& /* Data */)\n" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* Delegate which is used to preprocess the save data.\n*\n* #return the final save strategy class which can process target data\n//DECLARE_DELEGATE_RetVal_OneParam(TSubclassOf<USaveGameStrategyBase>, FOnSaveStrategyPreProcessDelegate, const TArray<uint8>&  Data )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerSaveGameManager_Statics::NewProp_SaveSystemInfo_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* The current information of save game system.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameManager.h" },
		{ "ToolTip", "* The current information of save game system." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerSaveGameManager_Statics::NewProp_SaveSystemInfo = { "SaveSystemInfo", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerSaveGameManager, SaveSystemInfo), Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerSaveGameManager_Statics::NewProp_SaveSystemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSaveGameManager_Statics::NewProp_SaveSystemInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerSaveGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerSaveGameManager_Statics::NewProp_SaveSystemInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerSaveGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerSaveGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerSaveGameManager_Statics::ClassParams = {
		&UTriggerSaveGameManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerSaveGameManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSaveGameManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerSaveGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSaveGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerSaveGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerSaveGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerSaveGameManager, 732841451);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerSaveGameManager>()
	{
		return UTriggerSaveGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerSaveGameManager(Z_Construct_UClass_UTriggerSaveGameManager, &UTriggerSaveGameManager::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerSaveGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerSaveGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
