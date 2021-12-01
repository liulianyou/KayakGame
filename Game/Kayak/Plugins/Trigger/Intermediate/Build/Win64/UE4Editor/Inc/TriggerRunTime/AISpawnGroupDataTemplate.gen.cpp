// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnGroupDataTemplate() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnGroupDataTemplate_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnGroupDataTemplate();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEditorActorBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAISpawnGroupDataTemplate::execOnAISpawnGroupDataTempleteAddedToWorld)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISpawnGroupDataTempleteAddedToWorld(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAISpawnGroupDataTemplate::execOnAIPreviewCharacterDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAIPreviewCharacterDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	void AAISpawnGroupDataTemplate::StaticRegisterNativesAAISpawnGroupDataTemplate()
	{
		UClass* Class = AAISpawnGroupDataTemplate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAIPreviewCharacterDestroyed", &AAISpawnGroupDataTemplate::execOnAIPreviewCharacterDestroyed },
			{ "OnAISpawnGroupDataTempleteAddedToWorld", &AAISpawnGroupDataTemplate::execOnAISpawnGroupDataTempleteAddedToWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics
	{
		struct AISpawnGroupDataTemplate_eventOnAIPreviewCharacterDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnGroupDataTemplate_eventOnAIPreviewCharacterDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawnGroupDataTemplate, nullptr, "OnAIPreviewCharacterDestroyed", nullptr, nullptr, sizeof(AISpawnGroupDataTemplate_eventOnAIPreviewCharacterDestroyed_Parms), Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics
	{
		struct AISpawnGroupDataTemplate_eventOnAISpawnGroupDataTempleteAddedToWorld_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnGroupDataTemplate_eventOnAISpawnGroupDataTempleteAddedToWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback function when this actor added to world\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "Callback function when this actor added to world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAISpawnGroupDataTemplate, nullptr, "OnAISpawnGroupDataTempleteAddedToWorld", nullptr, nullptr, sizeof(AISpawnGroupDataTemplate_eventOnAISpawnGroupDataTempleteAddedToWorld_Parms), Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAISpawnGroupDataTemplate_NoRegister()
	{
		return AAISpawnGroupDataTemplate::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewCharacters;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PosintsOffsetTransform_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosintsOffsetTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PosintsOffsetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoftObjectPath_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftObjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoftObjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GroupIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerEditorActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAIPreviewCharacterDestroyed, "OnAIPreviewCharacterDestroyed" }, // 2311115209
		{ &Z_Construct_UFunction_AAISpawnGroupDataTemplate_OnAISpawnGroupDataTempleteAddedToWorld, "OnAISpawnGroupDataTempleteAddedToWorld" }, // 3038758447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Activation Components|Activation Actor Tick Replication Rendering Collision Input Actor Cooking LOD" },
		{ "IncludePath", "Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters_Inner = { "PreviewCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAIPreviewCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters_MetaData[] = {
		{ "Comment", "/*\n\x09* AI PreivewCharacter should always correspond to this Actor, when we add this actor form browser to world\n\x09* the components in this actor will always created new by duplicating\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "* AI PreivewCharacter should always correspond to this Actor, when we add this actor form browser to world\n* the components in this actor will always created new by duplicating" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters = { "PreviewCharacters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, PreviewCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform_Inner = { "PosintsOffsetTransform", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform_MetaData[] = {
		{ "Comment", "//The offset transform between the preview character and the AISpawnPointComponent offset\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "The offset transform between the preview character and the AISpawnPointComponent offset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform = { "PosintsOffsetTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, PosintsOffsetTransform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "Category", "AISpawnGroupDataTemplate" },
		{ "Comment", "//I will use this component to show the relation ship between the other Actor and this Character in editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "I will use this component to show the relation ship between the other Actor and this Character in editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RelationShipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SpriteComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath_Inner = { "SoftObjectPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath = { "SoftObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, SoftObjectPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_TargetOwner_MetaData[] = {
		{ "Comment", "//The owner who start to create this Actor to world\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "The owner who start to create this Actor to world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_TargetOwner = { "TargetOwner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, TargetOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_TargetOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_TargetOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Comment", "//I will use the below two member variables to identify the specific data in the AI spawn data\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
		{ "ToolTip", "I will use the below two member variables to identify the specific data in the AI spawn data" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, RoundIndex), METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/AI/AISpawnGroupDataTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnGroupDataTemplate, GroupIndex), METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_GroupIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PreviewCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_PosintsOffsetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RelationShipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SpriteComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_SoftObjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_TargetOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::NewProp_GroupIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawnGroupDataTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::ClassParams = {
		&AAISpawnGroupDataTemplate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISpawnGroupDataTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAISpawnGroupDataTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAISpawnGroupDataTemplate, 3360214920);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<AAISpawnGroupDataTemplate>()
	{
		return AAISpawnGroupDataTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAISpawnGroupDataTemplate(Z_Construct_UClass_AAISpawnGroupDataTemplate, &AAISpawnGroupDataTemplate::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("AAISpawnGroupDataTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawnGroupDataTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
