// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRS_RepeatTaskAfterStateDelay() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskAfterStateDelay();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics
	{
		struct RS_RepeatTaskAfterStateDelay_eventOnDelayTimerEvent_Parms
		{
			float LeftTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::NewProp_LeftTime = { "LeftTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RS_RepeatTaskAfterStateDelay_eventOnDelayTimerEvent_Parms, LeftTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::NewProp_LeftTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URS_RepeatTaskAfterStateDelay, nullptr, "OnDelayTimerEvent__DelegateSignature", nullptr, nullptr, sizeof(RS_RepeatTaskAfterStateDelay_eventOnDelayTimerEvent_Parms), Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URS_RepeatTaskAfterStateDelay::execHandleDelayTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDelayTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URS_RepeatTaskAfterStateDelay::execGetLeftTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLeftTime();
		P_NATIVE_END;
	}
	void URS_RepeatTaskAfterStateDelay::StaticRegisterNativesURS_RepeatTaskAfterStateDelay()
	{
		UClass* Class = URS_RepeatTaskAfterStateDelay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeftTime", &URS_RepeatTaskAfterStateDelay::execGetLeftTime },
			{ "HandleDelayTime", &URS_RepeatTaskAfterStateDelay::execHandleDelayTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics
	{
		struct RS_RepeatTaskAfterStateDelay_eventGetLeftTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RS_RepeatTaskAfterStateDelay_eventGetLeftTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URS_RepeatTaskAfterStateDelay, nullptr, "GetLeftTime", nullptr, nullptr, sizeof(RS_RepeatTaskAfterStateDelay_eventGetLeftTime_Parms), Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URS_RepeatTaskAfterStateDelay, nullptr, "HandleDelayTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_NoRegister()
	{
		return URS_RepeatTaskAfterStateDelay::StaticClass();
	}
	struct Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeToRepeat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTimeToRepeat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnDelayTimerUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDelayTimerUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_GetLeftTime, "GetLeftTime" }, // 2585231340
		{ &Z_Construct_UFunction_URS_RepeatTaskAfterStateDelay_HandleDelayTime, "HandleDelayTime" }, // 1499555799
		{ &Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature, "OnDelayTimerEvent__DelegateSignature" }, // 528234294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Repeat style, used to repeat task in a while after specified state.\n */" },
		{ "DisplayName", "RepeatTaskAfterSpecifiedStateDelay" },
		{ "IncludePath", "Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
		{ "ToolTip", "Repeat style, used to repeat task in a while after specified state." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_DelayTimeToRepeat_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "///after the delay time, will repeat task.\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
		{ "ToolTip", "after the delay time, will repeat task." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_DelayTimeToRepeat = { "DelayTimeToRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URS_RepeatTaskAfterStateDelay, DelayTimeToRepeat), METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_DelayTimeToRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_DelayTimeToRepeat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_OnDelayTimerUpdate_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "/** Called when delay timer tick. */" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskAfterStateDelay.h" },
		{ "ToolTip", "Called when delay timer tick." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_OnDelayTimerUpdate = { "OnDelayTimerUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URS_RepeatTaskAfterStateDelay, OnDelayTimerUpdate), Z_Construct_UDelegateFunction_URS_RepeatTaskAfterStateDelay_OnDelayTimerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_OnDelayTimerUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_OnDelayTimerUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_DelayTimeToRepeat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::NewProp_OnDelayTimerUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URS_RepeatTaskAfterStateDelay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::ClassParams = {
		&URS_RepeatTaskAfterStateDelay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URS_RepeatTaskAfterStateDelay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URS_RepeatTaskAfterStateDelay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URS_RepeatTaskAfterStateDelay, 1717740337);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URS_RepeatTaskAfterStateDelay>()
	{
		return URS_RepeatTaskAfterStateDelay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URS_RepeatTaskAfterStateDelay(Z_Construct_UClass_URS_RepeatTaskAfterStateDelay, &URS_RepeatTaskAfterStateDelay::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URS_RepeatTaskAfterStateDelay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URS_RepeatTaskAfterStateDelay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
