// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PlatformBase.generated.h"

UCLASS()
class FIREANDICE_API APlatformBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlatformBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mesh") 
	class UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Scene")
	class USceneComponent* Origin;

	UPROPERTY(VisibleDefaultsOnly, Category = "Collision")
	class UBoxComponent* OverlapCollision;

	UPROPERTY(VisibleDefaultsOnly, Category = "Collision")
	UBoxComponent* BlockCollision;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BeginOverlap(AActor* OtherActor);
	
	
};
