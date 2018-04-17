// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatformMoving.h"
#include "Runtime/Core/Public/Math/Vector.h"

APlatformMoving::APlatformMoving() {

	Destination = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Destination"));
	Destination->AttachTo(Origin);

	IsFreezable = true;
	IsMoving = true;
	MovementSpeed = 50.0f;
	IsMovingForward = true;

	this->Tags.Add(FName("Platform_Moving"));
}

// Called every frame
void APlatformMoving::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsMoving) {
		float DeltaMovement = DeltaTime * MovementSpeed;
		FVector MeshLocation = MeshComponent->GetComponentLocation();
		FVector TargetLocation;

		if (IsMovingForward) {
			TargetLocation = Destination->GetComponentLocation();
		} else {
			TargetLocation = Origin->GetComponentLocation();
		}

		FVector Path = TargetLocation - MeshLocation;

		float Distance = Path.Size();

		Path.Normalize();

		Path = Path * DeltaMovement;

		MeshComponent->SetWorldLocation(MeshLocation + Path);

		if (Distance <= DeltaMovement) {
			IsMovingForward = !IsMovingForward;
		}
	}

}

void APlatformMoving::BeginOverlap(AActor* OtherActor) {

	if (IsFreezable) {
		if (OtherActor->ActorHasTag(FName("Projectile_Fire"))) {
			IsMoving = true;
		}
		else if (OtherActor->ActorHasTag(FName("Projectile_Ice"))) {
			IsMoving = false;
		}
	}

	Super::BeginOverlap(OtherActor);
}


