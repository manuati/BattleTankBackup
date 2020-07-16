// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"
#include "TankAimingComponent.h"
#include "Tank.h" // So we can implement OnDeath
// Depends on movement component via pathfinding system

void ATankAIController::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
    auto MyTank = GetPawn();
    
    if (!(PlayerTank && MyTank)) { return; }

    // Move towards the player
    MoveToActor(PlayerTank, AcceptanceRadius); // TODO Check Radius is in centimeters
    
    auto MyAimingComponent = MyTank->FindComponentByClass<UTankAimingComponent>();
    // Aim towards the player
    MyAimingComponent->AimAt(PlayerTank->GetActorLocation());    
    // Fire if ready
    // If aim or locked
    if (MyAimingComponent->GetFiringState() == EFiringState::Lock) {
        // MyAimingComponent->Fire(); //TODO Fix fire; se le esta llendo el componente seteado en el blueprint
        // UE_LOG(LogTemp, Warning, TEXT("AI Fire!"));
    }
}

void ATankAIController::SetPawn(APawn* InPawn)
{
    Super::SetPawn(InPawn);
    if (InPawn)
    {
        auto PossessedTank = Cast<ATank>(InPawn);
        if (!ensure(PossessedTank))
        {
            return;
        }
        // TODO Suscribe our local method to the tank death event
        PossessedTank->OnDeath.AddUniqueDynamic(this, &ATankAIController::OnPossesedTankDeath);
    }
}

void ATankAIController::OnPossesedTankDeath()
{
    UE_LOG(LogTemp, Warning, TEXT("Received on AI!"));
    if(!GetPawn())
    {
        return;
    }

    GetPawn()->DetachFromControllerPendingDestroy();
}