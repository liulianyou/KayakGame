// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGameConfigBase;
#ifdef TRIGGERRUNTIME_SaveGameStrategyBase_generated_h
#error "SaveGameStrategyBase.generated.h already included, missing '#pragma once' in SaveGameStrategyBase.h"
#endif
#define TRIGGERRUNTIME_SaveGameStrategyBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_12_DELEGATE \
struct _Script_TriggerRunTime_eventOnSaveGameDelegate_Parms \
{ \
	USaveGameConfigBase* ConfigData; \
}; \
static inline void FOnSaveGameDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSaveGameDelegate, USaveGameConfigBase* ConfigData) \
{ \
	_Script_TriggerRunTime_eventOnSaveGameDelegate_Parms Parms; \
	Parms.ConfigData=ConfigData; \
	OnSaveGameDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPostSaveGameDeSerialalize); \
	DECLARE_FUNCTION(execSaveGameDeSerialize); \
	DECLARE_FUNCTION(execPreSaveGameDeSerialize); \
	DECLARE_FUNCTION(execSaveGameSerialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPostSaveGameDeSerialalize); \
	DECLARE_FUNCTION(execSaveGameDeSerialize); \
	DECLARE_FUNCTION(execPreSaveGameDeSerialize); \
	DECLARE_FUNCTION(execSaveGameSerialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_EVENT_PARMS \
	struct SaveGameStrategyBase_eventOnLoadGame_Parms \
	{ \
		USaveGameConfigBase* SaveConfigData; \
	}; \
	struct SaveGameStrategyBase_eventOnPostLoadGame_Parms \
	{ \
		USaveGameConfigBase* SaveConfigData; \
	}; \
	struct SaveGameStrategyBase_eventOnPreLoadGame_Parms \
	{ \
		USaveGameConfigBase* SaveConfigData; \
	}; \
	struct SaveGameStrategyBase_eventOnSaveGame_Parms \
	{ \
		USaveGameConfigBase* SaveConfigData; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveGameStrategyBase(); \
	friend struct Z_Construct_UClass_USaveGameStrategyBase_Statics; \
public: \
	DECLARE_CLASS(USaveGameStrategyBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(USaveGameStrategyBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSaveGameStrategyBase(); \
	friend struct Z_Construct_UClass_USaveGameStrategyBase_Statics; \
public: \
	DECLARE_CLASS(USaveGameStrategyBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(USaveGameStrategyBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameStrategyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameStrategyBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameStrategyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameStrategyBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameStrategyBase(USaveGameStrategyBase&&); \
	NO_API USaveGameStrategyBase(const USaveGameStrategyBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveGameStrategyBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveGameStrategyBase(USaveGameStrategyBase&&); \
	NO_API USaveGameStrategyBase(const USaveGameStrategyBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveGameStrategyBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameStrategyBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameStrategyBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_14_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SaveGameStrategyBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class USaveGameStrategyBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_SaveGameStrategy_SaveGameStrategyBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
