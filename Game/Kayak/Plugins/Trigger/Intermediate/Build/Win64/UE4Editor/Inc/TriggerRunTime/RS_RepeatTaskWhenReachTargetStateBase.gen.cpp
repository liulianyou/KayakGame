// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRS_RepeatTaskWhenReachTargetStateBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRepeatStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTaskState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URS_RepeatTaskWhenReachTargetStateBase::execTriggerTaskStateCallbackForLoop)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Evaluator);
		P_GET_UBOOL(Z_Param_EvaluatorResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTaskStateCallbackForLoop(Z_Param_Evaluator,Z_Param_EvaluatorResult);
		P_NATIVE_END;
	}
	void URS_RepeatTaskWhenReachTargetStateBase::StaticRegisterNativesURS_RepeatTaskWhenReachTargetStateBase()
	{
		UClass* Class = URS_RepeatTaskWhenReachTargetStateBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerTaskStateCallbackForLoop", &URS_RepeatTaskWhenReachTargetStateBase::execTriggerTaskStateCallbackForLoop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics
	{
		struct RS_RepeatTaskWhenReachTargetStateBase_eventTriggerTaskStateCallbackForLoop_Parms
		{
			UEvaluatorBase* Evaluator;
			bool EvaluatorResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Evaluator;
		static void NewProp_EvaluatorResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EvaluatorResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_Evaluator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RS_RepeatTaskWhenReachTargetStateBase_eventTriggerTaskStateCallbackForLoop_Parms, Evaluator), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_Evaluator_MetaData)) };
	void Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_EvaluatorResult_SetBit(void* Obj)
	{
		((RS_RepeatTaskWhenReachTargetStateBase_eventTriggerTaskStateCallbackForLoop_Parms*)Obj)->EvaluatorResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_EvaluatorResult = { "EvaluatorResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RS_RepeatTaskWhenReachTargetStateBase_eventTriggerTaskStateCallbackForLoop_Parms), &Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_EvaluatorResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::NewProp_EvaluatorResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Callback function for the trigger task state.\n\x09* This callback is remove until this object is destroyed\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h" },
		{ "ToolTip", "* Callback function for the trigger task state.\n* This callback is remove until this object is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase, nullptr, "TriggerTaskStateCallbackForLoop", nullptr, nullptr, sizeof(RS_RepeatTaskWhenReachTargetStateBase_eventTriggerTaskStateCallbackForLoop_Parms), Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_NoRegister()
	{
		return URS_RepeatTaskWhenReachTargetStateBase::StaticClass();
	}
	struct Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatAutomatically_MetaData[];
#endif
		static void NewProp_RepeatAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RepeatAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckTaskState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckTaskState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerRepeatStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URS_RepeatTaskWhenReachTargetStateBase_TriggerTaskStateCallbackForLoop, "TriggerTaskStateCallbackForLoop" }, // 935263562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* Flag to check weather it will repeat the target object automatically.\n\x09* Please use it carefully as this maybe cause infinity loop of task execution\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h" },
		{ "ToolTip", "* Flag to check weather it will repeat the target object automatically.\n* Please use it carefully as this maybe cause infinity loop of task execution" },
	};
#endif
	void Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically_SetBit(void* Obj)
	{
		((URS_RepeatTaskWhenReachTargetStateBase*)Obj)->RepeatAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically = { "RepeatAutomatically", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URS_RepeatTaskWhenReachTargetStateBase), &Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_CheckTaskState_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "//Used to check weather this task has reached the target state\n" },
		{ "DisplayAfter", "RepeatAutomatically" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h" },
		{ "ToolTip", "Used to check weather this task has reached the target state" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_CheckTaskState = { "CheckTaskState", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URS_RepeatTaskWhenReachTargetStateBase, CheckTaskState), Z_Construct_UClass_UCheckTaskState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_CheckTaskState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_CheckTaskState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_RepeatAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::NewProp_CheckTaskState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URS_RepeatTaskWhenReachTargetStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::ClassParams = {
		&URS_RepeatTaskWhenReachTargetStateBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::PropPointers),
		0,
		0x04B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URS_RepeatTaskWhenReachTargetStateBase, 3238914240);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URS_RepeatTaskWhenReachTargetStateBase>()
	{
		return URS_RepeatTaskWhenReachTargetStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URS_RepeatTaskWhenReachTargetStateBase(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase, &URS_RepeatTaskWhenReachTargetStateBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URS_RepeatTaskWhenReachTargetStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URS_RepeatTaskWhenReachTargetStateBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URS_RepeatTaskWhenReachTargetStateBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
