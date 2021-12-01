// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerEffectDataBase;
class UObject;
class UTriggerEffectDataOperationStyleBase;
class UTriggerTaskBase;
class UOperationInformationBase;
#ifdef TRIGGERRUNTIME_TriggerEffectDataBase_generated_h
#error "TriggerEffectDataBase.generated.h already included, missing '#pragma once' in TriggerEffectDataBase.h"
#endif
#define TRIGGERRUNTIME_TriggerEffectDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_22_DELEGATE \
struct _Script_TriggerRunTime_eventEffectDataChanged_Parms \
{ \
	const UTriggerEffectDataBase* EffectData; \
	FName DataName; \
}; \
static inline void FEffectDataChanged_DelegateWrapper(const FMulticastScriptDelegate& EffectDataChanged, const UTriggerEffectDataBase* EffectData, FName const& DataName) \
{ \
	_Script_TriggerRunTime_eventEffectDataChanged_Parms Parms; \
	Parms.EffectData=EffectData; \
	Parms.DataName=DataName; \
	EffectDataChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_RPC_WRAPPERS \
	virtual void GetInspectedObjects_Implementation(TArray<UObject*>& Objects); \
 \
	DECLARE_FUNCTION(execSetDataStatus); \
	DECLARE_FUNCTION(execCanBeOpened); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execTryToEndTargetObject); \
	DECLARE_FUNCTION(execTryToUpdateTargetObject); \
	DECLARE_FUNCTION(execTryToInitializeTargetObject); \
	DECLARE_FUNCTION(execGetTaskOwner); \
	DECLARE_FUNCTION(execGetInspectedObjects);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetInspectedObjects_Implementation(TArray<UObject*>& Objects); \
 \
	DECLARE_FUNCTION(execSetDataStatus); \
	DECLARE_FUNCTION(execCanBeOpened); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execTryToEndTargetObject); \
	DECLARE_FUNCTION(execTryToUpdateTargetObject); \
	DECLARE_FUNCTION(execTryToInitializeTargetObject); \
	DECLARE_FUNCTION(execGetTaskOwner); \
	DECLARE_FUNCTION(execGetInspectedObjects);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_EVENT_PARMS \
	struct TriggerEffectDataBase_eventGetInspectedObjects_Parms \
	{ \
		TArray<UObject*> Objects; \
	}; \
	struct TriggerEffectDataBase_eventOnCloseEffect_Parms \
	{ \
		UTriggerEffectDataOperationStyleBase* CloseStyle; \
	}; \
	struct TriggerEffectDataBase_eventOnInitialize_Parms \
	{ \
		UTriggerTaskBase* InTaskOwner; \
	}; \
	struct TriggerEffectDataBase_eventOnOpenEffect_Parms \
	{ \
		UTriggerEffectDataOperationStyleBase* OpenStyle; \
	}; \
	struct TriggerEffectDataBase_eventOnReset_Parms \
	{ \
		UOperationInformationBase* ResetOperation; \
	}; \
	struct TriggerEffectDataBase_eventOnUpdateData_Parms \
	{ \
		FName DataName; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerEffectDataBase(); \
	friend struct Z_Construct_UClass_UTriggerEffectDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEffectDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEffectDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerEffectDataBase(); \
	friend struct Z_Construct_UClass_UTriggerEffectDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEffectDataBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEffectDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEffectDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEffectDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEffectDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEffectDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEffectDataBase(UTriggerEffectDataBase&&); \
	NO_API UTriggerEffectDataBase(const UTriggerEffectDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEffectDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEffectDataBase(UTriggerEffectDataBase&&); \
	NO_API UTriggerEffectDataBase(const UTriggerEffectDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEffectDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEffectDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEffectDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_39_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEffectDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerEffectDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_EffectTask_TriggerEffectDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
