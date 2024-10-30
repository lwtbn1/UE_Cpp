// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyHierarchyActor.h"
#include "Warrior.h"
#include "GameFramework/Actor.h"
#include "MyActorMgr.generated.h"

UCLASS()
class UE_CPP_API AMyActorMgr : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorMgr();
	UPROPERTY(VisibleAnywhere)
	TArray<AWarrior*> Warriors;
	UPROPERTY()
	AWarrior* warrior = nullptr;

	UPROPERTY(VisibleAnywhere)
	AMyHierarchyActor* MyHierarchyActor;
	float DestroyTime = 10;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void DestoyWarriorFunction();
};
