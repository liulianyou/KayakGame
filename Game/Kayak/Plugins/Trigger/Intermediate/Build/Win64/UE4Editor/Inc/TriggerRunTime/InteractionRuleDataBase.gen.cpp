// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleDataBase.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRuleDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionRuleDataBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UInteractionRuleDataBase::StaticRegisterNativesUInteractionRuleDataBase()
	{
		UClass* Class = UInteractionRuleDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &UInteractionRuleDataBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleDataBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleDataBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleDataBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionRuleDataBase_NoRegister()
	{
		return UInteractionRuleDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionRuleDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionRuleDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionRuleDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionRuleDataBase_Reset, "Reset" }, // 1853518330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleDataBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* The inner data that the interaction rule will change\n* As the BP don't support struct polymorphisms, I use the Object to implement it\n* \n* If you have properties need to seialized to be used in the RPC function with FInteractionRuleData you should make it has info (SFPWI):\n* eg. UPROPERTY(Meta=(ShortTooltip=SFPWI()))\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleDataBase.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleDataBase.h" },
		{ "ToolTip", "* The inner data that the interaction rule will change\n* As the BP don't support struct polymorphisms, I use the Object to implement it\n*\n* If you have properties need to seialized to be used in the RPC function with FInteractionRuleData you should make it has info (SFPWI):\n* eg. UPROPERTY(Meta=(ShortTooltip=SFPWI()))" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionRuleDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionRuleDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionRuleDataBase_Statics::ClassParams = {
		&UInteractionRuleDataBase::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionRuleDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionRuleDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionRuleDataBase, 3706380082);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionRuleDataBase>()
	{
		return UInteractionRuleDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionRuleDataBase(Z_Construct_UClass_UInteractionRuleDataBase, &UInteractionRuleDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionRuleDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionRuleDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
