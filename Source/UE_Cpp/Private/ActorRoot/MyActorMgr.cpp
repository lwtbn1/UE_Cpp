// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorRoot/MyActorMgr.h"

// Sets default values
AMyActorMgr::AMyActorMgr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActorMgr::BeginPlay()
{
	Super::BeginPlay();
	Warriors.Init(nullptr, 10);
	UE_LOG(LogTemp, Log, TEXT("Warrior num %d"), Warriors.Num());
	warrior = GetWorld()->SpawnActor<AWarrior>();
	Warriors.Add(warrior);
	UE_LOG(LogTemp, Log, TEXT("Warrior num %d"), Warriors.Num());
	for (int ix = 0; ix < Warriors.Num(); ix++)
	{
		AWarrior* w = Warriors[ix];
		if (nullptr != w)
		{
			UE_LOG(LogTemp, Log, TEXT("Warrior toString "));
		}else
		{
			UE_LOG(LogTemp, Log, TEXT("Warrior is nullPtr   %d"), ix);
		}
		
	}

	MyHierarchyActor = GetWorld()->SpawnActor<AMyHierarchyActor>();
	//FTimerHandle timer;
	//GetWorldTimerManager().SetTimer(timer, this, &AMyActorMgr::DestoyWarriorFunction, DestroyTime);
	
}

// Called every frame
void AMyActorMgr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AMyActorMgr::DestoyWarriorFunction()
{
	if(nullptr != warrior)
	{
		warrior->Destroy();
		warrior = nullptr;
	}
}

