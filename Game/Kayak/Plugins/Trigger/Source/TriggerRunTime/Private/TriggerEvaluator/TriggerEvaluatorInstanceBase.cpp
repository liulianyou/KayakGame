#include "TriggerEvaluatorInstanceBase.h"
#include "NewTriggerBase.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "EngineUtils.h"

UTriggerEvaluatorIntanceBase::UTriggerEvaluatorIntanceBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

//#if WITH_EDITORONLY_DATA
//
//void UTriggerEvaluatorIntanceBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
//{
//	Super::PostEditChangeProperty(PropertyChangedEvent);
//
//	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
//	{
//		const FName PropertyName = PropertyThatChanged->GetFName();
//
//		if (PropertyName == GET_MEMBER_NAME_CHECKED(FPreRequestData, TriggerName) ||
//			PropertyName == GET_MEMBER_NAME_CHECKED(FPreRequestData, TriggerTaskIndex))
//		{
//			PreRequeset.Empty();
//
//			for (auto PreRequestData : PreRequestDatas)
//			{
//				for (TActorIterator<ANewTriggerBase> ObjectMap(GWorld); ObjectMap; ++ObjectMap)
//				{
//					ANewTriggerBase* Trigger = *ObjectMap;
//
//					if (Trigger == nullptr)
//						continue;
//
//					if (Trigger->GetActorLabel() == PreRequestData.TriggerName)
//					{
//						TScriptInterface<ITriggerInterface> InterfaceBP;
//
//						ITriggerInterface* Interface = Cast<ITriggerInterface>(Trigger);
//
//						if (Interface == nullptr)
//							continue;
//
//						InterfaceBP.SetInterface(Interface);
//
//						if (PreRequestData.TriggerTaskIndex >= 0 && PreRequestData.TriggerTaskIndex < Trigger->TriggerTaskComponent->TriggerTasks.Num())
//						{
//
//							UTriggerTaskBase* Task = Trigger->TriggerTaskComponent->TriggerTasks[PreRequestData.TriggerTaskIndex];
//
//							InterfaceBP.SetObject(Task);
//
//							PreRequeset.Add(InterfaceBP);
//
//							break;
//						}
//						else if (PreRequestData.TriggerTaskIndex < 0)
//						{
//
//							InterfaceBP.SetObject(Trigger);
//
//							PreRequeset.Add(InterfaceBP);
//
//							break;
//						}
//
//					}
//				}
//			}
//		}
//	}
//}
//
//#endif