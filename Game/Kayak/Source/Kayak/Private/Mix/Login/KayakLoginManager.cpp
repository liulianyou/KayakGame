#include "KayakLoginManager.h"

UKayakLoginManger::UKayakLoginManger(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TargetSystems.Empty();
}

void UKayakLoginManger::PostLoad()
{
	Super::PostLoad();
}


bool UKayakLoginManger::IsOnline(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle) const
{
	return false;
}

void UKayakLoginManger::RequestLogin(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle)
{

}

void UKayakLoginManger::RequestLogout(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle)
{

}

bool UKayakLoginManger::AddNewLoginSytel(const TSubclassOf<UKayakLoginStyleBase>& LoginSytle)
{
	return false;
}

void UKayakLoginManger::RemoveLoginSytel(const TSubclassOf<UKayakLoginStyleBase>& LoginSytle)
{

}

UKayakLoginStyleBase* UKayakLoginManger::GetTargetLoginStyle(const TSubclassOf<UKayakLoginStyleBase>& LoginSytle, bool AddNewOneIfNotExist /*= false*/)
{
	return nullptr;
}

#if WITH_EDITOR

void UKayakLoginManger::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);


}


#endif