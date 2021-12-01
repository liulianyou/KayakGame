#include "TriggerEventActorChain.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerCategory.h"

UTriggerEventActorChain::UTriggerEventActorChain(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}


EAddNewNodeResult UTriggerEventActorChain::AddChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
{
	if (!CanHoldTargetObject(ChildNode.GetObject()))
	{
		return EAddNewNodeResult::EAddNewNodeResult_Failed | EAddNewNodeResult::EAddNewNodeResult_Unmatch;
	}

	if (CategoryParameter.IsEmpty() || Category.IsEmpty() || CategoryParameter.HasAny(GetCategory()))
	{
		if (ChildNodes.Find(ChildNode.GetObject()) == INDEX_NONE)
		{
			ChildNodes.AddUnique(ChildNode.GetObject());

			//When add new child node it should update child node
			UpdateNextComponentInfo();

			if (NeedUpdateParentNodeInChildNode)
			{
				TArray<UTriggerTaskComponentBase*> Components;
				ChildNode->GetTriggerTaskComponents(Components);

				for (auto Component : Components)
				{
					if (Component == nullptr)
						continue;

					Component->AddParentNode(GetComponentOwner()->GetTriggerObjectOwner(), GetClass(), GetCategory(), false);
				}
			}
		}

		return EAddNewNodeResult::EAddNewNodeResult_Successed | EAddNewNodeResult::EAddNewNodeResult_Matched;
	}

	return EAddNewNodeResult::EAddNewNodeResult_Failed | EAddNewNodeResult::EAddNewNodeResult_Matched;
}

void UTriggerEventActorChain::RemoveChildNode_Implementation(const TScriptInterface<ITriggerInterface>& ChildNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateParentNodeInChildNode)
{
	if (CategoryParameter.IsEmpty() || Category.IsEmpty() || CategoryParameter.HasAny(Category))
	{
		ChildNodes.Remove(ChildNode.GetObject());
	}

	UpdateNextComponentInfo();

	if (NeedUpdateParentNodeInChildNode)
	{
		TArray<UTriggerTaskComponentBase*> Components;
		ChildNode->GetTriggerTaskComponents(Components);

		for (auto Component : Components)
		{
			if (Component == nullptr)
				continue;

			Component->RemoveParentNode(GetComponentOwner()->GetTriggerObjectOwner(), CategoryParameter, false);
		}
	}
}

void UTriggerEventActorChain::GetChildTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter) const
{
	OuterTriggers.Empty();

	for (int i = 0; i < ChildNodes.Num(); i++)
	{
		TScriptInterface<ITriggerInterface> ChildNode = ChildNodes[i].Get();

		if (ChildNode == nullptr)
			continue;

		TArray<UTriggerTaskComponentBase*> ChildComponents;
		ChildNode->GetTriggerTaskComponents(ChildComponents);

		for (auto ChildComponent : ChildComponents)
		{
			if (ChildComponent == nullptr)
				continue;

			bool IsMatched = ChildComponent->GetConstCategories().Num() == 0;

			for (auto CategoryStrategy : ChildComponent->GetConstCategories())
			{
				if (CategoryStrategy->IsChildCategoryOfGameplayTagContainer(GetConstCategory()))
				{
					IsMatched = true;
					break;
				}
			}

			if (IsMatched)
			{
				OuterTriggers.AddUnique(ChildNode);
				break;
			}
		}
	}
}

EAddNewNodeResult UTriggerEventActorChain::AddParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeInParentNode)
{
	if (!CanHoldTargetObject(ParentNode.GetObject()))
	{
		return EAddNewNodeResult::EAddNewNodeResult_Failed | EAddNewNodeResult::EAddNewNodeResult_Unmatch;
	}

	if (CategoryParameter.IsEmpty() || GetCategory().IsEmpty() || CategoryParameter.HasAny(GetCategory()))
	{
		if (ParentNodes.Find(ParentNode.GetObject()) == INDEX_NONE)
		{
			ParentNodes.Add(ParentNode.GetObject());

			if (NeedUpdateChildNodeInParentNode)
			{
				TArray<UTriggerTaskComponentBase*> Components;
				ParentNode->GetTriggerTaskComponents(Components);

				for (auto Component : Components)
				{
					if (Component == nullptr)
						continue;

					Component->AddChildNode(GetComponentOwner()->GetTriggerObjectOwner(), GetClass(), GetCategory(), false);
				}
			}

			return EAddNewNodeResult::EAddNewNodeResult_Matched | EAddNewNodeResult::EAddNewNodeResult_Successed;
		}
		
	}

	return EAddNewNodeResult::EAddNewNodeResult_Failed | EAddNewNodeResult::EAddNewNodeResult_Matched;;
}

void UTriggerEventActorChain::RemoveParentNode_Implementation(const TScriptInterface<ITriggerInterface>& ParentNode, const FGameplayTagContainer& CategoryParameter, bool NeedUpdateChildNodeInParentNode)
{
	if (CategoryParameter.IsEmpty() || Category.IsEmpty() || CategoryParameter.HasAny(Category))
	{
		ParentNodes.Remove(ParentNode.GetObject());
	}
	else
	{
		/*
		* If current event chain is not matched for target CategoryParameter, then try to search weather the parent node can be its parent
		*/
		TArray<UTriggerTaskComponentBase*> ParentComponents;

		ParentNode->GetTriggerTaskComponents(ParentComponents);

		bool CanbeRemoved = true;

		for (auto ParentComponent : ParentComponents)
		{
			for (auto EventInfo : ParentComponent->GetConstEventChains())
			{
				if (IsChildForEventInfo(EventInfo))
				{
					CanbeRemoved = false;
				}
			}
		}

		if (CanbeRemoved)
		{
			ParentNodes.Remove(ParentNode.GetObject());
		}
	}

	if (NeedUpdateChildNodeInParentNode)
	{
		TArray<UTriggerTaskComponentBase*> Components;
		ParentNode->GetTriggerTaskComponents(Components);

		for (auto Component : Components)
		{
			if (Component == nullptr)
				continue;

			Component->RemoveChildNode(GetComponentOwner()->GetTriggerObjectOwner(), CategoryParameter, false);
		}
	}
}

