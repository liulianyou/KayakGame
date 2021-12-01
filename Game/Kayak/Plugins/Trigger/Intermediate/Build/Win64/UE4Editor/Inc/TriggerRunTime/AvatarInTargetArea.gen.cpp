// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarInTargetArea() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInTargetArea_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInTargetArea();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAvatarInTargetArea::execOnActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInTargetArea::execOnActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UAvatarInTargetArea::StaticRegisterNativesUAvatarInTargetArea()
	{
		UClass* Class = UAvatarInTargetArea::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorBeginOverlap", &UAvatarInTargetArea::execOnActorBeginOverlap },
			{ "OnActorEndOverlap", &UAvatarInTargetArea::execOnActorEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics
	{
		struct AvatarInTargetArea_eventOnActorBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInTargetArea_eventOnActorBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInTargetArea_eventOnActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInTargetArea, nullptr, "OnActorBeginOverlap", nullptr, nullptr, sizeof(AvatarInTargetArea_eventOnActorBeginOverlap_Parms), Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics
	{
		struct AvatarInTargetArea_eventOnActorEndOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInTargetArea_eventOnActorEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInTargetArea_eventOnActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInTargetArea, nullptr, "OnActorEndOverlap", nullptr, nullptr, sizeof(AvatarInTargetArea_eventOnActorEndOverlap_Parms), Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvatarInTargetArea_NoRegister()
	{
		return UAvatarInTargetArea::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarInTargetArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TargetArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarInTargetArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAvatarInspectedDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAvatarInTargetArea_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvatarInTargetArea_OnActorBeginOverlap, "OnActorBeginOverlap" }, // 4064557090
		{ &Z_Construct_UFunction_UAvatarInTargetArea_OnActorEndOverlap, "OnActorEndOverlap" }, // 3378720848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarInTargetArea_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarInTargetArea_Statics::NewProp_TargetArea_MetaData[] = {
		{ "Category", "AvatarData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInTargetArea.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAvatarInTargetArea_Statics::NewProp_TargetArea = { "TargetArea", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarInTargetArea, TargetArea), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAvatarInTargetArea_Statics::NewProp_TargetArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarInTargetArea_Statics::NewProp_TargetArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvatarInTargetArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarInTargetArea_Statics::NewProp_TargetArea,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarInTargetArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarInTargetArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarInTargetArea_Statics::ClassParams = {
		&UAvatarInTargetArea::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAvatarInTargetArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarInTargetArea_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarInTargetArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarInTargetArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarInTargetArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarInTargetArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarInTargetArea, 1382532809);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAvatarInTargetArea>()
	{
		return UAvatarInTargetArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarInTargetArea(Z_Construct_UClass_UAvatarInTargetArea, &UAvatarInTargetArea::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAvatarInTargetArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarInTargetArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
