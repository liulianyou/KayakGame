// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerRuntimeContent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerRuntimeContent() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EScenarioRunState();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerScenarioInfo();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FScenarioParticipatorInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerScenarioHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRuntimeContent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRuntimeContent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskComponentInformation();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	static UEnum* EScenarioRunState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EScenarioRunState, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EScenarioRunState"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EScenarioRunState>()
	{
		return EScenarioRunState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScenarioRunState(EScenarioRunState_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EScenarioRunState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EScenarioRunState_Hash() { return 1508263640U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EScenarioRunState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScenarioRunState"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EScenarioRunState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScenarioRunState::EScenarioRunState_Open", (int64)EScenarioRunState::EScenarioRunState_Open },
				{ "EScenarioRunState::EScenarioRunState_Suspend", (int64)EScenarioRunState::EScenarioRunState_Suspend },
				{ "EScenarioRunState::EScenarioRunState_Closed", (int64)EScenarioRunState::EScenarioRunState_Closed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The status of scenario\n*/" },
				{ "EScenarioRunState_Closed.Comment", "//This scenario is closed and never work again\n" },
				{ "EScenarioRunState_Closed.DisplayName", "Closed" },
				{ "EScenarioRunState_Closed.Name", "EScenarioRunState::EScenarioRunState_Closed" },
				{ "EScenarioRunState_Closed.ToolTip", "This scenario is closed and never work again" },
				{ "EScenarioRunState_Open.Comment", "//This scenario is opened and is running\n" },
				{ "EScenarioRunState_Open.DisplayName", "Open" },
				{ "EScenarioRunState_Open.Name", "EScenarioRunState::EScenarioRunState_Open" },
				{ "EScenarioRunState_Open.ToolTip", "This scenario is opened and is running" },
				{ "EScenarioRunState_Suspend.Comment", "//This scenario do not work, but it can rework again\n" },
				{ "EScenarioRunState_Suspend.DisplayName", "Suspend" },
				{ "EScenarioRunState_Suspend.Name", "EScenarioRunState::EScenarioRunState_Suspend" },
				{ "EScenarioRunState_Suspend.ToolTip", "This scenario do not work, but it can rework again" },
				{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
				{ "ToolTip", "* The status of scenario" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EScenarioRunState",
				"EScenarioRunState",
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
class UScriptStruct* FTriggerScenarioInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerScenarioInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TriggerScenarioInfo"), sizeof(FTriggerScenarioInfo), Get_Z_Construct_UScriptStruct_FTriggerScenarioInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTriggerScenarioInfo>()
{
	return FTriggerScenarioInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerScenarioInfo(FTriggerScenarioInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TriggerScenarioInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioInfo()
	{
		UScriptStruct::DeferCppStructOps<FTriggerScenarioInfo>(FName(TEXT("TriggerScenarioInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioInfo;
	struct Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScenarioTag;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticipatorInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticipatorInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticipatorInfos;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentScenarioInfoHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentScenarioInfoHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The information of current content of trigger system\n*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* The information of current content of trigger system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerScenarioInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ScenarioTag_MetaData[] = {
		{ "Category", "TriggerScenarioInfo" },
		{ "Comment", "//The name of current scenario\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The name of current scenario" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ScenarioTag = { "ScenarioTag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerScenarioInfo, ScenarioTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ScenarioTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ScenarioTag_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos_Inner = { "ParticipatorInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FScenarioParticipatorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos_MetaData[] = {
		{ "Category", "TriggerScenarioInfo" },
		{ "Comment", "//Who takes part in this scenario\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "Who takes part in this scenario" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos = { "ParticipatorInfos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerScenarioInfo, ParticipatorInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State_MetaData[] = {
		{ "Category", "TriggerScenarioInfo" },
		{ "Comment", "//The state of this scenario\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The state of this scenario" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerScenarioInfo, State), Z_Construct_UEnum_TriggerRunTime_EScenarioRunState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParentScenarioInfoHandle_MetaData[] = {
		{ "Category", "TriggerScenarioInfo" },
		{ "Comment", "//The parent scenario information which the current one go through\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The parent scenario information which the current one go through" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParentScenarioInfoHandle = { "ParentScenarioInfoHandle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerScenarioInfo, ParentScenarioInfoHandle), Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParentScenarioInfoHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParentScenarioInfoHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ScenarioTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParticipatorInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::NewProp_ParentScenarioInfoHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TriggerScenarioInfo",
		sizeof(FTriggerScenarioInfo),
		alignof(FTriggerScenarioInfo),
		Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerScenarioInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerScenarioInfo"), sizeof(FTriggerScenarioInfo), Get_Z_Construct_UScriptStruct_FTriggerScenarioInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerScenarioInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioInfo_Hash() { return 385229202U; }
class UScriptStruct* FScenarioParticipatorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScenarioParticipatorInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ScenarioParticipatorInfo"), sizeof(FScenarioParticipatorInfo), Get_Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FScenarioParticipatorInfo>()
{
	return FScenarioParticipatorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScenarioParticipatorInfo(FScenarioParticipatorInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ScenarioParticipatorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFScenarioParticipatorInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFScenarioParticipatorInfo()
	{
		UScriptStruct::DeferCppStructOps<FScenarioParticipatorInfo>(FName(TEXT("ScenarioParticipatorInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFScenarioParticipatorInfo;
	struct Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueID;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScenarioParticipatorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueName_MetaData[] = {
		{ "Category", "ScenarioParticipatorInfo" },
		{ "Comment", "//The unique name of the participator, Name should be stable along different scenario or different games \n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The unique name of the participator, Name should be stable along different scenario or different games" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScenarioParticipatorInfo, UniqueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueID_MetaData[] = {
		{ "Category", "ScenarioParticipatorInfo" },
		{ "Comment", "//The unique ID of the participator, ID should be stable along different scenario or different games \n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The unique ID of the participator, ID should be stable along different scenario or different games" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScenarioParticipatorInfo, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueID_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass_Inner = { "PawnClass", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "ScenarioParticipatorInfo" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScenarioParticipatorInfo, PawnClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::NewProp_PawnClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ScenarioParticipatorInfo",
		sizeof(FScenarioParticipatorInfo),
		alignof(FScenarioParticipatorInfo),
		Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScenarioParticipatorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScenarioParticipatorInfo"), sizeof(FScenarioParticipatorInfo), Get_Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScenarioParticipatorInfo_Hash() { return 1633281986U; }
class UScriptStruct* FTriggerScenarioHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerScenarioHandle, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TriggerScenarioHandle"), sizeof(FTriggerScenarioHandle), Get_Z_Construct_UScriptStruct_FTriggerScenarioHandle_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTriggerScenarioHandle>()
{
	return FTriggerScenarioHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerScenarioHandle(FTriggerScenarioHandle::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TriggerScenarioHandle"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioHandle
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioHandle()
	{
		UScriptStruct::DeferCppStructOps<FTriggerScenarioHandle>(FName(TEXT("TriggerScenarioHandle")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerScenarioHandle;
	struct Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The handle of scenario\n*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* The handle of scenario" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerScenarioHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TriggerScenarioHandle",
		sizeof(FTriggerScenarioHandle),
		alignof(FTriggerScenarioHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerScenarioHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerScenarioHandle"), sizeof(FTriggerScenarioHandle), Get_Z_Construct_UScriptStruct_FTriggerScenarioHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerScenarioHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerScenarioHandle_Hash() { return 1069924666U; }
	DEFINE_FUNCTION(UTriggerRuntimeContent::execGetTriggerCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTriggerCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execSetTriggerCategory)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggerCategory(Z_Param_Out_Difficulty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execSetTriggerCategoryByString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggerCategoryByString(Z_Param_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execCanUseComponentInfo)
	{
		P_GET_STRUCT_REF(FTriggerTaskComponentInformation,Z_Param_Out_ComponentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseComponentInfo(Z_Param_Out_ComponentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execAddSceneario)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_ScenarioTag);
		P_GET_TARRAY_REF(APlayerController*,Z_Param_Out_Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriggerScenarioHandle*)Z_Param__Result=P_THIS->AddSceneario(Z_Param_Out_ScenarioTag,Z_Param_Out_Players);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execGetAllOpenedScenarios)
	{
		P_GET_TARRAY_REF(FTriggerScenarioHandle,Z_Param_Out_ActiveScenerioHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllOpenedScenarios(Z_Param_Out_ActiveScenerioHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execGetAllActiveScenarios)
	{
		P_GET_TARRAY_REF(FTriggerScenarioHandle,Z_Param_Out_ActiveScenerioHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllActiveScenarios(Z_Param_Out_ActiveScenerioHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execGetScenerioInfo)
	{
		P_GET_STRUCT_REF(FTriggerScenarioHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriggerScenarioInfo*)Z_Param__Result=P_THIS->GetScenerioInfo(Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execGetOpenedScenarioInfosByPlayerController)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_GET_TARRAY_REF(FTriggerScenarioHandle,Z_Param_Out_OutInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOpenedScenarioInfosByPlayerController(Z_Param_Player,Z_Param_Out_OutInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRuntimeContent::execInitializeRuntimeContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeRuntimeContent();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerRuntimeContent_OnInitializeRuntimeContent = FName(TEXT("OnInitializeRuntimeContent"));
	void UTriggerRuntimeContent::OnInitializeRuntimeContent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerRuntimeContent_OnInitializeRuntimeContent),NULL);
	}
	void UTriggerRuntimeContent::StaticRegisterNativesUTriggerRuntimeContent()
	{
		UClass* Class = UTriggerRuntimeContent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSceneario", &UTriggerRuntimeContent::execAddSceneario },
			{ "CanUseComponentInfo", &UTriggerRuntimeContent::execCanUseComponentInfo },
			{ "GetAllActiveScenarios", &UTriggerRuntimeContent::execGetAllActiveScenarios },
			{ "GetAllOpenedScenarios", &UTriggerRuntimeContent::execGetAllOpenedScenarios },
			{ "GetOpenedScenarioInfosByPlayerController", &UTriggerRuntimeContent::execGetOpenedScenarioInfosByPlayerController },
			{ "GetScenerioInfo", &UTriggerRuntimeContent::execGetScenerioInfo },
			{ "GetTriggerCategory", &UTriggerRuntimeContent::execGetTriggerCategory },
			{ "InitializeRuntimeContent", &UTriggerRuntimeContent::execInitializeRuntimeContent },
			{ "SetTriggerCategory", &UTriggerRuntimeContent::execSetTriggerCategory },
			{ "SetTriggerCategoryByString", &UTriggerRuntimeContent::execSetTriggerCategoryByString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics
	{
		struct TriggerRuntimeContent_eventAddSceneario_Parms
		{
			FGameplayTag ScenarioTag;
			TArray<APlayerController*> Players;
			FTriggerScenarioHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScenarioTag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ScenarioTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ScenarioTag = { "ScenarioTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventAddSceneario_Parms, ScenarioTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ScenarioTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ScenarioTag_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventAddSceneario_Parms, Players), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventAddSceneario_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ScenarioTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_Players,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "Comment", "/*\n\x09* Add new scenario to this difficulty.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* Add new scenario to this difficulty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "AddSceneario", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventAddSceneario_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics
	{
		struct TriggerRuntimeContent_eventCanUseComponentInfo_Parms
		{
			FTriggerTaskComponentInformation ComponentInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ComponentInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ComponentInfo = { "ComponentInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventCanUseComponentInfo_Parms, ComponentInfo), Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ComponentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ComponentInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerRuntimeContent_eventCanUseComponentInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerRuntimeContent_eventCanUseComponentInfo_Parms), &Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ComponentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "Comment", "/*\n\x09* Used to check weather we can use the target component info.\n\x09* When one component only can be run when scenario2 which parent scenario is scenario1, and the current active scenario is scenarioB which parent scenario is scenarioA, this component info should not be activated.\n\x09* also when current difficulty is easy, and the target component should be run on the hard mode, these components should not be activated\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* Used to check weather we can use the target component info.\n* When one component only can be run when scenario2 which parent scenario is scenario1, and the current active scenario is scenarioB which parent scenario is scenarioA, this component info should not be activated.\n* also when current difficulty is easy, and the target component should be run on the hard mode, these components should not be activated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "CanUseComponentInfo", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventCanUseComponentInfo_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics
	{
		struct TriggerRuntimeContent_eventGetAllActiveScenarios_Parms
		{
			TArray<FTriggerScenarioHandle> ActiveScenerioHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveScenerioHandle_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveScenerioHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::NewProp_ActiveScenerioHandle_Inner = { "ActiveScenerioHandle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::NewProp_ActiveScenerioHandle = { "ActiveScenerioHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetAllActiveScenarios_Parms, ActiveScenerioHandle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::NewProp_ActiveScenerioHandle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::NewProp_ActiveScenerioHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "Comment", "/*\n\x09* Get all scenario infos which state is closed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* Get all scenario infos which state is closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "GetAllActiveScenarios", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventGetAllActiveScenarios_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics
	{
		struct TriggerRuntimeContent_eventGetAllOpenedScenarios_Parms
		{
			TArray<FTriggerScenarioHandle> ActiveScenerioHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveScenerioHandle_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveScenerioHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::NewProp_ActiveScenerioHandle_Inner = { "ActiveScenerioHandle", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::NewProp_ActiveScenerioHandle = { "ActiveScenerioHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetAllOpenedScenarios_Parms, ActiveScenerioHandle), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::NewProp_ActiveScenerioHandle_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::NewProp_ActiveScenerioHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "Comment", "//Get all scenarios infos which the state is open\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "Get all scenarios infos which the state is open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "GetAllOpenedScenarios", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventGetAllOpenedScenarios_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics
	{
		struct TriggerRuntimeContent_eventGetOpenedScenarioInfosByPlayerController_Parms
		{
			APlayerController* Player;
			TArray<FTriggerScenarioHandle> OutInfos;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetOpenedScenarioInfosByPlayerController_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_OutInfos_Inner = { "OutInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_OutInfos = { "OutInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetOpenedScenarioInfosByPlayerController_Parms, OutInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_OutInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::NewProp_OutInfos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "Comment", "//Get all opened scenario infos which contain the target player\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "Get all opened scenario infos which contain the target player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "GetOpenedScenarioInfosByPlayerController", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventGetOpenedScenarioInfosByPlayerController_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics
	{
		struct TriggerRuntimeContent_eventGetScenerioInfo_Parms
		{
			FTriggerScenarioHandle Handle;
			FTriggerScenarioInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetScenerioInfo_Parms, Handle), Z_Construct_UScriptStruct_FTriggerScenarioHandle, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetScenerioInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriggerScenarioInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "GetScenerioInfo", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventGetScenerioInfo_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics
	{
		struct TriggerRuntimeContent_eventGetTriggerCategory_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventGetTriggerCategory_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "GetTriggerCategory", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventGetTriggerCategory_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "InitializeRuntimeContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|RuntimeContent" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "OnInitializeRuntimeContent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics
	{
		struct TriggerRuntimeContent_eventSetTriggerCategory_Parms
		{
			FGameplayTagContainer Difficulty;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::NewProp_Difficulty_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventSetTriggerCategory_Parms, Difficulty), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::NewProp_Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Set current category for trigger system\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "Set current category for trigger system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "SetTriggerCategory", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventSetTriggerCategory_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics
	{
		struct TriggerRuntimeContent_eventSetTriggerCategoryByString_Parms
		{
			FString Category;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRuntimeContent_eventSetTriggerCategoryByString_Parms, Category), METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Set current category for trigger system by one string value\n\x09* \n\x09* @param Category \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* Set current category for trigger system by one string value\n*\n* @param Category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRuntimeContent, nullptr, "SetTriggerCategoryByString", nullptr, nullptr, sizeof(TriggerRuntimeContent_eventSetTriggerCategoryByString_Parms), Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerRuntimeContent_NoRegister()
	{
		return UTriggerRuntimeContent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerRuntimeContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScenerioInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenerioInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScenerioInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerRuntimeContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerRuntimeContent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_AddSceneario, "AddSceneario" }, // 2712369641
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_CanUseComponentInfo, "CanUseComponentInfo" }, // 2749819538
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_GetAllActiveScenarios, "GetAllActiveScenarios" }, // 694575665
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_GetAllOpenedScenarios, "GetAllOpenedScenarios" }, // 3395214774
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_GetOpenedScenarioInfosByPlayerController, "GetOpenedScenarioInfosByPlayerController" }, // 3457432914
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_GetScenerioInfo, "GetScenerioInfo" }, // 515317014
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_GetTriggerCategory, "GetTriggerCategory" }, // 2191029446
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_InitializeRuntimeContent, "InitializeRuntimeContent" }, // 336021836
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_OnInitializeRuntimeContent, "OnInitializeRuntimeContent" }, // 3679897629
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategory, "SetTriggerCategory" }, // 704383138
		{ &Z_Construct_UFunction_UTriggerRuntimeContent_SetTriggerCategoryByString, "SetTriggerCategoryByString" }, // 515453894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRuntimeContent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "RuntimeContent" },
		{ "Comment", "/*\n* The current runtime content for trigger system.\n* You can only access it from UTriggerManager::GetRuntimeContent, As the instanc of this class shoule only be one\n*/" },
		{ "IncludePath", "TriggerRuntimeContent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "* The current runtime content for trigger system.\n* You can only access it from UTriggerManager::GetRuntimeContent, As the instanc of this class shoule only be one" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos_Inner = { "ScenerioInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerScenarioInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos_MetaData[] = {
		{ "Category", "TriggerRuntimeContent" },
		{ "Comment", "//The scenarios which is current activating\n" },
		{ "ModuleRelativePath", "Public/TriggerRuntimeContent.h" },
		{ "ToolTip", "The scenarios which is current activating" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos = { "ScenerioInfos", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerRuntimeContent, ScenerioInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerRuntimeContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRuntimeContent_Statics::NewProp_ScenerioInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerRuntimeContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerRuntimeContent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerRuntimeContent_Statics::ClassParams = {
		&UTriggerRuntimeContent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerRuntimeContent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRuntimeContent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerRuntimeContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRuntimeContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerRuntimeContent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerRuntimeContent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerRuntimeContent, 2899195488);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerRuntimeContent>()
	{
		return UTriggerRuntimeContent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerRuntimeContent(Z_Construct_UClass_UTriggerRuntimeContent, &UTriggerRuntimeContent::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerRuntimeContent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerRuntimeContent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
