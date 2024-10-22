// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyUObject.h"
#include "GameFramework/Actor.h"
#include "MyUObjectMgr.generated.h"

UCLASS()
class UE_CPP_API AMyUObjectMgr : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyUObjectMgr();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Stats)
	TSubclassOf<UMyUObject> MyObject1;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite , Category=Stats)
	TSubclassOf<UMyUObject> MyObject2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Stats, meta=(MetaClass="GameMode"))
	FSoftClassPath ClassReference;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
