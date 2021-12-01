// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/InteractionActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionActorBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AInteractionActorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AInteractionActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EInteractionEndType();
// End Cross Module References
	DEFINE_FUNCTION(AInteractionActorBase::execEndInteract)
	{
		P_GET_ENUM(EInteractionEndType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndInteract(EInteractionEndType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionActorBase::execInteractionValueChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractionValueChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractionActorBase::execStartInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInteract();
		P_NATIVE_END;
	}
	void AInteractionActorBase::StaticRegisterNativesAInteractionActorBase()
	{
		UClass* Class = AInteractionActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndInteract", &AInteractionActorBase::execEndInteract },
			{ "InteractionValueChanged", &AInteractionActorBase::execInteractionValueChanged },
			{ "StartInteract", &AInteractionActorBase::execStartInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics
	{
		struct InteractionActorBase_eventEndInteract_Parms
		{
			EInteractionEndType Type;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionActorBase_eventEndInteract_Parms, Type), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//After this invocation this actor can not response to the player's interaction\n" },
		{ "ModuleRelativePath", "Public/Tool/InteractionActorBase.h" },
		{ "ToolTip", "After this invocation this actor can not response to the player's interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActorBase, nullptr, "EndInteract", nullptr, nullptr, sizeof(InteractionActorBase_eventEndInteract_Parms), Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionActorBase_EndInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionActorBase_EndInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/InteractionActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActorBase, nullptr, "InteractionValueChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//After this invocation this actor can be affected by the player's interaction\n" },
		{ "ModuleRelativePath", "Public/Tool/InteractionActorBase.h" },
		{ "ToolTip", "After this invocation this actor can be affected by the player's interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActorBase, nullptr, "StartInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionActorBase_StartInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionActorBase_StartInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractionActorBase_NoRegister()
	{
		return AInteractionActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionActorBase_EndInteract, "EndInteract" }, // 1346857280
		{ &Z_Construct_UFunction_AInteractionActorBase_InteractionValueChanged, "InteractionValueChanged" }, // 2710887261
		{ &Z_Construct_UFunction_AInteractionActorBase_StartInteract, "StartInteract" }, // 676941611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/InteractionActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/InteractionActorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionActorBase_Statics::ClassParams = {
		&AInteractionActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionActorBase, 2020957769);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<AInteractionActorBase>()
	{
		return AInteractionActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionActorBase(Z_Construct_UClass_AInteractionActorBase, &AInteractionActorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("AInteractionActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
