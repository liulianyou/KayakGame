// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/OperationInformationManager.h"
#include "TriggerRunTime/Public/TriggerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperationInformationManager() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoSpace();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
// End Cross Module References
class UScriptStruct* FOperationInfoSpace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOperationInfoSpace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperationInfoSpace, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OperationInfoSpace"), sizeof(FOperationInfoSpace), Get_Z_Construct_UScriptStruct_FOperationInfoSpace_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOperationInfoSpace>()
{
	return FOperationInfoSpace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOperationInfoSpace(FOperationInfoSpace::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OperationInfoSpace"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoSpace
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoSpace()
	{
		UScriptStruct::DeferCppStructOps<FOperationInfoSpace>(FName(TEXT("OperationInfoSpace")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoSpace;
	struct Z_Construct_UScriptStruct_FOperationInfoSpace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Data struct to define the space for the operation\n*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Data struct to define the space for the operation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperationInfoSpace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "//Who raise up the target operation\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "Who raise up the target operation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoSpace, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* As one owner can no do a lot operations do I don't need to change the operation to Array\n\x09*///what is the operation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* As one owner can no do a lot operations do I don't need to change the operation to Array\n//what is the operation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoSpace, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::NewProp_Operation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"OperationInfoSpace",
		sizeof(FOperationInfoSpace),
		alignof(FOperationInfoSpace),
		Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoSpace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOperationInfoSpace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OperationInfoSpace"), sizeof(FOperationInfoSpace), Get_Z_Construct_UScriptStruct_FOperationInfoSpace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOperationInfoSpace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOperationInfoSpace_Hash() { return 1345946405U; }
	DEFINE_FUNCTION(UOperationInformationManager::execIsOperationInfoSpaceExist)
	{
		P_GET_STRUCT_REF(FOperationInfoSpace,Z_Param_Out_OperationInfoSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsOperationInfoSpaceExist(Z_Param_Out_OperationInfoSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execIsOperationInfoExist)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsOperationInfoExist(Z_Param_Owner,Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execIsOperationInfValid)
	{
		P_GET_STRUCT_REF(FOperationInfoSpace,Z_Param_Out_OperationInfoSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOperationInfValid(Z_Param_Out_OperationInfoSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetOperationInfos)
	{
		P_GET_TARRAY_REF(UOperationInformationBase*,Z_Param_Out_Operations);
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOperationInfos(Z_Param_Out_Operations,Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetOperationOwnerByOperationInfoClass)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Owners);
		P_GET_OBJECT(UClass,Z_Param_OperationClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOperationOwnerByOperationInfoClass(Z_Param_Out_Owners,Z_Param_OperationClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetOperationOwner)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Owners);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOperationOwner(Z_Param_Out_Owners,Z_Param_Operation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execRemoveOperation)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_GET_UBOOL(Z_Param_OnlyCareOperationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOperation(Z_Param_Owner,Z_Param_Operation,Z_Param_OnlyCareOperationType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Empty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execAddNewOperationByInstanceOperation)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOperationInfoSpace*)Z_Param__Result=P_THIS->AddNewOperationByInstanceOperation(Z_Param_Owner,Z_Param_Operation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execAddNewOperationByClass)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UClass,Z_Param_OperationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOperationInfoSpace*)Z_Param__Result=P_THIS->AddNewOperationByClass(Z_Param_Owner,Z_Param_OperationType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetOperationSpaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOperationInfoSpace>*)Z_Param__Result=P_THIS->GetOperationSpaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetConstOperationSpaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOperationInfoSpace>*)Z_Param__Result=P_THIS->GetConstOperationSpaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execGetTriggerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerManager**)Z_Param__Result=P_THIS->GetTriggerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationManager::execInitialzie)
	{
		P_GET_OBJECT(UTriggerManager,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialzie(Z_Param_Owner);
		P_NATIVE_END;
	}
	void UOperationInformationManager::StaticRegisterNativesUOperationInformationManager()
	{
		UClass* Class = UOperationInformationManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewOperationByClass", &UOperationInformationManager::execAddNewOperationByClass },
			{ "AddNewOperationByInstanceOperation", &UOperationInformationManager::execAddNewOperationByInstanceOperation },
			{ "Empty", &UOperationInformationManager::execEmpty },
			{ "GetConstOperationSpaces", &UOperationInformationManager::execGetConstOperationSpaces },
			{ "GetOperationInfos", &UOperationInformationManager::execGetOperationInfos },
			{ "GetOperationOwner", &UOperationInformationManager::execGetOperationOwner },
			{ "GetOperationOwnerByOperationInfoClass", &UOperationInformationManager::execGetOperationOwnerByOperationInfoClass },
			{ "GetOperationSpaces", &UOperationInformationManager::execGetOperationSpaces },
			{ "GetTriggerManager", &UOperationInformationManager::execGetTriggerManager },
			{ "Initialzie", &UOperationInformationManager::execInitialzie },
			{ "IsOperationInfoExist", &UOperationInformationManager::execIsOperationInfoExist },
			{ "IsOperationInfoSpaceExist", &UOperationInformationManager::execIsOperationInfoSpaceExist },
			{ "IsOperationInfValid", &UOperationInformationManager::execIsOperationInfValid },
			{ "RemoveOperation", &UOperationInformationManager::execRemoveOperation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics
	{
		struct OperationInformationManager_eventAddNewOperationByClass_Parms
		{
			UObject* Owner;
			TSubclassOf<UOperationInformationBase>  OperationType;
			FOperationInfoSpace ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OperationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByClass_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_OperationType = { "OperationType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByClass_Parms, OperationType), Z_Construct_UClass_UOperationInformationBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByClass_Parms, ReturnValue), Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_OperationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "//Add new operation class \n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "Add new operation class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "AddNewOperationByClass", nullptr, nullptr, sizeof(OperationInformationManager_eventAddNewOperationByClass_Parms), Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics
	{
		struct OperationInformationManager_eventAddNewOperationByInstanceOperation_Parms
		{
			UObject* Owner;
			UOperationInformationBase* Operation;
			FOperationInfoSpace ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByInstanceOperation_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByInstanceOperation_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventAddNewOperationByInstanceOperation_Parms, ReturnValue), Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "AddNewOperationByInstanceOperation", nullptr, nullptr, sizeof(OperationInformationManager_eventAddNewOperationByInstanceOperation_Parms), Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "//Clear all operations in this manager\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "Clear all operations in this manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics
	{
		struct OperationInformationManager_eventGetConstOperationSpaces_Parms
		{
			TArray<FOperationInfoSpace> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetConstOperationSpaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetConstOperationSpaces", nullptr, nullptr, sizeof(OperationInformationManager_eventGetConstOperationSpaces_Parms), Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics
	{
		struct OperationInformationManager_eventGetOperationInfos_Parms
		{
			TArray<UOperationInformationBase*> Operations;
			UObject* Owner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Operations;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationInfos_Parms, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationInfos_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Operations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Get all operations which is raised up by the owner\n\x09* \n\x09* @param Owner if this owner is null then it will get all operations\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Get all operations which is raised up by the owner\n*\n* @param Owner if this owner is null then it will get all operations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetOperationInfos", nullptr, nullptr, sizeof(OperationInformationManager_eventGetOperationInfos_Parms), Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics
	{
		struct OperationInformationManager_eventGetOperationOwner_Parms
		{
			TArray<UObject*> Owners;
			UOperationInformationBase* Operation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owners_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Owners;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Owners_Inner = { "Owners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Owners = { "Owners", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationOwner_Parms, Owners), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationOwner_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Owners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Owners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Get all the owners of the target operation\n\x09* \n\x09* @param Operation If this value is null then it will get all owners\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Get all the owners of the target operation\n*\n* @param Operation If this value is null then it will get all owners" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetOperationOwner", nullptr, nullptr, sizeof(OperationInformationManager_eventGetOperationOwner_Parms), Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics
	{
		struct OperationInformationManager_eventGetOperationOwnerByOperationInfoClass_Parms
		{
			TArray<UObject*> Owners;
			TSubclassOf<UOperationInformationBase>  OperationClass;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owners_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Owners;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OperationClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_Owners_Inner = { "Owners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_Owners = { "Owners", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationOwnerByOperationInfoClass_Parms, Owners), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationOwnerByOperationInfoClass_Parms, OperationClass), Z_Construct_UClass_UOperationInformationBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_Owners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_Owners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::NewProp_OperationClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Get all the owners of the target operation class\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Get all the owners of the target operation class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetOperationOwnerByOperationInfoClass", nullptr, nullptr, sizeof(OperationInformationManager_eventGetOperationOwnerByOperationInfoClass_Parms), Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics
	{
		struct OperationInformationManager_eventGetOperationSpaces_Parms
		{
			TArray<FOperationInfoSpace> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetOperationSpaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetOperationSpaces", nullptr, nullptr, sizeof(OperationInformationManager_eventGetOperationSpaces_Parms), Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics
	{
		struct OperationInformationManager_eventGetTriggerManager_Parms
		{
			UTriggerManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventGetTriggerManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "GetTriggerManager", nullptr, nullptr, sizeof(OperationInformationManager_eventGetTriggerManager_Parms), Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics
	{
		struct OperationInformationManager_eventInitialzie_Parms
		{
			UTriggerManager* Owner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventInitialzie_Parms, Owner), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "Initialzie", nullptr, nullptr, sizeof(OperationInformationManager_eventInitialzie_Parms), Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_Initialzie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_Initialzie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics
	{
		struct OperationInformationManager_eventIsOperationInfoExist_Parms
		{
			const UObject* Owner;
			const UOperationInformationBase* OperationInfo;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_Owner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfoExist_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfoExist_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfoExist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_OperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Check weather there is one operation info which has the owner and operation info\n\x09* \n\x09* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Check weather there is one operation info which has the owner and operation info\n*\n* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "IsOperationInfoExist", nullptr, nullptr, sizeof(OperationInformationManager_eventIsOperationInfoExist_Parms), Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics
	{
		struct OperationInformationManager_eventIsOperationInfoSpaceExist_Parms
		{
			FOperationInfoSpace OperationInfoSpace;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfoSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OperationInfoSpace;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_OperationInfoSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_OperationInfoSpace = { "OperationInfoSpace", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfoSpaceExist_Parms, OperationInfoSpace), Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_OperationInfoSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_OperationInfoSpace_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfoSpaceExist_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_OperationInfoSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Check weather there is one operation info space in the pool\n\x09* \n\x09* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Check weather there is one operation info space in the pool\n*\n* #return the index for matched element in the operation pool, if this value is INDEX_NONE means there  is no one to match." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "IsOperationInfoSpaceExist", nullptr, nullptr, sizeof(OperationInformationManager_eventIsOperationInfoSpaceExist_Parms), Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics
	{
		struct OperationInformationManager_eventIsOperationInfValid_Parms
		{
			FOperationInfoSpace OperationInfoSpace;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfoSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OperationInfoSpace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_OperationInfoSpace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_OperationInfoSpace = { "OperationInfoSpace", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventIsOperationInfValid_Parms, OperationInfoSpace), Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_OperationInfoSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_OperationInfoSpace_MetaData)) };
	void Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperationInformationManager_eventIsOperationInfValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OperationInformationManager_eventIsOperationInfValid_Parms), &Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_OperationInfoSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "IsOperationInfValid", nullptr, nullptr, sizeof(OperationInformationManager_eventIsOperationInfValid_Parms), Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics
	{
		struct OperationInformationManager_eventRemoveOperation_Parms
		{
			UObject* Owner;
			UOperationInformationBase* Operation;
			bool OnlyCareOperationType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static void NewProp_OnlyCareOperationType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnlyCareOperationType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventRemoveOperation_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationManager_eventRemoveOperation_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Operation_MetaData)) };
	void Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_OnlyCareOperationType_SetBit(void* Obj)
	{
		((OperationInformationManager_eventRemoveOperation_Parms*)Obj)->OnlyCareOperationType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_OnlyCareOperationType = { "OnlyCareOperationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OperationInformationManager_eventRemoveOperation_Parms), &Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_OnlyCareOperationType_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_Operation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::NewProp_OnlyCareOperationType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Operation" },
		{ "Comment", "/*\n\x09* Remove the target operation which is raised up the owner\n\x09* \n\x09* @param Owner\x09\x09\x09\x09\x09the owner who raised up the target operation, if it is null then remove all operations which is the same as operation\n\x09* @param Operation\x09\x09\x09\x09the operation that will be removed if it is null then will removed all operations which is raised up by the owner\n\x09* @param OnlyCareOperationType\x09true means will just use the class type of the target operation to compare\n\x09*/" },
		{ "CPP_Default_OnlyCareOperationType", "false" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "* Remove the target operation which is raised up the owner\n*\n* @param Owner                                  the owner who raised up the target operation, if it is null then remove all operations which is the same as operation\n* @param Operation                              the operation that will be removed if it is null then will removed all operations which is raised up by the owner\n* @param OnlyCareOperationType  true means will just use the class type of the target operation to compare" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationManager, nullptr, "RemoveOperation", nullptr, nullptr, sizeof(OperationInformationManager_eventRemoveOperation_Parms), Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationManager_RemoveOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationManager_RemoveOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOperationInformationManager_NoRegister()
	{
		return UOperationInformationManager::StaticClass();
	}
	struct Z_Construct_UClass_UOperationInformationManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Operations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerTriggerManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerTriggerManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperationInformationManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperationInformationManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByClass, "AddNewOperationByClass" }, // 2627375647
		{ &Z_Construct_UFunction_UOperationInformationManager_AddNewOperationByInstanceOperation, "AddNewOperationByInstanceOperation" }, // 198441766
		{ &Z_Construct_UFunction_UOperationInformationManager_Empty, "Empty" }, // 3791818446
		{ &Z_Construct_UFunction_UOperationInformationManager_GetConstOperationSpaces, "GetConstOperationSpaces" }, // 2469408907
		{ &Z_Construct_UFunction_UOperationInformationManager_GetOperationInfos, "GetOperationInfos" }, // 1244172206
		{ &Z_Construct_UFunction_UOperationInformationManager_GetOperationOwner, "GetOperationOwner" }, // 2939769849
		{ &Z_Construct_UFunction_UOperationInformationManager_GetOperationOwnerByOperationInfoClass, "GetOperationOwnerByOperationInfoClass" }, // 2516005266
		{ &Z_Construct_UFunction_UOperationInformationManager_GetOperationSpaces, "GetOperationSpaces" }, // 2713943595
		{ &Z_Construct_UFunction_UOperationInformationManager_GetTriggerManager, "GetTriggerManager" }, // 1736324062
		{ &Z_Construct_UFunction_UOperationInformationManager_Initialzie, "Initialzie" }, // 2968378199
		{ &Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoExist, "IsOperationInfoExist" }, // 1739946235
		{ &Z_Construct_UFunction_UOperationInformationManager_IsOperationInfoSpaceExist, "IsOperationInfoSpaceExist" }, // 3918456205
		{ &Z_Construct_UFunction_UOperationInformationManager_IsOperationInfValid, "IsOperationInfValid" }, // 1782438287
		{ &Z_Construct_UFunction_UOperationInformationManager_RemoveOperation, "RemoveOperation" }, // 289993105
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Operation" },
		{ "IncludePath", "Tool/OperationInformation/OperationInformationManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationInfoSpace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations_MetaData[] = {
		{ "Comment", "//The data to hold all operations\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
		{ "ToolTip", "The data to hold all operations" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0040008000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOperationInformationManager, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_OwnerTriggerManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_OwnerTriggerManager = { "OwnerTriggerManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOperationInformationManager, OwnerTriggerManager), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_OwnerTriggerManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_OwnerTriggerManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperationInformationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_Operations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationManager_Statics::NewProp_OwnerTriggerManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperationInformationManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperationInformationManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOperationInformationManager_Statics::ClassParams = {
		&UOperationInformationManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperationInformationManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOperationInformationManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOperationInformationManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOperationInformationManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOperationInformationManager, 965200119);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UOperationInformationManager>()
	{
		return UOperationInformationManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOperationInformationManager(Z_Construct_UClass_UOperationInformationManager, &UOperationInformationManager::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UOperationInformationManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperationInformationManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
