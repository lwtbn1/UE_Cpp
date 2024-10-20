// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Res/FResLoader.h"

// Sets default values
AFResLoader::AFResLoader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFResLoader::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFResLoader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFResLoader::CopyImage()
{
	
}

