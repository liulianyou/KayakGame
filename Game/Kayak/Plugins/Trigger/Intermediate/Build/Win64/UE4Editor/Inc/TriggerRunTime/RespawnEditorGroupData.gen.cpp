// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnEditorGroupData() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorGroupData_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorGroupData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FRespawnEditorGroupDataMapInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RespawnEditorGroupDataMapInfo"), sizeof(FRespawnEditorGroupDataMapInfo), Get_Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRespawnEditorGroupDataMapInfo>()
{
	return FRespawnEditorGroupDataMapInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRespawnEditorGroupDataMapInfo(FRespawnEditorGroupDataMapInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RespawnEditorGroupDataMapInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnEditorGroupDataMapInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnEditorGroupDataMapInfo()
	{
		UScriptStruct::DeferCppStructOps<FRespawnEditorGroupDataMapInfo>(FName(TEXT("RespawnEditorGroupDataMapInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnEditorGroupDataMapInfo;
	struct Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateNewPointAutomatically_MetaData[];
#endif
		static void NewProp_CreateNewPointAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewPointAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnEditorGroupDataMapInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RuntimeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RuntimeData = { "RuntimeData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnEditorGroupDataMapInfo, RuntimeData), Z_Construct_UClass_URespawnDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RuntimeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RuntimeData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "RespawnEditorGroupDataMapInfo" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnEditorGroupDataMapInfo, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints_Inner = { "EditorPoints", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARespawnEditorPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints_MetaData[] = {
		{ "Category", "RespawnEditorGroupDataMapInfo" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints = { "EditorPoints", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnEditorGroupDataMapInfo, EditorPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnEditorGroupDataMapInfo, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RelationShipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically_MetaData[] = {
		{ "Category", "RespawnEditorGroupDataMapInfo" },
		{ "Comment", "/*\n\x09* Flag to check weather to add new point when the number of data in respawn data is more then editor points\n\x09*\n\x09* If this data don't hold enough point to stand for the respawn data then I will use this flag to check weather to create new point\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
		{ "ToolTip", "* Flag to check weather to add new point when the number of data in respawn data is more then editor points\n*\n* If this data don't hold enough point to stand for the respawn data then I will use this flag to check weather to create new point" },
	};
#endif
	void Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically_SetBit(void* Obj)
	{
		((FRespawnEditorGroupDataMapInfo*)Obj)->CreateNewPointAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically = { "CreateNewPointAutomatically", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRespawnEditorGroupDataMapInfo), &Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnEditorGroupDataMapInfo, EditorData), Z_Construct_UClass_ARespawnEditorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RuntimeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_GroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_RelationShipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_CreateNewPointAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::NewProp_EditorData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RespawnEditorGroupDataMapInfo",
		sizeof(FRespawnEditorGroupDataMapInfo),
		alignof(FRespawnEditorGroupDataMapInfo),
		Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RespawnEditorGroupDataMapInfo"), sizeof(FRespawnEditorGroupDataMapInfo), Get_Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo_Hash() { return 3364615985U; }
	void ARespawnEditorGroupData::StaticRegisterNativesARespawnEditorGroupData()
	{
	}
	UClass* Z_Construct_UClass_ARespawnEditorGroupData_NoRegister()
	{
		return ARespawnEditorGroupData::StaticClass();
	}
	struct Z_Construct_UClass_ARespawnEditorGroupData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapInfos;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARespawnEditorGroupData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARespawnEditorDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorGroupData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerEditor" },
		{ "IncludePath", "Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos_Inner = { "MapInfos", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRespawnEditorGroupDataMapInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos_MetaData[] = {
		{ "Category", "TrigerEditor|RespawnData" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos = { "MapInfos", nullptr, (EPropertyFlags)0x0010008000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnEditorGroupData, MapInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnEditorGroupData, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARespawnEditorGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_MapInfos,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorGroupData_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARespawnEditorGroupData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnEditorGroupData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARespawnEditorGroupData_Statics::ClassParams = {
		&ARespawnEditorGroupData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARespawnEditorGroupData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorGroupData_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorGroupData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorGroupData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARespawnEditorGroupData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARespawnEditorGroupData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARespawnEditorGroupData, 3782680767);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ARespawnEditorGroupData>()
	{
		return ARespawnEditorGroupData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARespawnEditorGroupData(Z_Construct_UClass_ARespawnEditorGroupData, &ARespawnEditorGroupData::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ARespawnEditorGroupData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnEditorGroupData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
