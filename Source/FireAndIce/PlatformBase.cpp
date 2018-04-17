// Fill out your copyright notice in the Description page of Project Settings.

#include "PlatformBase.h"


// Sets default values
APlatformBase::APlatformBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Origin = CreateDefaultSubobject<USceneComponent>(TEXT("Origin"));
	RootComponent = Origin;
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->AttachTo(Origin);

	this->Tags.Add(FName("Platform"));

	OverlapCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Overlap Collision"));
	OverlapCollision->AttachTo(MeshComponent);

	BlockCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocking Collision"));
	BlockCollision->AttachTo(MeshComponent);
}

// Called when the game starts or when spawned
void APlatformBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatformBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlatformBase::BeginOverlap(AActor* OtherActor) {

	if (OtherActor->ActorHasTag(FName("Projectile"))) {
		OtherActor->Destroy();
	}
}

