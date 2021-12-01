// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/AI/AIPreviewCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPreviewCharacter() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnBehaviorCommand();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FPreviewInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPreviewInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PreviewInfo"), sizeof(FPreviewInfo), Get_Z_Construct_UScriptStruct_FPreviewInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPreviewInfo>()
{
	return FPreviewInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPreviewInfo(FPreviewInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PreviewInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPreviewInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPreviewInfo()
	{
		UScriptStruct::DeferCppStructOps<FPreviewInfo>(FName(TEXT("PreviewInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPreviewInfo;
	struct Z_Construct_UScriptStruct_FPreviewInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PawnIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewInfo, RoundIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewInfo, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_PawnIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_PawnIndex = { "PawnIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPreviewInfo, PawnIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_PawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_PawnIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_GroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewInfo_Statics::NewProp_PawnIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PreviewInfo",
		sizeof(FPreviewInfo),
		alignof(FPreviewInfo),
		Z_Construct_UScriptStruct_FPreviewInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPreviewInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PreviewInfo"), sizeof(FPreviewInfo), Get_Z_Construct_UScriptStruct_FPreviewInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPreviewInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPreviewInfo_Hash() { return 1330630030U; }
	void AAIPreviewCharacter::StaticRegisterNativesAAIPreviewCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister()
	{
		return AAIPreviewCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAIPreviewCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIClassType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIClassType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AICommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PawnIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPreviewCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Physics Collision Lighting Rendering Virtual Texture Skin Weights Tags Activation Cooking Clothing Navigation" },
		{ "IncludePath", "Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_NPCID_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The identification for the NPC which will used to read resource form the excel file\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "The identification for the NPC which will used to read resource form the excel file" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, NPCID), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_NPCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_NPCID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AIClassType_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The AI class type \n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "The AI class type" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AIClassType = { "AIClassType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, AIClassType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AIClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AIClassType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AICommand_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//After the AI spawned we should make it do something immediately\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "After the AI spawned we should make it do something immediately" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AICommand = { "AICommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, AICommand), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AICommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AICommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When current AI spawned at runtime, how much time should be delayed to spawn new AI\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "When current AI spawned at runtime, how much time should be delayed to spawn new AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, DelayTime), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When the last AI have been spawned how much time should be waited to spawn current AI\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "When the last AI have been spawned how much time should be waited to spawn current AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, WaitTime), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, RoundIndex), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, GroupIndex), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_PawnIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_PawnIndex = { "PawnIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, PawnIndex), METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_PawnIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_PawnIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "Category", "AIPreviewCharacter" },
		{ "Comment", "//I will use this component to show the relation ship between the other Actor and this Character in editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AIPreviewCharacter.h" },
		{ "ToolTip", "I will use this component to show the relation ship between the other Actor and this Character in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPreviewCharacter, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RelationShipLine_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPreviewCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_NPCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AIClassType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_AICommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_GroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_PawnIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPreviewCharacter_Statics::NewProp_RelationShipLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPreviewCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPreviewCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPreviewCharacter_Statics::ClassParams = {
		&AAIPreviewCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPreviewCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::PropPointers),
		0,
		0x049000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPreviewCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPreviewCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPreviewCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPreviewCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPreviewCharacter, 531082120);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<AAIPreviewCharacter>()
	{
		return AAIPreviewCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPreviewCharacter(Z_Construct_UClass_AAIPreviewCharacter, &AAIPreviewCharacter::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("AAIPreviewCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPreviewCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
