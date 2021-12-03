#include "KayakHUDBase.h"
#include "KayakUIManager.h"

AKayakHUDBase::AKayakHUDBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	
}

void AKayakHUDBase::ShowHUD()
{
	Super::ShowHUD();

}

void AKayakHUDBase::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//Check UIManager
	{	
		if (UIManager == nullptr)
		{
			UClass* UIManagerC = UIManagerClass;

			if (UIManagerC == nullptr)
			{
				UIManagerC = UKayakUIManager::StaticClass();
			}

			UIManager = NewObject<UKayakUIManager>(this, UIManagerC);

			if (UIManager)
			{
				UIManager->Initialize(this);
			}
		}
	}

}