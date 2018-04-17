// Fill out your copyright notice in the Description page of Project Settings.

#include "GM_Menu_FireandIce.h"
#include "FireAndIce.h"


void AGM_Menu_FireandIce::BeginPlay() 
{
	Super::BeginPlay();
	ChangeMenuWidget(StartingWidgetClass);
}

void AGM_Menu_FireandIce::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr) {
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}

	if (NewWidgetClass != nullptr) {
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr) {
			CurrentWidget->AddToViewport();
		}
	}
}

