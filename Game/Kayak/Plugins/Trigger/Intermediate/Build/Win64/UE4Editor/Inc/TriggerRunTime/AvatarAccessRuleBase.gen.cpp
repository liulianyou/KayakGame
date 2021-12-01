// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarAccessRuleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarAccessRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarAccessRuleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAvatarAccessRuleBase::execNotifyOwnerNewAvatarRemoved)
	{
		P_GET_OBJECT(UObject,Z_Param_OldAvatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyOwnerNewAvatarRemoved(Z_Param_OldAvatar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarAccessRuleBase::execNotifyOwnerNewAvatarAdded)
	{
		P_GET_OBJECT(UObject,Z_Param_NewAvatar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyOwnerNewAvatarAdded(Z_Param_NewAvatar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarAccessRuleBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarAccessRuleBase::execGetTargetAvatars)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avatars);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetAvatars_Implementation(Z_Param_Out_Avatars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarAccessRuleBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UAvatarAccessRuleBase_GetTargetAvatars = FName(TEXT("GetTargetAvatars"));
	void UAvatarAccessRuleBase::GetTargetAvatars(TArray<UObject*>& Avatars) const
	{
		AvatarAccessRuleBase_eventGetTargetAvatars_Parms Parms;
		Parms.Avatars=Avatars;
		const_cast<UAvatarAccessRuleBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAvatarAccessRuleBase_GetTargetAvatars),&Parms);
		Avatars=Parms.Avatars;
	}
	static FName NAME_UAvatarAccessRuleBase_OnDeInitialize = FName(TEXT("OnDeInitialize"));
	void UAvatarAccessRuleBase::OnDeInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAvatarAccessRuleBase_OnDeInitialize),NULL);
	}
	static FName NAME_UAvatarAccessRuleBase_OnInitialize = FName(TEXT("OnInitialize"));
	void UAvatarAccessRuleBase::OnInitialize(UObject* Owner)
	{
		AvatarAccessRuleBase_eventOnInitialize_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarAccessRuleBase_OnInitialize),&Parms);
	}
	static FName NAME_UAvatarAccessRuleBase_Reset = FName(TEXT("Reset"));
	void UAvatarAccessRuleBase::Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAvatarAccessRuleBase_Reset),NULL);
	}
	void UAvatarAccessRuleBase::StaticRegisterNativesUAvatarAccessRuleBase()
	{
		UClass* Class = UAvatarAccessRuleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwner", &UAvatarAccessRuleBase::execGetOwner },
			{ "GetTargetAvatars", &UAvatarAccessRuleBase::execGetTargetAvatars },
			{ "NotifyOwnerNewAvatarAdded", &UAvatarAccessRuleBase::execNotifyOwnerNewAvatarAdded },
			{ "NotifyOwnerNewAvatarRemoved", &UAvatarAccessRuleBase::execNotifyOwnerNewAvatarRemoved },
			{ "Reset", &UAvatarAccessRuleBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics
	{
		struct AvatarAccessRuleBase_eventGetOwner_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarAccessRuleBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(AvatarAccessRuleBase_eventGetOwner_Parms), Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarAccessRuleBase_eventGetTargetAvatars_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Defines how to get the valid avatars which will be used by the CheckAvatarAttribute conditions \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "* Defines how to get the valid avatars which will be used by the CheckAvatarAttribute conditions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "GetTargetAvatars", nullptr, nullptr, sizeof(AvatarAccessRuleBase_eventGetTargetAvatars_Parms), Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics
	{
		struct AvatarAccessRuleBase_eventNotifyOwnerNewAvatarAdded_Parms
		{
			UObject* NewAvatar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewAvatar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::NewProp_NewAvatar = { "NewAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarAccessRuleBase_eventNotifyOwnerNewAvatarAdded_Parms, NewAvatar), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::NewProp_NewAvatar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When new avatar is added then notify the owner that new avatar is added\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "* When new avatar is added then notify the owner that new avatar is added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "NotifyOwnerNewAvatarAdded", nullptr, nullptr, sizeof(AvatarAccessRuleBase_eventNotifyOwnerNewAvatarAdded_Parms), Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics
	{
		struct AvatarAccessRuleBase_eventNotifyOwnerNewAvatarRemoved_Parms
		{
			UObject* OldAvatar;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldAvatar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::NewProp_OldAvatar = { "OldAvatar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarAccessRuleBase_eventNotifyOwnerNewAvatarRemoved_Parms, OldAvatar), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::NewProp_OldAvatar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When new avatar is added then notify the owner that new avatar is added\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "* When new avatar is added then notify the owner that new avatar is added" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "NotifyOwnerNewAvatarRemoved", nullptr, nullptr, sizeof(AvatarAccessRuleBase_eventNotifyOwnerNewAvatarRemoved_Parms), Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Uninitialize this rule, mostly this should be invoked when you want to release it\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "Uninitialize this rule, mostly this should be invoked when you want to release it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "OnDeInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarAccessRuleBase_eventOnInitialize_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Initialize this rule\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "Initialize this rule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "OnInitialize", nullptr, nullptr, sizeof(AvatarAccessRuleBase_eventOnInitialize_Parms), Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Reset this access rule\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "ToolTip", "* Reset this access rule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarAccessRuleBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarAccessRuleBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarAccessRuleBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvatarAccessRuleBase_NoRegister()
	{
		return UAvatarAccessRuleBase::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarAccessRuleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarAccessRuleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAvatarAccessRuleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_GetOwner, "GetOwner" }, // 308342314
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_GetTargetAvatars, "GetTargetAvatars" }, // 3558788912
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarAdded, "NotifyOwnerNewAvatarAdded" }, // 2125849946
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_NotifyOwnerNewAvatarRemoved, "NotifyOwnerNewAvatarRemoved" }, // 3134284925
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_OnDeInitialize, "OnDeInitialize" }, // 1863920630
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_OnInitialize, "OnInitialize" }, // 3949433666
		{ &Z_Construct_UFunction_UAvatarAccessRuleBase_Reset, "Reset" }, // 215910306
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAccessRuleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarAccessRule/AvatarAccessRuleBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarAccessRuleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarAccessRuleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarAccessRuleBase_Statics::ClassParams = {
		&UAvatarAccessRuleBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarAccessRuleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarAccessRuleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarAccessRuleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarAccessRuleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarAccessRuleBase, 620162450);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAvatarAccessRuleBase>()
	{
		return UAvatarAccessRuleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarAccessRuleBase(Z_Construct_UClass_UAvatarAccessRuleBase, &UAvatarAccessRuleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAvatarAccessRuleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarAccessRuleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
