#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/1
* Purpose:	Use to manager the login state
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMarcos.h"

#include "Templates/SubclassOf.h"

#include "KayakLoginManger.generated.h"

class UKayakLoginStyleBase;
class APlayerController*;

/*
* Brief to hold all information for login
*/
UCLASS(Blueprintable, BlueprintType, Config = Game, Category = "Kayak|Login")
class KAYAK_API UKayakLoginManger : public UObject
{
	GENERATE_UCLASS_BODY()

public:

	/*
	* checked weather the current player have logined to the target system
	* 
	* @param Player			the target player need to be checked, this variable should never bu null
	* @param LoginStyle		which system need to be checked
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	bool IsOnline(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle) const;

	/*
	* Request to login the target system
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	void RequestLogin(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle);

	/*
	* Request to logout the target system
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	void RequestLogout(APlayerController* Player, const TSubclassOf<UKayakLoginStyleBase>& LoginSytle);

	/*
	* Add new login style to this manager.
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	bool AddNewLoginSytel(const TSubclassOf<UKayakLoginStyleBase>& LoginSytle);


	/*
	* Add new login style to this manager.
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Login")
	void RemoveLoginSytel(const TSubclassOf<UKayakLoginStyleBase>& LoginSytle);

	/*
	* Get the target login style though the type
	* 
	* @param LoginSytle				the target login type that need to search
	* @param AddNewOneIfNotExist	True means if the searched type of login have not resisted, then add new instance of it
	* 
	* #return nullptr means there is no target login style
	*/
	UFUNCTION(BlueprintCallable, meta=( AdvancedDisplay=1 ), Category = "Kayak|Login")
	UKayakLoginStyleBase* GetTargetLoginStyle( const TSubclassOf<UKayakLoginStyleBase>& LoginSytle, bool AddNewOneIfNotExist = false);

public:

	//Override UObject
	virtual void PostLoad() override;
	//Override UObject

#if WITH_EDITOR

	//Override UObject
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	//Override UObject

#endif


public:

	/*
	* How many system the player need to login/Logout.
	*/
	UPRPERTY( BlueprintReadWrite, EditAnywhere, Category = "Kayak|Login")
	TArray<TSubclassOf<UKayakLoginStyleBase>> TargetSystems;
};
