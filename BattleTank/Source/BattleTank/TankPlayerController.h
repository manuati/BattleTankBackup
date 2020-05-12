// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// #include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

class UTankAimingComponent;

/**
 * Responsible for helping the player aim
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

	protected:
		UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
		void FoundAimingComponent(UTankAimingComponent* AimCompRef);

	public:
		virtual void BeginPlay() override;
		virtual void Tick(float DeltaSeconds) override;

		UPROPERTY(EditDefaultsOnly)
		float LineTraceRange = 1000000;
		
	private:

		void AimTowardsCrosshair();
		bool GetSightRayHitLocation(FVector& HitLocation) const;
		bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
		bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;

		UPROPERTY(EditDefaultsOnly)
		float CrossHairXLocation = 0.5f;
		UPROPERTY(EditDefaultsOnly)
		float CrossHairYLocation = 0.33333f;
		
};
