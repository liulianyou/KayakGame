// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Filter/TriggerFilter_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerFilter_Actor() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilter_Actor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilter_Actor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerFilter_Actor::execGetActorData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorData();
		P_NATIVE_END;
	}
	void UTriggerFilter_Actor::StaticRegisterNativesUTriggerFilter_Actor()
	{
		UClass* Class = UTriggerFilter_Actor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorData", &UTriggerFilter_Actor::execGetActorData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics
	{
		struct TriggerFilter_Actor_eventGetActorData_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerFilter_Actor_eventGetActorData_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilter_Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerFilter_Actor, nullptr, "GetActorData", nullptr, nullptr, sizeof(TriggerFilter_Actor_eventGetActorData_Parms), Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerFilter_Actor_NoRegister()
	{
		return UTriggerFilter_Actor::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerFilter_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerFilter_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerFilterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerFilter_Actor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerFilter_Actor_GetActorData, "GetActorData" }, // 267373400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerFilter_Actor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Just filter the actors which is one of the template actors\n*/" },
		{ "IncludePath", "Tool/Filter/TriggerFilter_Actor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilter_Actor.h" },
		{ "ToolTip", "* Just filter the actors which is one of the template actors" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* If the actor is one of these classes this filter will pass\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilter_Actor.h" },
		{ "ToolTip", "* If the actor is one of these classes this filter will pass" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerFilter_Actor, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerFilter_Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerFilter_Actor_Statics::NewProp_ActorClasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerFilter_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerFilter_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerFilter_Actor_Statics::ClassParams = {
		&UTriggerFilter_Actor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerFilter_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerFilter_Actor_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerFilter_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerFilter_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerFilter_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerFilter_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerFilter_Actor, 220811200);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerFilter_Actor>()
	{
		return UTriggerFilter_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerFilter_Actor(Z_Construct_UClass_UTriggerFilter_Actor, &UTriggerFilter_Actor::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerFilter_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerFilter_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
