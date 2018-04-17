// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlatformBase.h"
#include "PlatformAppearing.generated.h"

/**
 * 
 */
UCLASS()
class FIREANDICE_API APlatformAppearing : public APlatformBase
{
	GENERATED_BODY()
	
public:
	APlatformAppearing();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mesh")
	UStaticMeshComponent* MeltedMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearing")
	bool IsFrozen;

	UFUNCTION(BlueprintCallable)
	void BeginOverlap(AActor* OtherActor);
};
