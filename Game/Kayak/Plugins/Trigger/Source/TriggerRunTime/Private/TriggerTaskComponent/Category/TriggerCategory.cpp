#include "TriggerCategory.h"

#include "GameplayTags.h"
#include "Engine/World.h"

#include "TriggerConfig.h"
#include "TriggerBlueprintLib.h"
#include "TriggerManager.h"
#include "TriggerBlueprintLib.h"

bool UTriggerCategoryBase::HasCheckRootNodeValid;
bool UTriggerCategoryBase::HasCheckMapNameValid;


UTriggerCategoryBase::UTriggerCategoryBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	HaveCheckedValid(false),
	IsCategroiesValid(false),
	HaveCheckDifficultyValid(false),
	IsDifficultyNodeValid(false),
	HaveCheckScenrioValid(false),
	IsSenarioNodeNodeValid(false),
	IsMapNameNodeValid(false),
	IsRootNodeValid(false)
{
	Categories.Reset();
}

void UTriggerCategoryBase::InitializeCategory(UObject* InOwner)
{
	if(IsInitialized)
		return;

	Owner = InOwner;

	OnInitializeCategory(InOwner);

	IsInitialized = true;
}

bool UTriggerCategoryBase::IsChildCategoryOfTriggerCategory_Implementation(UTriggerCategoryBase* ParentCategory) const
{
	if(ParentCategory == nullptr)
		return false;

	return IsChildCategoryOfGameplayTagContainer(ParentCategory->Categories);
}
						   
bool UTriggerCategoryBase::IsChildCategoryOfGameplayTagContainer_Implementation(const FGameplayTagContainer& ParentTagContainer) const
{
	return IsChildCategoryTag(Categories, ParentTagContainer);
}

bool UTriggerCategoryBase::IsMathcedForCurrrentRuntimeContent_Implementation() const
{
	if (Categories.IsEmpty())
		return true;

	UTriggerRuntimeContent* RuntimeContent = UTriggerBlueprintLib::GetTriggerManager()->GetRuntimeContent();

	if (RuntimeContent == nullptr || RuntimeContent->GetTriggerCategory().IsEmpty())
		return true;


	if (Categories.HasAny(RuntimeContent->GetTriggerCategory()))
	{
		TArray<FTriggerScenarioHandle> Handles;

		RuntimeContent->GetAllActiveScenarios(Handles);

		for (int i = 0; i < Handles.Num(); i++)
		{
			FTriggerScenarioInfo& SceneroInfo = RuntimeContent->GetScenerioInfo(Handles[i]);
		}

		return true;
	}
	
	return true;
}


bool UTriggerCategoryBase::HaveValidDifficultyNode( APlayerController* Controller )
{
	if(HaveCheckDifficultyValid)
		return IsDifficultyNodeValid;

	HaveCheckDifficultyValid = true;

	UTriggerRuntimeContent* RuntimeContent = UTriggerBlueprintLib::GetTriggerManager()->GetRuntimeContent();

	TArray<FTriggerScenarioHandle> ScenerioHandles;

	RuntimeContent->GetOpenedScenarioInfosByPlayerController(Controller, ScenerioHandles);

	//When there is this player is not in any opened scenario means this is player is new to this map, and he can enter any scenario by default
	if (ScenerioHandles.Num() == 0)
	{
		IsDifficultyNodeValid = true;
		return true;
	}

	IsDifficultyNodeValid = false;

	for (int i = 0; i < ScenerioHandles.Num(); i++)
	{
		if(!ScenerioHandles[i].IsVaild())
			continue;

		FTriggerScenarioInfo& Info = RuntimeContent->GetScenerioInfo(ScenerioHandles[i]);

		if(!Info.IsValid())
			continue;

		if (Categories.HasAny(RuntimeContent->GetTriggerCategory()))
		{
			IsDifficultyNodeValid = true;

			break;
		}
	}

	return IsDifficultyNodeValid;
}

