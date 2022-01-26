#include "DataSnippetAttributeCustomize.h"


FItemDataSnippetAttributeCustomize::FItemDataSnippetAttributeCustomize()
{

}

FItemDataSnippetAttributeCustomize::~FItemDataSnippetAttributeCustomize()
{
	
}

TSharedRef<IPropertyTypeCustomization> FItemDataSnippetAttributeCustomize::MakeInstance()
{
	return MakeShareable(new FItemDataSnippetAttributeCustomize());
}


void FItemDataSnippetAttributeCustomize::CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{

}

void FItemDataSnippetAttributeCustomize::CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{

}
