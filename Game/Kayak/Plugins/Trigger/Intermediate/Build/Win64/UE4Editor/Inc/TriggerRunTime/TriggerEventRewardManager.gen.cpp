// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h"
#include "TriggerRunTime/Public/TriggerTaskManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventRewardManager() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRewardData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventRequestRewardDelegate_Parms
		{
			FString RewardID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::NewProp_RewardID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::NewProp_RewardID = { "RewardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventRequestRewardDelegate_Parms, RewardID), METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::NewProp_RewardID_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::NewProp_RewardID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::NewProp_RewardID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "RequestRewardDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventRequestRewardDelegate_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execOnTaskUnRegisterEvent)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TriggerTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskUnRegisterEvent(Z_Param_TriggerTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execOnTaskRegisterEvent)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TriggerTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskRegisterEvent(Z_Param_TriggerTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execAcceptReward)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RewardID);
		P_GET_TARRAY_REF(FRewardData,Z_Param_Out_RewardDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptReward_Implementation(Z_Param_RewardID,Z_Param_Out_RewardDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execRequestReward)
	{
		P_GET_OBJECT(UTriggerEventRewardDataBase,Z_Param_RewardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReward_Implementation(Z_Param_RewardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execAddNewMaxRewardID)
	{
		P_GET_OBJECT(UTriggerEventRewardDataBase,Z_Param_RewardData);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewMaxRewardID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewMaxRewardID(Z_Param_RewardData,Z_Param_NewMaxRewardID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execGetTheMaxRewardIDByRewardData)
	{
		P_GET_OBJECT(UTriggerEventRewardDataBase,Z_Param_RewardData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTheMaxRewardIDByRewardData(Z_Param_RewardData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execGetTriggerTaskManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskManager**)Z_Param__Result=P_THIS->GetTriggerTaskManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardManager::execTryToGenerateRewardID)
	{
		P_GET_OBJECT(UTriggerEventRewardDataBase,Z_Param_TargetData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToGenerateRewardID_Implementation(Z_Param_TargetData,Z_Param_Out_ID);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerEventRewardManager_AcceptReward = FName(TEXT("AcceptReward"));
	void UTriggerEventRewardManager::AcceptReward(const FString& RewardID, TArray<FRewardData> const& RewardDatas)
	{
		TriggerEventRewardManager_eventAcceptReward_Parms Parms;
		Parms.RewardID=RewardID;
		Parms.RewardDatas=RewardDatas;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardManager_AcceptReward),&Parms);
	}
	static FName NAME_UTriggerEventRewardManager_OnInitialize = FName(TEXT("OnInitialize"));
	void UTriggerEventRewardManager::OnInitialize(UTriggerTaskManager* OwnerManager)
	{
		TriggerEventRewardManager_eventOnInitialize_Parms Parms;
		Parms.OwnerManager=OwnerManager;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardManager_OnInitialize),&Parms);
	}
	static FName NAME_UTriggerEventRewardManager_RequestReward = FName(TEXT("RequestReward"));
	void UTriggerEventRewardManager::RequestReward(UTriggerEventRewardDataBase* RewardData)
	{
		TriggerEventRewardManager_eventRequestReward_Parms Parms;
		Parms.RewardData=RewardData;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardManager_RequestReward),&Parms);
	}
	static FName NAME_UTriggerEventRewardManager_TryToGenerateRewardID = FName(TEXT("TryToGenerateRewardID"));
	bool UTriggerEventRewardManager::TryToGenerateRewardID(UTriggerEventRewardDataBase* TargetData, FString& ID)
	{
		TriggerEventRewardManager_eventTryToGenerateRewardID_Parms Parms;
		Parms.TargetData=TargetData;
		Parms.ID=ID;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardManager_TryToGenerateRewardID),&Parms);
		ID=Parms.ID;
		return !!Parms.ReturnValue;
	}
	void UTriggerEventRewardManager::StaticRegisterNativesUTriggerEventRewardManager()
	{
		UClass* Class = UTriggerEventRewardManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptReward", &UTriggerEventRewardManager::execAcceptReward },
			{ "AddNewMaxRewardID", &UTriggerEventRewardManager::execAddNewMaxRewardID },
			{ "GetTheMaxRewardIDByRewardData", &UTriggerEventRewardManager::execGetTheMaxRewardIDByRewardData },
			{ "GetTriggerTaskManager", &UTriggerEventRewardManager::execGetTriggerTaskManager },
			{ "OnTaskRegisterEvent", &UTriggerEventRewardManager::execOnTaskRegisterEvent },
			{ "OnTaskUnRegisterEvent", &UTriggerEventRewardManager::execOnTaskUnRegisterEvent },
			{ "RequestReward", &UTriggerEventRewardManager::execRequestReward },
			{ "TryToGenerateRewardID", &UTriggerEventRewardManager::execTryToGenerateRewardID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardID = { "RewardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventAcceptReward_Parms, RewardID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas_Inner = { "RewardDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas = { "RewardDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventAcceptReward_Parms, RewardDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::NewProp_RewardDatas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Accept all the actual rewards for the target RewardID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Accept all the actual rewards for the target RewardID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "AcceptReward", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventAcceptReward_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics
	{
		struct TriggerEventRewardManager_eventAddNewMaxRewardID_Parms
		{
			UTriggerEventRewardDataBase* RewardData;
			FString NewMaxRewardID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMaxRewardID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewMaxRewardID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_RewardData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_RewardData = { "RewardData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventAddNewMaxRewardID_Parms, RewardData), Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_RewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_RewardData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_NewMaxRewardID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_NewMaxRewardID = { "NewMaxRewardID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventAddNewMaxRewardID_Parms, NewMaxRewardID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_NewMaxRewardID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_NewMaxRewardID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_RewardData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::NewProp_NewMaxRewardID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Add new max reward ID to the pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Add new max reward ID to the pool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "AddNewMaxRewardID", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventAddNewMaxRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics
	{
		struct TriggerEventRewardManager_eventGetTheMaxRewardIDByRewardData_Parms
		{
			UTriggerEventRewardDataBase* RewardData;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_RewardData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_RewardData = { "RewardData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventGetTheMaxRewardIDByRewardData_Parms, RewardData), Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_RewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_RewardData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventGetTheMaxRewardIDByRewardData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_RewardData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get the max reward ID fro the target data type\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Get the max reward ID fro the target data type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "GetTheMaxRewardIDByRewardData", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventGetTheMaxRewardIDByRewardData_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics
	{
		struct TriggerEventRewardManager_eventGetTriggerTaskManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventGetTriggerTaskManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "GetTriggerTaskManager", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventGetTriggerTaskManager_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::NewProp_OwnerManager = { "OwnerManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventOnInitialize_Parms, OwnerManager), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::NewProp_OwnerManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Initialize this reward manager\n\x09* \n\x09* @param the owner manager which hold the instance of this reward manager\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Initialize this reward manager\n*\n* @param the owner manager which hold the instance of this reward manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "OnInitialize", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventOnInitialize_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics
	{
		struct TriggerEventRewardManager_eventOnTaskRegisterEvent_Parms
		{
			UTriggerTaskBase* TriggerTask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventOnTaskRegisterEvent_Parms, TriggerTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::NewProp_TriggerTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::NewProp_TriggerTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "OnTaskRegisterEvent", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventOnTaskRegisterEvent_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics
	{
		struct TriggerEventRewardManager_eventOnTaskUnRegisterEvent_Parms
		{
			UTriggerTaskBase* TriggerTask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventOnTaskUnRegisterEvent_Parms, TriggerTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::NewProp_TriggerTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::NewProp_TriggerTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "OnTaskUnRegisterEvent", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventOnTaskUnRegisterEvent_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::NewProp_RewardData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::NewProp_RewardData = { "RewardData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventRequestReward_Parms, RewardData), Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::NewProp_RewardData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::NewProp_RewardData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::NewProp_RewardData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to request the actual rewards for the target reward data\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Try to request the actual rewards for the target reward data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "RequestReward", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventRequestReward_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_TargetData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventTryToGenerateRewardID_Parms, TargetData), Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_TargetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_TargetData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardManager_eventTryToGenerateRewardID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerEventRewardManager_eventTryToGenerateRewardID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventRewardManager_eventTryToGenerateRewardID_Parms), &Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_TargetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to generated new reward ID\n\x09* \n\x09* #return false means generated ID failed at current time, the ID maybe regenerated when the map have been loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Try to generated new reward ID\n*\n* #return false means generated ID failed at current time, the ID maybe regenerated when the map have been loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardManager, nullptr, "TryToGenerateRewardID", nullptr, nullptr, sizeof(TriggerEventRewardManager_eventTryToGenerateRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerEventRewardManager_NoRegister()
	{
		return UTriggerEventRewardManager::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEventRewardManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RewardDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveDifferentDataType_MetaData[];
#endif
		static void NewProp_RemoveDifferentDataType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveDifferentDataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckExactDataType_MetaData[];
#endif
		static void NewProp_CheckExactDataType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckExactDataType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestRewardDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RequestRewardDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEventRewardManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerEventRewardManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_AcceptReward, "AcceptReward" }, // 381093925
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_AddNewMaxRewardID, "AddNewMaxRewardID" }, // 3475674231
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_GetTheMaxRewardIDByRewardData, "GetTheMaxRewardIDByRewardData" }, // 1187648951
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_GetTriggerTaskManager, "GetTriggerTaskManager" }, // 3424754215
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_OnInitialize, "OnInitialize" }, // 2982694980
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskRegisterEvent, "OnTaskRegisterEvent" }, // 1510991941
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_OnTaskUnRegisterEvent, "OnTaskUnRegisterEvent" }, // 2446985689
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_RequestReward, "RequestReward" }, // 1390791414
		{ &Z_Construct_UFunction_UTriggerEventRewardManager_TryToGenerateRewardID, "TryToGenerateRewardID" }, // 1582155056
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* The base class to manage the trigger event reward \n*/" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* The base class to manage the trigger event reward" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RewardDataClass_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "TriggerRuntime|Reward" },
		{ "Comment", "/*\n\x09* The default reward data which all trigger task should have\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* The default reward data which all trigger task should have" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RewardDataClass = { "RewardDataClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardManager, RewardDataClass), Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RewardDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RewardDataClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "TriggerRuntime|Reward" },
		{ "Comment", "/*\n\x09* Flag to check weather I need to remove the reward data in the trigger task which type is different from RewardDataClass\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Flag to check weather I need to remove the reward data in the trigger task which type is different from RewardDataClass" },
	};
#endif
	void Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType_SetBit(void* Obj)
	{
		((UTriggerEventRewardManager*)Obj)->RemoveDifferentDataType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType = { "RemoveDifferentDataType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerEventRewardManager), &Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "TriggerRuntime|Reward" },
		{ "Comment", "/*\n\x09* Flag to check weather I need to check reward data with the exact data type with RewardDataClass to remove the external reward data if the RemoveDifferentDataType is true\n\x09*/" },
		{ "EditCondition", "RemoveDifferentDataType" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Flag to check weather I need to check reward data with the exact data type with RewardDataClass to remove the external reward data if the RemoveDifferentDataType is true" },
	};
#endif
	void Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType_SetBit(void* Obj)
	{
		((UTriggerEventRewardManager*)Obj)->CheckExactDataType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType = { "CheckExactDataType", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerEventRewardManager), &Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_TaskManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_TaskManager = { "TaskManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardManager, TaskManager), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_TaskManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_TaskManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RequestRewardDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Comment", "/*\n\x09* Give the outer module one chance to process request reward command\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardManager.h" },
		{ "ToolTip", "* Give the outer module one chance to process request reward command" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RequestRewardDelegate = { "RequestRewardDelegate", nullptr, (EPropertyFlags)0x0040000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardManager, RequestRewardDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_RequestRewardDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RequestRewardDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RequestRewardDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEventRewardManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RewardDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RemoveDifferentDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_CheckExactDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_TaskManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardManager_Statics::NewProp_RequestRewardDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEventRewardManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEventRewardManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEventRewardManager_Statics::ClassParams = {
		&UTriggerEventRewardManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerEventRewardManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::PropPointers),
		0,
		0x049000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEventRewardManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEventRewardManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEventRewardManager, 4131553492);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEventRewardManager>()
	{
		return UTriggerEventRewardManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEventRewardManager(Z_Construct_UClass_UTriggerEventRewardManager, &UTriggerEventRewardManager::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEventRewardManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEventRewardManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
