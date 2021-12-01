// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerConfig() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerConfig_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerConfig();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UTriggerConfig::StaticRegisterNativesUTriggerConfig()
	{
	}
	UClass* Z_Construct_UClass_UTriggerConfig_NoRegister()
	{
		return UTriggerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIStaticsClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIStaticsClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSaveSystemHeadInfoClassPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerSaveSystemHeadInfoClassPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveDifficulties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveDifficulties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Difficulties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RootTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanDivideComponentToAnotherMap_MetaData[];
#endif
		static void NewProp_CanDivideComponentToAnotherMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanDivideComponentToAnotherMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TriggerSystemInfoClassMap_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TriggerSystemInfoClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerSystemInfoClassMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TriggerSystemInfoClassMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTriggerSystemInfoClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultTriggerSystemInfoClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefalutTriggerEventRewardManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefalutTriggerEventRewardManagerClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCharacterPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewCharacterPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorDefaultStartTriggerCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditorDefaultStartTriggerCategories;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Trigger Config" },
		{ "IncludePath", "TriggerConfig.h" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_AIStaticsClassPath_MetaData[] = {
		{ "Category", "Runtime|AI" },
		{ "MetaClass", "TriggerStaticsBase" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_AIStaticsClassPath = { "AIStaticsClassPath", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, AIStaticsClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_AIStaticsClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_AIStaticsClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSaveSystemHeadInfoClassPath_MetaData[] = {
		{ "Category", "Runtime|SaveGame" },
		{ "MetaClass", "SaveGameSystemInfoBase" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSaveSystemHeadInfoClassPath = { "TriggerSaveSystemHeadInfoClassPath", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, TriggerSaveSystemHeadInfoClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSaveSystemHeadInfoClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSaveSystemHeadInfoClassPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_ActiveDifficulties_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "//The difficulties that this game should support for trigger at running time. it should as part of the Difficulties\n" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "The difficulties that this game should support for trigger at running time. it should as part of the Difficulties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_ActiveDifficulties = { "ActiveDifficulties", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, ActiveDifficulties), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_ActiveDifficulties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_ActiveDifficulties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_Difficulties_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "//The all difficulties in this trigger system.This value should only be increased. If you add any new difficulty please do not remove it, or this will cause error. \n" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "The all difficulties in this trigger system.This value should only be increased. If you add any new difficulty please do not remove it, or this will cause error." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_Difficulties = { "Difficulties", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, Difficulties), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_Difficulties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_Difficulties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_RootTag_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "//The root tag which should be used by all tags in the trigger category\n" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "The root tag which should be used by all tags in the trigger category" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_RootTag = { "RootTag", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, RootTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_RootTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_RootTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "/*\n\x09* Flag to check weather the game can divide the component according the categories to another single map.\n\x09* Such as the Hard, normal, easy difficulty can be confined in one trigger persistent map by the designer at editor mode.\n\x09* but when at running mode, each difficulty should load the corresponding level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "* Flag to check weather the game can divide the component according the categories to another single map.\n* Such as the Hard, normal, easy difficulty can be confined in one trigger persistent map by the designer at editor mode.\n* but when at running mode, each difficulty should load the corresponding level." },
	};
#endif
	void Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap_SetBit(void* Obj)
	{
		((UTriggerConfig*)Obj)->CanDivideComponentToAnotherMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap = { "CanDivideComponentToAnotherMap", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerConfig), &Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_ValueProp = { "TriggerSystemInfoClassMap", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_Key_KeyProp = { "TriggerSystemInfoClassMap_Key", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "/*\n\x09* The class to hold the information for trigger system.\n\x09* We can use this system to do some replication for the public information of trigger event system just like game mode state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "* The class to hold the information for trigger system.\n* We can use this system to do some replication for the public information of trigger event system just like game mode state." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap = { "TriggerSystemInfoClassMap", nullptr, (EPropertyFlags)0x0014000000004015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, TriggerSystemInfoClassMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefaultTriggerSystemInfoClass_MetaData[] = {
		{ "Category", "Runtime|Category" },
		{ "Comment", "//When the target game mode have not set the event info class then will decay to use this default class\n" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "When the target game mode have not set the event info class then will decay to use this default class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefaultTriggerSystemInfoClass = { "DefaultTriggerSystemInfoClass", nullptr, (EPropertyFlags)0x0014000000004015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, DefaultTriggerSystemInfoClass), Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefaultTriggerSystemInfoClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefaultTriggerSystemInfoClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefalutTriggerEventRewardManagerClass_MetaData[] = {
		{ "Category", "Runtime|Reward" },
		{ "Comment", "//The default reward manager to operate the reward which is created by the trigger task\n" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "The default reward manager to operate the reward which is created by the trigger task" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefalutTriggerEventRewardManagerClass = { "DefalutTriggerEventRewardManagerClass", nullptr, (EPropertyFlags)0x0014000000004015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, DefalutTriggerEventRewardManagerClass), Z_Construct_UClass_UTriggerEventRewardManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefalutTriggerEventRewardManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefalutTriggerEventRewardManagerClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_PreviewCharacterPath_MetaData[] = {
		{ "Category", "Editor|AI" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_PreviewCharacterPath = { "PreviewCharacterPath", nullptr, (EPropertyFlags)0x0010000800004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, PreviewCharacterPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_PreviewCharacterPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_PreviewCharacterPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerConfig_Statics::NewProp_EditorDefaultStartTriggerCategories_MetaData[] = {
		{ "Category", "Editor|Category" },
		{ "Comment", "/*\n\x09* The start categories applied to the trigger system when we play at the editor.\n\x09* It is default category which can be changed by any other ways\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerConfig.h" },
		{ "ToolTip", "* The start categories applied to the trigger system when we play at the editor.\n* It is default category which can be changed by any other ways" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerConfig_Statics::NewProp_EditorDefaultStartTriggerCategories = { "EditorDefaultStartTriggerCategories", nullptr, (EPropertyFlags)0x0010000800004015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerConfig, EditorDefaultStartTriggerCategories), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_EditorDefaultStartTriggerCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::NewProp_EditorDefaultStartTriggerCategories_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_AIStaticsClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSaveSystemHeadInfoClassPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_ActiveDifficulties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_Difficulties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_RootTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_CanDivideComponentToAnotherMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_TriggerSystemInfoClassMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefaultTriggerSystemInfoClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_DefalutTriggerEventRewardManagerClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_PreviewCharacterPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerConfig_Statics::NewProp_EditorDefaultStartTriggerCategories,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerConfig_Statics::ClassParams = {
		&UTriggerConfig::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerConfig, 4089489248);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerConfig>()
	{
		return UTriggerConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerConfig(Z_Construct_UClass_UTriggerConfig, &UTriggerConfig::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
