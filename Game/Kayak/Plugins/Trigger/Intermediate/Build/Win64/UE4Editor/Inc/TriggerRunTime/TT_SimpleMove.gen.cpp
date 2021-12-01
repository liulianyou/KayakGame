// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/MoveTask/TT_SimpleMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_SimpleMove() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_SimpleMove_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_SimpleMove();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_MoveBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTT_SimpleMove::execRemoveOverlapEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOverlapEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_SimpleMove::execOnTargetActorOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTargetActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UTT_SimpleMove::StaticRegisterNativesUTT_SimpleMove()
	{
		UClass* Class = UTT_SimpleMove::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTargetActorOverlap", &UTT_SimpleMove::execOnTargetActorOverlap },
			{ "RemoveOverlapEvent", &UTT_SimpleMove::execRemoveOverlapEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics
	{
		struct TT_SimpleMove_eventOnTargetActorOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_SimpleMove_eventOnTargetActorOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_SimpleMove_eventOnTargetActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/MoveTask/TT_SimpleMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_SimpleMove, nullptr, "OnTargetActorOverlap", nullptr, nullptr, sizeof(TT_SimpleMove_eventOnTargetActorOverlap_Parms), Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Remove the overlap event from the target actor\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/MoveTask/TT_SimpleMove.h" },
		{ "ToolTip", "Remove the overlap event from the target actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_SimpleMove, nullptr, "RemoveOverlapEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_SimpleMove_NoRegister()
	{
		return UTT_SimpleMove::StaticClass();
	}
	struct Z_Construct_UClass_UTT_SimpleMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_SimpleMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTT_MoveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_SimpleMove_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_SimpleMove_OnTargetActorOverlap, "OnTargetActorOverlap" }, // 1839400359
		{ &Z_Construct_UFunction_UTT_SimpleMove_RemoveOverlapEvent, "RemoveOverlapEvent" }, // 2180549533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_SimpleMove_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/MoveTask/TT_SimpleMove.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/MoveTask/TT_SimpleMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_SimpleMove_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Move" },
		{ "Comment", "/*\n\x09* The actor which the player need to touch to finish this task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/MoveTask/TT_SimpleMove.h" },
		{ "ToolTip", "* The actor which the player need to touch to finish this task" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTT_SimpleMove_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_SimpleMove, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_SimpleMove_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SimpleMove_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_SimpleMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_SimpleMove_Statics::NewProp_TargetActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_SimpleMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_SimpleMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_SimpleMove_Statics::ClassParams = {
		&UTT_SimpleMove::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_SimpleMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SimpleMove_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_SimpleMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SimpleMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_SimpleMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_SimpleMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_SimpleMove, 3462370723);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_SimpleMove>()
	{
		return UTT_SimpleMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_SimpleMove(Z_Construct_UClass_UTT_SimpleMove, &UTT_SimpleMove::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_SimpleMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_SimpleMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
