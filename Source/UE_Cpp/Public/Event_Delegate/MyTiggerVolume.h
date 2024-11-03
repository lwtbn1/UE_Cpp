// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "MyTiggerVolume.generated.h"

DECLARE_DELEGATE(FStanddardDelegeteSignature)
DECLARE_DELEGATE_OneParam(OnActorTriggerDelegateSignature, FString);
DECLARE_MULTICAST_DELEGATE(MyMulticastDelegate);
UCLASS()
class UE_CPP_API AMyTiggerVolume : public AActor
{
	GENERATED_BODY()
	
public:
	FStanddardDelegeteSignature ActorBeginOverlapDelegate;
	FStanddardDelegeteSignature ActorEndOverlapDelegate;
	OnActorTriggerDelegateSignature ActorTriggerDelegate;
	MyMulticastDelegate ActorTriggerProcessDelegate;
	// Sets default values for this actor's properties
	AMyTiggerVolume();
	UPROPERTY()
	UBoxComponent* TriggerArea;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual  void NotifyActorBeginOverlap(AActor* OtherActor) override;

	virtual  void NotifyActorEndOverlap(AActor* OtherActor) override;

};
