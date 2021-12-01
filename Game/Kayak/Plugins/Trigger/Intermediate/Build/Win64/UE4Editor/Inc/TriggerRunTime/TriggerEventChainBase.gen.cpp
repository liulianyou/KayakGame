// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventChainBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventChainBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventChainBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskComponentInformation();
// End Cross Module References
	static UEnum* EAddNewNodeResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EAddNewNodeResult"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EAddNewNodeResult>()
	{
		return EAddNewNodeResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAddNewNodeResult(EAddNewNodeResult_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EAddNewNodeResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult_Hash() { return 486480459U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAddNewNodeResult"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAddNewNodeResult::EAddNewNodeResult_PlaceHold", (int64)EAddNewNodeResult::EAddNewNodeResult_PlaceHold },
				{ "EAddNewNodeResult::EAddNewNodeResult_Unmatch", (int64)EAddNewNodeResult::EAddNewNodeResult_Unmatch },
				{ "EAddNewNodeResult::EAddNewNodeResult_Matched", (int64)EAddNewNodeResult::EAddNewNodeResult_Matched },
				{ "EAddNewNodeResult::EAddNewNodeResult_Successed", (int64)EAddNewNodeResult::EAddNewNodeResult_Successed },
				{ "EAddNewNodeResult::EAddNewNodeResult_Failed", (int64)EAddNewNodeResult::EAddNewNodeResult_Failed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The result for add any type of node to the target event chain\n*/" },
				{ "EAddNewNodeResult_Failed.Comment", "//Added Failed\n" },
				{ "EAddNewNodeResult_Failed.DisplayName", "Faild" },
				{ "EAddNewNodeResult_Failed.Name", "EAddNewNodeResult::EAddNewNodeResult_Failed" },
				{ "EAddNewNodeResult_Failed.ToolTip", "Added Failed" },
				{ "EAddNewNodeResult_Matched.Comment", "//The new node is matched for target event chain\n" },
				{ "EAddNewNodeResult_Matched.DisplayName", "Matched" },
				{ "EAddNewNodeResult_Matched.Name", "EAddNewNodeResult::EAddNewNodeResult_Matched" },
				{ "EAddNewNodeResult_Matched.ToolTip", "The new node is matched for target event chain" },
				{ "EAddNewNodeResult_PlaceHold.Comment", "//Used for pass the UBT\n" },
				{ "EAddNewNodeResult_PlaceHold.Hidden", "" },
				{ "EAddNewNodeResult_PlaceHold.Name", "EAddNewNodeResult::EAddNewNodeResult_PlaceHold" },
				{ "EAddNewNodeResult_PlaceHold.ToolTip", "Used for pass the UBT" },
				{ "EAddNewNodeResult_Successed.Comment", "//Added successfully\n" },
				{ "EAddNewNodeResult_Successed.DisplayName", "Successed" },
				{ "EAddNewNodeResult_Successed.Name", "EAddNewNodeResult::EAddNewNodeResult_Successed" },
				{ "EAddNewNodeResult_Successed.ToolTip", "Added successfully" },
				{ "EAddNewNodeResult_Unmatch.Comment", "//The new node is not matched for target event chain \n" },
				{ "EAddNewNodeResult_Unmatch.DisplayName", "Unmatch" },
				{ "EAddNewNodeResult_Unmatch.Name", "EAddNewNodeResult::EAddNewNodeResult_Unmatch" },
				{ "EAddNewNodeResult_Unmatch.ToolTip", "The new node is not matched for target event chain" },
				{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
				{ "ToolTip", "* The result for add any type of node to the target event chain" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EAddNewNodeResult",
				"EAddNewNodeResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetComponentOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->GetComponentOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetConstNextComponentInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTriggerTaskComponentInformation>*)Z_Param__Result=P_THIS->GetConstNextComponentInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetNextComponentInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTriggerTaskComponentInformation>*)Z_Param__Result=P_THIS->GetNextComponentInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execRemoveNextComponentInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_STRUCT(FGuid,Z_Param_ComponentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveNextComponentInfo(Z_Param_MapName,Z_Param_ComponentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execAddNextComponentInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_STRUCT(FGuid,Z_Param_ComponentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNextComponentInfo(Z_Param_MapName,Z_Param_ComponentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execSetCategory)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_NewCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCategory(Z_Param_Out_NewCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetConstCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetConstCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetCategory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execIsChildForEventInfo)
	{
		P_GET_OBJECT(UTriggerEventChainBase,Z_Param_OtherEventInfo);
		P_GET_UBOOL(Z_Param_IgnoreDiffentLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildForEventInfo_Implementation(Z_Param_OtherEventInfo,Z_Param_IgnoreDiffentLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetChildTriggers)
	{
		P_GET_TARRAY_REF(TScriptInterface<ITriggerInterface>,Z_Param_Out_OuterTriggers);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildTriggers_Implementation(Z_Param_Out_OuterTriggers,Z_Param_Out_CategoryParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetParentTriggers)
	{
		P_GET_TARRAY_REF(TScriptInterface<ITriggerInterface>,Z_Param_Out_OuterTriggers);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentTriggers_Implementation(Z_Param_Out_OuterTriggers,Z_Param_Out_CategoryParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execAddParentNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ParentNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_GET_UBOOL(Z_Param_NeedUpdateChildNodeIndeParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAddNewNodeResult*)Z_Param__Result=P_THIS->AddParentNode_Implementation(Z_Param_Out_ParentNode,Z_Param_Out_CategoryParameter,Z_Param_NeedUpdateChildNodeIndeParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execRemoveParentNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ParentNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_GET_UBOOL(Z_Param_NeedUpdateChildNodeInParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveParentNode_Implementation(Z_Param_Out_ParentNode,Z_Param_Out_CategoryParameter,Z_Param_NeedUpdateChildNodeInParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execRemoveChildNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ChildNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_GET_UBOOL(Z_Param_NeedUpdateParentNodeInChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildNode_Implementation(Z_Param_Out_ChildNode,Z_Param_Out_CategoryParameter,Z_Param_NeedUpdateParentNodeInChildNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execAddChildNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ChildNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_CategoryParameter);
		P_GET_UBOOL(Z_Param_NeedUpdateParentNodeInChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EAddNewNodeResult*)Z_Param__Result=P_THIS->AddChildNode_Implementation(Z_Param_Out_ChildNode,Z_Param_Out_CategoryParameter,Z_Param_NeedUpdateParentNodeInChildNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetChildTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutTriggerTaskComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildTriggerTaskComponents_Implementation(Z_Param_Out_OutTriggerTaskComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execGetParentTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutTriggerTaskComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentTriggerTaskComponents_Implementation(Z_Param_Out_OutTriggerTaskComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execCanHoldTargetObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanHoldTargetObject_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEventChainBase::execInitilaizeByTriggerTaskComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitilaizeByTriggerTaskComponent(Z_Param_Component);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerEventChainBase_AddChildNode = FName(TEXT("AddChildNode"));
	EAddNewNodeResult UTriggerEventChainBase::AddChildNode(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
	{
		TriggerEventChainBase_eventAddChildNode_Parms Parms;
		Parms.ChildNode=ChildNode;
		Parms.CategoryParameter=CategoryParameter;
		Parms.NeedUpdateParentNodeInChildNode=NeedUpdateParentNodeInChildNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_AddChildNode),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventChainBase_AddParentNode = FName(TEXT("AddParentNode"));
	EAddNewNodeResult UTriggerEventChainBase::AddParentNode(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeIndeParentNode)
	{
		TriggerEventChainBase_eventAddParentNode_Parms Parms;
		Parms.ParentNode=ParentNode;
		Parms.CategoryParameter=CategoryParameter;
		Parms.NeedUpdateChildNodeIndeParentNode=NeedUpdateChildNodeIndeParentNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_AddParentNode),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventChainBase_CanHoldTargetObject = FName(TEXT("CanHoldTargetObject"));
	bool UTriggerEventChainBase::CanHoldTargetObject(UObject* Object) const
	{
		TriggerEventChainBase_eventCanHoldTargetObject_Parms Parms;
		Parms.Object=Object;
		const_cast<UTriggerEventChainBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_CanHoldTargetObject),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventChainBase_GetChildTriggers = FName(TEXT("GetChildTriggers"));
	void UTriggerEventChainBase::GetChildTriggers(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const
	{
		TriggerEventChainBase_eventGetChildTriggers_Parms Parms;
		Parms.OuterTriggers=OuterTriggers;
		Parms.CategoryParameter=CategoryParameter;
		const_cast<UTriggerEventChainBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_GetChildTriggers),&Parms);
		OuterTriggers=Parms.OuterTriggers;
	}
	static FName NAME_UTriggerEventChainBase_GetChildTriggerTaskComponents = FName(TEXT("GetChildTriggerTaskComponents"));
	void UTriggerEventChainBase::GetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
	{
		TriggerEventChainBase_eventGetChildTriggerTaskComponents_Parms Parms;
		Parms.OutTriggerTaskComponents=OutTriggerTaskComponents;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_GetChildTriggerTaskComponents),&Parms);
		OutTriggerTaskComponents=Parms.OutTriggerTaskComponents;
	}
	static FName NAME_UTriggerEventChainBase_GetParentTriggers = FName(TEXT("GetParentTriggers"));
	void UTriggerEventChainBase::GetParentTriggers(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& CategoryParameter) const
	{
		TriggerEventChainBase_eventGetParentTriggers_Parms Parms;
		Parms.OuterTriggers=OuterTriggers;
		Parms.CategoryParameter=CategoryParameter;
		const_cast<UTriggerEventChainBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_GetParentTriggers),&Parms);
		OuterTriggers=Parms.OuterTriggers;
	}
	static FName NAME_UTriggerEventChainBase_GetParentTriggerTaskComponents = FName(TEXT("GetParentTriggerTaskComponents"));
	void UTriggerEventChainBase::GetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
	{
		TriggerEventChainBase_eventGetParentTriggerTaskComponents_Parms Parms;
		Parms.OutTriggerTaskComponents=OutTriggerTaskComponents;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_GetParentTriggerTaskComponents),&Parms);
		OutTriggerTaskComponents=Parms.OutTriggerTaskComponents;
	}
	static FName NAME_UTriggerEventChainBase_IsChildForEventInfo = FName(TEXT("IsChildForEventInfo"));
	bool UTriggerEventChainBase::IsChildForEventInfo(const UTriggerEventChainBase* OtherEventInfo, bool IgnoreDiffentLevel) const
	{
		TriggerEventChainBase_eventIsChildForEventInfo_Parms Parms;
		Parms.OtherEventInfo=OtherEventInfo;
		Parms.IgnoreDiffentLevel=IgnoreDiffentLevel ? true : false;
		const_cast<UTriggerEventChainBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_IsChildForEventInfo),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent = FName(TEXT("OnInitilaizeByTriggerTaskComponent"));
	void UTriggerEventChainBase::OnInitilaizeByTriggerTaskComponent(UTriggerTaskComponentBase* Component)
	{
		TriggerEventChainBase_eventOnInitilaizeByTriggerTaskComponent_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent),&Parms);
	}
	static FName NAME_UTriggerEventChainBase_RemoveChildNode = FName(TEXT("RemoveChildNode"));
	void UTriggerEventChainBase::RemoveChildNode(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
	{
		TriggerEventChainBase_eventRemoveChildNode_Parms Parms;
		Parms.ChildNode=ChildNode;
		Parms.CategoryParameter=CategoryParameter;
		Parms.NeedUpdateParentNodeInChildNode=NeedUpdateParentNodeInChildNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_RemoveChildNode),&Parms);
	}
	static FName NAME_UTriggerEventChainBase_RemoveParentNode = FName(TEXT("RemoveParentNode"));
	void UTriggerEventChainBase::RemoveParentNode(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& CategoryParameter, bool NeedUpdateChildNodeInParentNode)
	{
		TriggerEventChainBase_eventRemoveParentNode_Parms Parms;
		Parms.ParentNode=ParentNode;
		Parms.CategoryParameter=CategoryParameter;
		Parms.NeedUpdateChildNodeInParentNode=NeedUpdateChildNodeInParentNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventChainBase_RemoveParentNode),&Parms);
	}
	void UTriggerEventChainBase::StaticRegisterNativesUTriggerEventChainBase()
	{
		UClass* Class = UTriggerEventChainBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildNode", &UTriggerEventChainBase::execAddChildNode },
			{ "AddNextComponentInfo", &UTriggerEventChainBase::execAddNextComponentInfo },
			{ "AddParentNode", &UTriggerEventChainBase::execAddParentNode },
			{ "CanHoldTargetObject", &UTriggerEventChainBase::execCanHoldTargetObject },
			{ "GetCategory", &UTriggerEventChainBase::execGetCategory },
			{ "GetChildTriggers", &UTriggerEventChainBase::execGetChildTriggers },
			{ "GetChildTriggerTaskComponents", &UTriggerEventChainBase::execGetChildTriggerTaskComponents },
			{ "GetComponentOwner", &UTriggerEventChainBase::execGetComponentOwner },
			{ "GetConstCategory", &UTriggerEventChainBase::execGetConstCategory },
			{ "GetConstNextComponentInfo", &UTriggerEventChainBase::execGetConstNextComponentInfo },
			{ "GetNextComponentInfo", &UTriggerEventChainBase::execGetNextComponentInfo },
			{ "GetParentTriggers", &UTriggerEventChainBase::execGetParentTriggers },
			{ "GetParentTriggerTaskComponents", &UTriggerEventChainBase::execGetParentTriggerTaskComponents },
			{ "InitilaizeByTriggerTaskComponent", &UTriggerEventChainBase::execInitilaizeByTriggerTaskComponent },
			{ "IsChildForEventInfo", &UTriggerEventChainBase::execIsChildForEventInfo },
			{ "RemoveChildNode", &UTriggerEventChainBase::execRemoveChildNode },
			{ "RemoveNextComponentInfo", &UTriggerEventChainBase::execRemoveNextComponentInfo },
			{ "RemoveParentNode", &UTriggerEventChainBase::execRemoveParentNode },
			{ "SetCategory", &UTriggerEventChainBase::execSetCategory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ChildNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static void NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateParentNodeInChildNode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ChildNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddChildNode_Parms, ChildNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ChildNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddChildNode_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_CategoryParameter_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventAddChildNode_Parms*)Obj)->NeedUpdateParentNodeInChildNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode = { "NeedUpdateParentNodeInChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventAddChildNode_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddChildNode_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_CategoryParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Add new child node to this component\n\x09* You should implement this function in the child class.\n\x09* The base event chain will not store any child node, as different component may have different data struct to hold the child node information.\n\x09*\n\x09* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Add new child node to this component\n* You should implement this function in the child class.\n* The base event chain will not store any child node, as different component may have different data struct to hold the child node information.\n*\n* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "AddChildNode", nullptr, nullptr, sizeof(TriggerEventChainBase_eventAddChildNode_Parms), Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics
	{
		struct TriggerEventChainBase_eventAddNextComponentInfo_Parms
		{
			FString MapName;
			FGuid ComponentID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddNextComponentInfo_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddNextComponentInfo_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::NewProp_ComponentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* @param MapName\x09\x09the map which target component belong to, if this value is empty then will add the componentId to all instance\n\x09* @param ComponentID\x09the ID of component\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* @param MapName                the map which target component belong to, if this value is empty then will add the componentId to all instance\n* @param ComponentID    the ID of component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "AddNextComponentInfo", nullptr, nullptr, sizeof(TriggerEventChainBase_eventAddNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static void NewProp_NeedUpdateChildNodeIndeParentNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateChildNodeIndeParentNode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddParentNode_Parms, ParentNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddParentNode_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_CategoryParameter_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_NeedUpdateChildNodeIndeParentNode_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventAddParentNode_Parms*)Obj)->NeedUpdateChildNodeIndeParentNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_NeedUpdateChildNodeIndeParentNode = { "NeedUpdateChildNodeIndeParentNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventAddParentNode_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_NeedUpdateChildNodeIndeParentNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventAddParentNode_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_EAddNewNodeResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_CategoryParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_NeedUpdateChildNodeIndeParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Remove the parent node at current event chain\n\x09* You should implement this function in the child class.\n\x09* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n\x09*\n\x09* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Remove the parent node at current event chain\n* You should implement this function in the child class.\n* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n*\n* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "AddParentNode", nullptr, nullptr, sizeof(TriggerEventChainBase_eventAddParentNode_Parms), Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventCanHoldTargetObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventCanHoldTargetObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventCanHoldTargetObject_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Used to check weather this event chain can hold the target object.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Used to check weather this event chain can hold the target object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "CanHoldTargetObject", nullptr, nullptr, sizeof(TriggerEventChainBase_eventCanHoldTargetObject_Parms), Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics
	{
		struct TriggerEventChainBase_eventGetCategory_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetCategory_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetCategory", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetCategory_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_OuterTriggers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_OuterTriggers_Inner = { "OuterTriggers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_OuterTriggers = { "OuterTriggers", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetChildTriggers_Parms, OuterTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetChildTriggers_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_CategoryParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_OuterTriggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_OuterTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::NewProp_CategoryParameter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetChildTriggers", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetChildTriggers_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTriggerTaskComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTriggerTaskComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriggerTaskComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetChildTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Get all task components which are at the parent node of the owner component\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Get all task components which are at the parent node of the owner component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetChildTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetChildTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics
	{
		struct TriggerEventChainBase_eventGetComponentOwner_Parms
		{
			UTriggerTaskComponentBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetComponentOwner_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* the Owner Component can only be get. as it should be set at the initialized function\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* the Owner Component can only be get. as it should be set at the initialized function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetComponentOwner", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetComponentOwner_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics
	{
		struct TriggerEventChainBase_eventGetConstCategory_Parms
		{
			FGameplayTagContainer ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetConstCategory_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetConstCategory", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetConstCategory_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics
	{
		struct TriggerEventChainBase_eventGetConstNextComponentInfo_Parms
		{
			TArray<FTriggerTaskComponentInformation> ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetConstNextComponentInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetConstNextComponentInfo", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetConstNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics
	{
		struct TriggerEventChainBase_eventGetNextComponentInfo_Parms
		{
			TArray<FTriggerTaskComponentInformation> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetNextComponentInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetNextComponentInfo", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_OuterTriggers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_OuterTriggers_Inner = { "OuterTriggers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_OuterTriggers = { "OuterTriggers", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetParentTriggers_Parms, OuterTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetParentTriggers_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_CategoryParameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_OuterTriggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_OuterTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::NewProp_CategoryParameter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetParentTriggers", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetParentTriggers_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTriggerTaskComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTriggerTaskComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriggerTaskComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventGetParentTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Get all task components which are at the parent node of the owner component\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Get all task components which are at the parent node of the owner component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "GetParentTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerEventChainBase_eventGetParentTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics
	{
		struct TriggerEventChainBase_eventInitilaizeByTriggerTaskComponent_Parms
		{
			UTriggerTaskComponentBase* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventInitilaizeByTriggerTaskComponent_Parms, Component), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "InitilaizeByTriggerTaskComponent", nullptr, nullptr, sizeof(TriggerEventChainBase_eventInitilaizeByTriggerTaskComponent_Parms), Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherEventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherEventInfo;
		static void NewProp_IgnoreDiffentLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnoreDiffentLevel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_OtherEventInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_OtherEventInfo = { "OtherEventInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventIsChildForEventInfo_Parms, OtherEventInfo), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_OtherEventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_OtherEventInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventIsChildForEventInfo_Parms*)Obj)->IgnoreDiffentLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_IgnoreDiffentLevel = { "IgnoreDiffentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventIsChildForEventInfo_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventIsChildForEventInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventIsChildForEventInfo_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_OtherEventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_IgnoreDiffentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Try to check weather current event chain is matched for the other event info.\n\x09* The matched state between the two event chain is mean they are at the same layer, and can be child/parent for each\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Try to check weather current event chain is matched for the other event info.\n* The matched state between the two event chain is mean they are at the same layer, and can be child/parent for each" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "IsChildForEventInfo", nullptr, nullptr, sizeof(TriggerEventChainBase_eventIsChildForEventInfo_Parms), Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventOnInitilaizeByTriggerTaskComponent_Parms, Component), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Invoked when this data is initialized by the component.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Invoked when this data is initialized by the component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "OnInitilaizeByTriggerTaskComponent", nullptr, nullptr, sizeof(TriggerEventChainBase_eventOnInitilaizeByTriggerTaskComponent_Parms), Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ChildNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static void NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateParentNodeInChildNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveChildNode_Parms, ChildNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveChildNode_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_CategoryParameter_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventRemoveChildNode_Parms*)Obj)->NeedUpdateParentNodeInChildNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode = { "NeedUpdateParentNodeInChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventRemoveChildNode_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_ChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_CategoryParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* remove child node from this component\n\x09* You should implement this function in the child class.\n\x09* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n\x09*\n\x09* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* remove child node from this component\n* You should implement this function in the child class.\n* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n*\n* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "RemoveChildNode", nullptr, nullptr, sizeof(TriggerEventChainBase_eventRemoveChildNode_Parms), Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics
	{
		struct TriggerEventChainBase_eventRemoveNextComponentInfo_Parms
		{
			FString MapName;
			FGuid ComponentID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveNextComponentInfo_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveNextComponentInfo_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::NewProp_ComponentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* @param MapName\x09\x09""Empty means it will remove all instance which have the target ComponentID\n\x09* @param ComponentID\x09the ID of component\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* @param MapName                Empty means it will remove all instance which have the target ComponentID\n* @param ComponentID    the ID of component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "RemoveNextComponentInfo", nullptr, nullptr, sizeof(TriggerEventChainBase_eventRemoveNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryParameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryParameter;
		static void NewProp_NeedUpdateChildNodeInParentNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateChildNodeInParentNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveParentNode_Parms, ParentNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_CategoryParameter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_CategoryParameter = { "CategoryParameter", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventRemoveParentNode_Parms, CategoryParameter), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_CategoryParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_CategoryParameter_MetaData)) };
	void Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode_SetBit(void* Obj)
	{
		((TriggerEventChainBase_eventRemoveParentNode_Parms*)Obj)->NeedUpdateChildNodeInParentNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode = { "NeedUpdateChildNodeInParentNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerEventChainBase_eventRemoveParentNode_Parms), &Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_CategoryParameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Remove the parent node at current event chain\n\x09* You should implement this function in the child class.\n\x09* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n\x09* \n\x09* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Remove the parent node at current event chain\n* You should implement this function in the child class.\n* The base component will not store any child node, as different component may have different data struct to hold the child node information.\n*\n* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "RemoveParentNode", nullptr, nullptr, sizeof(TriggerEventChainBase_eventRemoveParentNode_Parms), Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics
	{
		struct TriggerEventChainBase_eventSetCategory_Parms
		{
			FGameplayTagContainer NewCategory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::NewProp_NewCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::NewProp_NewCategory = { "NewCategory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventChainBase_eventSetCategory_Parms, NewCategory), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::NewProp_NewCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::NewProp_NewCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::NewProp_NewCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventChainBase, nullptr, "SetCategory", nullptr, nullptr, sizeof(TriggerEventChainBase_eventSetCategory_Parms), Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventChainBase_SetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventChainBase_SetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerEventChainBase_NoRegister()
	{
		return UTriggerEventChainBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEventChainBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextComponentInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextComponentInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextComponentInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEventChainBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerEventChainBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerEventChainBase_AddChildNode, "AddChildNode" }, // 2624623067
		{ &Z_Construct_UFunction_UTriggerEventChainBase_AddNextComponentInfo, "AddNextComponentInfo" }, // 1689060198
		{ &Z_Construct_UFunction_UTriggerEventChainBase_AddParentNode, "AddParentNode" }, // 2922434488
		{ &Z_Construct_UFunction_UTriggerEventChainBase_CanHoldTargetObject, "CanHoldTargetObject" }, // 1660240242
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetCategory, "GetCategory" }, // 3651245387
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggers, "GetChildTriggers" }, // 1010545479
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetChildTriggerTaskComponents, "GetChildTriggerTaskComponents" }, // 3479115634
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetComponentOwner, "GetComponentOwner" }, // 1929677393
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetConstCategory, "GetConstCategory" }, // 654878204
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetConstNextComponentInfo, "GetConstNextComponentInfo" }, // 1756675238
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetNextComponentInfo, "GetNextComponentInfo" }, // 863243516
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggers, "GetParentTriggers" }, // 1562911828
		{ &Z_Construct_UFunction_UTriggerEventChainBase_GetParentTriggerTaskComponents, "GetParentTriggerTaskComponents" }, // 2169186339
		{ &Z_Construct_UFunction_UTriggerEventChainBase_InitilaizeByTriggerTaskComponent, "InitilaizeByTriggerTaskComponent" }, // 4294525710
		{ &Z_Construct_UFunction_UTriggerEventChainBase_IsChildForEventInfo, "IsChildForEventInfo" }, // 1500360391
		{ &Z_Construct_UFunction_UTriggerEventChainBase_OnInitilaizeByTriggerTaskComponent, "OnInitilaizeByTriggerTaskComponent" }, // 3488493442
		{ &Z_Construct_UFunction_UTriggerEventChainBase_RemoveChildNode, "RemoveChildNode" }, // 3730793581
		{ &Z_Construct_UFunction_UTriggerEventChainBase_RemoveNextComponentInfo, "RemoveNextComponentInfo" }, // 739077404
		{ &Z_Construct_UFunction_UTriggerEventChainBase_RemoveParentNode, "RemoveParentNode" }, // 2935732398
		{ &Z_Construct_UFunction_UTriggerEventChainBase_SetCategory, "SetCategory" }, // 1790755276
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventChainBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "IncludePath", "TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos_Inner = { "NextComponentInfos", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventInfo" },
		{ "Comment", "/*\n\x09* This the actual event info which will be used by the trigger task component to process at runtime.\n\x09* when on task is finished and try to notify the next task in the next component to start, the trigger task component will use this variable to get next toggle information\n\x09*/" },
		{ "DisplayAfter", "Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* This the actual event info which will be used by the trigger task component to process at runtime.\n* when on task is finished and try to notify the next task in the next component to start, the trigger task component will use this variable to get next toggle information" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos = { "NextComponentInfos", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventChainBase, NextComponentInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventInfo" },
		{ "Comment", "/*\n\x09* Which category should the child nodes belong to\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "* Which category should the child nodes belong to" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventChainBase, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_OwnerComponent_MetaData[] = {
		{ "Comment", "//The component who own this event chain info\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventChainBase.h" },
		{ "ToolTip", "The component who own this event chain info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventChainBase, OwnerComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_OwnerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_OwnerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEventChainBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_NextComponentInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventChainBase_Statics::NewProp_OwnerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEventChainBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEventChainBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEventChainBase_Statics::ClassParams = {
		&UTriggerEventChainBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerEventChainBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventChainBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEventChainBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventChainBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEventChainBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEventChainBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEventChainBase, 3985435583);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEventChainBase>()
	{
		return UTriggerEventChainBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEventChainBase(Z_Construct_UClass_UTriggerEventChainBase, &UTriggerEventChainBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEventChainBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEventChainBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
