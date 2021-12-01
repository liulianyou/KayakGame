// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionInfo;
enum class EInteractionEndType : uint8;
class UObject;
class UTriggerTaskBase;
class UTT_Interaction;
class UInteractionRuleDataBase;
class AActor;
#ifdef TRIGGERRUNTIME_InteractionEffectBase_generated_h
#error "InteractionEffectBase.generated.h already included, missing '#pragma once' in InteractionEffectBase.h"
#endif
#define TRIGGERRUNTIME_InteractionEffectBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIneractionInfo); \
	DECLARE_FUNCTION(execGetIneractionInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIneractionInfo); \
	DECLARE_FUNCTION(execGetIneractionInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionOpenStyle(); \
	friend struct Z_Construct_UClass_UInteractionOpenStyle_Statics; \
public: \
	DECLARE_CLASS(UInteractionOpenStyle, UEffectDataOpenStyleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionOpenStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionOpenStyle(); \
	friend struct Z_Construct_UClass_UInteractionOpenStyle_Statics; \
public: \
	DECLARE_CLASS(UInteractionOpenStyle, UEffectDataOpenStyleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionOpenStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionOpenStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionOpenStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionOpenStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionOpenStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionOpenStyle(UInteractionOpenStyle&&); \
	NO_API UInteractionOpenStyle(const UInteractionOpenStyle&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionOpenStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionOpenStyle(UInteractionOpenStyle&&); \
	NO_API UInteractionOpenStyle(const UInteractionOpenStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionOpenStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionOpenStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionOpenStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_27_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionOpenStyle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionOpenStyle>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRemoveInstance); \
	DECLARE_FUNCTION(execIsRemoveInstance); \
	DECLARE_FUNCTION(execSetEndType); \
	DECLARE_FUNCTION(execGetEndType); \
	DECLARE_FUNCTION(execSetIneractionInfo); \
	DECLARE_FUNCTION(execGetIneractionInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRemoveInstance); \
	DECLARE_FUNCTION(execIsRemoveInstance); \
	DECLARE_FUNCTION(execSetEndType); \
	DECLARE_FUNCTION(execGetEndType); \
	DECLARE_FUNCTION(execSetIneractionInfo); \
	DECLARE_FUNCTION(execGetIneractionInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionCloseStyle(); \
	friend struct Z_Construct_UClass_UInteractionCloseStyle_Statics; \
public: \
	DECLARE_CLASS(UInteractionCloseStyle, UEffectDataCloseStyleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionCloseStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionCloseStyle(); \
	friend struct Z_Construct_UClass_UInteractionCloseStyle_Statics; \
public: \
	DECLARE_CLASS(UInteractionCloseStyle, UEffectDataCloseStyleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionCloseStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionCloseStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionCloseStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionCloseStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionCloseStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionCloseStyle(UInteractionCloseStyle&&); \
	NO_API UInteractionCloseStyle(const UInteractionCloseStyle&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionCloseStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionCloseStyle(UInteractionCloseStyle&&); \
	NO_API UInteractionCloseStyle(const UInteractionCloseStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionCloseStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionCloseStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionCloseStyle)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_49_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionCloseStyle."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionCloseStyle>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentVaildInteractionTask); \
	DECLARE_FUNCTION(execCheckInteractionSurpportForEnd); \
	DECLARE_FUNCTION(execCheckInteractionSupportForUpdate); \
	DECLARE_FUNCTION(execCheckInteractionSupportForInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentVaildInteractionTask); \
	DECLARE_FUNCTION(execCheckInteractionSurpportForEnd); \
	DECLARE_FUNCTION(execCheckInteractionSupportForUpdate); \
	DECLARE_FUNCTION(execCheckInteractionSupportForInitialize);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_EVENT_PARMS \
	struct InteractionEffectBase_eventOnValueInInteractionRuleChanged_Parms \
	{ \
		AActor* Causer; \
		UInteractionRuleDataBase* Data; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionEffectBase(); \
	friend struct Z_Construct_UClass_UInteractionEffectBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionEffectBase, UTriggerEffectDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionEffectBase) \
	DECLARE_WITHIN(UTT_Interaction)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionEffectBase(); \
	friend struct Z_Construct_UClass_UInteractionEffectBase_Statics; \
public: \
	DECLARE_CLASS(UInteractionEffectBase, UTriggerEffectDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UInteractionEffectBase) \
	DECLARE_WITHIN(UTT_Interaction)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionEffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionEffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionEffectBase(UInteractionEffectBase&&); \
	NO_API UInteractionEffectBase(const UInteractionEffectBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionEffectBase(UInteractionEffectBase&&); \
	NO_API UInteractionEffectBase(const UInteractionEffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionEffectBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionEffectBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_97_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h_100_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InteractionEffectBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionEffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionEffect_InteractionEffectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
