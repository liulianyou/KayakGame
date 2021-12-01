// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckAvatarAttribute() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckAvatarAttribute_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckAvatarAttribute();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarAccessRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventAvatarsChangedEvent_Parms
		{
			TArray<UObject*> Avatars;
			bool bIsAdded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static void NewProp_bIsAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventAvatarsChangedEvent_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars_MetaData)) };
	void Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_bIsAdded_SetBit(void* Obj)
	{
		((_Script_TriggerRunTime_eventAvatarsChangedEvent_Parms*)Obj)->bIsAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_bIsAdded = { "bIsAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TriggerRunTime_eventAvatarsChangedEvent_Parms), &Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_bIsAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_Avatars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::NewProp_bIsAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "AvatarsChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventAvatarsChangedEvent_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCheckAvatarAttribute::execGetAvatars)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avatars);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAvatars(Z_Param_Out_Avatars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckAvatarAttribute::execGetAvatorAccessRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAvatarAccessRuleBase**)Z_Param__Result=P_THIS->GetAvatorAccessRule();
		P_NATIVE_END;
	}
	void UCheckAvatarAttribute::StaticRegisterNativesUCheckAvatarAttribute()
	{
		UClass* Class = UCheckAvatarAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvatars", &UCheckAvatarAttribute::execGetAvatars },
			{ "GetAvatorAccessRule", &UCheckAvatarAttribute::execGetAvatorAccessRule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics
	{
		struct CheckAvatarAttribute_eventGetAvatars_Parms
		{
			TArray<UObject*> Avatars;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckAvatarAttribute_eventGetAvatars_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get All avatars that this condition need to inspect,\n\x09* This function only get avatars at current time, the new created avatar will not included\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "* Get All avatars that this condition need to inspect,\n* This function only get avatars at current time, the new created avatar will not included" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckAvatarAttribute, nullptr, "GetAvatars", nullptr, nullptr, sizeof(CheckAvatarAttribute_eventGetAvatars_Parms), Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics
	{
		struct CheckAvatarAttribute_eventGetAvatorAccessRule_Parms
		{
			UAvatarAccessRuleBase* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckAvatarAttribute_eventGetAvatorAccessRule_Parms, ReturnValue), Z_Construct_UClass_UAvatarAccessRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Override Evaluator Base\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "Override Evaluator Base" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckAvatarAttribute, nullptr, "GetAvatorAccessRule", nullptr, nullptr, sizeof(CheckAvatarAttribute_eventGetAvatorAccessRule_Parms), Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckAvatarAttribute_NoRegister()
	{
		return UCheckAvatarAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UCheckAvatarAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatorAccessRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvatorAccessRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectedDatas_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InspectedDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InspectedDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InspectedDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarsChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarsChangedEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckAvatarAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckAvatarAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatars, "GetAvatars" }, // 1508001325
		{ &Z_Construct_UFunction_UCheckAvatarAttribute_GetAvatorAccessRule, "GetAvatorAccessRule" }, // 275833273
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAvatarAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatorAccessRule_MetaData[] = {
		{ "Category", "CheckAvatarAttribute" },
		{ "Comment", "/*\n\x09* How to get the avatars\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "* How to get the avatars" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatorAccessRule = { "AvatorAccessRule", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckAvatarAttribute, AvatorAccessRule), Z_Construct_UClass_UAvatarAccessRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatorAccessRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatorAccessRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_Inner_MetaData[] = {
		{ "Category", "CheckAvatarAttribute" },
		{ "Comment", "/*\n\x09* The attribute data that this condition need to inspect.\n\x09* This condition can pass only when all the data below meet the target condition\n\x09* When there is no data then this condition will always pass\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "* The attribute data that this condition need to inspect.\n* This condition can pass only when all the data below meet the target condition\n* When there is no data then this condition will always pass" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_Inner = { "InspectedDatas", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAvatarInspectedDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_MetaData[] = {
		{ "Category", "CheckAvatarAttribute" },
		{ "Comment", "/*\n\x09* The attribute data that this condition need to inspect.\n\x09* This condition can pass only when all the data below meet the target condition\n\x09* When there is no data then this condition will always pass\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "* The attribute data that this condition need to inspect.\n* This condition can pass only when all the data below meet the target condition\n* When there is no data then this condition will always pass" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas = { "InspectedDatas", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckAvatarAttribute, InspectedDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatarsChangedEvent_MetaData[] = {
		{ "Comment", "/*\n\x09* Invoked when the avatar access rule find new avatars\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h" },
		{ "ToolTip", "* Invoked when the avatar access rule find new avatars" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatarsChangedEvent = { "AvatarsChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckAvatarAttribute, AvatarsChangedEvent), Z_Construct_UDelegateFunction_TriggerRunTime_AvatarsChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatarsChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatarsChangedEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckAvatarAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatorAccessRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_InspectedDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAvatarAttribute_Statics::NewProp_AvatarsChangedEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckAvatarAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckAvatarAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckAvatarAttribute_Statics::ClassParams = {
		&UCheckAvatarAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckAvatarAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckAvatarAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAvatarAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckAvatarAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckAvatarAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckAvatarAttribute, 2945171201);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckAvatarAttribute>()
	{
		return UCheckAvatarAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckAvatarAttribute(Z_Construct_UClass_UCheckAvatarAttribute, &UCheckAvatarAttribute::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckAvatarAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckAvatarAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
