// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/DelayTime/TT_DelayTime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_DelayTime() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_DelayTime_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_DelayTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventTriggerTaskDelayTimeUpdate_Parms
		{
			float PassedTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PassedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::NewProp_PassedTime = { "PassedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventTriggerTaskDelayTimeUpdate_Parms, PassedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::NewProp_PassedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "TriggerTaskDelayTimeUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventTriggerTaskDelayTimeUpdate_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTT_DelayTime::execCanBeStopped)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeStopped_Implementation(Z_Param_Causer);
		P_NATIVE_END;
	}
	static FName NAME_UTT_DelayTime_CanBeStopped = FName(TEXT("CanBeStopped"));
	bool UTT_DelayTime::CanBeStopped(UOperationInformationBase* Causer)
	{
		TT_DelayTime_eventCanBeStopped_Parms Parms;
		Parms.Causer=Causer;
		ProcessEvent(FindFunctionChecked(NAME_UTT_DelayTime_CanBeStopped),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTT_DelayTime_OnDelayTimeUpdate = FName(TEXT("OnDelayTimeUpdate"));
	void UTT_DelayTime::OnDelayTimeUpdate(float PassedTime)
	{
		TT_DelayTime_eventOnDelayTimeUpdate_Parms Parms;
		Parms.PassedTime=PassedTime;
		ProcessEvent(FindFunctionChecked(NAME_UTT_DelayTime_OnDelayTimeUpdate),&Parms);
	}
	void UTT_DelayTime::StaticRegisterNativesUTT_DelayTime()
	{
		UClass* Class = UTT_DelayTime::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeStopped", &UTT_DelayTime::execCanBeStopped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_Causer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_DelayTime_eventCanBeStopped_Parms, Causer), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_Causer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_Causer_MetaData)) };
	void Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TT_DelayTime_eventCanBeStopped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_DelayTime_eventCanBeStopped_Parms), &Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::Function_MetaDataParams[] = {
		{ "Category", "DelayTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_DelayTime, nullptr, "CanBeStopped", nullptr, nullptr, sizeof(TT_DelayTime_eventCanBeStopped_Parms), Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_DelayTime_CanBeStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_DelayTime_CanBeStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PassedTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::NewProp_PassedTime = { "PassedTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_DelayTime_eventOnDelayTimeUpdate_Parms, PassedTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::NewProp_PassedTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "DelayTime" },
		{ "Comment", "//Invoked when the delay time update\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
		{ "ToolTip", "Invoked when the delay time update" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_DelayTime, nullptr, "OnDelayTimeUpdate", nullptr, nullptr, sizeof(TT_DelayTime_eventOnDelayTimeUpdate_Parms), Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_DelayTime_NoRegister()
	{
		return UTT_DelayTime::StaticClass();
	}
	struct Z_Construct_UClass_UTT_DelayTime_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTimeUpdateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DelayTimeUpdateDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_DelayTime_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_DelayTime_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_DelayTime_CanBeStopped, "CanBeStopped" }, // 3399166408
		{ &Z_Construct_UFunction_UTT_DelayTime_OnDelayTimeUpdate, "OnDelayTimeUpdate" }, // 683371874
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_DelayTime_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/DelayTime/TT_DelayTime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "DelayTime" },
		{ "Comment", "/*\n\x09* How much time need to be delayed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
		{ "ToolTip", "* How much time need to be delayed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_DelayTime, DelayTime), METADATA_PARAMS(Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTimeUpdateDelegate_MetaData[] = {
		{ "Comment", "/*\n\x09* The delegate to be executed how much the time have been delayed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/DelayTime/TT_DelayTime.h" },
		{ "ToolTip", "* The delegate to be executed how much the time have been delayed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTimeUpdateDelegate = { "DelayTimeUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_DelayTime, DelayTimeUpdateDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskDelayTimeUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTimeUpdateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTimeUpdateDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_DelayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_DelayTime_Statics::NewProp_DelayTimeUpdateDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_DelayTime_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_DelayTime>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_DelayTime_Statics::ClassParams = {
		&UTT_DelayTime::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_DelayTime_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_DelayTime_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_DelayTime_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_DelayTime_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_DelayTime()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_DelayTime_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_DelayTime, 1362362758);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_DelayTime>()
	{
		return UTT_DelayTime::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_DelayTime(Z_Construct_UClass_UTT_DelayTime, &UTT_DelayTime::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_DelayTime"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_DelayTime);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
