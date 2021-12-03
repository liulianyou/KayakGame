#pragma once

/*
* Author:	Liulianyou
* Time		2021/12/30
* Purpose:	The base class of character, this class should be used for all pawns which is used in our game include Player And AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Character.h"

#include "KayakCharacterBase.generated.h"

class UKayakAbilitySystemComponentBase;

namespace KayakCharacterSubObjectName
{
	static FName AbilitySystemName = TEXT("KayakAbilitySystem");
};


/*
* All pawns which is used to show some local appearance should derived from this class, include player and AI
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Kayak|Player")
class KAYAK_API AKayakCharacterBase : public ACharacter
{
	GENERATED_UCLASS_BODY()

public:

	//Override AActor
	virtual void PostInitializeComponents() override;
	//Override AActor


public:

	/*
	* Get the ability system component;
	*/
	UFUNCTION(BlueprintCallable, Category = "Kayak|Player|Ability")
	UKayakAbilitySystemComponentBase* GetAbilityComponent() const { return AbilityComponent; }


private:

	/*
	* The instance of ability components
	* One character should only have one ability component.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Kayak|Ability", meta = (AllowPrivateAccess = true))
	UKayakAbilitySystemComponentBase* AbilityComponent;
};