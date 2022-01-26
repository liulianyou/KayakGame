#include "ItemDataSnippetProperty.h"

FItemDataSnippetProperty::FItemDataSnippetProperty(const FItemDataSnippetProperty& OtherValue)
{
	Property = OtherValue.GetProperty();
	Owner = OtherValue.GetOwner();
}

FItemDataSnippetProperty::FItemDataSnippetProperty(FItemDataSnippetProperty&& OtherValue)
{
	Property = OtherValue.GetProperty();
	Owner = OtherValue.GetOwner();
}

FItemDataSnippetProperty& FItemDataSnippetProperty::operator =(const FItemDataSnippetProperty& OtherValue)
{
	Property = OtherValue.GetProperty();
	Owner = OtherValue.GetOwner();
	return *this;
}

bool FItemDataSnippetProperty::IsValid() const
{
	return Property != nullptr;
}

void FItemDataSnippetProperty::SetProperty(FProperty* InProperty)
{
	Property = InProperty;
}

void FItemDataSnippetProperty::SetOwner(UItemDataSnippetBase* InOwner)
{
	Owner = InOwner;
}

UItemDataSnippetBase* FItemDataSnippetProperty::GetOwner() const
{
	return Owner;
}