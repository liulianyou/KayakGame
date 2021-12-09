#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/30
* Purpose:	This the base HUD which is used for our game
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/HUD.h"

#include "KayakHUDBase.generated.h"

class UKayakUIManager;


UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|UI|HUD")
class KAYAK_API AKayakHUDBase : public AHUD
{
	GENERATED_UCLASS_BODY()

public:

	//Override HUD
	virtual void ShowHUD() override ;
	//Override HUD

	//Override AActor
	virtual void PostInitializeComponents() override;
	//Override AActor

public:

	
	/*
	* Get the instance of UI manager
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintGetter, Category="Kayak|UI")
	UKayakUIManager* GetUIManager() const { return UIManager; }

public:

	/*
	* The class of UI manager this actor will hold to manager all UI for the target game mode
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Kayak|UI")
	TSubclassOf<UKayakUIManager> UIManagerClass;

private:
	
	//Instance of UI manager
	UPROPERTY()
	UKayakUIManager* UIManager = nullptr;

};