// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOperationInformationBase;
class UObject;
class UTriggerStyleBase;
struct FOperationScope;
#ifdef TRIGGERRUNTIME_OperationInformationBase_generated_h
#error "OperationInformationBase.generated.h already included, missing '#pragma once' in OperationInformationBase.h"
#endif
#define TRIGGERRUNTIME_OperationInformationBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOperationScope_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FOperationScope>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_RPC_WRAPPERS \
	virtual bool ShouldReplicateInformation_Implementation(UObject* OperatorOwner) const; \
 \
	DECLARE_FUNCTION(execCreateNewOperationInfo); \
	DECLARE_FUNCTION(execFindOperationScope); \
	DECLARE_FUNCTION(execRemoveOperation); \
	DECLARE_FUNCTION(execAddNewOperation); \
	DECLARE_FUNCTION(execGetOperations); \
	DECLARE_FUNCTION(execGetConstOperations); \
	DECLARE_FUNCTION(execShouldReplicateInformation);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldReplicateInformation_Implementation(UObject* OperatorOwner) const; \
 \
	DECLARE_FUNCTION(execCreateNewOperationInfo); \
	DECLARE_FUNCTION(execFindOperationScope); \
	DECLARE_FUNCTION(execRemoveOperation); \
	DECLARE_FUNCTION(execAddNewOperation); \
	DECLARE_FUNCTION(execGetOperations); \
	DECLARE_FUNCTION(execGetConstOperations); \
	DECLARE_FUNCTION(execShouldReplicateInformation);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_EVENT_PARMS \
	struct OperationInformationBase_eventOnCanAddNewOpertion_Parms \
	{ \
		UObject* Causer; \
		UTriggerStyleBase* OperationStyle; \
		UObject* Target; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		OperationInformationBase_eventOnCanAddNewOpertion_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct OperationInformationBase_eventShouldReplicateInformation_Parms \
	{ \
		UObject* OperatorOwner; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		OperationInformationBase_eventShouldReplicateInformation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperationInformationBase(); \
	friend struct Z_Construct_UClass_UOperationInformationBase_Statics; \
public: \
	DECLARE_CLASS(UOperationInformationBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UOperationInformationBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Operations=NETFIELD_REP_START, \
		NETFIELD_REP_END=Operations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOperationInformationBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUOperationInformationBase(); \
	friend struct Z_Construct_UClass_UOperationInformationBase_Statics; \
public: \
	DECLARE_CLASS(UOperationInformationBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UOperationInformationBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Operations=NETFIELD_REP_START, \
		NETFIELD_REP_END=Operations	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UOperationInformationBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperationInformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperationInformationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperationInformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperationInformationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperationInformationBase(UOperationInformationBase&&); \
	NO_API UOperationInformationBase(const UOperationInformationBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperationInformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperationInformationBase(UOperationInformationBase&&); \
	NO_API UOperationInformationBase(const UOperationInformationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperationInformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperationInformationBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperationInformationBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Operations() { return STRUCT_OFFSET(UOperationInformationBase, Operations); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_56_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OperationInformationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UOperationInformationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
