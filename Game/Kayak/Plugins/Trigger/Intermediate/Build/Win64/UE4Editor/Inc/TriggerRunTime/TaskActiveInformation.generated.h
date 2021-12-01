// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_TaskActiveInformation_generated_h
#error "TaskActiveInformation.generated.h already included, missing '#pragma once' in TaskActiveInformation.h"
#endif
#define TRIGGERRUNTIME_TaskActiveInformation_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TaskActiveInformation_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Items() { return STRUCT_OFFSET(FTaskActivationInfoContainer, Items); } \
	FORCEINLINE static uint32 __PPO__TaskOwner() { return STRUCT_OFFSET(FTaskActivationInfoContainer, TaskOwner); } \
	typedef FFastArraySerializer Super;


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTaskActivationInfoContainer>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TaskActiveInformation_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTaskActivationInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTaskActivationInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TaskActiveInformation_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiationInfoHandle_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Handle() { return STRUCT_OFFSET(FActiationInfoHandle, Handle); }


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FActiationInfoHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TaskActiveInformation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
