// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MyGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_CPP_API AMyGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
private:
	UPROPERTY()
	int32 CurScore;
public:
	AMyGameStateBase();
	UFUNCTION()
	int GetScore();

	void SetScore(int32 Score);
};