bool UTriggerCategoryBase::HaveValidScenarioNode( APlayerController* PlayerController )
{
	if (HaveCheckScenrioValid)
		return IsSenarioNodeNodeValid;

	HaveCheckScenrioValid = true;

	UTriggerRuntimeContent* RuntimeContent = UTriggerBlueprintLib::GetTriggerManager()->GetRuntimeContent();

	TArray<FTriggerScenarioHandle> ScenerioHandles;

	RuntimeContent->GetOpenedScenarioInfosByPlayerController(PlayerController, ScenerioHandles);

	//When there is this player is not in any opened scenario means this is player is new to this map, and he can enter any scenario by default
	if (ScenerioHandles.Num() == 0)
	{
		IsSenarioNodeNodeValid = true;
		return true;
	}

	IsSenarioNodeNodeValid = false;

	for (int i = 0; i < ScenerioHandles.Num(); i++)
	{
		if (!ScenerioHandles[i].IsVaild())
			continue;

		FTriggerScenarioInfo& Info = RuntimeContent->GetScenerioInfo(ScenerioHandles[i]);

		if (!Info.IsValid())
			continue;

		if (Categories.HasAny(*UGameplayTagsManager::Get().GetSingleTagContainer(Info.ScenarioTag)))
		{
			IsSenarioNodeNodeValid = true;

			break;
		}
	}

	return IsSenarioNodeNodeValid;
}

bool UTriggerCategoryBase::IsValidCategory(bool CompleteCheck)
{
	if (HaveCheckedValid && !CompleteCheck)
	{
		return IsCategroiesValid;
	}

	HaveCheckedValid = true;

	IsCategroiesValid = IsValidCategory(Categories);

	IsRootNodeValid = HasCheckRootNodeValid;
	IsMapNameNodeValid = HasCheckMapNameValid;

	return IsCategroiesValid;
}

bool UTriggerCategoryBase::IsValidCategory() const
{
	return IsValidCategory(Categories);
}

bool UTriggerCategoryBase::IsValidCategory( const FGameplayTagContainer& TagContainer)
{	
	for (int i = 0; i < TagContainer.Num(); i++)
	{
		FGameplayTag Tag = TagContainer.GetByIndex(i);

		TSharedPtr<FGameplayTagNode> TagNode = UGameplayTagsManager::Get().FindTagNode(Tag);

		int Depth = -1;

		if (!CheckCategoryDataInternal(TagNode, Depth))
		{
			return false;
		}
	}

	return true;
}

bool UTriggerCategoryBase::IsChildCategoryTag(const FGameplayTagContainer& CheckedChildCategory, const FGameplayTagContainer& CheckedParentCategory)
{
	//If one of them is empty means one of them can be used for any situation
	if(CheckedChildCategory.IsEmpty() || CheckedParentCategory.IsEmpty())
		return true;

	if (!IsValidCategory(CheckedParentCategory) || !IsValidCategory(CheckedChildCategory))
		return false;

	//If the two category have the same difficulty then it will always return true;
	FGameplayTagContainer ChildTag = GetGameplayTagContainer(ECategoryFormat::Difficulty, CheckedChildCategory);
	FGameplayTagContainer ParentTag = GetGameplayTagContainer(ECategoryFormat::Difficulty, CheckedParentCategory);

	//First check weather the two category is at the same difficulty
	if (ChildTag.HasAny(ParentTag))
	{
		ChildTag = GetGameplayTagContainer(ECategoryFormat::MapName, CheckedChildCategory);
		ParentTag = GetGameplayTagContainer(ECategoryFormat::MapName, CheckedParentCategory);

		//There is no map name confined which means it can be used for all map
		if (ChildTag.IsEmpty() || ParentTag.IsEmpty())
			return true;

		FString ChildTagString = ChildTag.ToString();
		FString ParentTagString = ParentTag.ToString();

		//Second check weather the parent tag's map name contain the child map name 
		if (ChildTagString.Find(ChildTagString) != INDEX_NONE)
		{
			ChildTag = GetGameplayTagContainer(ECategoryFormat::Scenario, CheckedChildCategory);
			ParentTag = GetGameplayTagContainer(ECategoryFormat::Scenario, CheckedParentCategory);

			//one of them can be used for all scenario
			if(ChildTag.IsEmpty() || ParentTag.IsEmpty())
				return true;

			ChildTagString = ChildTag.ToString();
			ParentTagString = ParentTag.ToString();

			//Third check weather the parent's scenario is parent of the child
			if(ParentTagString.Find(ChildTagString) != INDEX_NONE)
				return true;
		}
	}
	
	return false;
}

