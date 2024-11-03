// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyTiggerVolume.h"
#include "Components/PointLightComponent.h"
#include "GameFramework/Actor.h"
#include "MyEventDelegateMgr.generated.h"


UCLASS()
class UE_CPP_API AMyEventDelegateMgr : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "自定义")
	AMyTiggerVolume* TriggerVolume;
	UPROPERTY()
	UPointLightComponent* PointLight;
	
public:	
	// Sets default values for this actor's properties
	AMyEventDelegateMgr();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void EnableLight();
	UFUNCTION(BlueprintCallable)
	void DisableLight();
	UFUNCTION(BlueprintCallable)
	void ActorTrigger(FString name, bool val);

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
