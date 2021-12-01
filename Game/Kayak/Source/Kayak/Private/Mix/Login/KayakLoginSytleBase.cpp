#include "KayakLoginStyleBase.h"

UKayakLoginStyleBase::UKayakLoginStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TargetSystems.Empty();
}


void UKayakLoginStyleBase::Initialize(UKayakLoginManger* LoginManager)
{
	Owner = LoginManager;

	OnInitialize(LoginManager);
}

bool UKayakLoginStyleBase::IsLogined(APlayerController* Player) const
{
	return false;
}

void UKayakLoginStyleBase::LoginCallback(APlayerController* Player  bool IsSuccessed, const FString& LoginFailedReason)
{
	OnLoginCallback( Player, IsSuccessed, LoginFailedReason );
}

void UKayakLoginStyleBase::RequestLogin(APlayerController* PlayerController)
{
	OnRequestLogin(PlayerController);
}

void UKayakLoginStyleBase::LogoutCallback(APlayerController* Player, bool IsSuccessed, const FString& LogoutFailedReason)
{
	OnLogoutCallback(Player, IsSuccessed, LogoutFailedReason);
}

void UKayakLoginStyleBase::RequestLogout(APlayerController* PlayerController)
{
	OnRequestLogout(PlayerController);
}