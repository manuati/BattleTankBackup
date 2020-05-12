// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
    // auto Name = GetName();
    // UE_LOG(LogTemp, Warning, TEXT("%s throttle: %f"), Name, Throttle);

    // TODO Clamp actual throttle value so player can't over-drive
    auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
    auto ForceLocation = GetComponentLocation();
    auto TankRoot = Cast<UPrimitiveComponent>(GetOwner() -> GetRootComponent());
    // UE_LOG(LogTemp, Warning, TEXT("Throttle: %f, TrackMaxDrivingForce: %f"), Throttle, TrackMaxDrivingForce);
    // UE_LOG(LogTemp, Warning, TEXT("Force applied: %s"), *ForceApplied.ToString());
    TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}