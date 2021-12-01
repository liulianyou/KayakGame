// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOverSuccess_ActorOverlap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOverSuccess_ActorOverlap() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckActorOverlaped_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCheckGameOverSuccess_ActorOverlap::execOnOverlapEventCallback)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Evaluator);
		P_GET_UBOOL(Z_Param_EvaluatorResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEventCallback(Z_Param_Evaluator,Z_Param_EvaluatorResult);
		P_NATIVE_END;
	}
	void UCheckGameOverSuccess_ActorOverlap::StaticRegisterNativesUCheckGameOverSuccess_ActorOverlap()
	{
		UClass* Class = UCheckGameOverSuccess_ActorOverlap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapEventCallback", &UCheckGameOverSuccess_ActorOverlap::execOnOverlapEventCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics
	{
		struct CheckGameOverSuccess_ActorOverlap_eventOnOverlapEventCallback_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_Evaluator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverSuccess_ActorOverlap_eventOnOverlapEventCallback_Parms, Evaluator), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_Evaluator_MetaData)) };
	void Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_EvaluatorResult_SetBit(void* Obj)
	{
		((CheckGameOverSuccess_ActorOverlap_eventOnOverlapEventCallback_Parms*)Obj)->EvaluatorResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_EvaluatorResult = { "EvaluatorResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckGameOverSuccess_ActorOverlap_eventOnOverlapEventCallback_Parms), &Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_EvaluatorResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::NewProp_EvaluatorResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverSuccess_ActorOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap, nullptr, "OnOverlapEventCallback", nullptr, nullptr, sizeof(CheckGameOverSuccess_ActorOverlap_eventOnOverlapEventCallback_Parms), Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_NoRegister()
	{
		return UCheckGameOverSuccess_ActorOverlap::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGameOverSuccess_ActorOverlap_OnOverlapEventCallback, "OnOverlapEventCallback" }, // 1617438932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Just overlap actor overlap condition\n" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOverSuccess_ActorOverlap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverSuccess_ActorOverlap.h" },
		{ "ToolTip", "Just overlap actor overlap condition" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::NewProp_OverlapEvent_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverSuccess_ActorOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::NewProp_OverlapEvent = { "OverlapEvent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckGameOverSuccess_ActorOverlap, OverlapEvent), Z_Construct_UClass_UCheckActorOverlaped_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::NewProp_OverlapEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::NewProp_OverlapEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::NewProp_OverlapEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOverSuccess_ActorOverlap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::ClassParams = {
		&UCheckGameOverSuccess_ActorOverlap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOverSuccess_ActorOverlap, 61999734);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOverSuccess_ActorOverlap>()
	{
		return UCheckGameOverSuccess_ActorOverlap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOverSuccess_ActorOverlap(Z_Construct_UClass_UCheckGameOverSuccess_ActorOverlap, &UCheckGameOverSuccess_ActorOverlap::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOverSuccess_ActorOverlap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOverSuccess_ActorOverlap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
