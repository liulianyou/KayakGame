#include "TriggerEventChainBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerConfig.h"
#include "TriggerCategory.h"

UTriggerEventChainBase::UTriggerEventChainBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UTriggerEventChainBase::InitilaizeByTriggerTaskComponent(UTriggerTaskComponentBase* Component)
{
	OwnerComponent = Component;

	OnInitilaizeByTriggerTaskComponent(Component);
}


void UTriggerEventChainBase::GetParentTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
{
	OutTriggerTaskComponents.Empty();

	TArray<TScriptInterface<ITriggerInterface>> ParentTriggers;

	GetParentTriggers(ParentTriggers);

	for (auto ParentTrigger : ParentTriggers)
	{
		if(ParentTrigger == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*> Components;

		ParentTrigger->GetTriggerTaskComponents(Components);

		OutTriggerTaskComponents.Append(Components);
	}
}

bool UTriggerEventChainBase::CanHoldTargetObject_Implementation(UObject* Object) const
{
	if(Object == nullptr)
		return false;

	return true;
}


void UTriggerEventChainBase::GetChildTriggerTaskComponents_Implementation(TArray<UTriggerTaskComponentBase*>& OutTriggerTaskComponents)
{
	OutTriggerTaskComponents.Empty();

	TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;

	GetChildTriggers(ChildTriggers);

	for (auto ChildTrigger : ChildTriggers)
	{
		if (ChildTrigger == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*> Components;

		ChildTrigger->GetTriggerTaskComponents(Components);

		OutTriggerTaskComponents.Append(Components);
	}
}

EAddNewNodeResult UTriggerEventChainBase::AddChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the AddChildNode in class: %s"), *GetClass()->GetName());

	return EAddNewNodeResult::EAddNewNodeResult_Failed;
}

void UTriggerEventChainBase::RemoveChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the RemoveChildNode in class: %s"), *GetClass()->GetName());
}

void UTriggerEventChainBase::GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter) const
{
	OuterTriggers.Empty();

	UE_LOG(LogTrigger, Error, TEXT("Please implement the GetChildTriggers in class: %s"), *GetClass()->GetName());
}

EAddNewNodeResult UTriggerEventChainBase::AddParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeIndeParentNode )
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the AddParentNode in class: %s"), *GetClass()->GetName());

	return EAddNewNodeResult::EAddNewNodeResult_Failed;
}

void UTriggerEventChainBase::RemoveParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeInParentNode)
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the RemoveParentNode in class: %s"), *GetClass()->GetName());
}

void UTriggerEventChainBase::GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter) const
{
	OuterTriggers.Empty();

	UE_LOG(LogTrigger, Error, TEXT("Please implement the GetParentTriggers in class: %s"), *GetClass()->GetName());
}

bool UTriggerEventChainBase::IsChildForEventInfo_Implementation(const UTriggerEventChainBase* ParentEventInfo, bool IgnoreDiffentLevel) const
{
	if (ParentEventInfo == nullptr)
		return false;

	if (IgnoreDiffentLevel == false)
	{
		if (GetTypedOuter<ULevel>() != ParentEventInfo->GetTypedOuter<ULevel>())
			return false;
	}

	TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;
	ParentEventInfo->GetChildTriggers(ChildTriggers);

	//If the parent node do not contain this
	if(ChildTriggers.Find(GetComponentOwner()->GetTriggerObjectOwner()) == INDEX_NONE)
		return false;

	if (GetConstCategory().IsEmpty()
		|| ParentEventInfo->GetConstCategory().IsEmpty()
		|| UTriggerCategoryBase::IsChildCategoryTag(GetConstCategory(), ParentEventInfo->GetConstCategory()))
		return true;

	return false;
}


void UTriggerEventChainBase::SetCategory(const FGameplayTagContainer& NewCategory)
{
	Category = NewCategory;
}


void UTriggerEventChainBase::RemoveNextComponentInfo(FString MapName, FGuid ComponentID)
{
	if (MapName.IsEmpty())
	{
		for (int i = 0; i < NextComponentInfos.Num(); i++)
		{
			NextComponentInfos[i].ComponentIDs.Remove(ComponentID);

			if (NextComponentInfos[i].ComponentIDs.Num() == 0)
			{
				NextComponentInfos.RemoveAt(i--);
			}
		}

		return;
	}

	FTriggerTaskComponentInformation* Info = NextComponentInfos.FindByPredicate([&](const FTriggerTaskComponentInformation& Data) {
		if (Data.MapName == MapName)
			return true;
		else
			return false;
	});

	if (Info != nullptr)
	{
		Info->ComponentIDs.Remove(ComponentID);
	}
}

void UTriggerEventChainBase::AddNextComponentInfo(FString MapName, FGuid ComponentID)
{
	if (MapName.IsEmpty())
	{
		if (NextComponentInfos.Num() == 0)
		{
			FTriggerTaskComponentInformation Info;
			Info.MapName = FTriggerTaskComponentInformation::AnyMap;
			Info.ComponentIDs.Add(ComponentID);

			NextComponentInfos.Add(Info);
		}
		else
		{
			for (int i = 0; i < NextComponentInfos.Num(); i++)
			{
				NextComponentInfos[i].ComponentIDs.AddUnique(ComponentID);
			}
		}

		return;
	}

	FTriggerTaskComponentInformation* Info = NextComponentInfos.FindByPredicate([&](const FTriggerTaskComponentInformation& Data) {
		if (Data.MapName == MapName)
			return true;
		else
			return false;
	});

	if (Info == nullptr)
	{
		FTriggerTaskComponentInformation NewInfo;
		NewInfo.MapName = MapName;
		NewInfo.ComponentIDs.AddUnique(ComponentID);
		NextComponentInfos.Add(NewInfo);
	}
	else
	{
		int Index = Info->ComponentIDs.Find(ComponentID);

		if (Index == INDEX_NONE)
		{
			Info->ComponentIDs.AddUnique(ComponentID);
		}
	}
}

