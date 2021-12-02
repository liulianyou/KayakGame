#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	The base class to describe how to login to which target system
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "KayakLoginStyleBase.generated.h"

class UKayakLoginManger;

/*
* Brief to describe the state of login
*/
UENUM(BlueprintType)
enum class EOnlineState : uint8
{
	//Have requested to login and waiting the feedback
	ERequestedToLogin		UMETA(DisplayName = "RequestedLogin"),
	//Have logined
	EOnline					UMETA(DisplayName = "Online"),
	//Have requested to logout and waiting the feed back
	ERequestedToLogout		UMETA(DisplayName = "RequestedLogout"),
	//Have logouted
	EOffline				UMETA(DisplayName = "Offline")
};

/*
* The base class to describe which system will the player try to login
*/
UCLASS(Blueprintable, BlueprintType, Config = Game, Category = "Kayak|Login")
class KAYAK_API UKayakLoginStyleBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Initialize this style
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Kayak|Login")
	void OnInitialize(UKayakLoginManger* LoginManager);

	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	virtual void Initialize(UKayakLoginManger* LoginManager);

	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	UKayakLoginManger* GetLoginManger() const { return Owner; }

	/*
	* Weather the target player is logined
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	bool IsLogined( APlayerController* Player ) const;

	/*
	* The feed back of login request
	* 
	* @param IsSuccessed		true means login successfully
	* @param LoginFailedReason	the reason of login failed
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = ( AdvancedDisplay = 2 ), Category = "Kayak|Login")
	void OnLoginCallback( APlayerController* Player,  bool IsSuccessed, const FString& LoginFailedReason );

	/*
	* The feed back of login request
	*
	* @param IsSuccessed		true means login successfully
	* @param LoginFailedReason	the reason of login failed
	*/
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = 2), Category = "Kayak|Login")
	virtual void LoginCallback(APlayerController* Player,  bool IsSuccessed, const FString& LoginFailedReason);

	/*
	* Request to login
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Kayak|Login")
	void OnRequestLogin(APlayerController* PlayerController);

	/*
	* Request to login
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	void RequestLogin( APlayerController* PlayerController );

	/*
	* The feed back of logout request
	*
	* @param IsSuccessed		true means logout successfully
	* @param LoginFailedReason	the reason of logout failed
	*/
	UFUNCTION(BlueprintImplementableEvent, meta = (AdvancedDisplay = 2), Category = "Kayak|Login")
	void OnLogoutCallback(APlayerController* Player, bool IsSuccessed, const FString& LogoutFailedReason);

	/*
	* The feed back of logout request
	*
	* @param IsSuccessed		true means logout successfully
	* @param LoginFailedReason	the reason of logout failed
	*/
	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = 2), Category = "Kayak|Login")
	virtual void LogoutCallback(APlayerController* Player, bool IsSuccessed, const FString& LogoutFailedReason);

	/*
	* Request to logout
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Kayak|Login")
	void OnRequestLogout(APlayerController* PlayerController);

	/*
	* Request to logout
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	void RequestLogout( APlayerController* PlayerController );

private:

	//The map of different login state
	TMap<APlayerController*, EOnlineState> LoginStates;

	//The owner of this style
	UKayakLoginManger* Owner = nullptr;
};
