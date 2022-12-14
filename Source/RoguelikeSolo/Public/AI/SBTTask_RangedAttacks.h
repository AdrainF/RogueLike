// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "SBTTask_RangedAttacks.generated.h"

/**
 * 
 */
UCLASS()
class ROGUELIKESOLO_API USBTTask_RangedAttacks : public UBTTaskNode
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, Category = "AI")
		TSubclassOf<AActor> ProjectileClass;


		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
