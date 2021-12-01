// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAISpawnBehaviorCommand;
class UTT_Interaction;
enum class EInteractionEndType : uint8;
class UTriggerTaskBase;
class UInteractionRuleDataBase;
class UTriggerEffectDataBase;
class UTriggerEffectDataOperationStyleBase;
#ifdef TRIGGERRUNTIME_TriggerDefinition_generated_h
#error "TriggerDefinition.generated.h already included, missing '#pragma once' in TriggerDefinition.h"
#endif
#define TRIGGERRUNTIME_TriggerDefinition_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_339_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISpawnBehaviorCommand_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FAISpawnBehaviorCommand>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameOverInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FGameOverInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerTaskComponentInformation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTriggerTaskComponentInformation>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTriggerTaskRuntimeInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_37_DELEGATE \
struct _Script_TriggerRunTime_eventTriggerMapLoaded_Parms \
{ \
	FString NewMapName; \
}; \
static inline void FTriggerMapLoaded_DelegateWrapper(const FScriptDelegate& TriggerMapLoaded, const FString& NewMapName) \
{ \
	_Script_TriggerRunTime_eventTriggerMapLoaded_Parms Parms; \
	Parms.NewMapName=NewMapName; \
	TriggerMapLoaded.ProcessDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UDeadSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadSupportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UDeadSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadSupportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UDeadSupportInterface(UDeadSupportInterface&&); \
	TRIGGERRUNTIME_API UDeadSupportInterface(const UDeadSupportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UDeadSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UDeadSupportInterface(UDeadSupportInterface&&); \
	TRIGGERRUNTIME_API UDeadSupportInterface(const UDeadSupportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UDeadSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeadSupportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeadSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDeadSupportInterface(); \
	friend struct Z_Construct_UClass_UDeadSupportInterface_Statics; \
public: \
	DECLARE_CLASS(UDeadSupportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UDeadSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDeadSupportInterface() {} \
public: \
	typedef UDeadSupportInterface UClassType; \
	typedef IDeadSupportInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_INCLASS_IINTERFACE \
protected: \
	virtual ~IDeadSupportInterface() {} \
public: \
	typedef UDeadSupportInterface UClassType; \
	typedef IDeadSupportInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_291_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_302_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_294_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UDeadSupportInterface>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_EVENT_PARMS \
	struct AISpawnSupportInterface_eventBP_SetAISpawnCommand_Parms \
	{ \
		FAISpawnBehaviorCommand Command; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnSupportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UAISpawnSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnSupportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(UAISpawnSupportInterface&&); \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(const UAISpawnSupportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(UAISpawnSupportInterface&&); \
	TRIGGERRUNTIME_API UAISpawnSupportInterface(const UAISpawnSupportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UAISpawnSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnSupportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAISpawnSupportInterface(); \
	friend struct Z_Construct_UClass_UAISpawnSupportInterface_Statics; \
public: \
	DECLARE_CLASS(UAISpawnSupportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UAISpawnSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAISpawnSupportInterface() {} \
public: \
	typedef UAISpawnSupportInterface UClassType; \
	typedef IAISpawnSupportInterface ThisClass; \
	static void Execute_BP_FinishedSpawned(UObject* O); \
	static void Execute_BP_SetAISpawnCommand(UObject* O, FAISpawnBehaviorCommand& Command); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_INCLASS_IINTERFACE \
protected: \
	virtual ~IAISpawnSupportInterface() {} \
public: \
	typedef UAISpawnSupportInterface UClassType; \
	typedef IAISpawnSupportInterface ThisClass; \
	static void Execute_BP_FinishedSpawned(UObject* O); \
	static void Execute_BP_SetAISpawnCommand(UObject* O, FAISpawnBehaviorCommand& Command); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_359_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_370_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_370_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_362_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAISpawnSupportInterface>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnInitSupportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UAISpawnInitSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnInitSupportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(UAISpawnInitSupportInterface&&); \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(const UAISpawnInitSupportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(UAISpawnInitSupportInterface&&); \
	TRIGGERRUNTIME_API UAISpawnInitSupportInterface(const UAISpawnInitSupportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UAISpawnInitSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISpawnInitSupportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISpawnInitSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAISpawnInitSupportInterface(); \
	friend struct Z_Construct_UClass_UAISpawnInitSupportInterface_Statics; \
public: \
	DECLARE_CLASS(UAISpawnInitSupportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UAISpawnInitSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAISpawnInitSupportInterface() {} \
public: \
	typedef UAISpawnInitSupportInterface UClassType; \
	typedef IAISpawnInitSupportInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_INCLASS_IINTERFACE \
protected: \
	virtual ~IAISpawnInitSupportInterface() {} \
public: \
	typedef UAISpawnInitSupportInterface UClassType; \
	typedef IAISpawnInitSupportInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_396_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_404_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_399_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAISpawnInitSupportInterface>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_EVENT_PARMS \
	struct InteractionSupportInterface_eventOnEndInteraction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		EInteractionEndType EndType; \
		bool RemoveInstance; \
	}; \
	struct InteractionSupportInterface_eventOnGetCurrentVaildInteractionTask_Parms \
	{ \
		UTriggerTaskBase* CurrentInvokeTask; \
		UTriggerTaskBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InteractionSupportInterface_eventOnGetCurrentVaildInteractionTask_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct InteractionSupportInterface_eventOnInitializeByInteractionTask_Parms \
	{ \
		UTriggerTaskBase* InteractionTask; \
	}; \
	struct InteractionSupportInterface_eventOnInteractionUpdate_Parms \
	{ \
		UInteractionRuleDataBase* Data; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UInteractionSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionSupportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UInteractionSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionSupportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UInteractionSupportInterface(UInteractionSupportInterface&&); \
	TRIGGERRUNTIME_API UInteractionSupportInterface(const UInteractionSupportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UInteractionSupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UInteractionSupportInterface(UInteractionSupportInterface&&); \
	TRIGGERRUNTIME_API UInteractionSupportInterface(const UInteractionSupportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UInteractionSupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionSupportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionSupportInterface(); \
	friend struct Z_Construct_UClass_UInteractionSupportInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionSupportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UInteractionSupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionSupportInterface() {} \
public: \
	typedef UInteractionSupportInterface UClassType; \
	typedef IInteractionSupportInterface ThisClass; \
	static void Execute_OnEndInteraction(UObject* O, UTT_Interaction* InteractionTask, EInteractionEndType EndType, bool RemoveInstance); \
	static UTriggerTaskBase* Execute_OnGetCurrentVaildInteractionTask(UObject* O, UTriggerTaskBase* CurrentInvokeTask); \
	static void Execute_OnInitializeByInteractionTask(UObject* O, UTriggerTaskBase* InteractionTask); \
	static void Execute_OnInteractionUpdate(UObject* O, UInteractionRuleDataBase* Data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionSupportInterface() {} \
public: \
	typedef UInteractionSupportInterface UClassType; \
	typedef IInteractionSupportInterface ThisClass; \
	static void Execute_OnEndInteraction(UObject* O, UTT_Interaction* InteractionTask, EInteractionEndType EndType, bool RemoveInstance); \
	static UTriggerTaskBase* Execute_OnGetCurrentVaildInteractionTask(UObject* O, UTriggerTaskBase* CurrentInvokeTask); \
	static void Execute_OnInitializeByInteractionTask(UObject* O, UTriggerTaskBase* InteractionTask); \
	static void Execute_OnInteractionUpdate(UObject* O, UInteractionRuleDataBase* Data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_427_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_440_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_430_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UInteractionSupportInterface>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_EVENT_PARMS \
	struct GamePlayAbilitySupportInterface_eventBP_OnInitaizleFormTriggerTask_Parms \
	{ \
		UTriggerTaskBase* TriggerTaskOwner; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamePlayAbilitySupportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UGamePlayAbilitySupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePlayAbilitySupportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(UGamePlayAbilitySupportInterface&&); \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(const UGamePlayAbilitySupportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(UGamePlayAbilitySupportInterface&&); \
	TRIGGERRUNTIME_API UGamePlayAbilitySupportInterface(const UGamePlayAbilitySupportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UGamePlayAbilitySupportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamePlayAbilitySupportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGamePlayAbilitySupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGamePlayAbilitySupportInterface(); \
	friend struct Z_Construct_UClass_UGamePlayAbilitySupportInterface_Statics; \
public: \
	DECLARE_CLASS(UGamePlayAbilitySupportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UGamePlayAbilitySupportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGamePlayAbilitySupportInterface() {} \
public: \
	typedef UGamePlayAbilitySupportInterface UClassType; \
	typedef IGamePlayAbilitySupportInterface ThisClass; \
	static void Execute_BP_OnInitaizleFormTriggerTask(UObject* O, UTriggerTaskBase* TriggerTaskOwner); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_INCLASS_IINTERFACE \
protected: \
	virtual ~IGamePlayAbilitySupportInterface() {} \
public: \
	typedef UGamePlayAbilitySupportInterface UClassType; \
	typedef IGamePlayAbilitySupportInterface ThisClass; \
	static void Execute_BP_OnInitaizleFormTriggerTask(UObject* O, UTriggerTaskBase* TriggerTaskOwner); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_485_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_493_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_493_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_488_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UGamePlayAbilitySupportInterface>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_EVENT_PARMS \
	struct EffectSuportInterface_eventBP_EndEffect_Parms \
	{ \
		UTriggerEffectDataBase* EffectData; \
		UTriggerEffectDataOperationStyleBase* EndStyle; \
	}; \
	struct EffectSuportInterface_eventBP_OnInitaizleFormTriggerTask_Parms \
	{ \
		UTriggerEffectDataBase* EffectData; \
	}; \
	struct EffectSuportInterface_eventBP_TriggerTaskDataChanged_Parms \
	{ \
		const UTriggerEffectDataBase* EffectData; \
		FName ChangedDataName; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UEffectSuportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffectSuportInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UEffectSuportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffectSuportInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UEffectSuportInterface(UEffectSuportInterface&&); \
	TRIGGERRUNTIME_API UEffectSuportInterface(const UEffectSuportInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UEffectSuportInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UEffectSuportInterface(UEffectSuportInterface&&); \
	TRIGGERRUNTIME_API UEffectSuportInterface(const UEffectSuportInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UEffectSuportInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEffectSuportInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEffectSuportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEffectSuportInterface(); \
	friend struct Z_Construct_UClass_UEffectSuportInterface_Statics; \
public: \
	DECLARE_CLASS(UEffectSuportInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UEffectSuportInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEffectSuportInterface() {} \
public: \
	typedef UEffectSuportInterface UClassType; \
	typedef IEffectSuportInterface ThisClass; \
	static void Execute_BP_EndEffect(UObject* O, UTriggerEffectDataBase* EffectData, UTriggerEffectDataOperationStyleBase* EndStyle); \
	static void Execute_BP_OnInitaizleFormTriggerTask(UObject* O, UTriggerEffectDataBase* EffectData); \
	static void Execute_BP_TriggerTaskDataChanged(UObject* O, const UTriggerEffectDataBase* EffectData, FName const& ChangedDataName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_INCLASS_IINTERFACE \
protected: \
	virtual ~IEffectSuportInterface() {} \
public: \
	typedef UEffectSuportInterface UClassType; \
	typedef IEffectSuportInterface ThisClass; \
	static void Execute_BP_EndEffect(UObject* O, UTriggerEffectDataBase* EffectData, UTriggerEffectDataOperationStyleBase* EndStyle); \
	static void Execute_BP_OnInitaizleFormTriggerTask(UObject* O, UTriggerEffectDataBase* EffectData); \
	static void Execute_BP_TriggerTaskDataChanged(UObject* O, const UTriggerEffectDataBase* EffectData, FName const& ChangedDataName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_507_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_515_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_515_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h_510_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UEffectSuportInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerDefinition_h


#define FOREACH_ENUM_EINTERACTIONENDTYPE(op) \
	op(EInteractionEndType::EInteractionEndType_PlaceHold) \
	op(EInteractionEndType::EInteractionEndType_Cancle) \
	op(EInteractionEndType::EInteractionEndType_Interrupt) \
	op(EInteractionEndType::EInteractionEndType_Success) \
	op(EInteractionEndType::EInteractionEndType_Max) 

enum class EInteractionEndType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EInteractionEndType>();

#define FOREACH_ENUM_ECATEGORYFORMAT(op) \
	op(ECategoryFormat::Root) \
	op(ECategoryFormat::Difficulty) \
	op(ECategoryFormat::MapName) \
	op(ECategoryFormat::Scenario) 

enum class ECategoryFormat : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ECategoryFormat>();

#define FOREACH_ENUM_ERUNTYPE(op) \
	op(ERunType::ERunType_RunOnServer) \
	op(ERunType::ERunType_RunOnClient) \
	op(ERunType::ERunType_MutiCast) \
	op(ERunType::ERunType_MAX) 

enum class ERunType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ERunType>();

#define FOREACH_ENUM_ERESPAWNTYPE(op) \
	op(ERespawnType::ERespawnType_SpawnNewPawn) \
	op(ERespawnType::ERespawnType_SpawnCopyPawn) \
	op(ERespawnType::ERespawnType_UseOldPawn) 

enum class ERespawnType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ERespawnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
