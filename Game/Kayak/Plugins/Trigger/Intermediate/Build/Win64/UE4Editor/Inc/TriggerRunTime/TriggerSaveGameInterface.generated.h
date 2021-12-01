// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveGameConfigBase;
#ifdef TRIGGERRUNTIME_TriggerSaveGameInterface_generated_h
#error "TriggerSaveGameInterface.generated.h already included, missing '#pragma once' in TriggerSaveGameInterface.h"
#endif
#define TRIGGERRUNTIME_TriggerSaveGameInterface_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_EVENT_PARMS \
	struct TriggerSaveGameInterface_eventOnLoadGameDataComplete_Parms \
	{ \
		USaveGameConfigBase* ConfigData; \
	}; \
	struct TriggerSaveGameInterface_eventOnStartToLoadGameData_Parms \
	{ \
		USaveGameConfigBase* ConfigData; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerSaveGameInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerSaveGameInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerSaveGameInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(UTriggerSaveGameInterface&&); \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(const UTriggerSaveGameInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(UTriggerSaveGameInterface&&); \
	TRIGGERRUNTIME_API UTriggerSaveGameInterface(const UTriggerSaveGameInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerSaveGameInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerSaveGameInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerSaveGameInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerSaveGameInterface(); \
	friend struct Z_Construct_UClass_UTriggerSaveGameInterface_Statics; \
public: \
	DECLARE_CLASS(UTriggerSaveGameInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UTriggerSaveGameInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerSaveGameInterface() {} \
public: \
	typedef UTriggerSaveGameInterface UClassType; \
	typedef ITriggerSaveGameInterface ThisClass; \
	static void Execute_OnLoadGameDataComplete(UObject* O, USaveGameConfigBase* ConfigData); \
	static void Execute_OnStartToLoadGameData(UObject* O, USaveGameConfigBase* ConfigData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ITriggerSaveGameInterface() {} \
public: \
	typedef UTriggerSaveGameInterface UClassType; \
	typedef ITriggerSaveGameInterface ThisClass; \
	static void Execute_OnLoadGameDataComplete(UObject* O, USaveGameConfigBase* ConfigData); \
	static void Execute_OnStartToLoadGameData(UObject* O, USaveGameConfigBase* ConfigData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_18_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerSaveGameInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_ToolFactory_SaveGame_TriggerSaveGameInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
