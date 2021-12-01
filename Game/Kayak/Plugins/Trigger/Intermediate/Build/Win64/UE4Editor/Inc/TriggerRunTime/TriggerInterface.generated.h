// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskComponentBase;
class ULevel;
class ITriggerInterface;
struct FVector;
struct FGuid;
#ifdef TRIGGERRUNTIME_TriggerInterface_generated_h
#error "TriggerInterface.generated.h already included, missing '#pragma once' in TriggerInterface.h"
#endif
#define TRIGGERRUNTIME_TriggerInterface_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTrigger);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTrigger);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_EVENT_PARMS \
	struct TriggerInterface_eventOnAddTriggerTaskComponent_Parms \
	{ \
		UTriggerTaskComponentBase* NewComponent; \
		UTriggerTaskComponentBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerInterface_eventOnAddTriggerTaskComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TriggerInterface_eventOnCanBeToggled_Parms \
	{ \
		bool Toggled; \
	}; \
	struct TriggerInterface_eventOnDuplicateTrigger_Parms \
	{ \
		ULevel* TargetLeve; \
		TScriptInterface<ITriggerInterface> ReturnValue; \
	}; \
	struct TriggerInterface_eventOnGetBoxBounds_Parms \
	{ \
		FVector Origin; \
		FVector HalfBoxExtent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerInterface_eventOnGetBoxBounds_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerInterface_eventOnGetTriggerTaskComponents_Parms \
	{ \
		TArray<UTriggerTaskComponentBase*> TaskComponents; \
	}; \
	struct TriggerInterface_eventOnGetUniqueRuntimeID_Parms \
	{ \
		int32 OutID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerInterface_eventOnGetUniqueRuntimeID_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms \
	{ \
		FGuid ComponentID; \
		bool IncludeChildrenComponent; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerInterface(UTriggerInterface&&); \
	TRIGGERRUNTIME_API UTriggerInterface(const UTriggerInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerInterface(UTriggerInterface&&); \
	TRIGGERRUNTIME_API UTriggerInterface(const UTriggerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerInterface(); \
	friend struct Z_Construct_UClass_UTriggerInterface_Statics; \
public: \
	DECLARE_CLASS(UTriggerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UTriggerInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerInterface() {} \
public: \
	typedef UTriggerInterface UClassType; \
	typedef ITriggerInterface ThisClass; \
	static UTriggerTaskComponentBase* Execute_OnAddTriggerTaskComponent(UObject* O, UTriggerTaskComponentBase* NewComponent); \
	static void Execute_OnCanBeToggled(const UObject* O, bool& Toggled); \
	static TScriptInterface<ITriggerInterface> Execute_OnDuplicateTrigger(UObject* O, ULevel* TargetLeve); \
	static bool Execute_OnGetBoxBounds(const UObject* O, FVector& Origin, FVector& HalfBoxExtent); \
	static void Execute_OnGetTriggerTaskComponents(const UObject* O, TArray<UTriggerTaskComponentBase*>& TaskComponents); \
	static bool Execute_OnGetUniqueRuntimeID(const UObject* O, int32& OutID); \
	static bool Execute_OnRemoveTriggerTaskComponentByID(UObject* O, FGuid const& ComponentID, bool IncludeChildrenComponent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~ITriggerInterface() {} \
public: \
	typedef UTriggerInterface UClassType; \
	typedef ITriggerInterface ThisClass; \
	static UTriggerTaskComponentBase* Execute_OnAddTriggerTaskComponent(UObject* O, UTriggerTaskComponentBase* NewComponent); \
	static void Execute_OnCanBeToggled(const UObject* O, bool& Toggled); \
	static TScriptInterface<ITriggerInterface> Execute_OnDuplicateTrigger(UObject* O, ULevel* TargetLeve); \
	static bool Execute_OnGetBoxBounds(const UObject* O, FVector& Origin, FVector& HalfBoxExtent); \
	static void Execute_OnGetTriggerTaskComponents(const UObject* O, TArray<UTriggerTaskComponentBase*>& TaskComponents); \
	static bool Execute_OnGetUniqueRuntimeID(const UObject* O, int32& OutID); \
	static bool Execute_OnRemoveTriggerTaskComponentByID(UObject* O, FGuid const& ComponentID, bool IncludeChildrenComponent); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_13_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
