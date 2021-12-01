// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventRewardDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRewardData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItem();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister();
// End Cross Module References
class UScriptStruct* FRewardData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRewardData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RewardData"), sizeof(FRewardData), Get_Z_Construct_UScriptStruct_FRewardData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRewardData>()
{
	return FRewardData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardData(FRewardData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RewardData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardData()
	{
		UScriptStruct::DeferCppStructOps<FRewardData>(FName(TEXT("RewardData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardData;
	struct Z_Construct_UScriptStruct_FRewardData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Controllers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "RewardData" },
		{ "Comment", "//The Items for the target players\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "The Items for the target players" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardData, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers_Inner = { "Controllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers_MetaData[] = {
		{ "Category", "RewardData" },
		{ "Comment", "//Which player own this Item;\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "Which player own this Item;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardData, Controllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardData_Statics::NewProp_Controllers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RewardData",
		sizeof(FRewardData),
		alignof(FRewardData),
		Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardData"), sizeof(FRewardData), Get_Z_Construct_UScriptStruct_FRewardData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardData_Hash() { return 2827287085U; }
class UScriptStruct* FRewardItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRewardItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardItem, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RewardItem"), sizeof(FRewardItem), Get_Z_Construct_UScriptStruct_FRewardItem_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRewardItem>()
{
	return FRewardItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardItem(FRewardItem::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RewardItem"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardItem
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardItem()
	{
		UScriptStruct::DeferCppStructOps<FRewardItem>(FName(TEXT("RewardItem")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRewardItem;
	struct Z_Construct_UScriptStruct_FRewardItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Brief for the item of reward\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Brief for the item of reward" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "RewardItem" },
		{ "Comment", "//The ID for the Item\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "The ID for the Item" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemNumber_MetaData[] = {
		{ "Category", "RewardItem" },
		{ "Comment", "//The number of the target Item\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "The number of the target Item" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemNumber = { "ItemNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardItem, ItemNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardItem_Statics::NewProp_ItemNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RewardItem",
		sizeof(FRewardItem),
		alignof(FRewardItem),
		Z_Construct_UScriptStruct_FRewardItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardItem"), sizeof(FRewardItem), Get_Z_Construct_UScriptStruct_FRewardItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardItem_Hash() { return 3512002056U; }
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execAcceptReward)
	{
		P_GET_TARRAY_REF(FRewardData,Z_Param_Out_RewardDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptReward_Implementation(Z_Param_Out_RewardDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execRequestReward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestReward_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execIsValidRewardID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidRewardID_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execGenerateNextID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateNextID_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execIsLarger)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLarger_Implementation(Z_Param_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execSetRewardID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRewardID_Implementation(Z_Param_NewID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execGetRewardIDFromStrings)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Strings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRewardIDFromStrings_Implementation(Z_Param_Out_Strings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventRewardDataBase::execGetRewardID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetRewardID_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerEventRewardDataBase_AcceptReward = FName(TEXT("AcceptReward"));
	void UTriggerEventRewardDataBase::AcceptReward(TArray<FRewardData> const& RewardDatas)
	{
		TriggerEventRewardDataBase_eventAcceptReward_Parms Parms;
		Parms.RewardDatas=RewardDatas;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_AcceptReward),&Parms);
	}
	static FName NAME_UTriggerEventRewardDataBase_GenerateNextID = FName(TEXT("GenerateNextID"));
	FString UTriggerEventRewardDataBase::GenerateNextID(const FString& ID) const
	{
		TriggerEventRewardDataBase_eventGenerateNextID_Parms Parms;
		Parms.ID=ID;
		const_cast<UTriggerEventRewardDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_GenerateNextID),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventRewardDataBase_GetRewardID = FName(TEXT("GetRewardID"));
	FString UTriggerEventRewardDataBase::GetRewardID() const
	{
		TriggerEventRewardDataBase_eventGetRewardID_Parms Parms;
		const_cast<UTriggerEventRewardDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_GetRewardID),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventRewardDataBase_GetRewardIDFromStrings = FName(TEXT("GetRewardIDFromStrings"));
	FString UTriggerEventRewardDataBase::GetRewardIDFromStrings(TArray<FString> const& Strings) const
	{
		TriggerEventRewardDataBase_eventGetRewardIDFromStrings_Parms Parms;
		Parms.Strings=Strings;
		const_cast<UTriggerEventRewardDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_GetRewardIDFromStrings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventRewardDataBase_IsLarger = FName(TEXT("IsLarger"));
	bool UTriggerEventRewardDataBase::IsLarger(const FString& ID) const
	{
		TriggerEventRewardDataBase_eventIsLarger_Parms Parms;
		Parms.ID=ID;
		const_cast<UTriggerEventRewardDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_IsLarger),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventRewardDataBase_IsValidRewardID = FName(TEXT("IsValidRewardID"));
	bool UTriggerEventRewardDataBase::IsValidRewardID(const FString& ID) const
	{
		TriggerEventRewardDataBase_eventIsValidRewardID_Parms Parms;
		Parms.ID=ID;
		const_cast<UTriggerEventRewardDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_IsValidRewardID),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventRewardDataBase_RequestReward = FName(TEXT("RequestReward"));
	void UTriggerEventRewardDataBase::RequestReward()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_RequestReward),NULL);
	}
	static FName NAME_UTriggerEventRewardDataBase_SetRewardID = FName(TEXT("SetRewardID"));
	void UTriggerEventRewardDataBase::SetRewardID(const FString& NewID)
	{
		TriggerEventRewardDataBase_eventSetRewardID_Parms Parms;
		Parms.NewID=NewID;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataBase_SetRewardID),&Parms);
	}
	void UTriggerEventRewardDataBase::StaticRegisterNativesUTriggerEventRewardDataBase()
	{
		UClass* Class = UTriggerEventRewardDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptReward", &UTriggerEventRewardDataBase::execAcceptReward },
			{ "GenerateNextID", &UTriggerEventRewardDataBase::execGenerateNextID },
			{ "GetRewardID", &UTriggerEventRewardDataBase::execGetRewardID },
			{ "GetRewardIDFromStrings", &UTriggerEventRewardDataBase::execGetRewardIDFromStrings },
			{ "IsLarger", &UTriggerEventRewardDataBase::execIsLarger },
			{ "IsValidRewardID", &UTriggerEventRewardDataBase::execIsValidRewardID },
			{ "RequestReward", &UTriggerEventRewardDataBase::execRequestReward },
			{ "SetRewardID", &UTriggerEventRewardDataBase::execSetRewardID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics
	{
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas_Inner = { "RewardDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas = { "RewardDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventAcceptReward_Parms, RewardDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::NewProp_RewardDatas,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "AcceptReward", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventAcceptReward_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventGenerateNextID_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventGenerateNextID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Generate the ID which is after the target ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Generate the ID which is after the target ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "GenerateNextID", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventGenerateNextID_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventGetRewardID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get reward ID as one string for this data\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Get reward ID as one string for this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "GetRewardID", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventGetRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Strings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Strings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings_Inner = { "Strings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventGetRewardIDFromStrings_Parms, Strings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventGetRewardIDFromStrings_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_Strings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get reward ID from the arrays of string, each element in the string will be one part of the final ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Get reward ID from the arrays of string, each element in the string will be one part of the final ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "GetRewardIDFromStrings", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventGetRewardIDFromStrings_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventIsLarger_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerEventRewardDataBase_eventIsLarger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventRewardDataBase_eventIsLarger_Parms), &Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Help function to define weather the ID int this data is larger then target ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Help function to define weather the ID int this data is larger then target ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "IsLarger", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventIsLarger_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventIsValidRewardID_Parms, ID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ID_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerEventRewardDataBase_eventIsValidRewardID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventRewardDataBase_eventIsValidRewardID_Parms), &Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Check weather the target reward ID is valid for this data\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Check weather the target reward ID is valid for this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "IsValidRewardID", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventIsValidRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Request the actual reward which this data stands for\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "Request the actual reward which this data stands for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "RequestReward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::NewProp_NewID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::NewProp_NewID = { "NewID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataBase_eventSetRewardID_Parms, NewID), METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::NewProp_NewID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::NewProp_NewID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::NewProp_NewID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Set the reward ID from the new string ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* Set the reward ID from the new string ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataBase, nullptr, "SetRewardID", nullptr, nullptr, sizeof(TriggerEventRewardDataBase_eventSetRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerEventRewardDataBase_NoRegister()
	{
		return UTriggerEventRewardDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEventRewardDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestRewardCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestRewardCondition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskExternalDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_AcceptReward, "AcceptReward" }, // 4254862999
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_GenerateNextID, "GenerateNextID" }, // 4227063871
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardID, "GetRewardID" }, // 2794608340
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_GetRewardIDFromStrings, "GetRewardIDFromStrings" }, // 1537396301
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_IsLarger, "IsLarger" }, // 3821388713
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_IsValidRewardID, "IsValidRewardID" }, // 4133629335
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_RequestReward, "RequestReward" }, // 3933601954
		{ &Z_Construct_UFunction_UTriggerEventRewardDataBase_SetRewardID, "SetRewardID" }, // 2233963143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|ExternalData" },
		{ "Comment", "/*\n* The base class used to store the reward information which will be created by the trigger task which bind with this external data\n*/" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* The base class used to store the reward information which will be created by the trigger task which bind with this external data" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::NewProp_RequestRewardCondition_MetaData[] = {
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to request reward by this data\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataBase.h" },
		{ "ToolTip", "* The condition to check when to request reward by this data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::NewProp_RequestRewardCondition = { "RequestRewardCondition", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardDataBase, RequestRewardCondition), Z_Construct_UClass_UEvaluatorOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::NewProp_RequestRewardCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::NewProp_RequestRewardCondition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::NewProp_RequestRewardCondition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEventRewardDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::ClassParams = {
		&UTriggerEventRewardDataBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEventRewardDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEventRewardDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEventRewardDataBase, 738529086);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEventRewardDataBase>()
	{
		return UTriggerEventRewardDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEventRewardDataBase(Z_Construct_UClass_UTriggerEventRewardDataBase, &UTriggerEventRewardDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEventRewardDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEventRewardDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
