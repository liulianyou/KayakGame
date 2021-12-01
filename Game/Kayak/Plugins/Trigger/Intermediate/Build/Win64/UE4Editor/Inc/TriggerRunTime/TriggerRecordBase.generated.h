// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRecordInstigatorInfo;
enum class EEndRecordType : uint8;
#ifdef TRIGGERRUNTIME_TriggerRecordBase_generated_h
#error "TriggerRecordBase.generated.h already included, missing '#pragma once' in TriggerRecordBase.h"
#endif
#define TRIGGERRUNTIME_TriggerRecordBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FRecordInstigatorInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_RPC_WRAPPERS \
	virtual void EndRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType); \
	virtual void StartRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo); \
	virtual void Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo); \
 \
	DECLARE_FUNCTION(execEndRecord); \
	DECLARE_FUNCTION(execStartRecord); \
	DECLARE_FUNCTION(execExecute);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType); \
	virtual void StartRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo); \
	virtual void Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo); \
 \
	DECLARE_FUNCTION(execEndRecord); \
	DECLARE_FUNCTION(execStartRecord); \
	DECLARE_FUNCTION(execExecute);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_EVENT_PARMS \
	struct TriggerRecordBase_eventEndRecord_Parms \
	{ \
		FRecordInstigatorInfo InstigatorInfo; \
		EEndRecordType EndType; \
	}; \
	struct TriggerRecordBase_eventExecute_Parms \
	{ \
		FRecordInstigatorInfo InstigatorInfo; \
	}; \
	struct TriggerRecordBase_eventStartRecord_Parms \
	{ \
		FRecordInstigatorInfo InstigatorInfo; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerRecordBase(); \
	friend struct Z_Construct_UClass_UTriggerRecordBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerRecordBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRecordBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerRecordBase(); \
	friend struct Z_Construct_UClass_UTriggerRecordBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerRecordBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRecordBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRecordBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRecordBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRecordBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRecordBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRecordBase(UTriggerRecordBase&&); \
	NO_API UTriggerRecordBase(const UTriggerRecordBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRecordBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRecordBase(UTriggerRecordBase&&); \
	NO_API UTriggerRecordBase(const UTriggerRecordBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRecordBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRecordBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRecordBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_45_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerRecordBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerRecordBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_Record_TriggerRecordBase_h


#define FOREACH_ENUM_EENDRECORDTYPE(op) \
	op(EEndRecordType::EEndRecordType_Pause) \
	op(EEndRecordType::EEndRecordType_ClearRecordInfo) 

enum class EEndRecordType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EEndRecordType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
