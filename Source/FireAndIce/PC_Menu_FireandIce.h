// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_Menu_FireandIce.generated.h"

/**
 * 
 */
UCLASS()
class FIREANDICE_API APC_Menu_FireandIce : public APlayerController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;
};
