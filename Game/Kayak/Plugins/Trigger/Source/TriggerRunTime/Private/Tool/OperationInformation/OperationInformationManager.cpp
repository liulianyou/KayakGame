#include "OperationInformationManager.h"
#include "OperationInformationBase.h"
#include "OperationInformationContainer.h"

FOperationInfoSpace FOperationInfoSpace::InvalidData;

bool FOperationInfoSpace::IsValid() const
{
	if(Owner == nullptr || Operation == nullptr)
		return false;

	return true;
}

bool operator==(const FOperationInfoSpace& LeftData, const FOperationInfoSpace& RightData)
{
	if(LeftData.Operation == RightData.Operation &&
		LeftData.Owner == RightData.Owner)
		return true;
	else
		return false;
}

UOperationInformationManager::UOperationInformationManager(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UOperationInformationManager::Initialzie(UTriggerManager* Owner)
{
	OwnerTriggerManager = Owner;
}

const TArray<FOperationInfoSpace>& UOperationInformationManager::GetConstOperationSpaces() const
{
	return Operations;
}

TArray<FOperationInfoSpace>& UOperationInformationManager::GetOperationSpaces()
{
	return Operations;
}

FOperationInfoSpace& UOperationInformationManager::AddNewOperationByClass(UObject* Owner, TSubclassOf<UOperationInformationBase> OperationType)
{
	UOperationInformationBase* NewOperationInfo = NewObject<UOperationInformationBase>(this, OperationType);

	FOperationInfoSpace NewOperation(Owner, NewOperationInfo);

	int Index = Operations.Add(NewOperation);
	
	if(Index == INDEX_NONE)
		return FOperationInfoSpace::InvalidData;
	else
	{
		for(int i = 0; i < ReplicatedContaners.Num(); i++)
		{
			ReplicatedContaners[i]->AddNewItem(Owner, NewOperationInfo);
		}

		return Operations[Index];
	}
		
}

FOperationInfoSpace& UOperationInformationManager::AddNewOperationByInstanceOperation(UObject* Owner, UOperationInformationBase* Operation)
{
	int MatchedIndex = IsOperationInfoExist(Owner, Operation);
	if (MatchedIndex != INDEX_NONE)
	{
		return GetOperationSpaces()[MatchedIndex];
	}
	else
	{
		FOperationInfoSpace NewOperationSpace(Owner, Operation);

		MatchedIndex = Operations.Add(NewOperationSpace);

		for (int ReplicatedContanersIndex = 0; ReplicatedContanersIndex < ReplicatedContaners.Num(); ReplicatedContanersIndex++)
		{
			ReplicatedContaners[ReplicatedContanersIndex]->AddNewItem(Owner, Operation);
		}

		return Operations[MatchedIndex];
	}
}

void UOperationInformationManager::Empty()
{
	for (int i = 0; i < GetOperationSpaces().Num(); i++)
	{
		if (GetOperationSpaces()[i].Operation != nullptr)
		{
			GetOperationSpaces()[i].Operation->MarkPendingKill();
		}
	}

	GetOperationSpaces().Empty();
}

void UOperationInformationManager::RemoveOperation(UObject* Owner, UOperationInformationBase* Operation, bool OnlyCareOperationType)
{
	auto CompareRule = [&]( const FOperationInfoSpace& Data ){
		if (OnlyCareOperationType)
		{
			if(Data.Operation != nullptr && Operation != nullptr &&
				Data.Operation->GetClass() == Data.Operation->GetClass())
				return true;
			else if(Data.Operation == nullptr && Operation == nullptr)
				return true;
			else
				return false;
		}
		else
		{
			if(Data.Operation == Operation)
				return true;
		}

		return false;
	};

	FOperationInfoSpace NewOperationSpace(Owner, Operation);

	for (int i = 0; i < GetOperationSpaces().Num(); i++)
	{
		//When the owner and the operation are all null means this function should clear all data
		if ((Operation == nullptr && Owner == nullptr) ||
			//When the owner is null then means it will remove all operations the is equal to operation
			(Owner == nullptr && CompareRule(GetOperationSpaces()[i])) ||
			//When the operation is null means it will remove all operations that belong to the target owner
			(Operation == nullptr && GetOperationSpaces()[i].Owner == Owner) ||
			(GetOperationSpaces()[i] == NewOperationSpace)
			)
		{
			GetOperationSpaces().RemoveAt(i--);

			for (int ReplicatedContanersIndex = 0; ReplicatedContanersIndex < ReplicatedContaners.Num(); ReplicatedContanersIndex++)
			{
				ReplicatedContaners[ReplicatedContanersIndex]->RemoveItem(Owner, Operation);
			}
		}
	}
}

void UOperationInformationManager::GetOperationOwner(TArray<UObject*>& Owners, UOperationInformationBase* TargetOperation) const
{
	Owners.Empty();

	for (auto Operation : GetConstOperationSpaces())
	{
		if (Operation.Operation == TargetOperation || TargetOperation == nullptr)
		{
			if (Operation.Owner != nullptr)
			{
				Owners.Add(Operation.Owner);
			}
		}
	}
}

void UOperationInformationManager::GetOperationOwnerByOperationInfoClass(TArray<UObject*>& Owners, TSubclassOf<UOperationInformationBase> OperationClass) const
{
	Owners.Empty();

	for (auto Operation : GetConstOperationSpaces())
	{
		if (Operation.Operation != nullptr && OperationClass != nullptr && OperationClass == Operation.Operation->GetClass())
		{
			if (Operation.Owner != nullptr)
			{
				Owners.Add(Operation.Owner);
			}
		}
	}
}

void UOperationInformationManager::GetOperationInfos(TArray<UOperationInformationBase*>& OperationInfos, UObject* Owner) const
{
	OperationInfos.Empty();

	for (auto Operation : GetConstOperationSpaces())
	{
		if (Owner == Operation.Owner || Owner == nullptr)
		{
			if (Operation.Operation != nullptr)
			{
				OperationInfos.Add(Operation.Operation);
			}
		}
	}
}

bool UOperationInformationManager::IsOperationInfValid(const FOperationInfoSpace& OperationInfoSpace) const
{
	return OperationInfoSpace.IsValid();
}

int UOperationInformationManager::IsOperationInfoExist(const UObject* const Owner, const UOperationInformationBase* const OperationInfo) const
{
	int Result = INDEX_NONE;

	for (int i = 0; i < GetConstOperationSpaces().Num(); i++)
	{
		if ((GetConstOperationSpaces()[i].Owner == Owner || Owner == nullptr) && GetConstOperationSpaces()[i].Operation == OperationInfo)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

int UOperationInformationManager::IsOperationInfoSpaceExist(const FOperationInfoSpace& OperationInfoSpace) const
{
	int Result = INDEX_NONE;

	for (int i = 0; i < GetConstOperationSpaces().Num(); i++)
	{
		if (GetConstOperationSpaces()[i] == OperationInfoSpace)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

void UOperationInformationManager::SetReplicatedContaner(FOperationInfoContainer* Container, FOperationInfoContainer* OldContaner)
{
	//Before any operation I need to remove all invalid container
	for (int i = 0; i < ReplicatedContaners.Num(); i++)
	{
		if (ReplicatedContaners[i] == nullptr)
			ReplicatedContaners.RemoveAt(i--);
	}

	int Index = ReplicatedContaners.Find(OldContaner);

	if (Container == nullptr && Index != INDEX_NONE)
	{
		ReplicatedContaners.RemoveAt(Index);
	}
	else
	{
		if (OldContaner == nullptr)
		{
			if (Index == INDEX_NONE)
			{
				ReplicatedContaners.Add(Container);
			}
		}
		else
		{
			if (Index != INDEX_NONE)
			{
				ReplicatedContaners[Index] = Container;
			}
		}
	}

	if (OldContaner != nullptr && Container != nullptr)
	{
		Container->CopyFrom(*OldContaner);
	}
}