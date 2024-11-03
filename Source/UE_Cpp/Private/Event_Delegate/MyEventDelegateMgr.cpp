// Fill out your copyright notice in the Description page of Project Settings.


#include "Event_Delegate/MyEventDelegateMgr.h"

#include "Event_Delegate/MyTiggerVolume.h"

// Sets default values
AMyEventDelegateMgr::AMyEventDelegateMgr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PointLight = CreateDefaultSubobject<UPointLightComponent>("PointLight");
	RootComponent = PointLight;
	PointLight->SetVisibility(false);
	
}

// Called when the game starts or when spawned
void AMyEventDelegateMgr::BeginPlay()
{
	Super::BeginPlay();
	TriggerVolume = GetWorld()->SpawnActor<AMyTiggerVolume>();
	TriggerVolume->ActorBeginOverlapDelegate.BindUObject(this, &AMyEventDelegateMgr::EnableLight);
	TriggerVolume->ActorEndOverlapDelegate.BindUObject(this, &AMyEventDelegateMgr::DisableLight);
	TriggerVolume->ActorTriggerDelegate.BindUObject(this, &AMyEventDelegateMgr::ActorTrigger, false);
}

void AMyEventDelegateMgr::EnableLight()
{
	PointLight->SetVisibility(true);
}

void AMyEventDelegateMgr::DisableLight()
{
	PointLight->SetVisibility(false);
}

void AMyEventDelegateMgr::ActorTrigger(FString name, bool val)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, name);
}

// Called every frame
void AMyEventDelegateMgr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

