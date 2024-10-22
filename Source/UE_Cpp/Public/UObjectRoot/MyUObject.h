// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyUObject.generated.h"

/**
 * 
 */
//UCLASS 
//Blueprintable  可以创建出蓝图类
//BlueprintType 可以作为蓝图中的参数


//UPROPERTY
//EditAnywhere   可以在任何地方进行编辑，还有几个变体
//BlueprintReadWrite  可以在蓝图中用Get和Set方法，还有几个变体
UCLASS(Blueprintable, BlueprintType)
class UE_CPP_API UMyUObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=stats)
	int Hp;
	UPROPERTY(EditAnywhere,Category=stats)
	float Speed;
};
