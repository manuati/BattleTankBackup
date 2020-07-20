// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Enum for aiming state
UENUM()
enum class EFiringState : uint8
{
	Reloading,
	Aiming,
	Lock,
	OutOfAmmo
};

// Forward declaration
class UTankBarrel; 
class UTankTurret;
class AProjectile;

// Holds barrel's properties
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Category = "State")
	EFiringState FiringState = EFiringState::Reloading;
	

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();
	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialise(UTankBarrel* BarrelToSet, UTankTurret* TurretToSet, TSubclassOf<AProjectile> ProjectileBlueprintToSet);

	UFUNCTION(BlueprintCallable, Category = "TankAction")
	void Fire();

	EFiringState GetFiringState() const;
	
	UFUNCTION(BlueprintCallable, Category = "Firing")
	int GetRoundsLeft() const;
	
private:
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float ReloadTimeInSeconds = 3;
	double LastFireTime = 0;
	
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AProjectile> ProjectileBlueprint;
	
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	float LaunchSpeed = 4000;
	UPROPERTY(EditDefaultsOnly, Category = "Firing")
	int RoundsLeft = 50;


	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;
	FVector AimDirection;

	void MoveBarrelTowards(FVector AimDirection);
	void MoveTurretTowards(FVector AimDirection);
	virtual void BeginPlay() override;
	bool IsBarrelMoving();
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	
};
