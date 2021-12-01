// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/AI/AISpawnPointComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnPointComponent() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnPointComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnPointComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnBehaviorCommand();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
// End Cross Module References
	void UAISpawnPointComponent::StaticRegisterNativesUAISpawnPointComponent()
	{
	}
	UClass* Z_Construct_UClass_UAISpawnPointComponent_NoRegister()
	{
		return UAISpawnPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAISpawnPointComponent_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISpawnPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "//Editor used only for the place hold of the AI spawn point\n" },
		{ "HideCategories", "Sockets Physics Variable Collision Lighting Rendering VirtualTexture Tags Component Replication Cooking Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "Editor used only for the place hold of the AI spawn point" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_NPCID_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The preferred type AI that want to spawn here\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "The preferred type AI that want to spawn here" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, NPCID), METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_NPCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_NPCID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_AICommand_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//After the AI spawned we should make it do something immediately\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "After the AI spawned we should make it do something immediately" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_AICommand = { "AICommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, AICommand), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_AICommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_AICommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When current AI spawned at runtime, how much time should be delayed to spawn new AI\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "When current AI spawned at runtime, how much time should be delayed to spawn new AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, DelayTime), METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When the last AI have been spawned how much time should be waited to spawn current AI\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "When the last AI have been spawned how much time should be waited to spawn current AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, WaitTime), METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The Index for this AI spawn point in the chain of the components\n\x09* we can't accord to the default order in the GetComponentByClass or any similar function\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
		{ "ToolTip", "* The Index for this AI spawn point in the chain of the components\n* we can't accord to the default order in the GetComponentByClass or any similar function" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, Index), METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_PreviewCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnPointComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_PreviewCharacter = { "PreviewCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnPointComponent, PreviewCharacter), Z_Construct_UClass_AAIPreviewCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_PreviewCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_PreviewCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISpawnPointComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_NPCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_AICommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnPointComponent_Statics::NewProp_PreviewCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISpawnPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISpawnPointComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISpawnPointComponent_Statics::ClassParams = {
		&UAISpawnPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISpawnPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISpawnPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISpawnPointComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISpawnPointComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISpawnPointComponent, 3116863163);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAISpawnPointComponent>()
	{
		return UAISpawnPointComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISpawnPointComponent(Z_Construct_UClass_UAISpawnPointComponent, &UAISpawnPointComponent::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAISpawnPointComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISpawnPointComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