void UTriggerEventActorChain::GetParentTriggers_Implementation(TArray<TScriptInterface<ITriggerInterface>>& OuterTriggers, const FGameplayTagContainer& CategoryParameter) const
{
	OuterTriggers.Empty();

	if (GetConstCategory().IsEmpty() || CategoryParameter.IsEmpty() || GetConstCategory().HasAny(CategoryParameter))
	{
		for (int i = 0; i < ParentNodes.Num(); i++)
		{
			TScriptInterface<ITriggerInterface> ParentNode = ParentNodes[i].Get();

			if (ParentNode == nullptr)
				continue;

			TArray<UTriggerTaskComponentBase*> Components;
			ParentNode->GetTriggerTaskComponents(Components);

			for (auto Component : Components)
			{
				if (Component == nullptr)
					continue;

				bool IsMatched = false;

				for (auto EventInfo : Component->GetEventChains())
				{
					if (IsChildForEventInfo(EventInfo))
					{
						IsMatched = true;
						break;
					}
				}

				if (IsMatched)
				{
					OuterTriggers.AddUnique(ParentNode);
					break;
				}
			}
		}
	}
}

bool UTriggerEventActorChain::CanHoldTargetObject_Implementation(UObject* Object) const
{
	if (Cast<AActor>(Object) == nullptr)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void UTriggerEventActorChain::UpdateNextComponentInfo()
{
	Super::UpdateNextComponentInfo();
}

#if WITH_EDITOR

void UTriggerEventActorChain::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (FProperty* PropertyThatChanged = PropertyChangedEvent.Property)
	{
		const FName PropertyName = PropertyThatChanged->GetFName();
		{
			if ((PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerEventActorChain, ChildNodes) ||
				PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerEventActorChain, Category)))
			{
				TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;

				GetChildTriggers(ChildTriggers);

				TArray<TScriptInterface<ITriggerInterface>> ParentTriggers;

				GetParentTriggers(ParentTriggers);

				auto UpdateOldValue = [&](TArray<TScriptInterface<ITriggerInterface>>& OldNodes, const TArray<TScriptInterface<ITriggerInterface>>& CurrentTriggers, bool IsProcessChildNode )
				{
					for (int i = 0; i < OldNodes.Num(); i++)
					{
						if (OldNodes[i] == nullptr)
						{
							OldNodes.RemoveAt(i--);
							continue;
						}

						bool ShouldUpdateEventInfo = false;

						int Index = CurrentTriggers.Find(OldNodes[i]);

						if (Index == INDEX_NONE)
							ShouldUpdateEventInfo = true;

						if (ShouldUpdateEventInfo)
						{
							TArray<UTriggerTaskComponentBase*> Components;
							OldNodes[i]->GetTriggerTaskComponents(Components);

							for (auto Component : Components)
							{
								if (Component == nullptr)
									continue;

								if (IsProcessChildNode)
								{
									Component->RemoveParentNode(GetComponentOwner()->GetTriggerObjectOwner());
								}
								else
								{
									Component->RemoveChildNode(GetComponentOwner()->GetTriggerObjectOwner());
								}
							}
						}
					}
				};

				//First update the old value in child nodes and parent nodes;
				UpdateOldValue(CashedChildNodes, ChildTriggers, true);
				UpdateOldValue(CashedParentNodes, ParentTriggers, false);

				//Second add this as one parent of the child nodes
				for (int i = 0; i < ChildTriggers.Num(); i++)
				{
					const TScriptInterface<ITriggerInterface>& ChildNode = ChildTriggers[i];

					if (ChildNode == nullptr)
						continue;

					TArray<UTriggerTaskComponentBase*> Components;
					ChildNode->GetTriggerTaskComponents(Components);

					/*
					* If the current trigger node can not be the parent node of ChildNode,
					* I need to remove it
					*/
					bool CannotAddToParent = true;

					for (auto Component : Components)
					{
						if(Component == nullptr)
							continue;

						if (Component->AddParentNode(GetComponentOwner()->GetTriggerObjectOwner(), GetClass(), GetCategory()))
						{
							CannotAddToParent = false;
						}
					}

					if (CannotAddToParent)
					{
						RemoveChildNode(ChildNode, GetCategory());

						ChildTriggers.RemoveAt(i--);

						continue;
					}
				}

				UpdateNextComponentInfo();
			}
		}
	}
}

void UTriggerEventActorChain::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}

void UTriggerEventActorChain::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);

	if (PropertyAboutToChange)
	{
		const FName PropertyName = PropertyAboutToChange->GetFName();

		if (PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerEventActorChain, ChildNodes) ||
			PropertyName == GET_MEMBER_NAME_CHECKED(UTriggerEventActorChain, Category))
		{
			/*
			* Before value changed in the detail panel I need to cashed some values.
			* so that when the value is changed I can compare the difference and update some informations
			*/
			GetChildTriggers(CashedChildNodes);
			GetParentTriggers(CashedParentNodes);
		}
	}
}

#endif