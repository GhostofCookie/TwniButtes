// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CloudDashGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TWINBUTTES_API ACloudDashGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACloudDashGameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float Delta) override;

	
	
};
