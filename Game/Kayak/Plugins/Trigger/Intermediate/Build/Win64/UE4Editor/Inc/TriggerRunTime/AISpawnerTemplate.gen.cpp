// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/AISpawnerTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnerTemplate() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPointActor();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnPointActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnerTemplate_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnerTemplate();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEditorActorBase();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBase_NoRegister();
// End Cross Module References
class UScriptStruct* FPointActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPointActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointActor, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PointActor"), sizeof(FPointActor), Get_Z_Construct_UScriptStruct_FPointActor_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPointActor>()
{
	return FPointActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointActor(FPointActor::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PointActor"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPointActor
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPointActor()
	{
		UScriptStruct::DeferCppStructOps<FPointActor>(FName(TEXT("PointActor")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPointActor;
	struct Z_Construct_UScriptStruct_FPointActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnMontages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnMontages;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_Point_MetaData[] = {
		{ "Category", "PointActor" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointActor, Point), Z_Construct_UClass_AAISpawnPointActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages_Inner = { "SpawnMontages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages_MetaData[] = {
		{ "Category", "PointActor" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages = { "SpawnMontages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointActor, SpawnMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointActor_Statics::NewProp_SpawnMontages,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PointActor",
		sizeof(FPointActor),
		alignof(FPointActor),
		Z_Construct_UScriptStruct_FPointActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointActor"), sizeof(FPointActor), Get_Z_Construct_UScriptStruct_FPointActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointActor_Hash() { return 550694365U; }
	void AAISpawnerTemplate::StaticRegisterNativesAAISpawnerTemplate()
	{
	}
	UClass* Z_Construct_UClass_AAISpawnerTemplate_NoRegister()
	{
		return AAISpawnerTemplate::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawnerTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnPointsGroup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPointsGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPointsGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TriggerAndCountMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerAndCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerAndCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TriggerAndCountMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastEditPointArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEditPointArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LastEditPointArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawnerTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerEditorActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * the spawner is different with parent class. it can add point dynamically. and different spawner maybe have same point.\n * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E\n */" },
		{ "IncludePath", "Tool/AISpawnerTemplate.h" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
		{ "ToolTip", "the spawner is different with parent class. it can add point dynamically. and different spawner maybe have same point.\nsee detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup_Inner = { "SpawnPointsGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPointActor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup_MetaData[] = {
		{ "Category", "SpawnPointsGroup" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup = { "SpawnPointsGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnerTemplate, SpawnPointsGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "Comment", "//use this component to show the relation ship between the other spawner and trigger in editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
		{ "ToolTip", "use this component to show the relation ship between the other spawner and trigger in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnerTemplate, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_RelationShipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnerTemplate, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpriteComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_ValueProp = { "TriggerAndCountMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_Key_KeyProp = { "TriggerAndCountMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASpawnerTriggerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_MetaData[] = {
		{ "Category", "UsedInTrigger" },
		{ "Comment", "//to store triggers which use the spawner, the value is the use times.\n" },
		{ "DisplayName", "Trigger And Reference Count" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
		{ "ToolTip", "to store triggers which use the spawner, the value is the use times." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap = { "TriggerAndCountMap", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnerTemplate, TriggerAndCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr_Inner = { "LastEditPointArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAISpawnPointActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/AISpawnerTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr = { "LastEditPointArr", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnerTemplate, LastEditPointArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawnerTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpawnPointsGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_RelationShipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_TriggerAndCountMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnerTemplate_Statics::NewProp_LastEditPointArr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawnerTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawnerTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAISpawnerTemplate_Statics::ClassParams = {
		&AAISpawnerTemplate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAISpawnerTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAISpawnerTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnerTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISpawnerTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAISpawnerTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAISpawnerTemplate, 1481857050);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<AAISpawnerTemplate>()
	{
		return AAISpawnerTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAISpawnerTemplate(Z_Construct_UClass_AAISpawnerTemplate, &AAISpawnerTemplate::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("AAISpawnerTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawnerTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
