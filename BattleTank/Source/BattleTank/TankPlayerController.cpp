// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "TankAimingComponent.h"
#include "Tank.h"
#include "Engine/World.h"

void ATankPlayerController::BeginPlay()
{
    Super::BeginPlay();
    if (!GetPawn()) return;
    auto AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
    if (!ensure(AimingComponent)) { return; }
    FoundAimingComponent(AimingComponent);
}

void ATankPlayerController::SetPawn(APawn* InPawn) 
{
    Super::SetPawn(InPawn);
    if (InPawn)
    {
        auto PossessedTank = Cast<ATank>(InPawn);
        if (!ensure(PossessedTank))
        {
            return;
        }
        PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankPlayerController::OnPossesedTankDeath);
    }
}

void ATankPlayerController::OnPossesedTankDeath() 
{
    UE_LOG(LogTemp, Warning, TEXT("Death on player!"));
    StartSpectatingOnly();
}

void ATankPlayerController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);
    AimTowardsCrosshair();
}

void ATankPlayerController::AimTowardsCrosshair()
{
    auto AimingComponent = GetPawn()->FindComponentByClass<UTankAimingComponent>();
    if (!ensure(AimingComponent)) { return; }

    // Get world location of linetrace through crosshair
    // If it hits the landscape
        // Tell controlled tank to aim at this point
    FVector HitLocation; // Out parameter
    bool bGotHitLocation = GetSightRayHitLocation(HitLocation);
    
    if (bGotHitLocation) // Has "side-effect", is going to line trace
    {
        // UE_LOG(LogTemp, Warning, TEXT("Hit Location: %s"), *HitLocation.ToString());
        AimingComponent->AimAt(HitLocation);
    }
    
}

bool ATankPlayerController::GetSightRayHitLocation(FVector& HitLocation) const 
{
    // Find the crosshair position in pixel coordinates
    int32 ViewportSizeX, ViewportSizeY;
    GetViewportSize(ViewportSizeX, ViewportSizeY);
    auto ScreenLocation = new FVector2D(
        ViewportSizeX * CrossHairXLocation,
        ViewportSizeY * CrossHairYLocation
    );
    // UE_LOG(LogTemp, Warning, TEXT("ScreenLocation: %s"), *ScreenLocation->ToString());

    // "De-project" the screen position of the crosshair to a world direction
    FVector LookDirection;
    if (GetLookDirection(*ScreenLocation, LookDirection))
    {
        // UE_LOG(LogTemp, Warning, TEXT("LookDirection: %s"), *LookDirection.ToString());
        return GetLookVectorHitLocation(LookDirection, HitLocation);
    }   

    // Line-trace along that LookDirection, and see what we hit (up to a maximum)
    return false;
}

bool ATankPlayerController::GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const
{
    FHitResult HitResult;
    auto StartLocation = PlayerCameraManager->GetCameraLocation();
    auto EndLocation = StartLocation + (LookDirection * LineTraceRange);
    
    if (GetWorld()->LineTraceSingleByChannel(
            HitResult, StartLocation, EndLocation,
            ECollisionChannel::ECC_Camera)
        )
    {
        // Set hit location
        HitLocation = HitResult.Location;
        return true;
    }

    HitLocation = FVector(0);
    return false;
}

bool ATankPlayerController::GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const
{
    FVector WorldLocation; // To be discarded
    return DeprojectScreenPositionToWorld(
        ScreenLocation.X, 
        ScreenLocation.Y,
        WorldLocation, 
        LookDirection);    
}