void UTriggerEventChainBase::UpdateNextComponentInfo()
{
	NextComponentInfos.Empty();

	UTriggerConfig* Config = UTriggerConfig::StaticClass()->GetDefaultObject<UTriggerConfig>();

	//If it is not allowed to divided to another map then just make the NextComponentInfos empty 
	if (Config != nullptr && !Config->CanDivideComponentToAnotherMap)
		return;

	//Update the next component info in the parent nodes
	{
		TArray<UTriggerTaskComponentBase*> LocalParentComponents;
		GetParentTriggerTaskComponents(LocalParentComponents);

		for (auto ParentComponet : LocalParentComponents)
		{
			//Remove NextComponetInfo in the parent component
			ParentComponet->RemoveNextComponentInfo(FString(), GetComponentOwner()->GetComponentID());

			TArray<FTriggerTaskComponentInformation> ComponentInfos;

			ParentComponet->GetNextComponentInfo(ComponentInfos);

			for (auto LocalCategory : GetComponentOwner()->GetCategories())
			{
				if (LocalCategory == nullptr)
					continue;

				for (auto ParenetCategory : ParentComponet->GetCategories())
				{
					//If this component is the child node of the parent component
					if (LocalCategory->Categories.HasAny(ParenetCategory->Categories))
					{
						TArray<FString> MapNames;
						ParenetCategory->GetExportedMapNameByParentCategory(MapNames, LocalCategory);

						//Try to add the new MapName to the NextComponentInfo in the parent component
						for (int MapNameIndex = 0; MapNameIndex < MapNames.Num(); MapNameIndex++)
						{
							//Try to find weather the parent node have the MapName of this component
							FTriggerTaskComponentInformation* Info = ComponentInfos.FindByPredicate([&](const FTriggerTaskComponentInformation& ComponentInfo) {
								if (ComponentInfo.MapName.Equals(MapNames[MapNameIndex]))
									return true;
								else
									return false;
							});

							//The parent component do have any the mapname of this component then add new one
							if (Info == nullptr)
							{
								ParentComponet->AddNextComponentInfo(MapNames[MapNameIndex], GetComponentOwner()->GetComponentID());
							}
							else
							{
								int Index = Info->ComponentIDs.Find(GetComponentOwner()->GetComponentID());

								//If the exist mapInfo do not contain this component then just add it to the mapname
								if (Index == INDEX_NONE)
								{
									ParentComponet->AddNextComponentInfo(MapNames[MapNameIndex], GetComponentOwner()->GetComponentID());
								}
							}
						}

						//Try to remove unmatched NextComponentInfo
						for (int i = 0; i < ComponentInfos.Num(); i++)
						{
							int Index = ComponentInfos[i].ComponentIDs.Find(GetComponentOwner()->GetComponentID());

							if (Index != INDEX_NONE)
							{
								int MapNameIndex = MapNames.Find(ComponentInfos[i].MapName);

								if (MapNameIndex == INDEX_NONE)
								{
									ParentComponet->RemoveNextComponentInfo(ComponentInfos[i].MapName, GetComponentOwner()->GetComponentID());
								}
							}
						}
					}
					//When this component is not the child node the parent component, then remove all instances of this component form the parent component
					else
					{
						ParentComponet->RemoveNextComponentInfo(FString(), GetComponentOwner()->GetComponentID());
					}
				}
			}
		}
	}

	//Update the next component info in this component
	{
		TArray<UTriggerTaskComponentBase*> LocalChildComponents;
		GetChildTriggerTaskComponents(LocalChildComponents);

		//There is no child in the component so do nothing to next component info in this component
		if (LocalChildComponents.Num() == 0)
			return;

		TryToAddChildComponentsToNextInfo(LocalChildComponents);
	}
}

void UTriggerEventChainBase::TryToAddChildComponentsToNextInfo(const TArray<UTriggerTaskComponentBase*>& Components)
{
	for (auto Component : Components)
	{
		if (Component == nullptr || !Component->IsChildNodeOfComponent(GetComponentOwner()))
			continue;

		bool IsAllCategoriesNull = true;

		for (auto CategoryStyle : GetComponentOwner()->GetConstCategories())
		{
			if (CategoryStyle == nullptr)
				continue;

			IsAllCategoriesNull = false;

			for (auto OtherCategory : Component->GetConstCategories())
			{
				if (OtherCategory == nullptr)
					continue;

				TArray<FString> MapNames;
				OtherCategory->GetExportedMapNameByParentCategory(MapNames, CategoryStyle);

				//If there is no exported maps in target category means it can used for any situation
				if (MapNames.Num() == 0)
				{
					AddNextComponentInfo(Component->GetTypedOuter<ULevel>()->GetOuter()->GetName(), Component->GetComponentID());
				}
				else
				{
					for (auto MapName : MapNames)
					{
						AddNextComponentInfo(MapName, Component->GetComponentID());
					}
				}
			}
		}

		if (IsAllCategoriesNull)
		{
			AddNextComponentInfo(FString(), Component->GetComponentID());
		}
	}
}