#include "TriggerEventRewardDataWithID.h"
#include "TriggerEventRewardManager.h"
#include "TriggerBlueprintLib.h"

UTriggerEventRewardDataWithID::UTriggerEventRewardDataWithID(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	RewardID(TEXT("")),
	ID(INDEX_NONE)
{
	
}

void UTriggerEventRewardDataWithID::Initialize(UTriggerTaskBase* Owner)
{
	Super::Initialize(Owner);

	if (ID == INDEX_NONE)
	{
		GeneratedRewardID();
	}
}

FString UTriggerEventRewardDataWithID::GeneratedRewardID_Implementation()
{
	FString Result = TEXT("");

	if (ID != INDEX_NONE)
	{
		ULevel* Level = GetTypedOuter<ULevel>();

		FString MapName = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

		TArray<FString> Strings;
		Strings.Add(MapName);
		Strings.Add(FString::FromInt(ID));

		Result = GetRewardIDFromStrings(Strings);
	}
	else
	{
		UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

		if (RewardManager == nullptr || !RewardManager->TryToGenerateRewardID(this, Result))
			return TEXT("");
	}

	return Result;
}

FString UTriggerEventRewardDataWithID::GetRewardID_Implementation() const
{	
	/*
	* When the RewardID is empty I need to update it
	*/
	if (RewardID.IsEmpty() && ID != INDEX_NONE)
	{
		ULevel* Level = GetTypedOuter<ULevel>();

		FString MapName = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

		TArray<FString> Strings;
		Strings.Add(MapName);
		Strings.Add(FString::FromInt(ID));

		RewardID = GetRewardIDFromStrings(Strings);
	}

	return RewardID;
}

bool UTriggerEventRewardDataWithID::IsLarger_Implementation(const FString& TargetID) const
{
	if (!IsValidRewardID(TargetID))
	{
		return true;

	} else if (TargetID.IsEmpty())
	{
		return true;

	}else if (TargetID.IsNumeric())
	{
		int LocalID = FCString::Atoi(*TargetID);

		if(LocalID <= ID)
			return true;
		else
			return false;
	}
	else
	{
		TArray<FString> Sprites;
		TargetID.ParseIntoArray(Sprites, REWARDIDENTIFICATIONDELIMITOR);

		for (int i = 0; i < Sprites.Num(); i++)
		{
			if (Sprites[i].IsNumeric())
			{
				int LocalID = FCString::Atoi(*Sprites[i]);

				if (LocalID <= ID)
					return true;
				else
					return false;
			}
		}
	}

	return false;
}

void UTriggerEventRewardDataWithID::SetRewardID_Implementation(const FString& NewID) 
{
	if (NewID.IsNumeric())
	{
		ID = FCString::Atoi(*NewID);
	}
	else if(IsValidRewardID(NewID))
	{
		int Index = INDEX_NONE;

		if (NewID.FindLastChar(REWARDIDENTIFICATIONDELIMITOR_CHAR, Index))
		{
			FString NumericString = NewID.RightChop(Index + 1);

			ID = FCString::Atoi(*NumericString);

		}
	}

	if (ID != INDEX_NONE)
	{
		TArray<FString> Strings;
		Strings.Add(GetTypedOuter<ULevel>()->GetOuter()->GetName());
		Strings.Add(FString::FromInt(ID));
		RewardID = GetRewardIDFromStrings(Strings);
	}
}

FString UTriggerEventRewardDataWithID::GenerateNextID_Implementation(const FString& LableID) const
{
	int NextID = INDEX_NONE;

	if (LableID.IsEmpty())
	{
		NextID = 0;
	}
	else if (LableID.IsNumeric())
	{
		NextID = FCString::Atoi(*LableID) + 1;
	}
	else
	{
		if(!IsValidRewardID(LableID))
			return TEXT("");

		int Index = INDEX_NONE;

		if (LableID.FindLastChar(REWARDIDENTIFICATIONDELIMITOR_CHAR, Index))
		{
			FString NumericString = LableID.RightChop(Index + 1);

			int LocalID = FCString::Atoi(*NumericString);

			NextID = ++LocalID;
		}
	}

	if(NextID == INDEX_NONE)
		NextID = 0;

	return FString::FromInt(NextID);
}

FString UTriggerEventRewardDataWithID::GetRewardIDFromStrings_Implementation(const TArray<FString>& Strings) const
{
	FString Result;

	for (int i = 0; i < Strings.Num(); i++)
	{
		Result += Strings[i];

		if (i != Strings.Num() - 1)
		{
			Result += REWARDIDENTIFICATIONDELIMITOR;
		}
	}

	if(!IsValidRewardID(Result))
		return TEXT("");

	return Result;
}


bool UTriggerEventRewardDataWithID::IsValidRewardID_Implementation(const FString& CheckedID) const
{
	ULevel* Level = GetTypedOuter<ULevel>();

	FString LevelName = Level == nullptr ? TEXT("") : Level->GetOuter()->GetName();

	int Index = INDEX_NONE;
	if (CheckedID.FindLastChar(REWARDIDENTIFICATIONDELIMITOR_CHAR, Index))
	{
		FString MapName = CheckedID.Left(Index);
		FString NumericString = CheckedID.RightChop(Index + 1);

		if (NumericString.IsNumeric() && MapName == LevelName)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	return false;
}


void UTriggerEventRewardDataWithID::RequestReward_Implementation()
{
	UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

	if(RewardManager == nullptr)
		return;

	
}

void UTriggerEventRewardDataWithID::AcceptReward_Implementation(const TArray<FRewardData>& RewardDatas)
{

}