// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// #include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	private:

		void BeginPlay() override;

		// Called every frame
		virtual void Tick(float DeltaTime) override;

	public:
		// How close can the AI tank get
		UPROPERTY(EditDefaultsOnly, Category="Setup")
		float AcceptanceRadius = 8000;
};
