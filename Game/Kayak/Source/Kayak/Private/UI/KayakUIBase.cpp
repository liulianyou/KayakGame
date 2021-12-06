#include "KayakUIBase.h"

UKayakUIBase::UKayakUIBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UKayakUIBase::NativePreConstruct()
{
	Super::NativePreConstruct();


}

void UKayakUIBase::NativeConstruct()
{
	Super::NativeConstruct();
}

void UKayakUIBase::NativeDestruct()
{
	Super::NativeDestruct();
}


EWidgetLayer UKayakUIBase::GetDefaultLayer_Implementation()
{
	return DefalutLayer;
}
