// Fill out your copyright notice in the Description page of Project Settings.

#include "Projectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ProjMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileMovementComponent"));
	
	CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("Collision Mesh"));
	SetRootComponent(CollisionMesh);
	CollisionMesh->SetNotifyRigidBodyCollision(true);
	CollisionMesh->SetVisibility(false);

	LaunchBlast = CreateDefaultSubobject<UParticleSystemComponent>(FName("Launch Blast"));
	LaunchBlast->AttachTo(RootComponent);

	ProjMovementComponent->bAutoActivate = false;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::LaunchProjectile(float Speed)
{
	auto Time = GetWorld()->GetTimeSeconds();
	// UE_LOG(LogTemp, Warning, TEXT("%f: Projectile fired at %f speed"), Time, Speed);
	ProjMovementComponent->SetVelocityInLocalSpace(FVector::ForwardVector * Speed);
	ProjMovementComponent->Activate();
}
