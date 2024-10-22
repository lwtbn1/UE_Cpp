// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSMState.h"
#include "UObject/NoExportTypes.h"
#include "FSMMgr.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class UE_CPP_API UFSMMgr : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFSMState> state;
	void Init();
	void AddState(TSubclassOf<UFSMState>* state);
	void Start();
	void Update(float detalTime);
	void Reset();
	
};
