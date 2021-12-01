// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionDefinition() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EActorLayer();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EInteractionType();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EActorLayer_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EActorLayer, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EActorLayer"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EActorLayer>()
	{
		return EActorLayer_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActorLayer(EActorLayer_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EActorLayer"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EActorLayer_Hash() { return 977298807U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EActorLayer()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActorLayer"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EActorLayer_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActorLayer::EActorLayer_Insignator", (int64)EActorLayer::EActorLayer_Insignator },
				{ "EActorLayer::EActorLayer_DefaultSlot", (int64)EActorLayer::EActorLayer_DefaultSlot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The layer for different actors\n*/" },
				{ "EActorLayer_DefaultSlot.DispalyName", "Default Slot" },
				{ "EActorLayer_DefaultSlot.Name", "EActorLayer::EActorLayer_DefaultSlot" },
				{ "EActorLayer_Insignator.DisplayName", "Insignator" },
				{ "EActorLayer_Insignator.Name", "EActorLayer::EActorLayer_Insignator" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
				{ "ToolTip", "* The layer for different actors" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EActorLayer",
				"EActorLayer",
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
	static UEnum* EInteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EInteractionType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EInteractionType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EInteractionType>()
	{
		return EInteractionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionType(EInteractionType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EInteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EInteractionType_Hash() { return 228971569U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EInteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EInteractionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionType::EInteractionType_Blood", (int64)EInteractionType::EInteractionType_Blood },
				{ "EInteractionType::EInteractionType_Armor", (int64)EInteractionType::EInteractionType_Armor },
				{ "EInteractionType::EInteractionType_Bullet", (int64)EInteractionType::EInteractionType_Bullet },
				{ "EInteractionType::EInteractionType_Grenade", (int64)EInteractionType::EInteractionType_Grenade },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* This should can be changed by the config value for customize\n*/" },
				{ "EInteractionType_Armor.DisplayName", "Armor" },
				{ "EInteractionType_Armor.Name", "EInteractionType::EInteractionType_Armor" },
				{ "EInteractionType_Blood.DisplayName", "Blood" },
				{ "EInteractionType_Blood.Name", "EInteractionType::EInteractionType_Blood" },
				{ "EInteractionType_Bullet.DisplayName", "Bullet" },
				{ "EInteractionType_Bullet.Name", "EInteractionType::EInteractionType_Bullet" },
				{ "EInteractionType_Grenade.DisplayName", "Grenade" },
				{ "EInteractionType_Grenade.Name", "EInteractionType::EInteractionType_Grenade" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
				{ "ToolTip", "* This should can be changed by the config value for customize" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EInteractionType",
				"EInteractionType",
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
class UScriptStruct* FInteractionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FInteractionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("InteractionInfo"), sizeof(FInteractionInfo), Get_Z_Construct_UScriptStruct_FInteractionInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FInteractionInfo>()
{
	return FInteractionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionInfo(FInteractionInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("InteractionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionInfo()
	{
		UScriptStruct::DeferCppStructOps<FInteractionInfo>(FName(TEXT("InteractionInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionInfo;
	struct Z_Construct_UScriptStruct_FInteractionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "InteractionInfo" },
		{ "Comment", "//The actor who rise up this interaction task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
		{ "ToolTip", "The actor who rise up this interaction task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer_MetaData[] = {
		{ "Category", "InteractionInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionInfo, Layer), Z_Construct_UEnum_TriggerRunTime_EActorLayer, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_InteractStage_MetaData[] = {
		{ "Category", "InteractionInfo" },
		{ "Comment", "//Which stage in the interaction info\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionDefinition.h" },
		{ "ToolTip", "Which stage in the interaction info" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_InteractStage = { "InteractStage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionInfo, InteractStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_InteractStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_InteractStage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionInfo_Statics::NewProp_InteractStage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"InteractionInfo",
		sizeof(FInteractionInfo),
		alignof(FInteractionInfo),
		Z_Construct_UScriptStruct_FInteractionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionInfo"), sizeof(FInteractionInfo), Get_Z_Construct_UScriptStruct_FInteractionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionInfo_Hash() { return 915502790U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
