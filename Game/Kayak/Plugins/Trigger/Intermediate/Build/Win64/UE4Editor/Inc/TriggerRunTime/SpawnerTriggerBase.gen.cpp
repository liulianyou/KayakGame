// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerTriggerBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASceneTrigger_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEditSpawnRoundInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEditSigleRoundInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEditInfinityRoundInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnerDetail();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnerTemplate_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASceneTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
// End Cross Module References
	static UEnum* ETriggerCondtionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETriggerCondtionType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerCondtionType>()
	{
		return ETriggerCondtionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerCondtionType(ETriggerCondtionType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETriggerCondtionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType_Hash() { return 2661521963U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerCondtionType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerCondtionType::ETCT_Auto", (int64)ETriggerCondtionType::ETCT_Auto },
				{ "ETriggerCondtionType::ETCT_Touch", (int64)ETriggerCondtionType::ETCT_Touch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Trigger Condition Type*/" },
				{ "ETCT_Auto.DisplayName", "Auto" },
				{ "ETCT_Auto.Name", "ETriggerCondtionType::ETCT_Auto" },
				{ "ETCT_Touch.DisplayName", "Touch" },
				{ "ETCT_Touch.Name", "ETriggerCondtionType::ETCT_Touch" },
				{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
				{ "ToolTip", "Trigger Condition Type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETriggerCondtionType",
				"ETriggerCondtionType",
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
class UScriptStruct* FSpanwerTriggerNextEventInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SpanwerTriggerNextEventInfo"), sizeof(FSpanwerTriggerNextEventInfo), Get_Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSpanwerTriggerNextEventInfo>()
{
	return FSpanwerTriggerNextEventInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpanwerTriggerNextEventInfo(FSpanwerTriggerNextEventInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SpanwerTriggerNextEventInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpanwerTriggerNextEventInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpanwerTriggerNextEventInfo()
	{
		UScriptStruct::DeferCppStructOps<FSpanwerTriggerNextEventInfo>(FName(TEXT("SpanwerTriggerNextEventInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSpanwerTriggerNextEventInfo;
	struct Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeadCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpanwerTriggerNextEventInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_DeadCount_MetaData[] = {
		{ "Category", "Next" },
		{ "Comment", "//killed enemy count, then trigger next event. if 0, trigger directly.\n" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "killed enemy count, then trigger next event. if 0, trigger directly." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_DeadCount = { "DeadCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpanwerTriggerNextEventInfo, DeadCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_DeadCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_DeadCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_TargetEvent_MetaData[] = {
		{ "Category", "Next" },
		{ "Comment", "//next event.\n" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "next event." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_TargetEvent = { "TargetEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpanwerTriggerNextEventInfo, TargetEvent), Z_Construct_UClass_ASceneTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_TargetEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_TargetEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_DeadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::NewProp_TargetEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SpanwerTriggerNextEventInfo",
		sizeof(FSpanwerTriggerNextEventInfo),
		alignof(FSpanwerTriggerNextEventInfo),
		Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpanwerTriggerNextEventInfo"), sizeof(FSpanwerTriggerNextEventInfo), Get_Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo_Hash() { return 801384629U; }
class UScriptStruct* FEditSpawnRoundInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditSpawnRoundInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EditSpawnRoundInfo"), sizeof(FEditSpawnRoundInfo), Get_Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEditSpawnRoundInfo>()
{
	return FEditSpawnRoundInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditSpawnRoundInfo(FEditSpawnRoundInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EditSpawnRoundInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSpawnRoundInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSpawnRoundInfo()
	{
		UScriptStruct::DeferCppStructOps<FEditSpawnRoundInfo>(FName(TEXT("EditSpawnRoundInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSpawnRoundInfo;
	struct Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rounds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Rounds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfinityInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfinityInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfinityInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditSpawnRoundInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds_Inner = { "Rounds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditSigleRoundInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds_MetaData[] = {
		{ "Category", "RoundInfo" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds = { "Rounds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditSpawnRoundInfo, Rounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos_Inner = { "InfinityInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditInfinityRoundInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos_MetaData[] = {
		{ "Category", "RoundInfo" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos = { "InfinityInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditSpawnRoundInfo, InfinityInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_Rounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::NewProp_InfinityInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EditSpawnRoundInfo",
		sizeof(FEditSpawnRoundInfo),
		alignof(FEditSpawnRoundInfo),
		Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditSpawnRoundInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditSpawnRoundInfo"), sizeof(FEditSpawnRoundInfo), Get_Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditSpawnRoundInfo_Hash() { return 2541732634U; }
class UScriptStruct* FEditSigleRoundInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEditSigleRoundInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditSigleRoundInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EditSigleRoundInfo"), sizeof(FEditSigleRoundInfo), Get_Z_Construct_UScriptStruct_FEditSigleRoundInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEditSigleRoundInfo>()
{
	return FEditSigleRoundInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditSigleRoundInfo(FEditSigleRoundInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EditSigleRoundInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSigleRoundInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSigleRoundInfo()
	{
		UScriptStruct::DeferCppStructOps<FEditSigleRoundInfo>(FName(TEXT("EditSigleRoundInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEditSigleRoundInfo;
	struct Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnerGroup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnerGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditSigleRoundInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup_Inner = { "SpawnerGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnerDetail, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup_MetaData[] = {
		{ "Category", "RoundInfo" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup = { "SpawnerGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditSigleRoundInfo, SpawnerGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundWaitTime_MetaData[] = {
		{ "Category", "RoundInfo" },
		{ "Comment", "//When to start to spawn this group AI we will use this \n" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "When to start to spawn this group AI we will use this" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundWaitTime = { "RoundWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditSigleRoundInfo, RoundWaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundDelayTime_MetaData[] = {
		{ "Category", "RoundInfo" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundDelayTime = { "RoundDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditSigleRoundInfo, RoundDelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundDelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_SpawnerGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::NewProp_RoundDelayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EditSigleRoundInfo",
		sizeof(FEditSigleRoundInfo),
		alignof(FEditSigleRoundInfo),
		Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditSigleRoundInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditSigleRoundInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditSigleRoundInfo"), sizeof(FEditSigleRoundInfo), Get_Z_Construct_UScriptStruct_FEditSigleRoundInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditSigleRoundInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditSigleRoundInfo_Hash() { return 4151016767U; }
class UScriptStruct* FEditInfinityRoundInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditInfinityRoundInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EditInfinityRoundInfo"), sizeof(FEditInfinityRoundInfo), Get_Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEditInfinityRoundInfo>()
{
	return FEditInfinityRoundInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditInfinityRoundInfo(FEditInfinityRoundInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EditInfinityRoundInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditInfinityRoundInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEditInfinityRoundInfo()
	{
		UScriptStruct::DeferCppStructOps<FEditInfinityRoundInfo>(FName(TEXT("EditInfinityRoundInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEditInfinityRoundInfo;
	struct Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinityPool_MetaData[];
#endif
		static void NewProp_IsInfinityPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinityPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopulateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PopulateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfinityRoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InfinityRoundIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditInfinityRoundInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool_MetaData[] = {
		{ "Category", "InfinityRound" },
		{ "Comment", "/*\n\x09* Flag to check weather this round is a pool which will spawn infinity AI.\n\x09*/" },
		{ "DisplayName", "IsEnemyPool" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "* Flag to check weather this round is a pool which will spawn infinity AI." },
	};
#endif
	void Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool_SetBit(void* Obj)
	{
		((FEditInfinityRoundInfo*)Obj)->IsInfinityPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool = { "IsInfinityPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEditInfinityRoundInfo), &Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_PopulateThreshold_MetaData[] = {
		{ "Category", "InfinityRound" },
		{ "Comment", "/*\n\x09* The threshold value to populate the AI to the pool.\n    * This value should never be less then 1 which is insignificance\n\x09*/" },
		{ "DisplayName", "AdditionCount" },
		{ "EditCondition", "IsInfinityPool" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "* The threshold value to populate the AI to the pool.\n* This value should never be less then 1 which is insignificance" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_PopulateThreshold = { "PopulateThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditInfinityRoundInfo, PopulateThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_PopulateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_PopulateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_InfinityRoundIndex_MetaData[] = {
		{ "Category", "InfinityRound" },
		{ "Comment", "/*\n\x09* The target round that will be used to spawn infinite AI\n\x09*/" },
		{ "EditCondition", "IsInfinityPool" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "* The target round that will be used to spawn infinite AI" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_InfinityRoundIndex = { "InfinityRoundIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditInfinityRoundInfo, InfinityRoundIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_InfinityRoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_InfinityRoundIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_IsInfinityPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_PopulateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::NewProp_InfinityRoundIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EditInfinityRoundInfo",
		sizeof(FEditInfinityRoundInfo),
		alignof(FEditInfinityRoundInfo),
		Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditInfinityRoundInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditInfinityRoundInfo"), sizeof(FEditInfinityRoundInfo), Get_Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditInfinityRoundInfo_Hash() { return 696001430U; }
class UScriptStruct* FSpawnerDetail::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSpawnerDetail_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnerDetail, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SpawnerDetail"), sizeof(FSpawnerDetail), Get_Z_Construct_UScriptStruct_FSpawnerDetail_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSpawnerDetail>()
{
	return FSpawnerDetail::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnerDetail(FSpawnerDetail::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SpawnerDetail"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnerDetail
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnerDetail()
	{
		UScriptStruct::DeferCppStructOps<FSpawnerDetail>(FName(TEXT("SpawnerDetail")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnerDetail;
	struct Z_Construct_UScriptStruct_FSpawnerDetail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnemyGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeIntervalMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeIntervalMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeIntervalMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeIntervalMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnerDetail>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_Spawner_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, Spawner), Z_Construct_UClass_AAISpawnerTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_Spawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_EnemyGroupID_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_EnemyGroupID = { "EnemyGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, EnemyGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_EnemyGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_EnemyGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_NumberRemaining_MetaData[] = {
		{ "Category", "Spawner" },
		{ "Comment", "/* the condition to trigger next spawner, means that the left enemy number is NumberRemaining, then start the next spawner.*/" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "the condition to trigger next spawner, means that the left enemy number is NumberRemaining, then start the next spawner." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_NumberRemaining = { "NumberRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, NumberRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_NumberRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_NumberRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Spawner" },
		{ "Comment", "/*the spawner start to spawn enemy after DelayTime.*/" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "the spawner start to spawn enemy after DelayTime." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMin_MetaData[] = {
		{ "Category", "Spawner" },
		{ "Comment", "/* spawn enemy min time interval. */" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "spawn enemy min time interval." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMin = { "TimeIntervalMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, TimeIntervalMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMax_MetaData[] = {
		{ "Category", "Spawner" },
		{ "Comment", "/* spawn enemy max time interval. */" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "spawn enemy max time interval." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMax = { "TimeIntervalMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnerDetail, TimeIntervalMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnerDetail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_Spawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_EnemyGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_NumberRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnerDetail_Statics::NewProp_TimeIntervalMax,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnerDetail_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SpawnerDetail",
		sizeof(FSpawnerDetail),
		alignof(FSpawnerDetail),
		Z_Construct_UScriptStruct_FSpawnerDetail_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnerDetail_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnerDetail()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnerDetail_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnerDetail"), sizeof(FSpawnerDetail), Get_Z_Construct_UScriptStruct_FSpawnerDetail_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnerDetail_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnerDetail_Hash() { return 920057777U; }
	void ASpawnerTriggerBase::StaticRegisterNativesASpawnerTriggerBase()
	{
	}
	UClass* Z_Construct_UClass_ASpawnerTriggerBase_NoRegister()
	{
		return ASpawnerTriggerBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerTriggerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TriggerCondition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TriggerCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AI_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanRetrigger_MetaData[];
#endif
		static void NewProp_bCanRetrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanRetrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RepeatCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RepeatTaskState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatTaskState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RepeatTaskState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDetails_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundDetails;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextEventInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextEventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextEventInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastEditSpawnerArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditSpawnerArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditSpawnerArr;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastEditTargetArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditTargetArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditTargetArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerTriggerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * new trigger type, special for spawner and point, just more features for editor, compared with ASceneTrigger.\n * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E\n */" },
		{ "IncludePath", "TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "new trigger type, special for spawner and point, just more features for editor, compared with ASceneTrigger.\nsee detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition = { "TriggerCondition", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, TriggerCondition), Z_Construct_UEnum_TriggerRunTime_ETriggerCondtionType, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "TriggerCondition == ETriggerCondtionType::ETCT_Touch" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, Player), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_AI_MetaData[] = {
		{ "Category", "Condition" },
		{ "EditCondition", "TriggerCondition == ETriggerCondtionType::ETCT_Touch" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_AI = { "AI", nullptr, (EPropertyFlags)0x0014000800000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, AI), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_AI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_AI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger_MetaData[] = {
		{ "Category", "Retrigger" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	void Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger_SetBit(void* Obj)
	{
		((ASpawnerTriggerBase*)Obj)->bCanRetrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger = { "bCanRetrigger", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawnerTriggerBase), &Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatCount_MetaData[] = {
		{ "Category", "Retrigger" },
		{ "EditCondition", "bCanRetrigger" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatCount = { "RepeatCount", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, RepeatCount), METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState_MetaData[] = {
		{ "Category", "Retrigger" },
		{ "Comment", "//the task state to determine repeat times.\n" },
		{ "EditCondition", "bCanRetrigger" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ToolTip", "the task state to determine repeat times." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState = { "RepeatTaskState", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, RepeatTaskState), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RoundDetails_MetaData[] = {
		{ "Category", "RoundDetails" },
		{ "Comment", "/** to config spawner detail. */" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "to config spawner detail." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RoundDetails = { "RoundDetails", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, RoundDetails), Z_Construct_UScriptStruct_FEditSpawnRoundInfo, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RoundDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RoundDetails_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo_Inner = { "NextEventInfo", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpanwerTriggerNextEventInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo_MetaData[] = {
		{ "Category", "NextEvent" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo = { "NextEventInfo", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, NextEventInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr_Inner = { "LastEditSpawnerArr", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAISpawnerTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr = { "LastEditSpawnerArr", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, LastEditSpawnerArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr_Inner = { "LastEditTargetArr", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASceneTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr = { "LastEditTargetArr", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnerTriggerBase, LastEditTargetArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnerTriggerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_TriggerCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_AI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_bCanRetrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RepeatTaskState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_RoundDetails,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_NextEventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditSpawnerArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnerTriggerBase_Statics::NewProp_LastEditTargetArr,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerTriggerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerTriggerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerTriggerBase_Statics::ClassParams = {
		&ASpawnerTriggerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ASpawnerTriggerBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerTriggerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnerTriggerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnerTriggerBase, 3391124727);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ASpawnerTriggerBase>()
	{
		return ASpawnerTriggerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnerTriggerBase(Z_Construct_UClass_ASpawnerTriggerBase, &ASpawnerTriggerBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ASpawnerTriggerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerTriggerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
