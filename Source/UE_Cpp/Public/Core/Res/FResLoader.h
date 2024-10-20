// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyTools/Public/MyToolObject.h"
#include "MyTools/Public/FImageUtil.h"
#include "FResLoader.generated.h"

UCLASS()
class UE_CPP_API AFResLoader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFResLoader();
	TObjectPtr<UMyToolObject> MyToolObject;
	FImageUtil MyImageUtil;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void CopyImage();
};
