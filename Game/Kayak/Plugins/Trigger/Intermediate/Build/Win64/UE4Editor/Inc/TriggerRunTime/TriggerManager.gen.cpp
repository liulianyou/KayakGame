// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerManager() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EClearStrategy();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRuntimeContent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskComponentInformation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerMapLoaded__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EClearStrategy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EClearStrategy, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EClearStrategy"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EClearStrategy>()
	{
		return EClearStrategy_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClearStrategy(EClearStrategy_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EClearStrategy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EClearStrategy_Hash() { return 3165580209U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EClearStrategy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClearStrategy"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EClearStrategy_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClearStrategy::EClearStrategy_All", (int64)EClearStrategy::EClearStrategy_All },
				{ "EClearStrategy::EClearStrategy_Scene", (int64)EClearStrategy::EClearStrategy_Scene },
				{ "EClearStrategy::EClearStrategy_Item", (int64)EClearStrategy::EClearStrategy_Item },
				{ "EClearStrategy::EClearStrategy_Mission", (int64)EClearStrategy::EClearStrategy_Mission },
				{ "EClearStrategy::EClearStrategy_Heuristic", (int64)EClearStrategy::EClearStrategy_Heuristic },
				{ "EClearStrategy::EClearStrategy_Max", (int64)EClearStrategy::EClearStrategy_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EClearStrategy_All.DisplayName", "Clear All" },
				{ "EClearStrategy_All.Name", "EClearStrategy::EClearStrategy_All" },
				{ "EClearStrategy_Heuristic.DisplayName", "Clear Automaticaly" },
				{ "EClearStrategy_Heuristic.Name", "EClearStrategy::EClearStrategy_Heuristic" },
				{ "EClearStrategy_Item.DisplayName", "Clear Item Trigger" },
				{ "EClearStrategy_Item.Name", "EClearStrategy::EClearStrategy_Item" },
				{ "EClearStrategy_Max.Hidden", "" },
				{ "EClearStrategy_Max.Name", "EClearStrategy::EClearStrategy_Max" },
				{ "EClearStrategy_Mission.DisplayName", "Clear Mission Trigger" },
				{ "EClearStrategy_Mission.Name", "EClearStrategy::EClearStrategy_Mission" },
				{ "EClearStrategy_Scene.DisplayName", "Clear Scene Trigger" },
				{ "EClearStrategy_Scene.Name", "EClearStrategy::EClearStrategy_Scene" },
				{ "ModuleRelativePath", "Public/TriggerManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EClearStrategy",
				"EClearStrategy",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UTriggerManager::execLoadLevelStream)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LinkId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevelStream(Z_Param_LinkId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execNewMapLoadedCallback)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewMapLoadedCallback(Z_Param_Level,Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execOnGameModeInitialize)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_Gamemode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameModeInitialize(Z_Param_Gamemode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetTriggerEventSystemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATriggerEventSystemInfoBase*>*)Z_Param__Result=P_THIS->GetTriggerEventSystemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execCreateNewTriggerEventSystemInfo)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_Gamemode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATriggerEventSystemInfoBase**)Z_Param__Result=P_THIS->CreateNewTriggerEventSystemInfo(Z_Param_Gamemode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execSetTriggerEventSystemInfo)
	{
		P_GET_OBJECT(ATriggerEventSystemInfoBase,Z_Param_Info);
		P_GET_OBJECT(ATriggerEventSystemInfoBase,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggerEventSystemInfo(Z_Param_Info,Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execTryToLoadNewTriggerMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapAssetPath);
		P_GET_STRUCT_REF(FTriggerTaskComponentInformation,Z_Param_Out_ComponetInfo);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Delegate);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToLoadNewTriggerMap(Z_Param_MapAssetPath,Z_Param_Out_ComponetInfo,FTriggerMapLoaded(Z_Param_Out_Delegate),Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetTriggerTaskComponentsByComponentInfo)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutComponents);
		P_GET_TARRAY_REF(FTriggerTaskComponentInformation,Z_Param_Out_ComponentInfos);
		P_GET_OBJECT(UObject,Z_Param_WorldContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriggerTaskComponentsByComponentInfo(Z_Param_Out_OutComponents,Z_Param_Out_ComponentInfos,Z_Param_WorldContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetTriggerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerOctreeControllerBase**)Z_Param__Result=P_THIS->GetTriggerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execClear)
	{
		P_GET_ENUM(EClearStrategy,Z_Param_Trategy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear(EClearStrategy(Z_Param_Trategy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetRuntimeContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerRuntimeContent**)Z_Param__Result=P_THIS->GetRuntimeContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetOperationInformationManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperationInformationManager**)Z_Param__Result=P_THIS->GetOperationInformationManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetTriggerSaveGameManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerSaveGameManager**)Z_Param__Result=P_THIS->GetTriggerSaveGameManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerManager::execGetTriggerTaskManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskManager**)Z_Param__Result=P_THIS->GetTriggerTaskManager();
		P_NATIVE_END;
	}
	void UTriggerManager::StaticRegisterNativesUTriggerManager()
	{
		UClass* Class = UTriggerManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UTriggerManager::execClear },
			{ "CreateNewTriggerEventSystemInfo", &UTriggerManager::execCreateNewTriggerEventSystemInfo },
			{ "GetOperationInformationManager", &UTriggerManager::execGetOperationInformationManager },
			{ "GetRuntimeContent", &UTriggerManager::execGetRuntimeContent },
			{ "GetTriggerController", &UTriggerManager::execGetTriggerController },
			{ "GetTriggerEventSystemInfo", &UTriggerManager::execGetTriggerEventSystemInfo },
			{ "GetTriggerSaveGameManager", &UTriggerManager::execGetTriggerSaveGameManager },
			{ "GetTriggerTaskComponentsByComponentInfo", &UTriggerManager::execGetTriggerTaskComponentsByComponentInfo },
			{ "GetTriggerTaskManager", &UTriggerManager::execGetTriggerTaskManager },
			{ "LoadLevelStream", &UTriggerManager::execLoadLevelStream },
			{ "NewMapLoadedCallback", &UTriggerManager::execNewMapLoadedCallback },
			{ "OnGameModeInitialize", &UTriggerManager::execOnGameModeInitialize },
			{ "SetTriggerEventSystemInfo", &UTriggerManager::execSetTriggerEventSystemInfo },
			{ "TryToLoadNewTriggerMap", &UTriggerManager::execTryToLoadNewTriggerMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerManager_Clear_Statics
	{
		struct TriggerManager_eventClear_Parms
		{
			EClearStrategy Trategy;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Trategy_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Trategy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerManager_Clear_Statics::NewProp_Trategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerManager_Clear_Statics::NewProp_Trategy = { "Trategy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventClear_Parms, Trategy), Z_Construct_UEnum_TriggerRunTime_EClearStrategy, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_Clear_Statics::NewProp_Trategy_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_Clear_Statics::NewProp_Trategy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "//Clear the triggers according to the strategy\n" },
		{ "CPP_Default_Trategy", "EClearStrategy_All" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "Clear the triggers according to the strategy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "Clear", nullptr, nullptr, sizeof(TriggerManager_eventClear_Parms), Z_Construct_UFunction_UTriggerManager_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics
	{
		struct TriggerManager_eventCreateNewTriggerEventSystemInfo_Parms
		{
			AGameModeBase* Gamemode;
			ATriggerEventSystemInfoBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gamemode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::NewProp_Gamemode = { "Gamemode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventCreateNewTriggerEventSystemInfo_Parms, Gamemode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventCreateNewTriggerEventSystemInfo_Parms, ReturnValue), Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::NewProp_Gamemode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "/*\n\x09* Create new trigger event system information\n\x09* \n\x09* @param GameMode which game mode try to create the new trigger event system info\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* Create new trigger event system information\n*\n* @param GameMode which game mode try to create the new trigger event system info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "CreateNewTriggerEventSystemInfo", nullptr, nullptr, sizeof(TriggerManager_eventCreateNewTriggerEventSystemInfo_Parms), Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics
	{
		struct TriggerManager_eventGetOperationInformationManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetOperationInformationManager_Parms, ReturnValue), Z_Construct_UClass_UOperationInformationManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetOperationInformationManager", nullptr, nullptr, sizeof(TriggerManager_eventGetOperationInformationManager_Parms), Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics
	{
		struct TriggerManager_eventGetRuntimeContent_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetRuntimeContent_Parms, ReturnValue), Z_Construct_UClass_UTriggerRuntimeContent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "/*\n\x09* Get runtime content. and the outer should never change the content value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* Get runtime content. and the outer should never change the content value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetRuntimeContent", nullptr, nullptr, sizeof(TriggerManager_eventGetRuntimeContent_Parms), Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetRuntimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetRuntimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics
	{
		struct TriggerManager_eventGetTriggerController_Parms
		{
			UTriggerOctreeControllerBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerController_Parms, ReturnValue), Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetTriggerController", nullptr, nullptr, sizeof(TriggerManager_eventGetTriggerController_Parms), Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetTriggerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetTriggerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics
	{
		struct TriggerManager_eventGetTriggerEventSystemInfo_Parms
		{
			TArray<ATriggerEventSystemInfoBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerEventSystemInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetTriggerEventSystemInfo", nullptr, nullptr, sizeof(TriggerManager_eventGetTriggerEventSystemInfo_Parms), Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics
	{
		struct TriggerManager_eventGetTriggerSaveGameManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerSaveGameManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerSaveGameManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetTriggerSaveGameManager", nullptr, nullptr, sizeof(TriggerManager_eventGetTriggerSaveGameManager_Parms), Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics
	{
		struct TriggerManager_eventGetTriggerTaskComponentsByComponentInfo_Parms
		{
			TArray<UTriggerTaskComponentBase*> OutComponents;
			TArray<FTriggerTaskComponentInformation> ComponentInfos;
			UObject* WorldContent;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutComponents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentInfos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents_Inner = { "OutComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents = { "OutComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerTaskComponentsByComponentInfo_Parms, OutComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos_Inner = { "ComponentInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos = { "ComponentInfos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerTaskComponentsByComponentInfo_Parms, ComponentInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_WorldContent = { "WorldContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerTaskComponentsByComponentInfo_Parms, WorldContent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_OutComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_ComponentInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::NewProp_WorldContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "//Get the task components by the component infos.\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "Get the task components by the component infos." },
		{ "WorldContext", "WorldContent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetTriggerTaskComponentsByComponentInfo", nullptr, nullptr, sizeof(TriggerManager_eventGetTriggerTaskComponentsByComponentInfo_Parms), Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics
	{
		struct TriggerManager_eventGetTriggerTaskManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventGetTriggerTaskManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "GetTriggerTaskManager", nullptr, nullptr, sizeof(TriggerManager_eventGetTriggerTaskManager_Parms), Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics
	{
		struct TriggerManager_eventLoadLevelStream_Parms
		{
			int32 LinkId;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LinkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::NewProp_LinkId = { "LinkId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventLoadLevelStream_Parms, LinkId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::NewProp_LinkId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "LoadLevelStream", nullptr, nullptr, sizeof(TriggerManager_eventLoadLevelStream_Parms), Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_LoadLevelStream()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_LoadLevelStream_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics
	{
		struct TriggerManager_eventNewMapLoadedCallback_Parms
		{
			ULevel* Level;
			UWorld* World;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventNewMapLoadedCallback_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventNewMapLoadedCallback_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "NewMapLoadedCallback", nullptr, nullptr, sizeof(TriggerManager_eventNewMapLoadedCallback_Parms), Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics
	{
		struct TriggerManager_eventOnGameModeInitialize_Parms
		{
			AGameModeBase* Gamemode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gamemode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::NewProp_Gamemode = { "Gamemode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventOnGameModeInitialize_Parms, Gamemode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::NewProp_Gamemode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "OnGameModeInitialize", nullptr, nullptr, sizeof(TriggerManager_eventOnGameModeInitialize_Parms), Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics
	{
		struct TriggerManager_eventSetTriggerEventSystemInfo_Parms
		{
			ATriggerEventSystemInfoBase* Info;
			ATriggerEventSystemInfoBase* OldValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventSetTriggerEventSystemInfo_Parms, Info), Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventSetTriggerEventSystemInfo_Parms, OldValue), Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "/*\n\x09* Set the TriggerEventSystemInfo to this manager\n\x09*/" },
		{ "CPP_Default_OldValue", "None" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* Set the TriggerEventSystemInfo to this manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "SetTriggerEventSystemInfo", nullptr, nullptr, sizeof(TriggerManager_eventSetTriggerEventSystemInfo_Parms), Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics
	{
		struct TriggerManager_eventTryToLoadNewTriggerMap_Parms
		{
			FString MapAssetPath;
			FTriggerTaskComponentInformation ComponetInfo;
			FScriptDelegate Delegate;
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponetInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponetInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_MapAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_MapAssetPath = { "MapAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventTryToLoadNewTriggerMap_Parms, MapAssetPath), METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_MapAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_MapAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_ComponetInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_ComponetInfo = { "ComponetInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventTryToLoadNewTriggerMap_Parms, ComponetInfo), Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_ComponetInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_ComponetInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_Delegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventTryToLoadNewTriggerMap_Parms, Delegate), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerMapLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_Delegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerManager_eventTryToLoadNewTriggerMap_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_MapAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_ComponetInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "/*\n\x09* Try to load new trigger map according to the component information. \n\x09* If the target map have been loaded then invoke the callback directly\n\x09* \n\x09* @param ComponetInfo\x09the information of component which will be used to get the loading map.\n\x09* @param TriggerMapLoadedCallback The callback event when the new trigger map have been loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* Try to load new trigger map according to the component information.\n* If the target map have been loaded then invoke the callback directly\n*\n* @param ComponetInfo   the information of component which will be used to get the loading map.\n* @param TriggerMapLoadedCallback The callback event when the new trigger map have been loaded" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerManager, nullptr, "TryToLoadNewTriggerMap", nullptr, nullptr, sizeof(TriggerManager_eventTryToLoadNewTriggerMap_Parms), Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerManager_NoRegister()
	{
		return UTriggerManager::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerOctreeControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TriggerOctreeControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeContentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RuntimeContentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrigerTaskManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrigerTaskManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSaveGameManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerSaveGameManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerOctreeController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerOctreeController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeContent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeContent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationManager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventSystemInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventSystemInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventSystemInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerManager_Clear, "Clear" }, // 2643515656
		{ &Z_Construct_UFunction_UTriggerManager_CreateNewTriggerEventSystemInfo, "CreateNewTriggerEventSystemInfo" }, // 356585446
		{ &Z_Construct_UFunction_UTriggerManager_GetOperationInformationManager, "GetOperationInformationManager" }, // 2456567778
		{ &Z_Construct_UFunction_UTriggerManager_GetRuntimeContent, "GetRuntimeContent" }, // 2014728792
		{ &Z_Construct_UFunction_UTriggerManager_GetTriggerController, "GetTriggerController" }, // 2954449658
		{ &Z_Construct_UFunction_UTriggerManager_GetTriggerEventSystemInfo, "GetTriggerEventSystemInfo" }, // 2301544113
		{ &Z_Construct_UFunction_UTriggerManager_GetTriggerSaveGameManager, "GetTriggerSaveGameManager" }, // 753218706
		{ &Z_Construct_UFunction_UTriggerManager_GetTriggerTaskComponentsByComponentInfo, "GetTriggerTaskComponentsByComponentInfo" }, // 586579682
		{ &Z_Construct_UFunction_UTriggerManager_GetTriggerTaskManager, "GetTriggerTaskManager" }, // 156562957
		{ &Z_Construct_UFunction_UTriggerManager_LoadLevelStream, "LoadLevelStream" }, // 3866079283
		{ &Z_Construct_UFunction_UTriggerManager_NewMapLoadedCallback, "NewMapLoadedCallback" }, // 285800142
		{ &Z_Construct_UFunction_UTriggerManager_OnGameModeInitialize, "OnGameModeInitialize" }, // 232723921
		{ &Z_Construct_UFunction_UTriggerManager_SetTriggerEventSystemInfo, "SetTriggerEventSystemInfo" }, // 305895536
		{ &Z_Construct_UFunction_UTriggerManager_TryToLoadNewTriggerMap, "TryToLoadNewTriggerMap" }, // 2884346554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* The manager class of all triggers include item trigger, mission trigger, and scene trigger\n* \n* Liulianyou_ChangeInFeature: I don't want to make this Manager to derive from subsystem as sub system should be used to process \n* the third software such as steam.\n*/" },
		{ "IncludePath", "TriggerManager.h" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* The manager class of all triggers include item trigger, mission trigger, and scene trigger\n*\n* Liulianyou_ChangeInFeature: I don't want to make this Manager to derive from subsystem as sub system should be used to process\n* the third software such as steam." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeControllerClass_MetaData[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "//The controller class to manipulate the internal trigger data\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "The controller class to manipulate the internal trigger data" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeControllerClass = { "TriggerOctreeControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, TriggerOctreeControllerClass), Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContentClass_MetaData[] = {
		{ "Category", "TriggerRuntime|TriggerManager" },
		{ "Comment", "//The runtime content class that current game will use\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "The runtime content class that current game will use" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContentClass = { "RuntimeContentClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, RuntimeContentClass), Z_Construct_UClass_UTriggerRuntimeContent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_TrigerTaskManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_TrigerTaskManager = { "TrigerTaskManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, TrigerTaskManager), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TrigerTaskManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TrigerTaskManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerSaveGameManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerSaveGameManager = { "TriggerSaveGameManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, TriggerSaveGameManager), Z_Construct_UClass_UTriggerSaveGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerSaveGameManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerSaveGameManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeController_MetaData[] = {
		{ "Comment", "//The internal struct data to  hold all Actors which contain the TriggerTask\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "The internal struct data to  hold all Actors which contain the TriggerTask" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeController = { "TriggerOctreeController", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, TriggerOctreeController), Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContent_MetaData[] = {
		{ "Comment", "//The runtime content for current trigger system\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "The runtime content for current trigger system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContent = { "RuntimeContent", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, RuntimeContent), Z_Construct_UClass_UTriggerRuntimeContent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_OperationManager_MetaData[] = {
		{ "Comment", "//Instance to hold the manager of operations which is occured at trigger event system\n" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "Instance to hold the manager of operations which is occured at trigger event system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_OperationManager = { "OperationManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, OperationManager), Z_Construct_UClass_UOperationInformationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_OperationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_OperationManager_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos_Inner = { "EventSystemInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos_MetaData[] = {
		{ "Comment", "/*\n\x09* The public information of the trigger system which will need to be replicated\n\x09* \n\x09* As this manager maybe the only one instance in the application and there maybe have several world at the runtime such as DS/Client at editor mode.\n\x09* The different world should have its only infos which used to replicated, I need to store them all\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerManager.h" },
		{ "ToolTip", "* The public information of the trigger system which will need to be replicated\n*\n* As this manager maybe the only one instance in the application and there maybe have several world at the runtime such as DS/Client at editor mode.\n* The different world should have its only infos which used to replicated, I need to store them all" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos = { "EventSystemInfos", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerManager, EventSystemInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_TrigerTaskManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerSaveGameManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_TriggerOctreeController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_RuntimeContent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_OperationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerManager_Statics::NewProp_EventSystemInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerManager_Statics::ClassParams = {
		&UTriggerManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerManager, 3155411086);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerManager>()
	{
		return UTriggerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerManager(Z_Construct_UClass_UTriggerManager, &UTriggerManager::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