bool UTriggerCategoryBase::CheckCategoryDataInternal(TSharedPtr<FGameplayTagNode> CurrentNode, int& Depth)
{
	if(!CurrentNode.IsValid())
		return true;

	FGameplayTag Tag = CurrentNode->GetCompleteTag();

	TSharedPtr<FGameplayTagNode> ParentNode = CurrentNode->GetParentTagNode();

	if (ParentNode.IsValid())
	{
		if(!CheckCategoryDataInternal(ParentNode, Depth))
			return false;
	
		bool Result;

		Depth++;

		switch (ECategoryFormat(Depth))
		{
			//case ECategoryFormat::Root:
			//	Result = CheckRootTag(Tag);
			//	break;
			case ECategoryFormat::Difficulty:
				Result = CheckDifficultyTag(Tag);
				break;
			case ECategoryFormat::MapName:
				Result = CheckMapNameTag(Tag);
				break;
			case ECategoryFormat::Scenario:
			default:
				Result = CheckSecnario(Tag);
				break;
		}

		return Result;
	}
	else
	{
		Depth++;

		return CheckRootTag(Tag);
	}

	return true;
}

bool UTriggerCategoryBase::CheckRootTag(FGameplayTag& Tag)
{
	UTriggerConfig* TriggerConfig = UTriggerConfig::StaticClass()->GetDefaultObject<UTriggerConfig>();

	//All tags should have the RootTag as its root node
	if (!Tag.MatchesTag(TriggerConfig->RootTag))
	{
		UE_LOG(LogTrigger, Error, TEXT("The Tag: %s do not have the root node with: %s"), *Tag.ToString(), *TriggerConfig->RootTag.ToString());

		HasCheckRootNodeValid = false;
		return HasCheckRootNodeValid;
	}
	HasCheckRootNodeValid = true;
	return HasCheckRootNodeValid;
}

bool UTriggerCategoryBase::CheckDifficultyTag(FGameplayTag& Tag)
{
	UTriggerConfig* TriggerConfig = UTriggerConfig::StaticClass()->GetDefaultObject<UTriggerConfig>();

	//this do not have the difficulty node as its second node
	if (!Tag.MatchesAny(TriggerConfig->Difficulties))
	{
		UE_LOG(LogTrigger, Error, TEXT("The Tag: %s, do not have the difficulty node with: %s"), *Tag.ToString(), *TriggerConfig->Difficulties.ToString());
		return false;
	}

	return true;
}

bool UTriggerCategoryBase::CheckMapNameTag(FGameplayTag& Tag)
{
	FString MapName = GWorld->GetMapName();

	FString ParentString = Tag.RequestDirectParent().ToString();

	if (ParentString.IsEmpty())
	{
		HasCheckMapNameValid = false;
		return HasCheckMapNameValid;
	}

	int Index = Tag.ToString().Find(MapName, ESearchCase::IgnoreCase, ESearchDir::FromStart, ParentString.Len());
		
	//This tag do not have the mapname as its third node
	if (Index == INDEX_NONE)
	{
		UE_LOG(LogTrigger, Error, TEXT("The Tag: %s do not have the map node with: %s"), *Tag.ToString(), *MapName);

		HasCheckMapNameValid = false;
		return HasCheckMapNameValid;
	}

	HasCheckMapNameValid = true;
	return HasCheckMapNameValid;
}

bool UTriggerCategoryBase::CheckSecnario(FGameplayTag& Tag)
{
	//This is not import, I think I do not need to check weather it is valid.
	//As its hierarchy and name has no rule, it is defined by the designer.
	return true;
}

