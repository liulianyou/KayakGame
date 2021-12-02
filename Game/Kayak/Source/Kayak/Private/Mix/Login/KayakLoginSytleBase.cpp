#include "KayakLoginStyleBase.h"

UKayakLoginStyleBase::UKayakLoginStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}


void UKayakLoginStyleBase::Initialize(UKayakLoginManger* LoginManager)
{
	Owner = LoginManager;

	OnInitialize(LoginManager);
}

bool UKayakLoginStyleBase::IsLogined(APlayerController* Player) const
{
	EOnlineState* OnlineStatePtr = LoginStates.Find(Player);

	return OnlineStatePtr != nullptr && *OnlineStatePtr == EOnlineState::EOnline;
}

void UKayakLoginStyleBase::LoginCallback(APlayerController* Player,  bool IsSuccessed, const FString& LoginFailedReason)
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