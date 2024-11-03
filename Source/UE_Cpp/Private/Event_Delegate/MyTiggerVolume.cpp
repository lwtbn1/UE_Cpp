// Fill out your copyright notice in the Description page of Project Settings.


#include "Event_Delegate/MyTiggerVolume.h"

// Sets default values
AMyTiggerVolume::AMyTiggerVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TriggerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	RootComponent = TriggerArea;
}

// Called when the game starts or when spawned
void AMyTiggerVolume::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyTiggerVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyTiggerVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	ActorBeginOverlapDelegate.ExecuteIfBound();
	ActorTriggerDelegate.ExecuteIfBound(OtherActor->GetName());
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("AMyTiggerVolume::NotifyActorBeginOverlap %s"), *(OtherActor->GetName())));
}

void AMyTiggerVolume::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	ActorEndOverlapDelegate.ExecuteIfBound();
	ActorTriggerProcessDelegate.Broadcast();
	
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("AMyTiggerVolume::NotifyActorEndOverlap %s"), *(OtherActor->GetName())));
}
