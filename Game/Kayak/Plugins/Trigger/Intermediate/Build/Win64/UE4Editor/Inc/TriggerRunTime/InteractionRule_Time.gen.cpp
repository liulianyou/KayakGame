// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRule_Time() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRule_Time_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRule_Time();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionRule_Time::execGetMaxTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRule_Time::execSetConsumedTime)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumedTime(Z_Param_Causer,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRule_Time::execGetConsumedTime)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetConsumedTime(Z_Param_Causer);
		P_NATIVE_END;
	}
	void UInteractionRule_Time::StaticRegisterNativesUInteractionRule_Time()
	{
		UClass* Class = UInteractionRule_Time::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConsumedTime", &UInteractionRule_Time::execGetConsumedTime },
			{ "GetMaxTime", &UInteractionRule_Time::execGetMaxTime },
			{ "SetConsumedTime", &UInteractionRule_Time::execSetConsumedTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics
	{
		struct InteractionRule_Time_eventGetConsumedTime_Parms
		{
			AActor* Causer;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRule_Time_eventGetConsumedTime_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRule_Time_eventGetConsumedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRule_Time, nullptr, "GetConsumedTime", nullptr, nullptr, sizeof(InteractionRule_Time_eventGetConsumedTime_Parms), Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics
	{
		struct InteractionRule_Time_eventGetMaxTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRule_Time_eventGetMaxTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRule_Time, nullptr, "GetMaxTime", nullptr, nullptr, sizeof(InteractionRule_Time_eventGetMaxTime_Parms), Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics
	{
		struct InteractionRule_Time_eventSetConsumedTime_Parms
		{
			AActor* Causer;
			float Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRule_Time_eventSetConsumedTime_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRule_Time_eventSetConsumedTime_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRule_Time, nullptr, "SetConsumedTime", nullptr, nullptr, sizeof(InteractionRule_Time_eventSetConsumedTime_Parms), Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionRule_Time_NoRegister()
	{
		return UInteractionRule_Time::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionRule_Time_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseChangeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseChangeValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AffectRatio_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AffectRatio_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AffectRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseDeltaTimeAsBaseValue_MetaData[];
#endif
		static void NewProp_UseDeltaTimeAsBaseValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDeltaTimeAsBaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionRule_Time_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionRuleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionRule_Time_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionRule_Time_GetConsumedTime, "GetConsumedTime" }, // 1082981749
		{ &Z_Construct_UFunction_UInteractionRule_Time_GetMaxTime, "GetMaxTime" }, // 2096497987
		{ &Z_Construct_UFunction_UInteractionRule_Time_SetConsumedTime, "SetConsumedTime" }, // 2912628370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRule_Time_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_BaseChangeValue_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The base change value in one contribution\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
		{ "ToolTip", "The base change value in one contribution" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_BaseChangeValue = { "BaseChangeValue", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRule_Time, BaseChangeValue), METADATA_PARAMS(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_BaseChangeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_BaseChangeValue_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_ValueProp = { "AffectRatio", nullptr, (EPropertyFlags)0x0000000000000009, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_Key_KeyProp = { "AffectRatio_Key", nullptr, (EPropertyFlags)0x0004000000000009, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The affect ratio that the target Actor class will change the time\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
		{ "ToolTip", "The affect ratio that the target Actor class will change the time" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio = { "AffectRatio", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRule_Time, AffectRatio), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* flag to check weather will use delta time to as the base value which the change value of affect ratio will affect \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRule_Time.h" },
		{ "ToolTip", "* flag to check weather will use delta time to as the base value which the change value of affect ratio will affect" },
	};
#endif
	void Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue_SetBit(void* Obj)
	{
		((UInteractionRule_Time*)Obj)->UseDeltaTimeAsBaseValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue = { "UseDeltaTimeAsBaseValue", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionRule_Time), &Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionRule_Time_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_BaseChangeValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_AffectRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRule_Time_Statics::NewProp_UseDeltaTimeAsBaseValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionRule_Time_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionRule_Time>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionRule_Time_Statics::ClassParams = {
		&UInteractionRule_Time::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionRule_Time_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRule_Time_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionRule_Time_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRule_Time_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionRule_Time()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionRule_Time_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionRule_Time, 1190315557);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionRule_Time>()
	{
		return UInteractionRule_Time::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionRule_Time(Z_Construct_UClass_UInteractionRule_Time, &UInteractionRule_Time::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionRule_Time"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionRule_Time);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
