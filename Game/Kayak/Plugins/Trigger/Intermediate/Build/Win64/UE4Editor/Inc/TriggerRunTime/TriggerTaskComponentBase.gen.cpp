// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/TriggerTaskComponentBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskComponentBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventChainBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTaskComponentCategory_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskComponentInformation();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ERunType();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTaskComponentCategory*>*)Z_Param__Result=P_THIS->GetCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetConstCategories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTaskComponentCategory*>*)Z_Param__Result=P_THIS->GetConstCategories();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveCategory)
	{
		P_GET_OBJECT(UTaskComponentCategory,Z_Param_OldCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCategory(Z_Param_OldCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddNewCategory)
	{
		P_GET_OBJECT(UTaskComponentCategory,Z_Param_NewCategory);
		P_GET_UBOOL(Z_Param_CreateCopy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddNewCategory(Z_Param_NewCategory,Z_Param_CreateCopy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execDuplicateTaskComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_SourceComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DuplicateTaskComponent(Z_Param_SourceComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTask(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTask(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTaskIndexByTaskClass)
	{
		P_GET_OBJECT(UClass,Z_Param_TaskClass);
		P_GET_UBOOL(Z_Param_SearchInConfiguredTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTaskIndexByTaskClass(Z_Param_TaskClass,Z_Param_SearchInConfiguredTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTriggerTaskByClass)
	{
		P_GET_TARRAY_REF(UTriggerTaskBase*,Z_Param_Out_OutTasks);
		P_GET_OBJECT(UClass,Z_Param_TaskClass);
		P_GET_UBOOL(Z_Param_SearchInConfiguredTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriggerTaskByClass(Z_Param_Out_OutTasks,Z_Param_TaskClass,Z_Param_SearchInConfiguredTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTaskIndex)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_UBOOL(Z_Param_SearchInTemplateTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTaskIndex(Z_Param_Task,Z_Param_SearchInTemplateTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetComponentID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetComponentID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTriggerTaskByID)
	{
		P_GET_STRUCT(FGuid,Z_Param_ID);
		P_GET_UBOOL(Z_Param_SearchInTemplateTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetTriggerTaskByID(Z_Param_ID,Z_Param_SearchInTemplateTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTriggerTaskByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_SearchInTemplateTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetTriggerTaskByIndex(Z_Param_Index,Z_Param_SearchInTemplateTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTriggerObjectOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ITriggerInterface>*)Z_Param__Result=P_THIS->GetTriggerObjectOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execTryToNotifyChildNodeToStartRunTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToNotifyChildNodeToStartRunTask(Z_Param_Task,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsAllTaskFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllTaskFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execCreateNewTaskByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Task);
		P_GET_UBOOL(Z_Param_AsTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->CreateNewTaskByClass(Z_Param_Task,Z_Param_AsTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execCreateNewTaskByObject)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_UBOOL(Z_Param_AsTemplate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->CreateNewTaskByObject(Z_Param_Task,Z_Param_AsTemplate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsParentNodeOfEventInfo)
	{
		P_GET_OBJECT(UTriggerEventChainBase,Z_Param_CheckedEventInfo);
		P_GET_UBOOL(Z_Param_IgnoreDiffentLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParentNodeOfEventInfo(Z_Param_CheckedEventInfo,Z_Param_IgnoreDiffentLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsChildNodeOfEventInfo)
	{
		P_GET_OBJECT(UTriggerEventChainBase,Z_Param_CheckedEventInfo);
		P_GET_UBOOL(Z_Param_IgnoreDiffentLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildNodeOfEventInfo(Z_Param_CheckedEventInfo,Z_Param_IgnoreDiffentLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsParentNodeOfComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_ChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParentNodeOfComponent(Z_Param_ChildNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsChildNodeOfComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_ParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildNodeOfComponent(Z_Param_ParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveEventChain)
	{
		P_GET_OBJECT(UTriggerEventChainBase,Z_Param_OldChain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveEventChain(Z_Param_OldChain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddNewEventChain)
	{
		P_GET_OBJECT(UTriggerEventChainBase,Z_Param_NewChain);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerEventChainBase**)Z_Param__Result=P_THIS->AddNewEventChain(Z_Param_NewChain,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetConstEventChains)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerEventChainBase*>*)Z_Param__Result=P_THIS->GetConstEventChains();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetEventChains)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerEventChainBase*>*)Z_Param__Result=P_THIS->GetEventChains();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTriggerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerManager**)Z_Param__Result=P_THIS->GetTriggerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetNextComponentInfo)
	{
		P_GET_TARRAY_REF(FTriggerTaskComponentInformation,Z_Param_Out_OuterInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNextComponentInfo(Z_Param_Out_OuterInfos);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddNextComponentInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_STRUCT(FGuid,Z_Param_ComponentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNextComponentInfo(Z_Param_MapName,Z_Param_ComponentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveNextComponentInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
		P_GET_STRUCT(FGuid,Z_Param_ComponentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveNextComponentInfo(Z_Param_MapName,Z_Param_ComponentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetChildTriggers)
	{
		P_GET_TARRAY_REF(TScriptInterface<ITriggerInterface>,Z_Param_Out_OuterTriggers);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildTriggers_Implementation(Z_Param_Out_OuterTriggers,Z_Param_Out_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetParentTriggers)
	{
		P_GET_TARRAY_REF(TScriptInterface<ITriggerInterface>,Z_Param_Out_OuterTriggers);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentTriggers_Implementation(Z_Param_Out_OuterTriggers,Z_Param_Out_Category);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddChildNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ChildNode);
		P_GET_OBJECT(UClass,Z_Param_TargetEventChainClass);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_GET_UBOOL(Z_Param_NeedUpdateEventInfoInChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddChildNode_Implementation(Z_Param_Out_ChildNode,Z_Param_TargetEventChainClass,Z_Param_Out_Category,Z_Param_NeedUpdateEventInfoInChildNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execAddParentNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ParentNode);
		P_GET_OBJECT(UClass,Z_Param_TargetEventChainClass);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_GET_UBOOL(Z_Param_NeedUpdateEventInParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddParentNode_Implementation(Z_Param_Out_ParentNode,Z_Param_TargetEventChainClass,Z_Param_Out_Category,Z_Param_NeedUpdateEventInParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveParentNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ParentNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_GET_UBOOL(Z_Param_NeedUpdateChildNodeInParentNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveParentNode_Implementation(Z_Param_Out_ParentNode,Z_Param_Out_Category,Z_Param_NeedUpdateChildNodeInParentNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRemoveChildNode)
	{
		P_GET_TINTERFACE_REF(ITriggerInterface,Z_Param_Out_ChildNode);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_Category);
		P_GET_UBOOL(Z_Param_NeedUpdateParentNodeInChildNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildNode_Implementation(Z_Param_Out_ChildNode,Z_Param_Out_Category,Z_Param_NeedUpdateParentNodeInChildNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetParentTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutTriggerTaskComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetParentTriggerTaskComponents(Z_Param_Out_OutTriggerTaskComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetChildTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutTriggerTaskComponents);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildTriggerTaskComponents(Z_Param_Out_OutTriggerTaskComponents,Z_Param_Task,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRecevieTaskInformation)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_ResourceComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ResourceTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RecevieTaskInformation(Z_Param_ResourceComponent,Z_Param_ResourceTask,Z_Param_StartOperationInfo,Z_Param_TargetTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execTransfereTaskToTargetTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_SenderTask);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransfereTaskToTargetTask(Z_Param_SenderTask,Z_Param_TargetTask,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execTransfereTask)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_TargetComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ResourceTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TargetTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TransfereTask(Z_Param_TargetComponent,Z_Param_ResourceTask,Z_Param_StartOperationInfo,Z_Param_TargetTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execResumeTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ResumeInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ResumeTask(Z_Param_Task,Z_Param_ResumeInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execPauseTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_PauseOperaitonInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PauseTask(Z_Param_Task,Z_Param_PauseOperaitonInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execEndTask)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_EndOperationInfo);
		P_GET_UBOOL(Z_Param_IsStop);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_ENUM(ETriggerTaskAutomaticallyEndType,Z_Param_EndType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndTask(Z_Param_EndOperationInfo,Z_Param_IsStop,Z_Param_Task,ETriggerTaskAutomaticallyEndType(Z_Param_EndType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execTickTask)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TickTask(Z_Param_DeltaTime,Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execStartTask)
	{
		P_GET_UBOOL(Z_Param_ForceStart);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartTask(Z_Param_ForceStart,Z_Param_Task,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execSetInstigator)
	{
		P_GET_OBJECT(AActor,Z_Param_Insigator);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstigator(Z_Param_Insigator,Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execCanBeToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetTemplateTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskBase*>*)Z_Param__Result=P_THIS->GetTemplateTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execGetAllTriggerTasks)
	{
		P_GET_TARRAY_REF(UTriggerTaskBase*,Z_Param_Out_OutTasks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTriggerTasks(Z_Param_Out_OutTasks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execIsMatchedForCurrentRunTimeContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchedForCurrentRunTimeContent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execUnRegisterTaskComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegisterTaskComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execRegisterTaskComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterTaskComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskComponentBase::execNetMulti_StartTask)
	{
		P_GET_STRUCT(FTriggerTaskRuntimeInfo,Z_Param_RuntimeInfo);
		P_GET_UBOOL(Z_Param_CanRunOnServer);
		P_GET_UBOOL(Z_Param_CanRunOnClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->NetMulti_StartTask_Validate(Z_Param_RuntimeInfo,Z_Param_CanRunOnServer,Z_Param_CanRunOnClient))
		{
			RPC_ValidateFailed(TEXT("NetMulti_StartTask_Validate"));
			return;
		}
		P_THIS->NetMulti_StartTask_Implementation(Z_Param_RuntimeInfo,Z_Param_CanRunOnServer,Z_Param_CanRunOnClient);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskComponentBase_AddChildNode = FName(TEXT("AddChildNode"));
	bool UTriggerTaskComponentBase::AddChildNode(TScriptInterface<ITriggerInterface> const& ChildNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInfoInChildNode)
	{
		TriggerTaskComponentBase_eventAddChildNode_Parms Parms;
		Parms.ChildNode=ChildNode;
		Parms.TargetEventChainClass=TargetEventChainClass;
		Parms.Category=Category;
		Parms.NeedUpdateEventInfoInChildNode=NeedUpdateEventInfoInChildNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_AddChildNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskComponentBase_AddParentNode = FName(TEXT("AddParentNode"));
	bool UTriggerTaskComponentBase::AddParentNode(TScriptInterface<ITriggerInterface> const& ParentNode, TSubclassOf<UTriggerEventChainBase>  TargetEventChainClass, FGameplayTagContainer const& Category, bool NeedUpdateEventInParentNode)
	{
		TriggerTaskComponentBase_eventAddParentNode_Parms Parms;
		Parms.ParentNode=ParentNode;
		Parms.TargetEventChainClass=TargetEventChainClass;
		Parms.Category=Category;
		Parms.NeedUpdateEventInParentNode=NeedUpdateEventInParentNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_AddParentNode),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskComponentBase_GetChildTriggers = FName(TEXT("GetChildTriggers"));
	void UTriggerTaskComponentBase::GetChildTriggers(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category)
	{
		TriggerTaskComponentBase_eventGetChildTriggers_Parms Parms;
		Parms.OuterTriggers=OuterTriggers;
		Parms.Category=Category;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_GetChildTriggers),&Parms);
		OuterTriggers=Parms.OuterTriggers;
	}
	static FName NAME_UTriggerTaskComponentBase_GetParentTriggers = FName(TEXT("GetParentTriggers"));
	void UTriggerTaskComponentBase::GetParentTriggers(TArray<TScriptInterface<ITriggerInterface> >& OuterTriggers, FGameplayTagContainer const& Category)
	{
		TriggerTaskComponentBase_eventGetParentTriggers_Parms Parms;
		Parms.OuterTriggers=OuterTriggers;
		Parms.Category=Category;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_GetParentTriggers),&Parms);
		OuterTriggers=Parms.OuterTriggers;
	}
	static FName NAME_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent = FName(TEXT("IsMatchedForCurrentRunTimeContent"));
	bool UTriggerTaskComponentBase::IsMatchedForCurrentRunTimeContent() const
	{
		TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms Parms;
		const_cast<UTriggerTaskComponentBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskComponentBase_NetMulti_StartTask = FName(TEXT("NetMulti_StartTask"));
	void UTriggerTaskComponentBase::NetMulti_StartTask(FTriggerTaskRuntimeInfo const& RuntimeInfo, bool CanRunOnServer, bool CanRunOnClient)
	{
		TriggerTaskComponentBase_eventNetMulti_StartTask_Parms Parms;
		Parms.RuntimeInfo=RuntimeInfo;
		Parms.CanRunOnServer=CanRunOnServer ? true : false;
		Parms.CanRunOnClient=CanRunOnClient ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_NetMulti_StartTask),&Parms);
	}
	static FName NAME_UTriggerTaskComponentBase_OnDispatchTask = FName(TEXT("OnDispatchTask"));
	bool UTriggerTaskComponentBase::OnDispatchTask(bool ForceStart, UOperationInformationBase* StartOperationInfo)
	{
		TriggerTaskComponentBase_eventOnDispatchTask_Parms Parms;
		Parms.ForceStart=ForceStart ? true : false;
		Parms.StartOperationInfo=StartOperationInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_OnDispatchTask),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents = FName(TEXT("OnGetChildTriggerTaskComponents"));
	void UTriggerTaskComponentBase::OnGetChildTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents, UTriggerTaskBase* Task, UOperationInformationBase* StartOperationInfo)
	{
		TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms Parms;
		Parms.OutTriggerTaskComponents=OutTriggerTaskComponents;
		Parms.Task=Task;
		Parms.StartOperationInfo=StartOperationInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents),&Parms);
		OutTriggerTaskComponents=Parms.OutTriggerTaskComponents;
	}
	static FName NAME_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents = FName(TEXT("OnGetParentTriggerTaskComponents"));
	void UTriggerTaskComponentBase::OnGetParentTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
	{
		TriggerTaskComponentBase_eventOnGetParentTriggerTaskComponents_Parms Parms;
		Parms.OutTriggerTaskComponents=OutTriggerTaskComponents;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents),&Parms);
		OutTriggerTaskComponents=Parms.OutTriggerTaskComponents;
	}
	static FName NAME_UTriggerTaskComponentBase_RemoveChildNode = FName(TEXT("RemoveChildNode"));
	void UTriggerTaskComponentBase::RemoveChildNode(TScriptInterface<ITriggerInterface> const& ChildNode, FGameplayTagContainer const& Category, bool NeedUpdateParentNodeInChildNode)
	{
		TriggerTaskComponentBase_eventRemoveChildNode_Parms Parms;
		Parms.ChildNode=ChildNode;
		Parms.Category=Category;
		Parms.NeedUpdateParentNodeInChildNode=NeedUpdateParentNodeInChildNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_RemoveChildNode),&Parms);
	}
	static FName NAME_UTriggerTaskComponentBase_RemoveParentNode = FName(TEXT("RemoveParentNode"));
	void UTriggerTaskComponentBase::RemoveParentNode(TScriptInterface<ITriggerInterface> const& ParentNode, FGameplayTagContainer const& Category, bool NeedUpdateChildNodeInParentNode)
	{
		TriggerTaskComponentBase_eventRemoveParentNode_Parms Parms;
		Parms.ParentNode=ParentNode;
		Parms.Category=Category;
		Parms.NeedUpdateChildNodeInParentNode=NeedUpdateChildNodeInParentNode ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskComponentBase_RemoveParentNode),&Parms);
	}
	void UTriggerTaskComponentBase::StaticRegisterNativesUTriggerTaskComponentBase()
	{
		UClass* Class = UTriggerTaskComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildNode", &UTriggerTaskComponentBase::execAddChildNode },
			{ "AddNewCategory", &UTriggerTaskComponentBase::execAddNewCategory },
			{ "AddNewEventChain", &UTriggerTaskComponentBase::execAddNewEventChain },
			{ "AddNextComponentInfo", &UTriggerTaskComponentBase::execAddNextComponentInfo },
			{ "AddParentNode", &UTriggerTaskComponentBase::execAddParentNode },
			{ "AddTask", &UTriggerTaskComponentBase::execAddTask },
			{ "CanBeToggled", &UTriggerTaskComponentBase::execCanBeToggled },
			{ "CreateNewTaskByClass", &UTriggerTaskComponentBase::execCreateNewTaskByClass },
			{ "CreateNewTaskByObject", &UTriggerTaskComponentBase::execCreateNewTaskByObject },
			{ "DuplicateTaskComponent", &UTriggerTaskComponentBase::execDuplicateTaskComponent },
			{ "EndTask", &UTriggerTaskComponentBase::execEndTask },
			{ "GetAllTriggerTasks", &UTriggerTaskComponentBase::execGetAllTriggerTasks },
			{ "GetCategories", &UTriggerTaskComponentBase::execGetCategories },
			{ "GetChildTriggers", &UTriggerTaskComponentBase::execGetChildTriggers },
			{ "GetChildTriggerTaskComponents", &UTriggerTaskComponentBase::execGetChildTriggerTaskComponents },
			{ "GetComponentID", &UTriggerTaskComponentBase::execGetComponentID },
			{ "GetConstCategories", &UTriggerTaskComponentBase::execGetConstCategories },
			{ "GetConstEventChains", &UTriggerTaskComponentBase::execGetConstEventChains },
			{ "GetEventChains", &UTriggerTaskComponentBase::execGetEventChains },
			{ "GetNextComponentInfo", &UTriggerTaskComponentBase::execGetNextComponentInfo },
			{ "GetParentTriggers", &UTriggerTaskComponentBase::execGetParentTriggers },
			{ "GetParentTriggerTaskComponents", &UTriggerTaskComponentBase::execGetParentTriggerTaskComponents },
			{ "GetTaskIndex", &UTriggerTaskComponentBase::execGetTaskIndex },
			{ "GetTaskIndexByTaskClass", &UTriggerTaskComponentBase::execGetTaskIndexByTaskClass },
			{ "GetTemplateTasks", &UTriggerTaskComponentBase::execGetTemplateTasks },
			{ "GetTriggerManager", &UTriggerTaskComponentBase::execGetTriggerManager },
			{ "GetTriggerObjectOwner", &UTriggerTaskComponentBase::execGetTriggerObjectOwner },
			{ "GetTriggerTaskByClass", &UTriggerTaskComponentBase::execGetTriggerTaskByClass },
			{ "GetTriggerTaskByID", &UTriggerTaskComponentBase::execGetTriggerTaskByID },
			{ "GetTriggerTaskByIndex", &UTriggerTaskComponentBase::execGetTriggerTaskByIndex },
			{ "IsAllTaskFinished", &UTriggerTaskComponentBase::execIsAllTaskFinished },
			{ "IsChildNodeOfComponent", &UTriggerTaskComponentBase::execIsChildNodeOfComponent },
			{ "IsChildNodeOfEventInfo", &UTriggerTaskComponentBase::execIsChildNodeOfEventInfo },
			{ "IsMatchedForCurrentRunTimeContent", &UTriggerTaskComponentBase::execIsMatchedForCurrentRunTimeContent },
			{ "IsParentNodeOfComponent", &UTriggerTaskComponentBase::execIsParentNodeOfComponent },
			{ "IsParentNodeOfEventInfo", &UTriggerTaskComponentBase::execIsParentNodeOfEventInfo },
			{ "NetMulti_StartTask", &UTriggerTaskComponentBase::execNetMulti_StartTask },
			{ "PauseTask", &UTriggerTaskComponentBase::execPauseTask },
			{ "RecevieTaskInformation", &UTriggerTaskComponentBase::execRecevieTaskInformation },
			{ "RegisterTaskComponent", &UTriggerTaskComponentBase::execRegisterTaskComponent },
			{ "RemoveCategory", &UTriggerTaskComponentBase::execRemoveCategory },
			{ "RemoveChildNode", &UTriggerTaskComponentBase::execRemoveChildNode },
			{ "RemoveEventChain", &UTriggerTaskComponentBase::execRemoveEventChain },
			{ "RemoveNextComponentInfo", &UTriggerTaskComponentBase::execRemoveNextComponentInfo },
			{ "RemoveParentNode", &UTriggerTaskComponentBase::execRemoveParentNode },
			{ "RemoveTask", &UTriggerTaskComponentBase::execRemoveTask },
			{ "ResumeTask", &UTriggerTaskComponentBase::execResumeTask },
			{ "SetInstigator", &UTriggerTaskComponentBase::execSetInstigator },
			{ "StartTask", &UTriggerTaskComponentBase::execStartTask },
			{ "TickTask", &UTriggerTaskComponentBase::execTickTask },
			{ "TransfereTask", &UTriggerTaskComponentBase::execTransfereTask },
			{ "TransfereTaskToTargetTask", &UTriggerTaskComponentBase::execTransfereTaskToTargetTask },
			{ "TryToNotifyChildNodeToStartRunTask", &UTriggerTaskComponentBase::execTryToNotifyChildNodeToStartRunTask },
			{ "UnRegisterTaskComponent", &UTriggerTaskComponentBase::execUnRegisterTaskComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ChildNode;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetEventChainClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static void NewProp_NeedUpdateEventInfoInChildNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateEventInfoInChildNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ChildNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddChildNode_Parms, ChildNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ChildNode_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_TargetEventChainClass = { "TargetEventChainClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddChildNode_Parms, TargetEventChainClass), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddChildNode_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_Category_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_NeedUpdateEventInfoInChildNode_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddChildNode_Parms*)Obj)->NeedUpdateEventInfoInChildNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_NeedUpdateEventInfoInChildNode = { "NeedUpdateEventInfoInChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddChildNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_NeedUpdateEventInfoInChildNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddChildNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddChildNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_TargetEventChainClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_NeedUpdateEventInfoInChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Add new child node to this component\n\x09*\n\x09* @param NeedUpdateEventInfoInChildNode\x09\x09true means it should update the parent node information in the child node\n\x09* @param TargetEventChainClass\x09\x09\x09\x09the class of event chain to hold the target child node\n\x09* \n\x09* #return true means add successfully, visa verse\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Add new child node to this component\n*\n* @param NeedUpdateEventInfoInChildNode         true means it should update the parent node information in the child node\n* @param TargetEventChainClass                          the class of event chain to hold the target child node\n*\n* #return true means add successfully, visa verse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddChildNode", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddChildNode_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics
	{
		struct TriggerTaskComponentBase_eventAddNewCategory_Parms
		{
			UTaskComponentCategory* NewCategory;
			bool CreateCopy;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCategory;
		static void NewProp_CreateCopy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateCopy;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_NewCategory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_NewCategory = { "NewCategory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNewCategory_Parms, NewCategory), Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_NewCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_NewCategory_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_CreateCopy_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddNewCategory_Parms*)Obj)->CreateCopy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_CreateCopy = { "CreateCopy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddNewCategory_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_CreateCopy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNewCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_NewCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_CreateCopy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Add NewCategory to this component\n\x09*\n\x09* @param NewCategory\x09If the new category is valid then add its copy to the Categories\n\x09* @param DontCreateCopy\x09""False means this function will copy the new category to create new one and then add it. \n\x09*\x09\x09\x09\x09\x09\x09""At this situation when you add the same category you should remove it first, or it will add category unexpected\n\x09*\x09\x09\x09\x09\x09\x09True this function will add the new category directly\n\x09*\x09\x09\x09\x09\x09\x09\n\x09* \n\x09* #return the index for the new category, INDEX_NONE means add failed\n\x09*/" },
		{ "CPP_Default_CreateCopy", "false" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Add NewCategory to this component\n*\n* @param NewCategory    If the new category is valid then add its copy to the Categories\n* @param DontCreateCopy False means this function will copy the new category to create new one and then add it.\n*                                               At this situation when you add the same category you should remove it first, or it will add category unexpected\n*                                               True this function will add the new category directly\n*\n*\n* #return the index for the new category, INDEX_NONE means add failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddNewCategory", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddNewCategory_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics
	{
		struct TriggerTaskComponentBase_eventAddNewEventChain_Parms
		{
			UTriggerEventChainBase* NewChain;
			bool CreateNewInstance;
			UTriggerEventChainBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewChain;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_NewChain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_NewChain = { "NewChain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNewEventChain_Parms, NewChain), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_NewChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_NewChain_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddNewEventChain_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddNewEventChain_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNewEventChain_Parms, ReturnValue), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_NewChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_CreateNewInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Add new event chain to the the event chains pool.\n\x09*/" },
		{ "CPP_Default_CreateNewInstance", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Add new event chain to the the event chains pool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddNewEventChain", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddNewEventChain_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics
	{
		struct TriggerTaskComponentBase_eventAddNextComponentInfo_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNextComponentInfo_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddNextComponentInfo_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::NewProp_ComponentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Add the next component info to all event chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Add the next component info to all event chain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddNextComponentInfo", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ParentNode;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TargetEventChainClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static void NewProp_NeedUpdateEventInParentNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateEventInParentNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddParentNode_Parms, ParentNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ParentNode_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_TargetEventChainClass = { "TargetEventChainClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddParentNode_Parms, TargetEventChainClass), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddParentNode_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_Category_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_NeedUpdateEventInParentNode_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddParentNode_Parms*)Obj)->NeedUpdateEventInParentNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_NeedUpdateEventInParentNode = { "NeedUpdateEventInParentNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddParentNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_NeedUpdateEventInParentNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventAddParentNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventAddParentNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_TargetEventChainClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_NeedUpdateEventInParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Add the parent node to all event chains which belong to this component\n\x09*\n\x09* @param NeedUpdateEventInParentNode\x09\x09true means it should update the parent node information in the child node\n\x09* @param TargetEventChainClass\x09\x09\x09\x09the class of event chain to hold the target child node\n\x09* \n\x09* #return true means add successfully, visa verse\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Add the parent node to all event chains which belong to this component\n*\n* @param NeedUpdateEventInParentNode            true means it should update the parent node information in the child node\n* @param TargetEventChainClass                          the class of event chain to hold the target child node\n*\n* #return true means add successfully, visa verse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddParentNode", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddParentNode_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics
	{
		struct TriggerTaskComponentBase_eventAddTask_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventAddTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Add new task to task pool in this component\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Add new task to task pool in this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "AddTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventAddTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics
	{
		struct TriggerTaskComponentBase_eventCanBeToggled_Parms
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
	void Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventCanBeToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventCanBeToggled_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//If we start to run tasks in this component I will use this function to check weather this component can be toggled\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "If we start to run tasks in this component I will use this function to check weather this component can be toggled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "CanBeToggled", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventCanBeToggled_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics
	{
		struct TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms
		{
			TSubclassOf<UTriggerTaskBase>  Task;
			bool AsTemplate;
			UTriggerTaskBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Task;
		static void NewProp_AsTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsTemplate;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_AsTemplate_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms*)Obj)->AsTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_AsTemplate = { "AsTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_AsTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_AsTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Create new task use the target task class to this component\n\x09*/" },
		{ "CPP_Default_AsTemplate", "false" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Create new task use the target task class to this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "CreateNewTaskByClass", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventCreateNewTaskByClass_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics
	{
		struct TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms
		{
			UTriggerTaskBase* Task;
			bool AsTemplate;
			UTriggerTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_AsTemplate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AsTemplate;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_Task_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_AsTemplate_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms*)Obj)->AsTemplate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_AsTemplate = { "AsTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_AsTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_AsTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Create new task use the task as template to this component\n\x09*/" },
		{ "CPP_Default_AsTemplate", "false" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Create new task use the task as template to this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "CreateNewTaskByObject", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventCreateNewTaskByObject_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics
	{
		struct TriggerTaskComponentBase_eventDuplicateTaskComponent_Parms
		{
			UTriggerTaskComponentBase* SourceComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventDuplicateTaskComponent_Parms, SourceComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_SourceComponent_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventDuplicateTaskComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventDuplicateTaskComponent_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "DuplicateTaskComponent", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventDuplicateTaskComponent_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics
	{
		struct TriggerTaskComponentBase_eventEndTask_Parms
		{
			UOperationInformationBase* EndOperationInfo;
			bool IsStop;
			UTriggerTaskBase* Task;
			ETriggerTaskAutomaticallyEndType EndType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndOperationInfo;
		static void NewProp_IsStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndOperationInfo = { "EndOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventEndTask_Parms, EndOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_IsStop_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventEndTask_Parms*)Obj)->IsStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_IsStop = { "IsStop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventEndTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_IsStop_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventEndTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventEndTask_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventEndTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventEndTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_IsStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_EndType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Start to stop the task\n\x09*\n\x09* @param Task\x09\x09\x09null means we will start all tasks in this component\n\x09*\x09\x09\x09\x09\x09\x09if this task is not in this component, we will not process it\n\x09* @param IsStop\x09\x09\x09True means the task will never be reactivated again\n\x09*/" },
		{ "CPP_Default_EndType", "ETriggerTaskAutomaticallyEndType_EndOverlap" },
		{ "CPP_Default_IsStop", "false" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Start to stop the task\n*\n* @param Task                   null means we will start all tasks in this component\n*                                               if this task is not in this component, we will not process it\n* @param IsStop                 True means the task will never be reactivated again" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "EndTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventEndTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics
	{
		struct TriggerTaskComponentBase_eventGetAllTriggerTasks_Parms
		{
			TArray<UTriggerTaskBase*> OutTasks;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTasks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks_Inner = { "OutTasks", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks = { "OutTasks", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetAllTriggerTasks_Parms, OutTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::NewProp_OutTasks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get All trigger tasks in this component include Template task and instanced task\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get All trigger tasks in this component include Template task and instanced task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetAllTriggerTasks", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetAllTriggerTasks_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics
	{
		struct TriggerTaskComponentBase_eventGetCategories_Parms
		{
			TArray<UTaskComponentCategory*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetCategories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetCategories", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetCategories_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_OuterTriggers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_OuterTriggers_Inner = { "OuterTriggers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_OuterTriggers = { "OuterTriggers", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetChildTriggers_Parms, OuterTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetChildTriggers_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_OuterTriggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_OuterTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Get All Child Triggers which matched the Category.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Get All Child Triggers which matched the Category." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetChildTriggers", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetChildTriggers_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics
	{
		struct TriggerTaskComponentBase_eventGetChildTriggerTaskComponents_Parms
		{
			TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents;
			UTriggerTaskBase* Task;
			UOperationInformationBase* StartOperationInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTriggerTaskComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTriggerTaskComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriggerTaskComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetChildTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetChildTriggerTaskComponents_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetChildTriggerTaskComponents_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* If you want to use this function to get the child task component please make sure all essential conditions are meet such as the map which the target component lied is loaded\n\x09*/" },
		{ "CPP_Default_StartOperationInfo", "None" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* If you want to use this function to get the child task component please make sure all essential conditions are meet such as the map which the target component lied is loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetChildTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetChildTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics
	{
		struct TriggerTaskComponentBase_eventGetComponentID_Parms
		{
			FGuid ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetComponentID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get the unique and persistent ID for this component\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get the unique and persistent ID for this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetComponentID", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetComponentID_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics
	{
		struct TriggerTaskComponentBase_eventGetConstCategories_Parms
		{
			TArray<UTaskComponentCategory*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetConstCategories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetConstCategories", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetConstCategories_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics
	{
		struct TriggerTaskComponentBase_eventGetConstEventChains_Parms
		{
			TArray<UTriggerEventChainBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetConstEventChains_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetConstEventChains", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetConstEventChains_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics
	{
		struct TriggerTaskComponentBase_eventGetEventChains_Parms
		{
			TArray<UTriggerEventChainBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetEventChains_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetEventChains", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetEventChains_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics
	{
		struct TriggerTaskComponentBase_eventGetNextComponentInfo_Parms
		{
			TArray<FTriggerTaskComponentInformation> OuterInfos;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::NewProp_OuterInfos_Inner = { "OuterInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::NewProp_OuterInfos = { "OuterInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetNextComponentInfo_Parms, OuterInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::NewProp_OuterInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::NewProp_OuterInfos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Get All NextComponentInfos\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Get All NextComponentInfos" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetNextComponentInfo", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_OuterTriggers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_OuterTriggers_Inner = { "OuterTriggers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_OuterTriggers = { "OuterTriggers", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetParentTriggers_Parms, OuterTriggers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetParentTriggers_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_OuterTriggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_OuterTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetParentTriggers", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetParentTriggers_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics
	{
		struct TriggerTaskComponentBase_eventGetParentTriggerTaskComponents_Parms
		{
			TArray<UTriggerTaskComponentBase*> OutTriggerTaskComponents;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetParentTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetParentTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetParentTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics
	{
		struct TriggerTaskComponentBase_eventGetTaskIndex_Parms
		{
			UTriggerTaskBase* Task;
			bool SearchInTemplateTask;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_SearchInTemplateTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchInTemplateTask;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTaskIndex_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_Task_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_SearchInTemplateTask_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventGetTaskIndex_Parms*)Obj)->SearchInTemplateTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_SearchInTemplateTask = { "SearchInTemplateTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventGetTaskIndex_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_SearchInTemplateTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTaskIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_SearchInTemplateTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Get the index of the task in target tasks\n\x09* if SearchInConfiguredTask is false this index is in all tasks in this component, and this index is mutable\n\x09*/" },
		{ "CPP_Default_SearchInTemplateTask", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Get the index of the task in target tasks\n* if SearchInConfiguredTask is false this index is in all tasks in this component, and this index is mutable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTaskIndex", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTaskIndex_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics
	{
		struct TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms
		{
			TSubclassOf<UTriggerTaskBase>  TaskClass;
			bool SearchInConfiguredTask;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TaskClass;
		static void NewProp_SearchInConfiguredTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchInConfiguredTask;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_TaskClass = { "TaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms, TaskClass), Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_SearchInConfiguredTask_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms*)Obj)->SearchInConfiguredTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_SearchInConfiguredTask = { "SearchInConfiguredTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_SearchInConfiguredTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_TaskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_SearchInConfiguredTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get the index when first hit the target task class\n" },
		{ "CPP_Default_SearchInConfiguredTask", "false" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get the index when first hit the target task class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTaskIndexByTaskClass", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTaskIndexByTaskClass_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics
	{
		struct TriggerTaskComponentBase_eventGetTemplateTasks_Parms
		{
			TArray<UTriggerTaskBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTemplateTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get the trigger tasks which is configured by the designer at editor mode\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get the trigger tasks which is configured by the designer at editor mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTemplateTasks", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTemplateTasks_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics
	{
		struct TriggerTaskComponentBase_eventGetTriggerManager_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Interface to get trigger manager\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Interface to get trigger manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTriggerManager", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTriggerManager_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics
	{
		struct TriggerTaskComponentBase_eventGetTriggerObjectOwner_Parms
		{
			TScriptInterface<ITriggerInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerObjectOwner_Parms, ReturnValue), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTriggerObjectOwner", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTriggerObjectOwner_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics
	{
		struct TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms
		{
			TArray<UTriggerTaskBase*> OutTasks;
			TSubclassOf<UTriggerTaskBase>  TaskClass;
			bool SearchInConfiguredTask;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTasks;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TaskClass;
		static void NewProp_SearchInConfiguredTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchInConfiguredTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks_Inner = { "OutTasks", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks = { "OutTasks", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms, OutTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_TaskClass = { "TaskClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms, TaskClass), Z_Construct_UClass_UTriggerTaskBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_SearchInConfiguredTask_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms*)Obj)->SearchInConfiguredTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_SearchInConfiguredTask = { "SearchInConfiguredTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_SearchInConfiguredTask_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_OutTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_TaskClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::NewProp_SearchInConfiguredTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get all task with the same TaskClass, if the TaskClass is none then just return the TriggerTasks\n" },
		{ "CPP_Default_SearchInConfiguredTask", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get all task with the same TaskClass, if the TaskClass is none then just return the TriggerTasks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTriggerTaskByClass", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByClass_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics
	{
		struct TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms
		{
			FGuid ID;
			bool SearchInTemplateTask;
			UTriggerTaskBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static void NewProp_SearchInTemplateTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchInTemplateTask;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_SearchInTemplateTask_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms*)Obj)->SearchInTemplateTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_SearchInTemplateTask = { "SearchInTemplateTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_SearchInTemplateTask_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_SearchInTemplateTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Get TriggerTask according the FGUI\n" },
		{ "CPP_Default_SearchInTemplateTask", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Get TriggerTask according the FGUI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTriggerTaskByID", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByID_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics
	{
		struct TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms
		{
			int32 Index;
			bool SearchInTemplateTask;
			UTriggerTaskBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_SearchInTemplateTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchInTemplateTask;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_SearchInTemplateTask_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms*)Obj)->SearchInTemplateTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_SearchInTemplateTask = { "SearchInTemplateTask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_SearchInTemplateTask_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_SearchInTemplateTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "CPP_Default_SearchInTemplateTask", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "GetTriggerTaskByIndex", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventGetTriggerTaskByIndex_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics
	{
		struct TriggerTaskComponentBase_eventIsAllTaskFinished_Parms
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
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsAllTaskFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsAllTaskFinished_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Check weather all tasks in the component have finished \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Check weather all tasks in the component have finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsAllTaskFinished", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsAllTaskFinished_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics
	{
		struct TriggerTaskComponentBase_eventIsChildNodeOfComponent_Parms
		{
			const UTriggerTaskComponentBase* ParentNode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ParentNode_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventIsChildNodeOfComponent_Parms, ParentNode), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ParentNode_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsChildNodeOfComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsChildNodeOfComponent_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Try to check weather current component is the child node of the target parent component\n\x09*\n\x09* The relationship between two components can be child/Parent, or no relationship,\n\x09* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n\x09*\n\x09* @param ParentNode the component which is used to check weather this is the parent node of this component\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Try to check weather current component is the child node of the target parent component\n*\n* The relationship between two components can be child/Parent, or no relationship,\n* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n*\n* @param ParentNode the component which is used to check weather this is the parent node of this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsChildNodeOfComponent", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsChildNodeOfComponent_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics
	{
		struct TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms
		{
			const UTriggerEventChainBase* CheckedEventInfo;
			bool IgnoreDiffentLevel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedEventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedEventInfo;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_CheckedEventInfo = { "CheckedEventInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms, CheckedEventInfo), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms*)Obj)->IgnoreDiffentLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel = { "IgnoreDiffentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_CheckedEventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Try to check weather this component can be child node for target event info.\n\x09* When this function invoked, I assume all data is stable, and you just want to check the child nodes in checked event info\n\x09*\n\x09* The relationship between two components can be child/Parent, or no relationship,\n\x09* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n\x09*\n\x09* @param IgnoreDiffentLevel false means when the check event info is at different level of this component, I will make this function return false\n\x09*/" },
		{ "CPP_Default_IgnoreDiffentLevel", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Try to check weather this component can be child node for target event info.\n* When this function invoked, I assume all data is stable, and you just want to check the child nodes in checked event info\n*\n* The relationship between two components can be child/Parent, or no relationship,\n* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n*\n* @param IgnoreDiffentLevel false means when the check event info is at different level of this component, I will make this function return false" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsChildNodeOfEventInfo", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsChildNodeOfEventInfo_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Weather this task is matched for current runtime content.\n\x09* For example one trigger Actor have several task components, and each of them is used for specific difficulties such as Easy, Normal, Hard\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Weather this task is matched for current runtime content.\n* For example one trigger Actor have several task components, and each of them is used for specific difficulties such as Easy, Normal, Hard" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsMatchedForCurrentRunTimeContent", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsMatchedForCurrentRunTimeContent_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics
	{
		struct TriggerTaskComponentBase_eventIsParentNodeOfComponent_Parms
		{
			const UTriggerTaskComponentBase* ChildNode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildNode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ChildNode_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventIsParentNodeOfComponent_Parms, ChildNode), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ChildNode_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsParentNodeOfComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsParentNodeOfComponent_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Check weather this component is the parent node of the target child node.\n\x09*\n\x09* The relationship between two components can be child/Parent, or no relationship,\n\x09* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Check weather this component is the parent node of the target child node.\n*\n* The relationship between two components can be child/Parent, or no relationship,\n* So if you want to make sure weather this component is child or parent of the other component you should invoke each function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsParentNodeOfComponent", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsParentNodeOfComponent_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics
	{
		struct TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms
		{
			const UTriggerEventChainBase* CheckedEventInfo;
			bool IgnoreDiffentLevel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckedEventInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckedEventInfo;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_CheckedEventInfo = { "CheckedEventInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms, CheckedEventInfo), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_CheckedEventInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms*)Obj)->IgnoreDiffentLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel = { "IgnoreDiffentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_CheckedEventInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_IgnoreDiffentLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Check weather this component is parent node of the target event info.\n\x09*\n\x09* The relationship between two components can be child/Parent, or no relationship,\n\x09* So if you want to make sure weather this component is child or parent of the other component you should invoke each function.\n\x09*\n\x09*/" },
		{ "CPP_Default_IgnoreDiffentLevel", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Check weather this component is parent node of the target event info.\n*\n* The relationship between two components can be child/Parent, or no relationship,\n* So if you want to make sure weather this component is child or parent of the other component you should invoke each function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "IsParentNodeOfEventInfo", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventIsParentNodeOfEventInfo_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeInfo;
		static void NewProp_CanRunOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRunOnServer;
		static void NewProp_CanRunOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRunOnClient;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_RuntimeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_RuntimeInfo = { "RuntimeInfo", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventNetMulti_StartTask_Parms, RuntimeInfo), Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_RuntimeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_RuntimeInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnServer_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventNetMulti_StartTask_Parms*)Obj)->CanRunOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnServer = { "CanRunOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventNetMulti_StartTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnServer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnClient_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventNetMulti_StartTask_Parms*)Obj)->CanRunOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnClient = { "CanRunOnClient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventNetMulti_StartTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnClient_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_RuntimeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::NewProp_CanRunOnClient,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Make all connections to start to run task\n\x09* \n\x09* @param RuntimeInfo\x09\x09The runtime information for the target task \n\x09* @param CanRunOnServer\x09\x09Weather this NetMulti function can be run on the server\n\x09* @param CanRunOnClient\x09\x09Weather this NetMulti function can be run on client\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Make all connections to start to run task\n*\n* @param RuntimeInfo            The runtime information for the target task\n* @param CanRunOnServer         Weather this NetMulti function can be run on the server\n* @param CanRunOnClient         Weather this NetMulti function can be run on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "NetMulti_StartTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventNetMulti_StartTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics
	{
		static void NewProp_ForceStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ForceStart_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventOnDispatchTask_Parms*)Obj)->ForceStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ForceStart = { "ForceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventOnDispatchTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ForceStart_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventOnDispatchTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_StartOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventOnDispatchTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventOnDispatchTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ForceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* The style to dispatch the task\n\x09*\n\x09* @param ForceStart\x09\x09true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running\n    * @param ExternalData   The external data that need to be processed by the child task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The style to dispatch the task\n*\n* @param ForceStart             true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running\n* @param ExternalData   The external data that need to be processed by the child task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "OnDispatchTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventOnDispatchTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutTriggerTaskComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutTriggerTaskComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutTriggerTaskComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Get the child trigger task component.\n\x09* The child component will be used when one of this task have finished.\n\x09* When one of the task in this component have finished it will TRY to notify the child trigger task component to notify its task to execute.\n\x09* This function is invoked in the function GetChildTriggerTaskComponents, which can be override by child class\n\x09* \n\x09* @param Task\x09The task who want to know child components, and try to start tasks in child components\n\x09* @param ExternalData\x09The behavior which is describe how the task to start child components\n\x09* @param OutTriggerTaskComponents\x09The child components that the target task want to notify\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Get the child trigger task component.\n* The child component will be used when one of this task have finished.\n* When one of the task in this component have finished it will TRY to notify the child trigger task component to notify its task to execute.\n* This function is invoked in the function GetChildTriggerTaskComponents, which can be override by child class\n*\n* @param Task   The task who want to know child components, and try to start tasks in child components\n* @param ExternalData   The behavior which is describe how the task to start child components\n* @param OutTriggerTaskComponents       The child components that the target task want to notify" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "OnGetChildTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventOnGetChildTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents = { "OutTriggerTaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventOnGetParentTriggerTaskComponents_Parms, OutTriggerTaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::NewProp_OutTriggerTaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* This is different form the function: GetParentComponent in base class, This function will get the parent component which is maintained by trigger system not UE engine\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* This is different form the function: GetParentComponent in base class, This function will get the parent component which is maintained by trigger system not UE engine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "OnGetParentTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventOnGetParentTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics
	{
		struct TriggerTaskComponentBase_eventPauseTask_Parms
		{
			UTriggerTaskBase* Task;
			UOperationInformationBase* PauseOperaitonInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseOperaitonInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseOperaitonInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventPauseTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_PauseOperaitonInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_PauseOperaitonInfo = { "PauseOperaitonInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventPauseTask_Parms, PauseOperaitonInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_PauseOperaitonInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_PauseOperaitonInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventPauseTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventPauseTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_PauseOperaitonInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Start to pause the task\n\x09*\n\x09* @param Task\x09\x09\x09null means we will start all tasks in this component\n\x09*\x09\x09\x09\x09\x09\x09if this task is not in this component, we will not process it\n\x09*/" },
		{ "CPP_Default_PauseOperaitonInfo", "None" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Start to pause the task\n*\n* @param Task                   null means we will start all tasks in this component\n*                                               if this task is not in this component, we will not process it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "PauseTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventPauseTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics
	{
		struct TriggerTaskComponentBase_eventRecevieTaskInformation_Parms
		{
			UTriggerTaskComponentBase* ResourceComponent;
			UTriggerTaskBase* ResourceTask;
			UOperationInformationBase* StartOperationInfo;
			UTriggerTaskBase* TargetTask;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceComponent = { "ResourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms, ResourceComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceTask = { "ResourceTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms, ResourceTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_StartOperationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_TargetTask_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventRecevieTaskInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ResourceTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Receive notification from task of the ResourceComponent\n\x09* \n\x09* @param ResourceComponent the component which notify the task in this component to do something\n\x09* @param ResourceTask\x09The task in resource component which rise up the resource component to notify the task in this component to do something\n\x09* @param TargetTask\x09\x09The task in this component which is notified by the resource task\n\x09*/" },
		{ "CPP_Default_StartOperationInfo", "None" },
		{ "CPP_Default_TargetTask", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Receive notification from task of the ResourceComponent\n*\n* @param ResourceComponent the component which notify the task in this component to do something\n* @param ResourceTask   The task in resource component which rise up the resource component to notify the task in this component to do something\n* @param TargetTask             The task in this component which is notified by the resource task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RecevieTaskInformation", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRecevieTaskInformation_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Register all tasks in this component to TriggerTaskManager\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Register all tasks in this component to TriggerTaskManager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RegisterTaskComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics
	{
		struct TriggerTaskComponentBase_eventRemoveCategory_Parms
		{
			UTaskComponentCategory* OldCategory;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldCategory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_OldCategory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_OldCategory = { "OldCategory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveCategory_Parms, OldCategory), Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_OldCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_OldCategory_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventRemoveCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventRemoveCategory_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_OldCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Remove Category from the Categories\n\x09*\n\x09* @param OldCategory null means it will remove all categories in this component\n\x09*\n\x09* #return true remove successfully, vice verse.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Remove Category from the Categories\n*\n* @param OldCategory null means it will remove all categories in this component\n*\n* #return true remove successfully, vice verse." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveCategory", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveCategory_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ChildNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static void NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateParentNodeInChildNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_ChildNode = { "ChildNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveChildNode_Parms, ChildNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_ChildNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveChildNode_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_Category_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventRemoveChildNode_Parms*)Obj)->NeedUpdateParentNodeInChildNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode = { "NeedUpdateParentNodeInChildNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventRemoveChildNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_ChildNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::NewProp_NeedUpdateParentNodeInChildNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* remove child node from all event chains which belong to this component\n\x09*\n\x09* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* remove child node from all event chains which belong to this component\n*\n* @param NeedUpdateParentNodeInChildNode true means it should update the parent node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveChildNode", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveChildNode_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics
	{
		struct TriggerTaskComponentBase_eventRemoveEventChain_Parms
		{
			UTriggerEventChainBase* OldChain;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldChain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::NewProp_OldChain_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::NewProp_OldChain = { "OldChain", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveEventChain_Parms, OldChain), Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::NewProp_OldChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::NewProp_OldChain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::NewProp_OldChain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Remove the target event chain from event chains pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Remove the target event chain from event chains pool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveEventChain", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveEventChain_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics
	{
		struct TriggerTaskComponentBase_eventRemoveNextComponentInfo_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveNextComponentInfo_Parms, MapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveNextComponentInfo_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::NewProp_ComponentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Remove the next component info from all event chain\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Remove the next component info from all event chain" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveNextComponentInfo", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveNextComponentInfo_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ParentNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static void NewProp_NeedUpdateChildNodeInParentNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedUpdateChildNodeInParentNode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveParentNode_Parms, ParentNode), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_ParentNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveParentNode_Parms, Category), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_Category_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventRemoveParentNode_Parms*)Obj)->NeedUpdateChildNodeInParentNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode = { "NeedUpdateChildNodeInParentNode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventRemoveParentNode_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_ParentNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::NewProp_NeedUpdateChildNodeInParentNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "Comment", "/*\n\x09* Remove the parent node from all event chains which belong to this component\n\x09*\n\x09* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Remove the parent node from all event chains which belong to this component\n*\n* @param NeedUpdateChildNodeInParentNode true means it should update the child node information in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveParentNode", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveParentNode_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics
	{
		struct TriggerTaskComponentBase_eventRemoveTask_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventRemoveTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Remove task form task pool in this component\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Remove task form task pool in this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "RemoveTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventRemoveTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics
	{
		struct TriggerTaskComponentBase_eventResumeTask_Parms
		{
			UTriggerTaskBase* Task;
			UOperationInformationBase* ResumeInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventResumeTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ResumeInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ResumeInfo = { "ResumeInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventResumeTask_Parms, ResumeInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ResumeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ResumeInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventResumeTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventResumeTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ResumeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Start to resume the task\n\x09*\n\x09* @param Task\x09\x09\x09null means we will start all tasks in this component\n\x09*\x09\x09\x09\x09\x09\x09if this task is not in this component, we will not process it\n\x09*/" },
		{ "CPP_Default_ResumeInfo", "None" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Start to resume the task\n*\n* @param Task                   null means we will start all tasks in this component\n*                                               if this task is not in this component, we will not process it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "ResumeTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventResumeTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics
	{
		struct TriggerTaskComponentBase_eventSetInstigator_Parms
		{
			AActor* Insigator;
			UTriggerTaskBase* Task;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Insigator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Insigator = { "Insigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventSetInstigator_Parms, Insigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventSetInstigator_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Insigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "//Set instigator for the target task\n" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "Set instigator for the target task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "SetInstigator", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventSetInstigator_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics
	{
		struct TriggerTaskComponentBase_eventStartTask_Parms
		{
			bool ForceStart;
			UTriggerTaskBase* Task;
			UOperationInformationBase* StartOperationInfo;
			bool ReturnValue;
		};
		static void NewProp_ForceStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ForceStart_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventStartTask_Parms*)Obj)->ForceStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ForceStart = { "ForceStart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventStartTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ForceStart_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventStartTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventStartTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_StartOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventStartTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventStartTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ForceStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Start to execute Task.\n\x09*\n\x09* @param Task\x09\x09\x09null means we will start all tasks in this component,\\n if this task is not in this component, we will not process it\n\x09* @param ForceStart\x09\x09true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running\n\x09* @param ExternalData\x09The external data that the child task should process \n\x09*/" },
		{ "CPP_Default_ForceStart", "false" },
		{ "CPP_Default_StartOperationInfo", "None" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Start to execute Task.\n*\n* @param Task                   null means we will start all tasks in this component,\\n if this task is not in this component, we will not process it\n* @param ForceStart             true means before run this target task I will reset the target task first. False means it target task will be run according its repeatedly style, if the target task is running\n* @param ExternalData   The external data that the child task should process" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "StartTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventStartTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics
	{
		struct TriggerTaskComponentBase_eventTickTask_Parms
		{
			float DeltaTime;
			UTriggerTaskBase* Task;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTickTask_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTickTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_Task_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventTickTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventTickTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Tick the task, All the task cannot tick itself, how and when they tick should be\n\x09* determined by its own component\n\x09*\n\x09* @param Task\x09\x09\x09null means we will start all tasks in this component\n\x09*\x09\x09\x09\x09\x09\x09if this task is not in this component, we will not process it\n\x09* @DeltaTime\n\x09*/" },
		{ "CPP_Default_Task", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Tick the task, All the task cannot tick itself, how and when they tick should be\n* determined by its own component\n*\n* @param Task                   null means we will start all tasks in this component\n*                                               if this task is not in this component, we will not process it\n* @DeltaTime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "TickTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventTickTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics
	{
		struct TriggerTaskComponentBase_eventTransfereTask_Parms
		{
			UTriggerTaskComponentBase* TargetComponent;
			UTriggerTaskBase* ResourceTask;
			UOperationInformationBase* StartOperationInfo;
			UTriggerTaskBase* TargetTask;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResourceTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResourceTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTask_Parms, TargetComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ResourceTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ResourceTask = { "ResourceTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTask_Parms, ResourceTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ResourceTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ResourceTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_StartOperationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTask_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetTask_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventTransfereTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventTransfereTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ResourceTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Transfer task to other component\n\x09* \n\x09* @param ResouceTask\x09Task in this component which rise up this component to notify target component to do something\n\x09* @param TargetTask\x09\x09The task in the target component which this component will notify it to some thing\n\x09*/" },
		{ "CPP_Default_StartOperationInfo", "None" },
		{ "CPP_Default_TargetTask", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Transfer task to other component\n*\n* @param ResouceTask    Task in this component which rise up this component to notify target component to do something\n* @param TargetTask             The task in the target component which this component will notify it to some thing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "TransfereTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventTransfereTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics
	{
		struct TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms
		{
			UTriggerTaskBase* SenderTask;
			UTriggerTaskBase* TargetTask;
			UOperationInformationBase* StartOperationInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_SenderTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_SenderTask = { "SenderTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms, SenderTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_SenderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_SenderTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_TargetTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms, TargetTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_TargetTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_TargetTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_StartOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms), &Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_SenderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Notify the target task to run by the sender task\n\x09*/" },
		{ "CPP_Default_StartOperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Notify the target task to run by the sender task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "TransfereTaskToTargetTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventTransfereTaskToTargetTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics
	{
		struct TriggerTaskComponentBase_eventTryToNotifyChildNodeToStartRunTask_Parms
		{
			UTriggerTaskBase* Task;
			UOperationInformationBase* StartOperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTryToNotifyChildNodeToStartRunTask_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskComponentBase_eventTryToNotifyChildNodeToStartRunTask_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|TaskComponent" },
		{ "Comment", "/*\n\x09* Try to notify all the child nodes to start to run task, but the actual activation of the tasks in the child node\n \x09* is according to its own conditions \n\x09*\n\x09* @param Task The task which invoked to notify the child nodes to run. This should never be nullptr\n\x09* @param ExteranlData the external data which will be used in the child node \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Try to notify all the child nodes to start to run task, but the actual activation of the tasks in the child node\n* is according to its own conditions\n*\n* @param Task The task which invoked to notify the child nodes to run. This should never be nullptr\n* @param ExteranlData the external data which will be used in the child node" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "TryToNotifyChildNodeToStartRunTask", nullptr, nullptr, sizeof(TriggerTaskComponentBase_eventTryToNotifyChildNodeToStartRunTask_Parms), Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UnRegister all tasks in this component to TriggerTaskManager\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "UnRegister all tasks in this component to TriggerTaskManager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskComponentBase, nullptr, "UnRegisterTaskComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister()
	{
		return UTriggerTaskComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskComponentBase_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedTasks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnReplicatedTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnReplicatedTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnReplicatedTasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventChains_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EventChains_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventChains_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EventChains;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTasks_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerTasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsFirstTrigger_MetaData[];
#endif
		static void NewProp_IsFirstTrigger_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFirstTrigger;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddChildNode, "AddChildNode" }, // 468164314
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewCategory, "AddNewCategory" }, // 3310142925
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddNewEventChain, "AddNewEventChain" }, // 2184462490
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddNextComponentInfo, "AddNextComponentInfo" }, // 868928360
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddParentNode, "AddParentNode" }, // 515700148
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_AddTask, "AddTask" }, // 1563367818
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_CanBeToggled, "CanBeToggled" }, // 2337037452
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByClass, "CreateNewTaskByClass" }, // 2221514854
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_CreateNewTaskByObject, "CreateNewTaskByObject" }, // 118132610
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_DuplicateTaskComponent, "DuplicateTaskComponent" }, // 564242172
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_EndTask, "EndTask" }, // 3666489032
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetAllTriggerTasks, "GetAllTriggerTasks" }, // 4183056481
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetCategories, "GetCategories" }, // 2149972251
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggers, "GetChildTriggers" }, // 807306010
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetChildTriggerTaskComponents, "GetChildTriggerTaskComponents" }, // 3429790659
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetComponentID, "GetComponentID" }, // 3556570698
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstCategories, "GetConstCategories" }, // 1485777169
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetConstEventChains, "GetConstEventChains" }, // 2225137898
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetEventChains, "GetEventChains" }, // 3993400
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetNextComponentInfo, "GetNextComponentInfo" }, // 1729272310
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggers, "GetParentTriggers" }, // 3384040777
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetParentTriggerTaskComponents, "GetParentTriggerTaskComponents" }, // 1647411691
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndex, "GetTaskIndex" }, // 1350604671
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTaskIndexByTaskClass, "GetTaskIndexByTaskClass" }, // 1718050606
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTemplateTasks, "GetTemplateTasks" }, // 1723997528
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerManager, "GetTriggerManager" }, // 2406138140
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerObjectOwner, "GetTriggerObjectOwner" }, // 1310446018
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByClass, "GetTriggerTaskByClass" }, // 2195103558
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByID, "GetTriggerTaskByID" }, // 1251291808
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_GetTriggerTaskByIndex, "GetTriggerTaskByIndex" }, // 1687027082
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsAllTaskFinished, "IsAllTaskFinished" }, // 546621092
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfComponent, "IsChildNodeOfComponent" }, // 885157257
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsChildNodeOfEventInfo, "IsChildNodeOfEventInfo" }, // 514239012
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsMatchedForCurrentRunTimeContent, "IsMatchedForCurrentRunTimeContent" }, // 3513363917
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfComponent, "IsParentNodeOfComponent" }, // 3768896336
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_IsParentNodeOfEventInfo, "IsParentNodeOfEventInfo" }, // 310674285
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_NetMulti_StartTask, "NetMulti_StartTask" }, // 13038268
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_OnDispatchTask, "OnDispatchTask" }, // 3080524580
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetChildTriggerTaskComponents, "OnGetChildTriggerTaskComponents" }, // 3024759884
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_OnGetParentTriggerTaskComponents, "OnGetParentTriggerTaskComponents" }, // 3740049871
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_PauseTask, "PauseTask" }, // 1861862959
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RecevieTaskInformation, "RecevieTaskInformation" }, // 1131075626
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RegisterTaskComponent, "RegisterTaskComponent" }, // 3505345282
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveCategory, "RemoveCategory" }, // 2529044160
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveChildNode, "RemoveChildNode" }, // 2026226926
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveEventChain, "RemoveEventChain" }, // 666335986
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveNextComponentInfo, "RemoveNextComponentInfo" }, // 3630109631
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveParentNode, "RemoveParentNode" }, // 1480387700
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_RemoveTask, "RemoveTask" }, // 3460869352
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_ResumeTask, "ResumeTask" }, // 158189114
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_SetInstigator, "SetInstigator" }, // 3814874918
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_StartTask, "StartTask" }, // 3511135400
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_TickTask, "TickTask" }, // 3821171387
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTask, "TransfereTask" }, // 3280325103
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_TransfereTaskToTargetTask, "TransfereTaskToTargetTask" }, // 2923530799
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_TryToNotifyChildNodeToStartRunTask, "TryToNotifyChildNodeToStartRunTask" }, // 2654965881
		{ &Z_Construct_UFunction_UTriggerTaskComponentBase_UnRegisterTaskComponent, "UnRegisterTaskComponent" }, // 850727932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Component" },
		{ "HideCategories", "Object LOD Activation Tags Cooking Physics Transform Rendering AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType_MetaData[] = {
		{ "Category", "NetWork" },
		{ "Comment", "/*\n\x09* The default side this component will run.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The default side this component will run." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType = { "RunType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, RunType), Z_Construct_UEnum_TriggerRunTime_ERunType, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks_Inner = { "ReplicatedTasks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks_MetaData[] = {
		{ "Comment", "//The task which will replicated to clients\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "The task which will replicated to clients" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks = { "ReplicatedTasks", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, ReplicatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks_Inner = { "UnReplicatedTasks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks_MetaData[] = {
		{ "Comment", "//The task which will not replicated to clients\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "The task which will not replicated to clients" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks = { "UnReplicatedTasks", nullptr, (EPropertyFlags)0x0010008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, UnReplicatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventChain" },
		{ "Comment", "/*\n\x09* The chain used to describe the relationship between this component and other components\n\x09*/" },
		{ "DisplayName", "EventInfos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The chain used to describe the relationship between this component and other components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_Inner = { "EventChains", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEventChainBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EventChain" },
		{ "Comment", "/*\n\x09* The chain used to describe the relationship between this component and other components\n\x09*/" },
		{ "DisplayName", "EventInfos" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The chain used to describe the relationship between this component and other components" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains = { "EventChains", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, EventChains), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Template" },
		{ "Comment", "/*\n\x09* Template asset to instance new trigger task, I will change it to read form Excel in the feature\n\x09* This array is just used for designer to do config in the map\n\x09*/" },
		{ "DisplayName", "TemplateTasks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Template asset to instance new trigger task, I will change it to read form Excel in the feature\n* This array is just used for designer to do config in the map" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_Inner = { "TriggerTasks", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Template" },
		{ "Comment", "/*\n\x09* Template asset to instance new trigger task, I will change it to read form Excel in the feature\n\x09* This array is just used for designer to do config in the map\n\x09*/" },
		{ "DisplayName", "TemplateTasks" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Template asset to instance new trigger task, I will change it to read form Excel in the feature\n* This array is just used for designer to do config in the map" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks = { "TriggerTasks", nullptr, (EPropertyFlags)0x004000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, TriggerTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Category" },
		{ "Comment", "/*\n\x09* The category can be treated as the life scope which this component work.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The category can be treated as the life scope which this component work." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Category" },
		{ "Comment", "/*\n\x09* The category can be treated as the life scope which this component work.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* The category can be treated as the life scope which this component work." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0040008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Serialize" },
		{ "Comment", "//The unique identification for this component, this should never changed if it has been assigned\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "The unique identification for this component, this should never changed if it has been assigned" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponentBase, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/*\n\x09* Flag export to the designer to identify this trigger is the first trigger in the event line\n\x09* Maybe it will be removed in the feature, weather the trigger is the first trigger I will check it dynamically not by config\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponentBase.h" },
		{ "ToolTip", "* Flag export to the designer to identify this trigger is the first trigger in the event line\n* Maybe it will be removed in the feature, weather the trigger is the first trigger I will check it dynamically not by config" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger_SetBit(void* Obj)
	{
		((UTriggerTaskComponentBase*)Obj)->IsFirstTrigger = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger = { "IsFirstTrigger", nullptr, (EPropertyFlags)0x0010000800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskComponentBase), &Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_RunType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ReplicatedTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_UnReplicatedTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_EventChains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_TriggerTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_ID,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponentBase_Statics::NewProp_IsFirstTrigger,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskComponentBase_Statics::ClassParams = {
		&UTriggerTaskComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTaskComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::PropPointers),
		0,
		0x04B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskComponentBase, 668620478);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskComponentBase>()
	{
		return UTriggerTaskComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskComponentBase(Z_Construct_UClass_UTriggerTaskComponentBase, &UTriggerTaskComponentBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskComponentBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTriggerTaskComponentBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
