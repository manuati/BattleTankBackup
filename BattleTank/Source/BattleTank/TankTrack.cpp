// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
    auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDrivingForce;
    auto ForceLocation = GetComponentLocation();
    auto TankRoot = Cast<UPrimitiveComponent>(GetOwner() -> GetRootComponent());
    
    TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

void UTankTrack::Tick(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    auto SlippageSpeed = FVector::DotProduct(GetRightVector(), GetComponentVelocity());

    auto CorrectionAcceleration = -SlippageSpeed / DeltaTime * GetRightVector();

    auto TankRoot = Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent());
    auto CorrectionForce = (TankRoot->GetMass()*CorrectionAcceleration) / 2;
    TankRoot->AddForce(CorrectionForce);
}