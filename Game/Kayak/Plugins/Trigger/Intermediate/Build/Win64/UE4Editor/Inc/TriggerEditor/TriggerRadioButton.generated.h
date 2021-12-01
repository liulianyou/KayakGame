// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskComponentBase;
class UObject;
#ifdef TRIGGEREDITOR_TriggerRadioButton_generated_h
#error "TriggerRadioButton.generated.h already included, missing '#pragma once' in TriggerRadioButton.h"
#endif
#define TRIGGEREDITOR_TriggerRadioButton_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_11_DELEGATE \
struct _Script_TriggerEditor_eventOnTriggerRadioButtonSelectChanged_Parms \
{ \
	int32 NewSelectIndex; \
}; \
static inline void FOnTriggerRadioButtonSelectChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerRadioButtonSelectChanged, int32 NewSelectIndex) \
{ \
	_Script_TriggerEditor_eventOnTriggerRadioButtonSelectChanged_Parms Parms; \
	Parms.NewSelectIndex=NewSelectIndex; \
	OnTriggerRadioButtonSelectChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTextArrByTriggerComponents); \
	DECLARE_FUNCTION(execSetTextArrByObjects);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTextArrByTriggerComponents); \
	DECLARE_FUNCTION(execSetTextArrByObjects);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerRadioButton(); \
	friend struct Z_Construct_UClass_UTriggerRadioButton_Statics; \
public: \
	DECLARE_CLASS(UTriggerRadioButton, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRadioButton)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerRadioButton(); \
	friend struct Z_Construct_UClass_UTriggerRadioButton_Statics; \
public: \
	DECLARE_CLASS(UTriggerRadioButton, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerRadioButton)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRadioButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRadioButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRadioButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRadioButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRadioButton(UTriggerRadioButton&&); \
	NO_API UTriggerRadioButton(const UTriggerRadioButton&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerRadioButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerRadioButton(UTriggerRadioButton&&); \
	NO_API UTriggerRadioButton(const UTriggerRadioButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerRadioButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerRadioButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerRadioButton)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_16_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerRadioButton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGEREDITOR_API UClass* StaticClass<class UTriggerRadioButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerRadioButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
