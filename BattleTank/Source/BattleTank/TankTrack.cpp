// Fill out your copyright notice in the Description page of Project Settings.


#include "TankTrack.h"
#include "SprungWheel.h"
#include "SpawnPoint.h"

void UTankTrack::SetThrottle(float Throttle)
{
    float CurrentThrottle = FMath::Clamp<float>(Throttle, -1, 1);
    DriveTrack(Throttle);
}

void UTankTrack::DriveTrack(float CurrentThrottle)
{
    auto ForceApplied = CurrentThrottle * TrackMaxDrivingForce;
    auto Wheels = GetWheels();
    auto ForcePerWheel = ForceApplied / Wheels.Num();
    for (ASprungWheel* Wheel : Wheels) 
    {
        Wheel->AddDrivingForce(ForcePerWheel);
    }
}

void UTankTrack::ApplySidewaysForce() {
    auto DeltaTime = GetWorld()->GetDeltaSeconds();
    auto SlippageSpeed = FVector::DotProduct(GetRightVector(), GetComponentVelocity());

    auto CorrectionAcceleration = -SlippageSpeed / DeltaTime * GetRightVector();

    auto TankRoot = Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent());
    auto CorrectionForce = (TankRoot->GetMass()*CorrectionAcceleration) / 2;
    TankRoot->AddForce(CorrectionForce);
}

/*
void UTankTrack::BeginPlay() {
    Super::BeginPlay();
    OnComponentHit.AddDynamic(this, &UTankTrack::OnHit);
}
*/

/*
void UTankTrack::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
    // UE_LOG(LogTemp, Warning, TEXT("Track got On Hit"));
    DriveTrack();
    ApplySidewaysForce();
    CurrentThrottle = 0;
}
*/

TArray<ASprungWheel*> UTankTrack::GetWheels() const
{
    TArray<ASprungWheel*> ResultArray;
    TArray<USceneComponent*> Children;
    GetChildrenComponents(true, Children);
    for (USceneComponent* Child : Children) 
    {
        auto SpawnPointChild = Cast<USpawnPoint>(Child);
        if (!SpawnPointChild) continue;

        AActor* SpawnedChild = SpawnPointChild->GetSpawnedActor();
        auto SprungWheel = Cast<ASprungWheel>(SpawnedChild);
        if (!SprungWheel) continue;

        ResultArray.Add(SprungWheel);
    }

    return ResultArray;
}