void UTriggerCategoryBase::MarkDifficultyDirty()
{
	HaveCheckDifficultyValid = false;
}

void UTriggerCategoryBase::MarkScenerioDirty()
{
	HaveCheckScenrioValid = false;
}

FGameplayTagContainer UTriggerCategoryBase::GetGameplayTagContainer(ECategoryFormat Phases, const FGameplayTagContainer& TargetTagContainer)
{
	if (!IsValidCategory(TargetTagContainer))
	{
		return FGameplayTagContainer::EmptyContainer;
	}

	TArray<FGameplayTag> Tags;

	TargetTagContainer.GetGameplayTagArray(Tags);

	FGameplayTagContainer Result;

	for (auto Tag : Tags)
	{
		Result.AddTag(GetGameplayTag(Tag, Phases));
	}

	return Result;
}

FGameplayTag UTriggerCategoryBase::GetGameplayTag(const FGameplayTag& TriggerTag, ECategoryFormat Phases)
{
	TSharedPtr<FGameplayTagNode> TagNode = UGameplayTagsManager::Get().FindTagNode(TriggerTag);

	if(!TagNode.IsValid())
		return FGameplayTag::EmptyTag;

	TArray<FString> TagStrings;

	TriggerTag.ToString().ParseIntoArray(TagStrings, TEXT("."));

	if (TagStrings.IsValidIndex(int(Phases)))
	{
		int Depth = TagStrings.Num() - 1;

		return GetCategroyNodeGamePlayTagInternal(TagNode, Phases, Depth);
	}

	return FGameplayTag::EmptyTag;
}

FGameplayTag UTriggerCategoryBase::GetCategroyNodeGamePlayTagInternal( const TSharedPtr<FGameplayTagNode>& CurrentNode, ECategoryFormat Phases, int& Depth)
{
	if(!CurrentNode.IsValid())
		return FGameplayTag::EmptyTag;

	if ( int(Phases) == Depth ||
		//As the scenario node may have more then one node string and I just care the total scenario node, so it should be done specially
		(Phases == ECategoryFormat::Scenario && Depth >= int(Phases)))
	{
		return CurrentNode->GetCompleteTag();
	}

	return GetCategroyNodeGamePlayTagInternal(CurrentNode->GetParentTagNode(), Phases, --Depth);
}

void UTriggerCategoryBase::GetExportedMapName_Implementation(TArray<FString>& OutMapNames) const
{
	OutMapNames.Empty();

	GenerateMapNameFromCategroyTag(OutMapNames);
}

void UTriggerCategoryBase::GetExportedMapNameByParentCategory_Implementation(TArray<FString>& OutMapNames, UTriggerCategoryBase* ParentCategory) const
{
	OutMapNames.Empty();

	//If current category is not the child of the other category means then are at different layer, and should not be interacted.
	if (!IsValidCategory() || !IsChildCategoryOfTriggerCategory(ParentCategory))
		return;

	if (ParentCategory == nullptr || !ParentCategory->IsValidCategory())
	{
		GetExportedMapName(OutMapNames);

		return;
	}

	TArray<FGameplayTag> Tags;
	Categories.GetGameplayTagArray(Tags);

	TArray<FGameplayTag> ParentTags;

	if (ParentCategory != nullptr)
	{
		ParentCategory->Categories.GetGameplayTagArray(ParentTags);
	}
	
	for (auto Tag : Tags)
	{
		FGameplayTag DifficultyTag = GetGameplayTag(Tag, ECategoryFormat::Difficulty);
		
		if(!DifficultyTag.IsValid())
			continue;

		bool IsMatched = false;

		for (auto ParentTag : ParentTags)
		{
			FGameplayTag ParentDifficultyTag = GetGameplayTag(ParentTag, ECategoryFormat::Difficulty);
			
			if (ParentDifficultyTag.IsValid() && DifficultyTag == ParentDifficultyTag)
			{
				IsMatched = true;

				break;
			}
		}

		if (IsMatched)
		{
			OutMapNames.AddUnique(GetMapName(Tag));
		}
	}
}

