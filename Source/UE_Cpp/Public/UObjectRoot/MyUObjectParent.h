// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyUObject.h"
#include "UObject/NoExportTypes.h"
#include "MyUObjectParent.generated.h"

/**
 * 
 */
UCLASS()
class UE_CPP_API UMyUObjectParent : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Blueprintable)
	UMyUObject* obj;
	UMyUObjectParent();
	~UMyUObjectParent();
	void CreateObj();
};
