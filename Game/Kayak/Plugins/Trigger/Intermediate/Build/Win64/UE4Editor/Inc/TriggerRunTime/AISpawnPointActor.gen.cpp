// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/AISpawnPointActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnPointActor() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnPointActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnPointActor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEditorActorBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnerTemplate_NoRegister();
// End Cross Module References
	void AAISpawnPointActor::StaticRegisterNativesAAISpawnPointActor()
	{
	}
	UClass* Z_Construct_UClass_AAISpawnPointActor_NoRegister()
	{
		return AAISpawnPointActor::StaticClass();
	}
	struct Z_Construct_UClass_AAISpawnPointActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnMontages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnMontages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnMontages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetAllPlayerToAIThreat_MetaData[];
#endif
		static void NewProp_bSetAllPlayerToAIThreat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetAllPlayerToAIThreat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMeshLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMeshRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRelativeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextRelativeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextRenderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextWorldSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextWorldSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCapsuleComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnerAndCountMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnerAndCountMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerAndCountMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SpawnerAndCountMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISpawnPointActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerEditorActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * the spawn point, show like PreviewCharacter.\n * and data about spawn,will be set to AGaiaAIPreviewCharacter.\n * see detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E\n */" },
		{ "IncludePath", "Tool/AISpawnPointActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "the spawn point, show like PreviewCharacter.\nand data about spawn,will be set to AGaiaAIPreviewCharacter.\nsee detail at https://ztgame.feishu.cn/docs/doccnMJqEX3JNtkgkUzicSfcS8E" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages_Inner = { "SpawnMontages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages = { "SpawnMontages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, SpawnMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat_MetaData[] = {
		{ "Category", "SpawnPoint" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	void Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat_SetBit(void* Obj)
	{
		((AAISpawnPointActor*)Obj)->bSetAllPlayerToAIThreat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat = { "bSetAllPlayerToAIThreat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAISpawnPointActor), &Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshLocation_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshLocation = { "PreviewMeshLocation", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewMeshLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshRotation_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshRotation = { "PreviewMeshRotation", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewMeshRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRelativeHeight_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRelativeHeight = { "TextRelativeHeight", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, TextRelativeHeight), METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRelativeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRelativeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Text font */" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "Text font" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Color of the text, can be accessed as vertex color */" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "Color of the text, can be accessed as vertex color" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRenderColor = { "TextRenderColor", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, TextRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRenderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextWorldSize_MetaData[] = {
		{ "Category", "Preview" },
		{ "Comment", "/** Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size. */" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextWorldSize = { "TextWorldSize", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, TextWorldSize), METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextWorldSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextComponent_MetaData[] = {
		{ "Category", "AISpawnPointActor" },
		{ "Comment", "//show index in spawner.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "show index in spawner." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshComponent = { "PreviewMeshComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewCapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "The CapsuleComponent being used for movement collision (by CharacterMovement). Always treated as being vertically aligned in simple collision check functions." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewCapsuleComponent = { "PreviewCapsuleComponent", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewCapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewCapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewCapsuleComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewArrowComponent_MetaData[] = {
		{ "Comment", "/** Component shown in the editor only to indicate character facing */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "Component shown in the editor only to indicate character facing" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewArrowComponent = { "PreviewArrowComponent", nullptr, (EPropertyFlags)0x0020080800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, PreviewArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_RelationShipLine_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_ValueProp = { "SpawnerAndCountMap", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_Key_KeyProp = { "SpawnerAndCountMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAISpawnerTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_MetaData[] = {
		{ "Category", "UsedInSpawner" },
		{ "Comment", "//to store triggers which use the spawner, the value is the use times.\n" },
		{ "DisplayName", "Spawner And Reference Count" },
		{ "ModuleRelativePath", "Public/Tool/AISpawnPointActor.h" },
		{ "ToolTip", "to store triggers which use the spawner, the value is the use times." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap = { "SpawnerAndCountMap", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAISpawnPointActor, SpawnerAndCountMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAISpawnPointActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnMontages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_bSetAllPlayerToAIThreat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRelativeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_Font,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextRenderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextWorldSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_TextComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewCapsuleComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_PreviewArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_RelationShipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAISpawnPointActor_Statics::NewProp_SpawnerAndCountMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISpawnPointActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISpawnPointActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAISpawnPointActor_Statics::ClassParams = {
		&AAISpawnPointActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAISpawnPointActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAISpawnPointActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAISpawnPointActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISpawnPointActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAISpawnPointActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAISpawnPointActor, 4290189215);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<AAISpawnPointActor>()
	{
		return AAISpawnPointActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAISpawnPointActor(Z_Construct_UClass_AAISpawnPointActor, &AAISpawnPointActor::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("AAISpawnPointActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISpawnPointActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
