// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mammal.generated.h"

/**
 * 
 */
UCLASS()
class MYTOOLS_API UMammal : public UObject
{
	GENERATED_BODY()
public:
	int hp;
	double speed;
	UMammal();
	~UMammal();
};
