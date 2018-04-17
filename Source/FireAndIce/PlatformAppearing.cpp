// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatformAppearing.h"


APlatformAppearing::APlatformAppearing() {

	MeltedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Melted Mesh"));
	MeltedMesh->AttachTo(Origin);

	IsFrozen = true;

	this->Tags.Add(FName("Platform_Appearing"));
}

void APlatformAppearing::BeginOverlap(AActor* OtherActor) {

	if (OtherActor->ActorHasTag(FName("Projectile_Fire")) && IsFrozen) {
		IsFrozen = false;

		MeltedMesh->ToggleVisibility();
		MeshComponent->ToggleVisibility();

		BlockCollision->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	}
	else if (OtherActor->ActorHasTag(FName("Projectile_Ice")) && !IsFrozen) {
		IsFrozen = true;

		MeltedMesh->ToggleVisibility();
		MeshComponent->ToggleVisibility();

		BlockCollision->SetCollisionEnabled(ECollisionEnabled::Type::QueryOnly);
	}

	Super::BeginOverlap(OtherActor);
}

