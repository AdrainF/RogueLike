// Fill out your copyright notice in the Description page of Project Settings.


#include "SPowerup_HealthPotion.h"

#include "SAttributeComponent.h"


ASPowerup_HealthPotion::ASPowerup_HealthPotion()
{


}

void ASPowerup_HealthPotion::Interact_Implementation(APawn* InstigatorPawn)
{

	if (!ensure(InstigatorPawn))
	{
		return;
	}

	USAttributeComponent* AttributeComp = InstigatorPawn->FindComponentByClass<USAttributeComponent>();
	

	if (AttributeComp->GetHealt()<AttributeComp->GetHealtmax())
	{

		AttributeComp->ApplyHealthChange(AttributeComp->GetHealtmax());
		HideAndCooldownPowerUp();
	}

}
