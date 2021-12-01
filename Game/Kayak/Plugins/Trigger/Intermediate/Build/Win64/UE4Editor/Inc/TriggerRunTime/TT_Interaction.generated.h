// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionRuleDataBase;
class UObject;
class UTT_Interaction;
enum class EInteractionEndType : uint8;
struct FInteractionInfo;
class AActor;
struct FGameplayTag;
struct FGameplayAbilitySpecHandle;
class UInteractionGenerationBase;
class UInteractionEffectBase;
class UInteractionRuleBase;
class UContributeRuleBase;
#ifdef TRIGGERRUNTIME_TT_Interaction_generated_h
#error "TT_Interaction.generated.h already included, missing '#pragma once' in TT_Interaction.h"
#endif
#define TRIGGERRUNTIME_TT_Interaction_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_42_DELEGATE \
struct _Script_TriggerRunTime_eventInteractionDataUpdate_Parms \
{ \
	UInteractionRuleDataBase* Data; \
}; \
static inline void FInteractionDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& InteractionDataUpdate, UInteractionRuleDataBase* Data) \
{ \
	_Script_TriggerRunTime_eventInteractionDataUpdate_Parms Parms; \
	Parms.Data=Data; \
	InteractionDataUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_37_DELEGATE \
struct _Script_TriggerRunTime_eventInteractionEnd_Parms \
{ \
	TArray<UObject*> Causers; \
	UTT_Interaction* InteractionTask; \
	EInteractionEndType EndType; \
}; \
static inline void FInteractionEnd_DelegateWrapper(const FMulticastScriptDelegate& InteractionEnd, TArray<UObject*> const& Causers, UTT_Interaction* InteractionTask, EInteractionEndType EndType) \
{ \
	_Script_TriggerRunTime_eventInteractionEnd_Parms Parms; \
	Parms.Causers=Causers; \
	Parms.InteractionTask=InteractionTask; \
	Parms.EndType=EndType; \
	InteractionEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_RPC_WRAPPERS \
	virtual void AbilityTryToEndInteraction_Implementation(const FGameplayAbilitySpecHandle Handle, TArray<UObject*> const& Causers, EInteractionEndType EndType, bool RemoveInstance); \
	virtual void CloseEffect_Implementation(UObject* Causer, EInteractionEndType EndType, bool RemoveInstance); \
	virtual void OpenEffect_Implementation(FInteractionInfo const& InteractionInfo, int32 Index); \
 \
	DECLARE_FUNCTION(execGetInteractionInfos); \
	DECLARE_FUNCTION(execGetValidInteractionInfo); \
	DECLARE_FUNCTION(execGetVaildInteractionCancelTag); \
	DECLARE_FUNCTION(execGetVaildInteractionSuccessTag); \
	DECLARE_FUNCTION(execAbilityTryToEndInteraction); \
	DECLARE_FUNCTION(execDoesEffectRunOnServer); \
	DECLARE_FUNCTION(execCloseEffect); \
	DECLARE_FUNCTION(execOpenEffect); \
	DECLARE_FUNCTION(execInteractionRuleDataChanged); \
	DECLARE_FUNCTION(execGetInteractionInfoGenerator); \
	DECLARE_FUNCTION(execSetInteractionInfoGenerator); \
	DECLARE_FUNCTION(execGetInteractionEffects); \
	DECLARE_FUNCTION(execGetInteractionEffect); \
	DECLARE_FUNCTION(execAddInteractionEffect); \
	DECLARE_FUNCTION(execGetInteractionRule); \
	DECLARE_FUNCTION(execSetInteractionRule); \
	DECLARE_FUNCTION(execServer_Interaction); \
	DECLARE_FUNCTION(execAddContributor); \
	DECLARE_FUNCTION(execClient_RunTask);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AbilityTryToEndInteraction_Implementation(const FGameplayAbilitySpecHandle Handle, TArray<UObject*> const& Causers, EInteractionEndType EndType, bool RemoveInstance); \
	virtual void CloseEffect_Implementation(UObject* Causer, EInteractionEndType EndType, bool RemoveInstance); \
	virtual void OpenEffect_Implementation(FInteractionInfo const& InteractionInfo, int32 Index); \
 \
	DECLARE_FUNCTION(execGetInteractionInfos); \
	DECLARE_FUNCTION(execGetValidInteractionInfo); \
	DECLARE_FUNCTION(execGetVaildInteractionCancelTag); \
	DECLARE_FUNCTION(execGetVaildInteractionSuccessTag); \
	DECLARE_FUNCTION(execAbilityTryToEndInteraction); \
	DECLARE_FUNCTION(execDoesEffectRunOnServer); \
	DECLARE_FUNCTION(execCloseEffect); \
	DECLARE_FUNCTION(execOpenEffect); \
	DECLARE_FUNCTION(execInteractionRuleDataChanged); \
	DECLARE_FUNCTION(execGetInteractionInfoGenerator); \
	DECLARE_FUNCTION(execSetInteractionInfoGenerator); \
	DECLARE_FUNCTION(execGetInteractionEffects); \
	DECLARE_FUNCTION(execGetInteractionEffect); \
	DECLARE_FUNCTION(execAddInteractionEffect); \
	DECLARE_FUNCTION(execGetInteractionRule); \
	DECLARE_FUNCTION(execSetInteractionRule); \
	DECLARE_FUNCTION(execServer_Interaction); \
	DECLARE_FUNCTION(execAddContributor); \
	DECLARE_FUNCTION(execClient_RunTask);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_EVENT_PARMS \
	struct TT_Interaction_eventAbilityTryToEndInteraction_Parms \
	{ \
		FGameplayAbilitySpecHandle Handle; \
		TArray<UObject*> Causers; \
		EInteractionEndType EndType; \
		bool RemoveInstance; \
	}; \
	struct TT_Interaction_eventCloseEffect_Parms \
	{ \
		UObject* Causer; \
		EInteractionEndType EndType; \
		bool RemoveInstance; \
	}; \
	struct TT_Interaction_eventOnEndInteraction_Parms \
	{ \
		TArray<UObject*> Causers; \
		EInteractionEndType EndType; \
		bool RemoveInstance; \
	}; \
	struct TT_Interaction_eventOnInteraction_Parms \
	{ \
		FInteractionInfo TargetActor; \
	}; \
	struct TT_Interaction_eventOpenEffect_Parms \
	{ \
		FInteractionInfo InteractionInfo; \
		int32 Index; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTT_Interaction(); \
	friend struct Z_Construct_UClass_UTT_Interaction_Statics; \
public: \
	DECLARE_CLASS(UTT_Interaction, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Interaction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InteractionRule=NETFIELD_REP_START, \
		InteractionInfoGenerator, \
		NETFIELD_REP_END=InteractionInfoGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUTT_Interaction(); \
	friend struct Z_Construct_UClass_UTT_Interaction_Statics; \
public: \
	DECLARE_CLASS(UTT_Interaction, UTriggerTaskBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTT_Interaction) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		InteractionRule=NETFIELD_REP_START, \
		InteractionInfoGenerator, \
		NETFIELD_REP_END=InteractionInfoGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Interaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Interaction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Interaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Interaction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Interaction(UTT_Interaction&&); \
	NO_API UTT_Interaction(const UTT_Interaction&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTT_Interaction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTT_Interaction(UTT_Interaction&&); \
	NO_API UTT_Interaction(const UTT_Interaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTT_Interaction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTT_Interaction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTT_Interaction)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastContributor() { return STRUCT_OFFSET(UTT_Interaction, LastContributor); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_53_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h_56_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TT_Interaction."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTT_Interaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_TT_Interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
