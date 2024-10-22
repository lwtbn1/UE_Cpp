// Fill out your copyright notice in the Description page of Project Settings.


#include "UObjectRoot/MyUObjectMgr.h"

// Sets default values
AMyUObjectMgr::AMyUObjectMgr()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyUObjectMgr::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyUObjectMgr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

