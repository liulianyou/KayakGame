// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskComponentBase;
struct FTriggerTaskComponentInformation;
struct FGuid;
struct FGameplayTagContainer;
class UTriggerEventChainBase;
class ITriggerInterface;
enum class EAddNewNodeResult : uint8;
class UObject;
#ifdef TRIGGERRUNTIME_TriggerEventChainBase_generated_h
#error "TriggerEventChainBase.generated.h already included, missing '#pragma once' in TriggerEventChainBase.h"
#endif
#define TRIGGERRUNTIME_TriggerEventChainBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_RPC_WRAPPERS \
	virtual bool IsChildForEventInfo_Implementation(const UTriggerEventChainBase* OtherEventInfo, bool IgnoreDiffentLevel) const; \
	virtual void GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const; \
	virtual void GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const; \
	virtual EAddNewNodeResult AddParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeIndeParentNode); \
	virtual void RemoveParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeInParentNode); \
	virtual void RemoveChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode); \
	virtual EAddNewNodeResult AddChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode); \
	virtual void GetChildTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents); \
	virtual void GetParentTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents); \
	virtual bool CanHoldTargetObject_Implementation(UObject* Object) const; \
 \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetConstNextComponentInfo); \
	DECLARE_FUNCTION(execGetNextComponentInfo); \
	DECLARE_FUNCTION(execRemoveNextComponentInfo); \
	DECLARE_FUNCTION(execAddNextComponentInfo); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetConstCategory); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execIsChildForEventInfo); \
	DECLARE_FUNCTION(execGetChildTriggers); \
	DECLARE_FUNCTION(execGetParentTriggers); \
	DECLARE_FUNCTION(execAddParentNode); \
	DECLARE_FUNCTION(execRemoveParentNode); \
	DECLARE_FUNCTION(execRemoveChildNode); \
	DECLARE_FUNCTION(execAddChildNode); \
	DECLARE_FUNCTION(execGetChildTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetParentTriggerTaskComponents); \
	DECLARE_FUNCTION(execCanHoldTargetObject); \
	DECLARE_FUNCTION(execInitilaizeByTriggerTaskComponent);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsChildForEventInfo_Implementation(const UTriggerEventChainBase* OtherEventInfo, bool IgnoreDiffentLevel) const; \
	virtual void GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const; \
	virtual void GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const; \
	virtual EAddNewNodeResult AddParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeIndeParentNode); \
	virtual void RemoveParentNode_Implementation(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeInParentNode); \
	virtual void RemoveChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode); \
	virtual EAddNewNodeResult AddChildNode_Implementation(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode); \
	virtual void GetChildTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents); \
	virtual void GetParentTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents); \
	virtual bool CanHoldTargetObject_Implementation(UObject* Object) const; \
 \
	DECLARE_FUNCTION(execGetComponentOwner); \
	DECLARE_FUNCTION(execGetConstNextComponentInfo); \
	DECLARE_FUNCTION(execGetNextComponentInfo); \
	DECLARE_FUNCTION(execRemoveNextComponentInfo); \
	DECLARE_FUNCTION(execAddNextComponentInfo); \
	DECLARE_FUNCTION(execSetCategory); \
	DECLARE_FUNCTION(execGetConstCategory); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execIsChildForEventInfo); \
	DECLARE_FUNCTION(execGetChildTriggers); \
	DECLARE_FUNCTION(execGetParentTriggers); \
	DECLARE_FUNCTION(execAddParentNode); \
	DECLARE_FUNCTION(execRemoveParentNode); \
	DECLARE_FUNCTION(execRemoveChildNode); \
	DECLARE_FUNCTION(execAddChildNode); \
	DECLARE_FUNCTION(execGetChildTriggerTaskComponents); \
	DECLARE_FUNCTION(execGetParentTriggerTaskComponents); \
	DECLARE_FUNCTION(execCanHoldTargetObject); \
	DECLARE_FUNCTION(execInitilaizeByTriggerTaskComponent);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_EVENT_PARMS \
	struct TriggerEventChainBase_eventAddChildNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ChildNode; \
		FGameplayTagContainer CategoryParameter; \
		bool NeedUpdateParentNodeInChildNode; \
		EAddNewNodeResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventChainBase_eventAddChildNode_Parms() \
			: ReturnValue((EAddNewNodeResult)0) \
		{ \
		} \
	}; \
	struct TriggerEventChainBase_eventAddParentNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ParentNode; \
		FGameplayTagContainer CategoryParameter; \
		bool NeedUpdateChildNodeIndeParentNode; \
		EAddNewNodeResult ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventChainBase_eventAddParentNode_Parms() \
			: ReturnValue((EAddNewNodeResult)0) \
		{ \
		} \
	}; \
	struct TriggerEventChainBase_eventCanHoldTargetObject_Parms \
	{ \
		UObject* Object; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventChainBase_eventCanHoldTargetObject_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerEventChainBase_eventGetChildTriggers_Parms \
	{ \
		TArray<TScriptInterface<ITriggerInterface> > OuterTriggers; \
		FGameplayTagContainer CategoryParameter; \
	}; \
	struct TriggerEventChainBase_eventGetChildTriggerTaskComponents_Parms \
	{ \
		TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents; \
	}; \
	struct TriggerEventChainBase_eventGetParentTriggers_Parms \
	{ \
		TArray<TScriptInterface<ITriggerInterface> > OuterTriggers; \
		FGameplayTagContainer CategoryParameter; \
	}; \
	struct TriggerEventChainBase_eventGetParentTriggerTaskComponents_Parms \
	{ \
		TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents; \
	}; \
	struct TriggerEventChainBase_eventIsChildForEventInfo_Parms \
	{ \
		const UTriggerEventChainBase* OtherEventInfo; \
		bool IgnoreDiffentLevel; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventChainBase_eventIsChildForEventInfo_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerEventChainBase_eventOnInitilaizeByTriggerTaskComponent_Parms \
	{ \
		UTriggerTaskComponentBase* Component; \
	}; \
	struct TriggerEventChainBase_eventRemoveChildNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ChildNode; \
		FGameplayTagContainer CategoryParameter; \
		bool NeedUpdateParentNodeInChildNode; \
	}; \
	struct TriggerEventChainBase_eventRemoveParentNode_Parms \
	{ \
		TScriptInterface<ITriggerInterface> ParentNode; \
		FGameplayTagContainer CategoryParameter; \
		bool NeedUpdateChildNodeInParentNode; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerEventChainBase(); \
	friend struct Z_Construct_UClass_UTriggerEventChainBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventChainBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventChainBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerEventChainBase(); \
	friend struct Z_Construct_UClass_UTriggerEventChainBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventChainBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventChainBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventChainBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventChainBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventChainBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventChainBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventChainBase(UTriggerEventChainBase&&); \
	NO_API UTriggerEventChainBase(const UTriggerEventChainBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventChainBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventChainBase(UTriggerEventChainBase&&); \
	NO_API UTriggerEventChainBase(const UTriggerEventChainBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventChainBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventChainBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventChainBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NextComponentInfos() { return STRUCT_OFFSET(UTriggerEventChainBase, NextComponentInfos); } \
	FORCEINLINE static uint32 __PPO__Category() { return STRUCT_OFFSET(UTriggerEventChainBase, Category); } \
	FORCEINLINE static uint32 __PPO__OwnerComponent() { return STRUCT_OFFSET(UTriggerEventChainBase, OwnerComponent); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_43_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEventChainBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerEventChainBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_EventChain_TriggerEventChainBase_h


#define FOREACH_ENUM_EADDNEWNODERESULT(op) \
	op(EAddNewNodeResult::EAddNewNodeResult_PlaceHold) \
	op(EAddNewNodeResult::EAddNewNodeResult_Unmatch) \
	op(EAddNewNodeResult::EAddNewNodeResult_Matched) \
	op(EAddNewNodeResult::EAddNewNodeResult_Successed) \
	op(EAddNewNodeResult::EAddNewNodeResult_Failed) 

enum class EAddNewNodeResult : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EAddNewNodeResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
