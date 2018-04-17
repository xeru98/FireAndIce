// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformBase.h"
#include "PlatformMoving.generated.h"

/**
 * 
 */
UCLASS()
class FIREANDICE_API APlatformMoving : public APlatformBase
{
	GENERATED_BODY()
	
public:
	APlatformMoving();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Scene")
	UStaticMeshComponent* Destination;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool IsFreezable;

	bool IsMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MovementSpeed;

	bool IsMovingForward;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void BeginOverlap(AActor* OtherActor);
	
};
