// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSMState.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UE_CPP_API UFSMState : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category=Stats)
	int id;
};
