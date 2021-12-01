// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICreatorBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAIInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPawnInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByID_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByID();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnBehaviorCommand();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByAIInfo_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByAIInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByInstanceID_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByInstanceID();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByControllerClass_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorByControllerClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAICreatorBase::execPostCreator)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostCreator(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execSetTransfrom)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTransfrom(Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execGetTransfrom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransfrom();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execCreateNewAI)
	{
		P_GET_OBJECT_REF(APawn,Z_Param_Out_CreatedPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAIController**)Z_Param__Result=P_THIS->CreateNewAI(Z_Param_Out_CreatedPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execSetPawnInfo)
	{
		P_GET_STRUCT_REF(FPawnInfo,Z_Param_Out_PawnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnInfo_Implementation(Z_Param_Out_PawnInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execSetAIInfo)
	{
		P_GET_STRUCT_REF(FAIInfo,Z_Param_Out_AIInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAIInfo_Implementation(Z_Param_Out_AIInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorBase::execCanGetControllerClassFromNPCID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanGetControllerClassFromNPCID_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UAICreatorBase_CanGetControllerClassFromNPCID = FName(TEXT("CanGetControllerClassFromNPCID"));
	bool UAICreatorBase::CanGetControllerClassFromNPCID()
	{
		AICreatorBase_eventCanGetControllerClassFromNPCID_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAICreatorBase_CanGetControllerClassFromNPCID),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAICreatorBase_OnCreateNewAI = FName(TEXT("OnCreateNewAI"));
	AAIController* UAICreatorBase::OnCreateNewAI(APawn*& CreatedPawn)
	{
		AICreatorBase_eventOnCreateNewAI_Parms Parms;
		Parms.CreatedPawn=CreatedPawn;
		ProcessEvent(FindFunctionChecked(NAME_UAICreatorBase_OnCreateNewAI),&Parms);
		CreatedPawn=Parms.CreatedPawn;
		return Parms.ReturnValue;
	}
	static FName NAME_UAICreatorBase_OnPostCreator = FName(TEXT("OnPostCreator"));
	void UAICreatorBase::OnPostCreator(AAIController* Controller)
	{
		AICreatorBase_eventOnPostCreator_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_UAICreatorBase_OnPostCreator),&Parms);
	}
	static FName NAME_UAICreatorBase_SetAIInfo = FName(TEXT("SetAIInfo"));
	void UAICreatorBase::SetAIInfo(FAIInfo const& AIInfo)
	{
		AICreatorBase_eventSetAIInfo_Parms Parms;
		Parms.AIInfo=AIInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAICreatorBase_SetAIInfo),&Parms);
	}
	static FName NAME_UAICreatorBase_SetPawnInfo = FName(TEXT("SetPawnInfo"));
	void UAICreatorBase::SetPawnInfo(FPawnInfo const& PawnInfo)
	{
		AICreatorBase_eventSetPawnInfo_Parms Parms;
		Parms.PawnInfo=PawnInfo;
		ProcessEvent(FindFunctionChecked(NAME_UAICreatorBase_SetPawnInfo),&Parms);
	}
	void UAICreatorBase::StaticRegisterNativesUAICreatorBase()
	{
		UClass* Class = UAICreatorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanGetControllerClassFromNPCID", &UAICreatorBase::execCanGetControllerClassFromNPCID },
			{ "CreateNewAI", &UAICreatorBase::execCreateNewAI },
			{ "GetTransfrom", &UAICreatorBase::execGetTransfrom },
			{ "PostCreator", &UAICreatorBase::execPostCreator },
			{ "SetAIInfo", &UAICreatorBase::execSetAIInfo },
			{ "SetPawnInfo", &UAICreatorBase::execSetPawnInfo },
			{ "SetTransfrom", &UAICreatorBase::execSetTransfrom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AICreatorBase_eventCanGetControllerClassFromNPCID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AICreatorBase_eventCanGetControllerClassFromNPCID_Parms), &Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Function to check weather the creator can use the NPCID to get the controller class\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "ToolTip", "* Function to check weather the creator can use the NPCID to get the controller class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "CanGetControllerClassFromNPCID", nullptr, nullptr, sizeof(AICreatorBase_eventCanGetControllerClassFromNPCID_Parms), Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics
	{
		struct AICreatorBase_eventCreateNewAI_Parms
		{
			APawn* CreatedPawn;
			AAIController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::NewProp_CreatedPawn = { "CreatedPawn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventCreateNewAI_Parms, CreatedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventCreateNewAI_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::NewProp_CreatedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Create New AI\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "ToolTip", "* Create New AI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "CreateNewAI", nullptr, nullptr, sizeof(AICreatorBase_eventCreateNewAI_Parms), Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_CreateNewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_CreateNewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics
	{
		struct AICreatorBase_eventGetTransfrom_Parms
		{
			FTransform ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventGetTransfrom_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "GetTransfrom", nullptr, nullptr, sizeof(AICreatorBase_eventGetTransfrom_Parms), Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_GetTransfrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_GetTransfrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatedPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::NewProp_CreatedPawn = { "CreatedPawn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventOnCreateNewAI_Parms, CreatedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventOnCreateNewAI_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::NewProp_CreatedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "OnCreateNewAI", nullptr, nullptr, sizeof(AICreatorBase_eventOnCreateNewAI_Parms), Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventOnPostCreator_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Do something after new AI is Created\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "ToolTip", "* Do something after new AI is Created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "OnPostCreator", nullptr, nullptr, sizeof(AICreatorBase_eventOnPostCreator_Parms), Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_OnPostCreator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_OnPostCreator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics
	{
		struct AICreatorBase_eventPostCreator_Parms
		{
			AAIController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventPostCreator_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "PostCreator", nullptr, nullptr, sizeof(AICreatorBase_eventPostCreator_Parms), Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_PostCreator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_PostCreator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::NewProp_AIInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::NewProp_AIInfo = { "AIInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventSetAIInfo_Parms, AIInfo), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::NewProp_AIInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::NewProp_AIInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::NewProp_AIInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "SetAIInfo", nullptr, nullptr, sizeof(AICreatorBase_eventSetAIInfo_Parms), Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_SetAIInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_SetAIInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PawnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::NewProp_PawnInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::NewProp_PawnInfo = { "PawnInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventSetPawnInfo_Parms, PawnInfo), Z_Construct_UScriptStruct_FPawnInfo, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::NewProp_PawnInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::NewProp_PawnInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::NewProp_PawnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "SetPawnInfo", nullptr, nullptr, sizeof(AICreatorBase_eventSetPawnInfo_Parms), Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_SetPawnInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_SetPawnInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics
	{
		struct AICreatorBase_eventSetTransfrom_Parms
		{
			FTransform Transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorBase_eventSetTransfrom_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorBase, nullptr, "SetTransfrom", nullptr, nullptr, sizeof(AICreatorBase_eventSetTransfrom_Parms), Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorBase_SetTransfrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorBase_SetTransfrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICreatorBase_NoRegister()
	{
		return UAICreatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UAICreatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICreatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICreatorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICreatorBase_CanGetControllerClassFromNPCID, "CanGetControllerClassFromNPCID" }, // 550059584
		{ &Z_Construct_UFunction_UAICreatorBase_CreateNewAI, "CreateNewAI" }, // 374411110
		{ &Z_Construct_UFunction_UAICreatorBase_GetTransfrom, "GetTransfrom" }, // 2871745337
		{ &Z_Construct_UFunction_UAICreatorBase_OnCreateNewAI, "OnCreateNewAI" }, // 1520099574
		{ &Z_Construct_UFunction_UAICreatorBase_OnPostCreator, "OnPostCreator" }, // 1098592770
		{ &Z_Construct_UFunction_UAICreatorBase_PostCreator, "PostCreator" }, // 1585463145
		{ &Z_Construct_UFunction_UAICreatorBase_SetAIInfo, "SetAIInfo" }, // 3777461646
		{ &Z_Construct_UFunction_UAICreatorBase_SetPawnInfo, "SetPawnInfo" }, // 648966090
		{ &Z_Construct_UFunction_UAICreatorBase_SetTransfrom, "SetTransfrom" }, // 2294356984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICreatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AICreator" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICreatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICreatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICreatorBase_Statics::ClassParams = {
		&UAICreatorBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICreatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICreatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICreatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICreatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICreatorBase, 525517081);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAICreatorBase>()
	{
		return UAICreatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICreatorBase(Z_Construct_UClass_UAICreatorBase, &UAICreatorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAICreatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICreatorBase);
	DEFINE_FUNCTION(UAICreatorByID::execGetBehaviorCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAISpawnBehaviorCommand*)Z_Param__Result=P_THIS->GetBehaviorCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByID::execSetBehaviorCommand)
	{
		P_GET_STRUCT_REF(FAISpawnBehaviorCommand,Z_Param_Out_LocalBehaviorCommand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBehaviorCommand(Z_Param_Out_LocalBehaviorCommand);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByID::execGetNPCID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNPCID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByID::execSetNPCID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NPCID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNPCID(Z_Param_NPCID);
		P_NATIVE_END;
	}
	void UAICreatorByID::StaticRegisterNativesUAICreatorByID()
	{
		UClass* Class = UAICreatorByID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBehaviorCommand", &UAICreatorByID::execGetBehaviorCommand },
			{ "GetNPCID", &UAICreatorByID::execGetNPCID },
			{ "SetBehaviorCommand", &UAICreatorByID::execSetBehaviorCommand },
			{ "SetNPCID", &UAICreatorByID::execSetNPCID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics
	{
		struct AICreatorByID_eventGetBehaviorCommand_Parms
		{
			FAISpawnBehaviorCommand ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByID_eventGetBehaviorCommand_Parms, ReturnValue), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByID, nullptr, "GetBehaviorCommand", nullptr, nullptr, sizeof(AICreatorByID_eventGetBehaviorCommand_Parms), Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics
	{
		struct AICreatorByID_eventGetNPCID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByID_eventGetNPCID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByID, nullptr, "GetNPCID", nullptr, nullptr, sizeof(AICreatorByID_eventGetNPCID_Parms), Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByID_GetNPCID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByID_GetNPCID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics
	{
		struct AICreatorByID_eventSetBehaviorCommand_Parms
		{
			FAISpawnBehaviorCommand LocalBehaviorCommand;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBehaviorCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBehaviorCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::NewProp_LocalBehaviorCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::NewProp_LocalBehaviorCommand = { "LocalBehaviorCommand", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByID_eventSetBehaviorCommand_Parms, LocalBehaviorCommand), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::NewProp_LocalBehaviorCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::NewProp_LocalBehaviorCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::NewProp_LocalBehaviorCommand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByID, nullptr, "SetBehaviorCommand", nullptr, nullptr, sizeof(AICreatorByID_eventSetBehaviorCommand_Parms), Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics
	{
		struct AICreatorByID_eventSetNPCID_Parms
		{
			int32 NPCID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByID_eventSetNPCID_Parms, NPCID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::NewProp_NPCID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByID, nullptr, "SetNPCID", nullptr, nullptr, sizeof(AICreatorByID_eventSetNPCID_Parms), Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByID_SetNPCID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByID_SetNPCID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICreatorByID_NoRegister()
	{
		return UAICreatorByID::StaticClass();
	}
	struct Z_Construct_UClass_UAICreatorByID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICreatorByID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICreatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICreatorByID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICreatorByID_GetBehaviorCommand, "GetBehaviorCommand" }, // 2552129311
		{ &Z_Construct_UFunction_UAICreatorByID_GetNPCID, "GetNPCID" }, // 1667040138
		{ &Z_Construct_UFunction_UAICreatorByID_SetBehaviorCommand, "SetBehaviorCommand" }, // 404765177
		{ &Z_Construct_UFunction_UAICreatorByID_SetNPCID, "SetNPCID" }, // 3069453651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICreatorByID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Created By the type ID of NPC" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICreatorByID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICreatorByID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICreatorByID_Statics::ClassParams = {
		&UAICreatorByID::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICreatorByID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICreatorByID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICreatorByID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICreatorByID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICreatorByID, 1860004920);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAICreatorByID>()
	{
		return UAICreatorByID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICreatorByID(Z_Construct_UClass_UAICreatorByID, &UAICreatorByID::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAICreatorByID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICreatorByID);
	DEFINE_FUNCTION(UAICreatorByAIInfo::execGetAISpawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAISpawnDataBase**)Z_Param__Result=P_THIS->GetAISpawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByAIInfo::execGetAIInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAIInfo*)Z_Param__Result=P_THIS->GetAIInfo();
		P_NATIVE_END;
	}
	void UAICreatorByAIInfo::StaticRegisterNativesUAICreatorByAIInfo()
	{
		UClass* Class = UAICreatorByAIInfo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAIInfo", &UAICreatorByAIInfo::execGetAIInfo },
			{ "GetAISpawnData", &UAICreatorByAIInfo::execGetAISpawnData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics
	{
		struct AICreatorByAIInfo_eventGetAIInfo_Parms
		{
			FAIInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByAIInfo_eventGetAIInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByAIInfo, nullptr, "GetAIInfo", nullptr, nullptr, sizeof(AICreatorByAIInfo_eventGetAIInfo_Parms), Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics
	{
		struct AICreatorByAIInfo_eventGetAISpawnData_Parms
		{
			UAISpawnDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByAIInfo_eventGetAISpawnData_Parms, ReturnValue), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByAIInfo, nullptr, "GetAISpawnData", nullptr, nullptr, sizeof(AICreatorByAIInfo_eventGetAISpawnData_Parms), Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICreatorByAIInfo_NoRegister()
	{
		return UAICreatorByAIInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAICreatorByAIInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICreatorByAIInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICreatorByID,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICreatorByAIInfo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICreatorByAIInfo_GetAIInfo, "GetAIInfo" }, // 3714268436
		{ &Z_Construct_UFunction_UAICreatorByAIInfo_GetAISpawnData, "GetAISpawnData" }, // 3351543495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICreatorByAIInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Created By AIInfo" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICreatorByAIInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICreatorByAIInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICreatorByAIInfo_Statics::ClassParams = {
		&UAICreatorByAIInfo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICreatorByAIInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICreatorByAIInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICreatorByAIInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICreatorByAIInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICreatorByAIInfo, 3299332635);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAICreatorByAIInfo>()
	{
		return UAICreatorByAIInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICreatorByAIInfo(Z_Construct_UClass_UAICreatorByAIInfo, &UAICreatorByAIInfo::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAICreatorByAIInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICreatorByAIInfo);
	void UAICreatorByInstanceID::StaticRegisterNativesUAICreatorByInstanceID()
	{
	}
	UClass* Z_Construct_UClass_UAICreatorByInstanceID_NoRegister()
	{
		return UAICreatorByInstanceID::StaticClass();
	}
	struct Z_Construct_UClass_UAICreatorByInstanceID_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICreatorByInstanceID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICreatorByID,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICreatorByInstanceID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Create new AI with the ID which stands for the type of NPC\n*/" },
		{ "DisplayName", "Created By Instanced NPC ID" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "ToolTip", "* Create new AI with the ID which stands for the type of NPC" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICreatorByInstanceID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICreatorByInstanceID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICreatorByInstanceID_Statics::ClassParams = {
		&UAICreatorByInstanceID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAICreatorByInstanceID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICreatorByInstanceID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICreatorByInstanceID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICreatorByInstanceID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICreatorByInstanceID, 844098188);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAICreatorByInstanceID>()
	{
		return UAICreatorByInstanceID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICreatorByInstanceID(Z_Construct_UClass_UAICreatorByInstanceID, &UAICreatorByInstanceID::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAICreatorByInstanceID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICreatorByInstanceID);
	DEFINE_FUNCTION(UAICreatorByControllerClass::execGetAISpawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAISpawnDataBase**)Z_Param__Result=P_THIS->GetAISpawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execSetAISpawnData)
	{
		P_GET_OBJECT(UAISpawnDataBase,Z_Param_LocalAISpawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAISpawnData(Z_Param_LocalAISpawnData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execGetBTPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetBTPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execSetBTPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_LocalBTPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBTPath(Z_Param_Out_LocalBTPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execGetPawnClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetPawnClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execSetPawnClass)
	{
		P_GET_OBJECT(UClass,Z_Param_LocalPawnClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPawnClass(Z_Param_LocalPawnClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execGetControllerClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetControllerClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAICreatorByControllerClass::execSetControllerClass)
	{
		P_GET_OBJECT(UClass,Z_Param_LocalControllerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerClass(Z_Param_LocalControllerClass);
		P_NATIVE_END;
	}
	void UAICreatorByControllerClass::StaticRegisterNativesUAICreatorByControllerClass()
	{
		UClass* Class = UAICreatorByControllerClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAISpawnData", &UAICreatorByControllerClass::execGetAISpawnData },
			{ "GetBTPath", &UAICreatorByControllerClass::execGetBTPath },
			{ "GetControllerClass", &UAICreatorByControllerClass::execGetControllerClass },
			{ "GetPawnClass", &UAICreatorByControllerClass::execGetPawnClass },
			{ "SetAISpawnData", &UAICreatorByControllerClass::execSetAISpawnData },
			{ "SetBTPath", &UAICreatorByControllerClass::execSetBTPath },
			{ "SetControllerClass", &UAICreatorByControllerClass::execSetControllerClass },
			{ "SetPawnClass", &UAICreatorByControllerClass::execSetPawnClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics
	{
		struct AICreatorByControllerClass_eventGetAISpawnData_Parms
		{
			UAISpawnDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventGetAISpawnData_Parms, ReturnValue), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "GetAISpawnData", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventGetAISpawnData_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics
	{
		struct AICreatorByControllerClass_eventGetBTPath_Parms
		{
			FSoftObjectPath ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventGetBTPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "GetBTPath", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventGetBTPath_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics
	{
		struct AICreatorByControllerClass_eventGetControllerClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventGetControllerClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "GetControllerClass", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventGetControllerClass_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics
	{
		struct AICreatorByControllerClass_eventGetPawnClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventGetPawnClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "GetPawnClass", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventGetPawnClass_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics
	{
		struct AICreatorByControllerClass_eventSetAISpawnData_Parms
		{
			UAISpawnDataBase* LocalAISpawnData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalAISpawnData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::NewProp_LocalAISpawnData = { "LocalAISpawnData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventSetAISpawnData_Parms, LocalAISpawnData), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::NewProp_LocalAISpawnData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "SetAISpawnData", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventSetAISpawnData_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics
	{
		struct AICreatorByControllerClass_eventSetBTPath_Parms
		{
			FSoftObjectPath LocalBTPath;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalBTPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalBTPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::NewProp_LocalBTPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::NewProp_LocalBTPath = { "LocalBTPath", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventSetBTPath_Parms, LocalBTPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::NewProp_LocalBTPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::NewProp_LocalBTPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::NewProp_LocalBTPath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "SetBTPath", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventSetBTPath_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics
	{
		struct AICreatorByControllerClass_eventSetControllerClass_Parms
		{
			UClass* LocalControllerClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalControllerClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::NewProp_LocalControllerClass = { "LocalControllerClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventSetControllerClass_Parms, LocalControllerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::NewProp_LocalControllerClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "SetControllerClass", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventSetControllerClass_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics
	{
		struct AICreatorByControllerClass_eventSetPawnClass_Parms
		{
			UClass* LocalPawnClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocalPawnClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::NewProp_LocalPawnClass = { "LocalPawnClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICreatorByControllerClass_eventSetPawnClass_Parms, LocalPawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::NewProp_LocalPawnClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAICreatorByControllerClass, nullptr, "SetPawnClass", nullptr, nullptr, sizeof(AICreatorByControllerClass_eventSetPawnClass_Parms), Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAICreatorByControllerClass_NoRegister()
	{
		return UAICreatorByControllerClass::StaticClass();
	}
	struct Z_Construct_UClass_UAICreatorByControllerClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAICreatorByControllerClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAICreatorByID,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAICreatorByControllerClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_GetAISpawnData, "GetAISpawnData" }, // 79750104
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_GetBTPath, "GetBTPath" }, // 3023825998
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_GetControllerClass, "GetControllerClass" }, // 441249936
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_GetPawnClass, "GetPawnClass" }, // 2721787956
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_SetAISpawnData, "SetAISpawnData" }, // 591045601
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_SetBTPath, "SetBTPath" }, // 3488986402
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_SetControllerClass, "SetControllerClass" }, // 795940751
		{ &Z_Construct_UFunction_UAICreatorByControllerClass_SetPawnClass, "SetPawnClass" }, // 3095542539
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAICreatorByControllerClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnCreator/AICreatorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAICreatorByControllerClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAICreatorByControllerClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAICreatorByControllerClass_Statics::ClassParams = {
		&UAICreatorByControllerClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAICreatorByControllerClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAICreatorByControllerClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAICreatorByControllerClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAICreatorByControllerClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAICreatorByControllerClass, 2433263562);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAICreatorByControllerClass>()
	{
		return UAICreatorByControllerClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAICreatorByControllerClass(Z_Construct_UClass_UAICreatorByControllerClass, &UAICreatorByControllerClass::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAICreatorByControllerClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAICreatorByControllerClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
