// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/CheckActorOverlaped.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckActorOverlaped() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckActorOverlaped_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckActorOverlaped();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCheckActorOverlaped::execOnActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckActorOverlaped::execOnActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UCheckActorOverlaped::StaticRegisterNativesUCheckActorOverlaped()
	{
		UClass* Class = UCheckActorOverlaped::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorBeginOverlap", &UCheckActorOverlaped::execOnActorBeginOverlap },
			{ "OnActorEndOverlap", &UCheckActorOverlaped::execOnActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics
	{
		struct CheckActorOverlaped_eventOnActorBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckActorOverlaped_eventOnActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckActorOverlaped_eventOnActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckActorOverlaped, nullptr, "OnActorBeginOverlap", nullptr, nullptr, sizeof(CheckActorOverlaped_eventOnActorBeginOverlap_Parms), Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics
	{
		struct CheckActorOverlaped_eventOnActorEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckActorOverlaped_eventOnActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckActorOverlaped_eventOnActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckActorOverlaped, nullptr, "OnActorEndOverlap", nullptr, nullptr, sizeof(CheckActorOverlaped_eventOnActorEndOverlap_Parms), Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckActorOverlaped_NoRegister()
	{
		return UCheckActorOverlaped::StaticClass();
	}
	struct Z_Construct_UClass_UCheckActorOverlaped_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapFilters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapFilters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapFilters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapFilters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckActorOverlaped_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckActorOverlaped_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckActorOverlaped_OnActorBeginOverlap, "OnActorBeginOverlap" }, // 1107026642
		{ &Z_Construct_UFunction_UCheckActorOverlaped_OnActorEndOverlap, "OnActorEndOverlap" }, // 2888538666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckActorOverlaped_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/CheckActorOverlaped.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_Inner_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_Inner = { "OverlapFilters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerFilterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters = { "OverlapFilters", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckActorOverlaped, OverlapFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The target actor which we should check weather it have been overlapped\n\x09* If this value is none I will try to find the actor who contain this task immediately\n    */" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckActorOverlaped.h" },
		{ "ToolTip", "* The target actor which we should check weather it have been overlapped\n* If this value is none I will try to find the actor who contain this task immediately" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x001000000000000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckActorOverlaped, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckActorOverlaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_OverlapFilters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckActorOverlaped_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckActorOverlaped_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckActorOverlaped>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckActorOverlaped_Statics::ClassParams = {
		&UCheckActorOverlaped::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckActorOverlaped_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckActorOverlaped_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckActorOverlaped_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckActorOverlaped_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckActorOverlaped()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckActorOverlaped_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckActorOverlaped, 1366271335);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckActorOverlaped>()
	{
		return UCheckActorOverlaped::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckActorOverlaped(Z_Construct_UClass_UCheckActorOverlaped, &UCheckActorOverlaped::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckActorOverlaped"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckActorOverlaped);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
