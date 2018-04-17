// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/GameModeBase.h"
#include "GM_Menu_FireandIce.generated.h"

/**
 * 
 */
UCLASS()
class FIREANDICE_API AGM_Menu_FireandIce : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game") TSubclassOf<UUserWidget> StartingWidgetClass;

	UPROPERTY() UUserWidget* CurrentWidget;
};
