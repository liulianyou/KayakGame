// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContributeRuleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UContributeRuleBase_OnAddContributeToRemote = FName(TEXT("OnAddContributeToRemote"));
	void UContributeRuleBase::OnAddContributeToRemote(UTriggerNetPlayerSupportComponent* NPSC, UTriggerTaskBase* InteractionTask)
	{
		ContributeRuleBase_eventOnAddContributeToRemote_Parms Parms;
		Parms.NPSC=NPSC;
		Parms.InteractionTask=InteractionTask;
		ProcessEvent(FindFunctionChecked(NAME_UContributeRuleBase_OnAddContributeToRemote),&Parms);
	}
	static FName NAME_UContributeRuleBase_OnExecute = FName(TEXT("OnExecute"));
	void UContributeRuleBase::OnExecute(float DeltaTime)
	{
		ContributeRuleBase_eventOnExecute_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UContributeRuleBase_OnExecute),&Parms);
	}
	void UContributeRuleBase::StaticRegisterNativesUContributeRuleBase()
	{
	}
	struct Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPSC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NPSC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_NPSC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_NPSC = { "NPSC", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContributeRuleBase_eventOnAddContributeToRemote_Parms, NPSC), Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_NPSC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_NPSC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContributeRuleBase_eventOnAddContributeToRemote_Parms, InteractionTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_NPSC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::NewProp_InteractionTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Add this contribute to the remote.\n\x09*\n\x09* @param NPSC\x09\x09\x09\x09which channel it will be applied\n\x09* @param InteractionTask\x09The task which this contributor will be applied to\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "* Add this contribute to the remote.\n*\n* @param NPSC                           which channel it will be applied\n* @param InteractionTask        The task which this contributor will be applied to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContributeRuleBase, nullptr, "OnAddContributeToRemote", nullptr, nullptr, sizeof(ContributeRuleBase_eventOnAddContributeToRemote_Parms), Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ContributeRuleBase_eventOnExecute_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Each time this contribution execute successfully I will call this BP function\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "Each time this contribution execute successfully I will call this BP function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContributeRuleBase, nullptr, "OnExecute", nullptr, nullptr, sizeof(ContributeRuleBase_eventOnExecute_Parms), Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContributeRuleBase_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UContributeRuleBase_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UContributeRuleBase_NoRegister()
	{
		return UContributeRuleBase::StaticClass();
	}
	struct Z_Construct_UClass_UContributeRuleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanExecutedWhenAdded_MetaData[];
#endif
		static void NewProp_CanExecutedWhenAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedWhenAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanEverTick_MetaData[];
#endif
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGradualTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradualTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedToCheckGamePlayAbility_MetaData[];
#endif
		static void NewProp_NeedToCheckGamePlayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGamePlayAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContributeRuleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContributeRuleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContributeRuleBase_OnAddContributeToRemote, "OnAddContributeToRemote" }, // 1903675918
		{ &Z_Construct_UFunction_UContributeRuleBase_OnExecute, "OnExecute" }, // 3963559352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Base class to define how the interaction rule act\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "* Base class to define how the interaction rule act" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_Contributor_MetaData[] = {
		{ "Category", "ContributeRuleBase" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UContributeRuleBase, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_Contributor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded_MetaData[] = {
		{ "Category", "ContributeRuleBase" },
		{ "Comment", "//True means when this contribute rule add to the Interaction rule it will execute automatically\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "True means when this contribute rule add to the Interaction rule it will execute automatically" },
	};
#endif
	void Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded_SetBit(void* Obj)
	{
		((UContributeRuleBase*)Obj)->CanExecutedWhenAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded = { "CanExecutedWhenAdded", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContributeRuleBase), &Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick_MetaData[] = {
		{ "Category", "ContributeRuleBase" },
		{ "Comment", "/*\n\x09* Flag to check weather this rule will be execute in the tick function\n\x09* This flag is just used as a suggestion for the interaction rule, \n\x09* the final result should be determined by the interaction rule. UInteractionRuleBase::CanTickContributor\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "* Flag to check weather this rule will be execute in the tick function\n* This flag is just used as a suggestion for the interaction rule,\n* the final result should be determined by the interaction rule. UInteractionRuleBase::CanTickContributor" },
	};
#endif
	void Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((UContributeRuleBase*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContributeRuleBase), &Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_TickGradualTime_MetaData[] = {
		{ "Category", "ContributeRuleBase" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//The gradual time that this rule will be executed in the tick function\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "The gradual time that this rule will be executed in the tick function" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_TickGradualTime = { "TickGradualTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UContributeRuleBase, TickGradualTime), METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_TickGradualTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_TickGradualTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility_MetaData[] = {
		{ "Category", "ContributeRuleBase" },
		{ "Comment", "/*\n\x09* Flag to check weather this contributor need to check the game play ability.\n\x09* If the interaction have set one game play ability to extend some implementations,\n\x09* And this value is true, when the player add this contributor to the interaction task, \n\x09* The interaction task will try to active the game play ability to do some external implementations\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/ContributeRuleBase.h" },
		{ "ToolTip", "* Flag to check weather this contributor need to check the game play ability.\n* If the interaction have set one game play ability to extend some implementations,\n* And this value is true, when the player add this contributor to the interaction task,\n* The interaction task will try to active the game play ability to do some external implementations" },
	};
#endif
	void Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility_SetBit(void* Obj)
	{
		((UContributeRuleBase*)Obj)->NeedToCheckGamePlayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility = { "NeedToCheckGamePlayAbility", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UContributeRuleBase), &Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContributeRuleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanExecutedWhenAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_TickGradualTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContributeRuleBase_Statics::NewProp_NeedToCheckGamePlayAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContributeRuleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContributeRuleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContributeRuleBase_Statics::ClassParams = {
		&UContributeRuleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UContributeRuleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContributeRuleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContributeRuleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContributeRuleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContributeRuleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContributeRuleBase, 1351005134);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UContributeRuleBase>()
	{
		return UContributeRuleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContributeRuleBase(Z_Construct_UClass_UContributeRuleBase, &UContributeRuleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UContributeRuleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContributeRuleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
