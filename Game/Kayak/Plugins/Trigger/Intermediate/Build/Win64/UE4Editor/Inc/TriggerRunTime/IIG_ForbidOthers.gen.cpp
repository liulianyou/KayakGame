// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIIG_ForbidOthers() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionGenerationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenActive_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenActive();
// End Cross Module References
	DEFINE_FUNCTION(UIIG_ForbidOthersWhenInteracting::execIsInteracting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteracting();
		P_NATIVE_END;
	}
	void UIIG_ForbidOthersWhenInteracting::StaticRegisterNativesUIIG_ForbidOthersWhenInteracting()
	{
		UClass* Class = UIIG_ForbidOthersWhenInteracting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInteracting", &UIIG_ForbidOthersWhenInteracting::execIsInteracting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics
	{
		struct IIG_ForbidOthersWhenInteracting_eventIsInteracting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IIG_ForbidOthersWhenInteracting_eventIsInteracting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IIG_ForbidOthersWhenInteracting_eventIsInteracting_Parms), &Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Weather there is someone interacting\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "ToolTip", "Weather there is someone interacting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting, nullptr, "IsInteracting", nullptr, nullptr, sizeof(IIG_ForbidOthersWhenInteracting_eventIsInteracting_Parms), Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_NoRegister()
	{
		return UIIG_ForbidOthersWhenInteracting::StaticClass();
	}
	struct Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionGenerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIIG_ForbidOthersWhenInteracting_IsInteracting, "IsInteracting" }, // 579286275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* If someone is interacting the target actor then all others can not interact again\n*/" },
		{ "DisplayName", "ForbidOthersWhenInteracting" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "ToolTip", "* If someone is interacting the target actor then all others can not interact again" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIIG_ForbidOthersWhenInteracting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::ClassParams = {
		&UIIG_ForbidOthersWhenInteracting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIIG_ForbidOthersWhenInteracting, 3023950115);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UIIG_ForbidOthersWhenInteracting>()
	{
		return UIIG_ForbidOthersWhenInteracting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIIG_ForbidOthersWhenInteracting(Z_Construct_UClass_UIIG_ForbidOthersWhenInteracting, &UIIG_ForbidOthersWhenInteracting::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UIIG_ForbidOthersWhenInteracting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIIG_ForbidOthersWhenInteracting);
	DEFINE_FUNCTION(UIIG_ForbidOthersWhenActive::execIsActivatingInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivatingInteraction();
		P_NATIVE_END;
	}
	void UIIG_ForbidOthersWhenActive::StaticRegisterNativesUIIG_ForbidOthersWhenActive()
	{
		UClass* Class = UIIG_ForbidOthersWhenActive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActivatingInteraction", &UIIG_ForbidOthersWhenActive::execIsActivatingInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics
	{
		struct IIG_ForbidOthersWhenActive_eventIsActivatingInteraction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IIG_ForbidOthersWhenActive_eventIsActivatingInteraction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(IIG_ForbidOthersWhenActive_eventIsActivatingInteraction_Parms), &Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Weather there is someone active the target interact\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "ToolTip", "Weather there is someone active the target interact" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIIG_ForbidOthersWhenActive, nullptr, "IsActivatingInteraction", nullptr, nullptr, sizeof(IIG_ForbidOthersWhenActive_eventIsActivatingInteraction_Parms), Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenActive_NoRegister()
	{
		return UIIG_ForbidOthersWhenActive::StaticClass();
	}
	struct Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionGenerationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIIG_ForbidOthersWhenActive_IsActivatingInteraction, "IsActivatingInteraction" }, // 3824772074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* If the target interaction have been activated then all others can not active the target interaction again\n*/" },
		{ "DisplayName", "ForbidOthersWhenActive" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/IIG_ForbidOthers.h" },
		{ "ToolTip", "* If the target interaction have been activated then all others can not active the target interaction again" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIIG_ForbidOthersWhenActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::ClassParams = {
		&UIIG_ForbidOthersWhenActive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIIG_ForbidOthersWhenActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIIG_ForbidOthersWhenActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIIG_ForbidOthersWhenActive, 409707355);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UIIG_ForbidOthersWhenActive>()
	{
		return UIIG_ForbidOthersWhenActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIIG_ForbidOthersWhenActive(Z_Construct_UClass_UIIG_ForbidOthersWhenActive, &UIIG_ForbidOthersWhenActive::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UIIG_ForbidOthersWhenActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIIG_ForbidOthersWhenActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