void UTriggerCategoryBase::UpdateCategoryToCurrentMap()
{
	TArray<FGameplayTag> CategoryTags;

	FString OwnedMapName = GetTypedOuter<ULevel>()->GetOuter()->GetName();

	Categories.GetGameplayTagArray(CategoryTags);

	for (int i = 0; i < CategoryTags.Num(); i++)
	{
		FString NewMapName = GetMapName(CategoryTags[i]);

		if (NewMapName.IsEmpty())
			continue;

		if (NewMapName != OwnedMapName)
		{
			Categories.RemoveTag(CategoryTags[i]);
		}
	}
}

void UTriggerCategoryBase::GenerateMapNameFromCategroyTag(TArray<FString>& OutMapNames) const
{
	UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	TArray<FGameplayTag> CategoryTags;

	Categories.GetGameplayTagArray(CategoryTags);

	/*
	* If the categories have any tag in the difficulty tags then add the difficulty tag to the out map name
	*/
	for (int i = 0; i < CategoryTags.Num(); i++)
	{
		FString NewMapName = GetMapName(CategoryTags[i]);

		if (!NewMapName.IsEmpty())
		{
			OutMapNames.Add(NewMapName);
		}
	}
}

FString UTriggerCategoryBase::GetMapName(const FGameplayTag& CategoryTag) const
{
	FString ScenarioMapName, DifficultyName, Result;

	GetTriggerCategoryNodeName(DifficultyName, CategoryTag, ECategoryFormat::Difficulty);

	GetTriggerCategoryNodeName(ScenarioMapName, CategoryTag, ECategoryFormat::Scenario);

	if (!ScenarioMapName.IsEmpty() && !DifficultyName.IsEmpty())
	{
		Result = DifficultyName + TEXT("_") + ScenarioMapName;
	}
	else if (!DifficultyName.IsEmpty())
	{
		Result = DifficultyName;
	}
	else if (!ScenarioMapName.IsEmpty())
	{
		Result = ScenarioMapName;
	}
	else
	{
		Result = TEXT("");
	}

	return Result;
}

bool UTriggerCategoryBase::GetTriggerCategoryNodeName(FString& OutNodeName, const FGameplayTag& Tag, ECategoryFormat Phraes)
{
	bool Result = true;

	if (!IsValidCategory(Tag.GetSingleTagContainer()))
	{
		return false;
	}

	TArray<FString> Tags;
	Tag.ToString().ParseIntoArray(Tags, TEXT("."));

	//The phrase format is outer the range of tags
	if (Tags.Num() - 1 < int(Phraes))
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check the Tag: %s, which do not contain phrase: %d in ECategoryFormat"), *Tag.ToString(), int(Phraes));
		return false;
	}
		
	OutNodeName = Tags[int(Phraes)];

	return true;
}

UTaskComponentCategory::UTaskComponentCategory(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	MapNames.Empty();
}

void UTaskComponentCategory::GetExportedMapName_Implementation(TArray<FString>& OutMapNames) const
{
	OutMapNames.Empty();

	if (NeedExportToNewMap)
	{
		OutMapNames.Append(MapNames);
	}
	else
	{
		Super::GetExportedMapName_Implementation(OutMapNames);
	}
}

void UTaskComponentCategory::GetExportedMapNameByParentCategory_Implementation(TArray<FString>& OutMapNames, UTriggerCategoryBase* OtherCategory) const
{
	OutMapNames.Empty();

	if(OtherCategory == nullptr || !IsValidCategory())
		return;

	if (NeedExportToNewMap)
	{
		OutMapNames.Append(MapNames);
	}
	else
	{
		Super::GetExportedMapNameByParentCategory_Implementation(OutMapNames, OtherCategory);
	}
}

void UTaskComponentCategory::UpdateCategoryToCurrentMap()
{
	if (!NeedExportToNewMap)
	{
		Super::UpdateCategoryToCurrentMap();
	}
}

