#pragma once

/*
* Common Iterator for container which is used for net serialization
* Each time to interact the target container, it will remove all invalid elements 
*/
template< typename ElementType, typename ContainerType >
class FItemContainerIterator
{
public:

	FItemContainerIterator(const ContainerType& _InContainer, int32 _StartIdx = 0, bool _SkipInvalidElement = true, bool _SearchInPendingList = false)
		: index(_StartIdx)
		, Current(nullptr)
		, Container(const_cast<ContainerType&>(_InContainer))
		, SkipInvalidElement(_SkipInvalidElement)
		, SearchInPendingList(_SearchInPendingList)
	{
		Container.IncrementLock();

		if(SearchInPendingList)
		{
			Current = AdvancePending(const_cast<ElementType**>(&Container.HeadPendingElement));
			index = Container.Items.Num() - 1;
		}

		UpdateCurrent();
	}

	~FItemContainerIterator()
	{
		Container.DecrementLock();
	}


	void operator++()
	{
		Next();
	}

	ElementType& operator*() const
	{
		check(Current);
		return *Current;
	}

	ElementType& operator->() const
	{
		check(Current);
		return *Current;
	}

	explicit operator bool() const
	{
		return (Current != nullptr);
	}

	friend bool operator==(const FItemContainerIterator& Lhs, const FItemContainerIterator& Rhs)
	{
		return Lhs.Current == Rhs.Current;
	}

	friend bool operator!=(const FItemContainerIterator& Lhs, const FItemContainerIterator& Rhs)
	{
		return Lhs.Current != Rhs.Current;
	}

	typename TEnableIf<!TIsConst<ContainerType>::Value, void >::Type RemoveCurrent()
	{
		if (Container.Items.IsValidIndex(index))
		{
			Container.Items.RemoveAt(index);

			index--;
		}
		else
		{
			ElementType* LocalPending = Current->PreElement;

			Current->PreElement->NextElement = Current->NextElement;
			Current->NextElement->PreElement = Current->PreElement;

			delete Current;

			Current = LocalPending;
		}
		
		Next();
	}

	int GetIndex() const { return index; }
	ElementType* GetValue() const { return Current; }

private:

	FORCEINLINE ElementType* AdvancePending(ElementType** Next)
	{
		return (Next != const_cast<ElementType**>(Container.EndPendingElementPtr)) ? *Next : nullptr;
	}

	void Next()
	{
		if (Current && SearchInPendingList)
		{
			// While iterating through the linked list, jump to the next one
			Current = AdvancePending(const_cast<ElementType**>(&Current->NextElement));
		}

		++index;

		UpdateCurrent();
	}

	void UpdateCurrent()
	{
		//Interact the current pending list
		if (!SearchInPendingList)
		{
			if (index >= Container.Items.Num())
			{
				// Once we get to end of the array, we start iterating on the linked list. 
				Current = AdvancePending(const_cast<ElementType**>(&Container.HeadPendingElement));
				SearchInPendingList = true;
			}
			else
			{
				if (Container.Items.IsValidIndex(index))
				{
					Current = &Container.Items[index];
				}
			}
		}

		// If the current element is pending remove, go to the next one.
		if (Current != nullptr && SkipInvalidElement && !(*Current))
		{
			Next();
		}
	}

private:
	int32	index;
	ElementType* Current;
	ContainerType& Container;
	//Weather to skip the invalid element in the target container when use this iterator to access all elements
	bool SkipInvalidElement;
	//Flag to check weather this iterator try to access items in the pending list
	bool SearchInPendingList = false;
};

#define  ITERATOR_DEFINITION( ItemClass, CotanierClass )\
public:\
	friend class FItemContainerIterator<const ItemClass, CotanierClass>;\
	friend class FItemContainerIterator<ItemClass, CotanierClass>;\
	typedef FItemContainerIterator<const ItemClass, CotanierClass> ConstIterator;\
	typedef FItemContainerIterator<ItemClass, CotanierClass> Iterator;\
	FORCEINLINE ConstIterator CreateConstIterator( int StartIndex = 0, bool SkipInvalidElement = false) const { return ConstIterator(*this, StartIndex, SkipInvalidElement); }\
	FORCEINLINE Iterator CreateIterator(int StartIndex = 0, bool SkipInvalidElement = false) { return Iterator(*this, StartIndex, SkipInvalidElement); }\
	FORCEINLINE friend Iterator begin(CotanierClass* Container) { return Container->CreateIterator(); }\
	FORCEINLINE friend Iterator end(CotanierClass* Container) { return Iterator(*Container, -1); }\
	FORCEINLINE friend ConstIterator begin(const CotanierClass* Container) { return Container->CreateConstIterator(); }\
	FORCEINLINE friend ConstIterator end(const CotanierClass* Container) { return ConstIterator(*Container, -1); }

