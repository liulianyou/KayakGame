#include "TriggerDispatchType/DispatchBase.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"

UDispatchBase::UDispatchBase(const FObjectInitializer& ObjectInitialize) :
	Super(ObjectInitialize)
{

}

bool UDispatchBase::Dispatch_Implementation()
{
	return NativeDispatch();
}

bool UDispatchBase::NativeDispatch()
{
	//Data.Sort([](const IGaiaEvaluatorInterface& LeftValue, const IGaiaEvaluatorInterface& RightValue)->bool {
	//	if (LeftValue < RightValue)
	//		return true;
	//	else
	//		return false;
	//});


	return true;
}
//
//void UGaiaDispatchBase::AddData(IGaiaEvaluatorInterface* NewData)
//{
//	//TWeakObjectPtr<UGaiaTriggerTaskBase>* TaskData = Data.FindByPredicate([&](TWeakObjectPtr<UGaiaTriggerTaskBase>& TaskData )->bool {
//	//	 if (!TaskData.IsValid())
//	//	 {
//	//		 return false;
//	//	 }
//
//	//	 if (TaskData.Get() == NewData)
//	//	 {
//	//		 return true;
//	//	 }
//	//	 else
//	//	 {
//	//		 return false;
//	//	 }
//	// });
//
//	//if (TaskData != nullptr)
//	//{
//	//	Data.Add(MakeWeakObjectPtr(NewData));
//	//}
//}
//
//void UGaiaDispatchBase::RemoveData(IGaiaEvaluatorInterface* TriggerTask)
//{
//	//int Index = 0;
//
//	//for (Index = 0; Index < Data.Num(); Index++)
//	//{
//	//	if (Data[Index].Get() == TriggerTask)
//	//	{
//	//		break;
//	//	}
//	//}
//
//	//if (Data[Index] != nullptr)
//	//{
//	//	Data.RemoveAt(Index);
//	//}
//}

