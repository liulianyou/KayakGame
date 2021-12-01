// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UContributeRuleBase;
class AActor;
class UInteractionRuleDataBase;
struct FInteractionDataMap;
class UTT_Interaction;
class UObject;
#ifdef TRIGGERRUNTIME_InteractionRuleBase_generated_h
#error "InteractionRuleBase.generated.h already included, missing '#pragma once' in InteractionRuleBase.h"
#endif
#define TRIGGERRUNTIME_InteractionRuleBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionDataMap_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FInteractionDataMap>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_RPC_WRAPPERS \
	virtual bool CanAddNewContributor_Implementation(UContributeRuleBase* Contributor); \
 \
	DECLARE_FUNCTION(execGetContributors); \
	DECLARE_FUNCTION(execGetInteractionRuleData); \
	DECLARE_FUNCTION(execGetActualInteractionRuleData); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execGetOwnerTask); \
	DECLARE_FUNCTION(execSetOwnerTask); \
	DECLARE_FUNCTION(execIsMeetAllCondition); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRemoveContributorsBelongToTargetCausers); \
	DECLARE_FUNCTION(execRemoveContributor); \
	DECLARE_FUNCTION(execAddContributor); \
	DECLARE_FUNCTION(execCanAddNewContributor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanAddNewContributor_Implementation(UContributeRuleBase* Contributor); \
 \
	DECLARE_FUNCTION(execGetContributors); \
	DECLARE_FUNCTION(execGetInteractionRuleData); \
	DECLARE_FUNCTION(execGetActualInteractionRuleData); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execGetOwnerTask); \
	DECLARE_FUNCTION(execSetOwnerTask); \
	DECLARE_FUNCTION(execIsMeetAllCondition); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRemoveContributorsBelongToTargetCausers); \
	DECLARE_FUNCTION(execRemoveContributor); \
	DECLARE_FUNCTION(execAddContributor); \
	DECLARE_FUNCTION(execCanAddNewContributor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_EVENT_PARMS \
	struct InteractionRuleBase_eventCanAddNewContributor_Parms \
	{ \
		UContributeRuleBase* Contributor; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionRuleBase_eventCanAddNewContributor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionRuleBase_eventOnApplayContributeExecutonResult_Parms \
	{ \
		UContributeRuleBase* Contributor; \
		float DeltaTime; \
	}; \
	struct InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms \
	{ \
		bool CanbeAdded; \
		UContributeRuleBase* Contributor; \
	}; \
	struct InteractionRuleBase_eventOnCanBeAddedToContributors_Parms \
	{ \
		bool CanbeAdded; \
		UContributeRuleBase* Contributor; \
	}; \
	struct InteractionRuleBase_eventOnCanTickContributor_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionRuleBase_eventOnCanTickContributor_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct InteractionRuleBase_eventOnPreProcessWhenAdded_Parms \
	{ \
		UContributeRuleBase* Contributor; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionRuleBase(); \
	friend struct Z_Construct_UClass_UInteractionRuleBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionRuleBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionRuleBase) \
	DECLARE_WITHIN(UTT_Interaction)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionRuleBase(); \
	friend struct Z_Construct_UClass_UInteractionRuleBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionRuleBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionRuleBase) \
	DECLARE_WITHIN(UTT_Interaction)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionRuleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionRuleBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionRuleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionRuleBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionRuleBase(UInteractionRuleBase&&); \
	NO_API UInteractionRuleBase(const UInteractionRuleBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionRuleBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionRuleBase(UInteractionRuleBase&&); \
	NO_API UInteractionRuleBase(const UInteractionRuleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionRuleBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionRuleBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionRuleBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractionData() { return STRUCT_OFFSET(UInteractionRuleBase, InteractionData); } \
	FORCEINLINE static uint32 __PPO__Contributors() { return STRUCT_OFFSET(UInteractionRuleBase, Contributors); } \
	FORCEINLINE static uint32 __PPO__ContributionHistory() { return STRUCT_OFFSET(UInteractionRuleBase, ContributionHistory); } \
	FORCEINLINE static uint32 __PPO__ActualInteractionDataMap() { return STRUCT_OFFSET(UInteractionRuleBase, ActualInteractionDataMap); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_48_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionRuleBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionRuleBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionRule_InteractionRuleBase_h


#define FOREACH_ENUM_ECONTRIBUTETYPE(op) \
	op(EContributeType::EContributeType_Start) \
	op(EContributeType::EContributeType_RemoveActor) \
	op(EContributeType::EContributeType_RemoveContribution) 

enum class EContributeType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EContributeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
