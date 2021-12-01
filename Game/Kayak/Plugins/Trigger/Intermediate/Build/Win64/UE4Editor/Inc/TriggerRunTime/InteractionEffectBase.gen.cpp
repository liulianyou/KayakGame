// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionEffectBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionOpenStyle_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionOpenStyle();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataOpenStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionCloseStyle_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionCloseStyle();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataCloseStyleBase();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EInteractionEndType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEffectDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ERunType();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionOpenStyle::execSetIneractionInfo)
	{
		P_GET_STRUCT_REF(FInteractionInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIneractionInfo(Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionOpenStyle::execGetIneractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInteractionInfo*)Z_Param__Result=P_THIS->GetIneractionInfo();
		P_NATIVE_END;
	}
	void UInteractionOpenStyle::StaticRegisterNativesUInteractionOpenStyle()
	{
		UClass* Class = UInteractionOpenStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIneractionInfo", &UInteractionOpenStyle::execGetIneractionInfo },
			{ "SetIneractionInfo", &UInteractionOpenStyle::execSetIneractionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics
	{
		struct InteractionOpenStyle_eventGetIneractionInfo_Parms
		{
			FInteractionInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionOpenStyle_eventGetIneractionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionOpenStyle, nullptr, "GetIneractionInfo", nullptr, nullptr, sizeof(InteractionOpenStyle_eventGetIneractionInfo_Parms), Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics
	{
		struct InteractionOpenStyle_eventSetIneractionInfo_Parms
		{
			FInteractionInfo Info;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionOpenStyle_eventSetIneractionInfo_Parms, Info), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionOpenStyle, nullptr, "SetIneractionInfo", nullptr, nullptr, sizeof(InteractionOpenStyle_eventSetIneractionInfo_Parms), Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionOpenStyle_NoRegister()
	{
		return UInteractionOpenStyle::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionOpenStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionOpenStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffectDataOpenStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionOpenStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionOpenStyle_GetIneractionInfo, "GetIneractionInfo" }, // 3475424799
		{ &Z_Construct_UFunction_UInteractionOpenStyle_SetIneractionInfo, "SetIneractionInfo" }, // 3842488516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionOpenStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "Comment", "/*\n* This effect data close style is used to make TT_Interaction to tell its UIEffect how to Open itself\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "* This effect data close style is used to make TT_Interaction to tell its UIEffect how to Open itself" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionOpenStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionOpenStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionOpenStyle_Statics::ClassParams = {
		&UInteractionOpenStyle::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionOpenStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionOpenStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionOpenStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionOpenStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionOpenStyle, 3887636637);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionOpenStyle>()
	{
		return UInteractionOpenStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionOpenStyle(Z_Construct_UClass_UInteractionOpenStyle, &UInteractionOpenStyle::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionOpenStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionOpenStyle);
	DEFINE_FUNCTION(UInteractionCloseStyle::execSetRemoveInstance)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemoveInstance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionCloseStyle::execIsRemoveInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRemoveInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionCloseStyle::execSetEndType)
	{
		P_GET_ENUM(EInteractionEndType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndType(EInteractionEndType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionCloseStyle::execGetEndType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInteractionEndType*)Z_Param__Result=P_THIS->GetEndType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionCloseStyle::execSetIneractionInfo)
	{
		P_GET_STRUCT_REF(FInteractionInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIneractionInfo(Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionCloseStyle::execGetIneractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInteractionInfo*)Z_Param__Result=P_THIS->GetIneractionInfo();
		P_NATIVE_END;
	}
	void UInteractionCloseStyle::StaticRegisterNativesUInteractionCloseStyle()
	{
		UClass* Class = UInteractionCloseStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndType", &UInteractionCloseStyle::execGetEndType },
			{ "GetIneractionInfo", &UInteractionCloseStyle::execGetIneractionInfo },
			{ "IsRemoveInstance", &UInteractionCloseStyle::execIsRemoveInstance },
			{ "SetEndType", &UInteractionCloseStyle::execSetEndType },
			{ "SetIneractionInfo", &UInteractionCloseStyle::execSetIneractionInfo },
			{ "SetRemoveInstance", &UInteractionCloseStyle::execSetRemoveInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics
	{
		struct InteractionCloseStyle_eventGetEndType_Parms
		{
			EInteractionEndType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionCloseStyle_eventGetEndType_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "GetEndType", nullptr, nullptr, sizeof(InteractionCloseStyle_eventGetEndType_Parms), Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_GetEndType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_GetEndType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics
	{
		struct InteractionCloseStyle_eventGetIneractionInfo_Parms
		{
			FInteractionInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionCloseStyle_eventGetIneractionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "GetIneractionInfo", nullptr, nullptr, sizeof(InteractionCloseStyle_eventGetIneractionInfo_Parms), Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics
	{
		struct InteractionCloseStyle_eventIsRemoveInstance_Parms
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
	void Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionCloseStyle_eventIsRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionCloseStyle_eventIsRemoveInstance_Parms), &Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "IsRemoveInstance", nullptr, nullptr, sizeof(InteractionCloseStyle_eventIsRemoveInstance_Parms), Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics
	{
		struct InteractionCloseStyle_eventSetEndType_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionCloseStyle_eventSetEndType_Parms, Type), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "SetEndType", nullptr, nullptr, sizeof(InteractionCloseStyle_eventSetEndType_Parms), Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_SetEndType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_SetEndType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics
	{
		struct InteractionCloseStyle_eventSetIneractionInfo_Parms
		{
			FInteractionInfo Info;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionCloseStyle_eventSetIneractionInfo_Parms, Info), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::NewProp_Info_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "SetIneractionInfo", nullptr, nullptr, sizeof(InteractionCloseStyle_eventSetIneractionInfo_Parms), Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics
	{
		struct InteractionCloseStyle_eventSetRemoveInstance_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((InteractionCloseStyle_eventSetRemoveInstance_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionCloseStyle_eventSetRemoveInstance_Parms), &Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionCloseStyle, nullptr, "SetRemoveInstance", nullptr, nullptr, sizeof(InteractionCloseStyle_eventSetRemoveInstance_Parms), Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionCloseStyle_NoRegister()
	{
		return UInteractionCloseStyle::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionCloseStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionCloseStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffectDataCloseStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionCloseStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionCloseStyle_GetEndType, "GetEndType" }, // 105010802
		{ &Z_Construct_UFunction_UInteractionCloseStyle_GetIneractionInfo, "GetIneractionInfo" }, // 308804988
		{ &Z_Construct_UFunction_UInteractionCloseStyle_IsRemoveInstance, "IsRemoveInstance" }, // 2444468753
		{ &Z_Construct_UFunction_UInteractionCloseStyle_SetEndType, "SetEndType" }, // 1853913537
		{ &Z_Construct_UFunction_UInteractionCloseStyle_SetIneractionInfo, "SetIneractionInfo" }, // 3812920932
		{ &Z_Construct_UFunction_UInteractionCloseStyle_SetRemoveInstance, "SetRemoveInstance" }, // 2996734836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionCloseStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "Comment", "/*\n* This effect data close style is used to make TT_Interaction to tell its UIEffect how to close itself\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "* This effect data close style is used to make TT_Interaction to tell its UIEffect how to close itself" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionCloseStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionCloseStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionCloseStyle_Statics::ClassParams = {
		&UInteractionCloseStyle::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionCloseStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionCloseStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionCloseStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionCloseStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionCloseStyle, 3491684828);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionCloseStyle>()
	{
		return UInteractionCloseStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionCloseStyle(Z_Construct_UClass_UInteractionCloseStyle, &UInteractionCloseStyle::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionCloseStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionCloseStyle);
	DEFINE_FUNCTION(UInteractionEffectBase::execGetCurrentVaildInteractionTask)
	{
		P_GET_OBJECT(UObject,Z_Param_TargetObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetCurrentVaildInteractionTask(Z_Param_TargetObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionEffectBase::execCheckInteractionSurpportForEnd)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UTT_Interaction,Z_Param_Task);
		P_GET_ENUM(EInteractionEndType,Z_Param_EndType);
		P_GET_UBOOL(Z_Param_RemoveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInteractionSurpportForEnd(Z_Param_Target,Z_Param_Task,EInteractionEndType(Z_Param_EndType),Z_Param_RemoveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionEffectBase::execCheckInteractionSupportForUpdate)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UInteractionRuleDataBase,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInteractionSupportForUpdate(Z_Param_Target,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionEffectBase::execCheckInteractionSupportForInitialize)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TriggerTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInteractionSupportForInitialize(Z_Param_Target,Z_Param_TriggerTask);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionEffectBase_OnValueInInteractionRuleChanged = FName(TEXT("OnValueInInteractionRuleChanged"));
	void UInteractionEffectBase::OnValueInInteractionRuleChanged(AActor* Causer, UInteractionRuleDataBase* Data)
	{
		InteractionEffectBase_eventOnValueInInteractionRuleChanged_Parms Parms;
		Parms.Causer=Causer;
		Parms.Data=Data;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionEffectBase_OnValueInInteractionRuleChanged),&Parms);
	}
	void UInteractionEffectBase::StaticRegisterNativesUInteractionEffectBase()
	{
		UClass* Class = UInteractionEffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckInteractionSupportForInitialize", &UInteractionEffectBase::execCheckInteractionSupportForInitialize },
			{ "CheckInteractionSupportForUpdate", &UInteractionEffectBase::execCheckInteractionSupportForUpdate },
			{ "CheckInteractionSurpportForEnd", &UInteractionEffectBase::execCheckInteractionSurpportForEnd },
			{ "GetCurrentVaildInteractionTask", &UInteractionEffectBase::execGetCurrentVaildInteractionTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics
	{
		struct InteractionEffectBase_eventCheckInteractionSupportForInitialize_Parms
		{
			UObject* Target;
			UTriggerTaskBase* TriggerTask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSupportForInitialize_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSupportForInitialize_Parms, TriggerTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_TriggerTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::NewProp_TriggerTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to check weather the interaction support is implemented for the Target object  \n\x09* The following three functions stand for Initialize, Update(also can treat it as tick function), Finished \n\x09*\n\x09* Notice: These function will not called in the base function as the base function don't contain any target object\n\x09*/" },
		{ "CPP_Default_TriggerTask", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "* Try to check weather the interaction support is implemented for the Target object\n* The following three functions stand for Initialize, Update(also can treat it as tick function), Finished\n*\n* Notice: These function will not called in the base function as the base function don't contain any target object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffectBase, nullptr, "CheckInteractionSupportForInitialize", nullptr, nullptr, sizeof(InteractionEffectBase_eventCheckInteractionSupportForInitialize_Parms), Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics
	{
		struct InteractionEffectBase_eventCheckInteractionSupportForUpdate_Parms
		{
			UObject* Target;
			UInteractionRuleDataBase* Data;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSupportForUpdate_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Data_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSupportForUpdate_Parms, Data), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffectBase, nullptr, "CheckInteractionSupportForUpdate", nullptr, nullptr, sizeof(InteractionEffectBase_eventCheckInteractionSupportForUpdate_Parms), Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics
	{
		struct InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms
		{
			UObject* Target;
			UTT_Interaction* Task;
			EInteractionEndType EndType;
			bool RemoveInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static void NewProp_RemoveInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms, Task), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_RemoveInstance_SetBit(void* Obj)
	{
		((InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms*)Obj)->RemoveInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_RemoveInstance = { "RemoveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms), &Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_RemoveInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_EndType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::NewProp_RemoveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffectBase, nullptr, "CheckInteractionSurpportForEnd", nullptr, nullptr, sizeof(InteractionEffectBase_eventCheckInteractionSurpportForEnd_Parms), Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics
	{
		struct InteractionEffectBase_eventGetCurrentVaildInteractionTask_Parms
		{
			UObject* TargetObject;
			UTriggerTaskBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_TargetObject = { "TargetObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventGetCurrentVaildInteractionTask_Parms, TargetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventGetCurrentVaildInteractionTask_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_TargetObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* As sometimes one player may toggle more than one interaction task,\n\x09* And one of its effect is executive which means the target effect will only exist one instance for each interaction task\n\x09* this means one effect may refer to multiply interaction task.\n\x09* So I need to determine which is the current valid task that this effect can process or inspector to\n\x09*\n\x09* @param Target the actual object that this effect created\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "* As sometimes one player may toggle more than one interaction task,\n* And one of its effect is executive which means the target effect will only exist one instance for each interaction task\n* this means one effect may refer to multiply interaction task.\n* So I need to determine which is the current valid task that this effect can process or inspector to\n*\n* @param Target the actual object that this effect created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffectBase, nullptr, "GetCurrentVaildInteractionTask", nullptr, nullptr, sizeof(InteractionEffectBase_eventGetCurrentVaildInteractionTask_Parms), Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventOnValueInInteractionRuleChanged_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Data_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionEffectBase_eventOnValueInInteractionRuleChanged_Parms, Data), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionEffectBase, nullptr, "OnValueInInteractionRuleChanged", nullptr, nullptr, sizeof(InteractionEffectBase_eventOnValueInInteractionRuleChanged_Parms), Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionEffectBase_NoRegister()
	{
		return UInteractionEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RunType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerEffectDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionEffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForInitialize, "CheckInteractionSupportForInitialize" }, // 1908226051
		{ &Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSupportForUpdate, "CheckInteractionSupportForUpdate" }, // 3456453103
		{ &Z_Construct_UFunction_UInteractionEffectBase_CheckInteractionSurpportForEnd, "CheckInteractionSurpportForEnd" }, // 198914894
		{ &Z_Construct_UFunction_UInteractionEffectBase_GetCurrentVaildInteractionTask, "GetCurrentVaildInteractionTask" }, // 239613308
		{ &Z_Construct_UFunction_UInteractionEffectBase_OnValueInInteractionRuleChanged, "OnValueInInteractionRuleChanged" }, // 844674711
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "InteractionEffect" },
		{ "Comment", "/*\n* The base effect for the interaction task, all these effect should be run on the client.\n* \n* The derived class must implement the below functions:\n*\x09OpenEffect : This function is used to open this effect,\n*\x09""CloseEffect : This function is used to close this effect,\n*\x09ValueInInteractionRuleChanged : This function used to change the effect when some status is changed in the interaction rule\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "* The base effect for the interaction task, all these effect should be run on the client.\n*\n* The derived class must implement the below functions:\n*      OpenEffect : This function is used to open this effect,\n*      CloseEffect : This function is used to close this effect,\n*      ValueInInteractionRuleChanged : This function used to change the effect when some status is changed in the interaction rule" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType_MetaData[] = {
		{ "Category", "InteractionEffect" },
		{ "Comment", "//Check weather this effect will active on client or server or both of them\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffectBase.h" },
		{ "ToolTip", "Check weather this effect will active on client or server or both of them" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType = { "RunType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionEffectBase, RunType), Z_Construct_UEnum_TriggerRunTime_ERunType, METADATA_PARAMS(Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionEffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffectBase_Statics::NewProp_RunType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionEffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionEffectBase_Statics::ClassParams = {
		&UInteractionEffectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffectBase_Statics::PropPointers),
		0,
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionEffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionEffectBase, 2314439967);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionEffectBase>()
	{
		return UInteractionEffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionEffectBase(Z_Construct_UClass_UInteractionEffectBase, &UInteractionEffectBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
