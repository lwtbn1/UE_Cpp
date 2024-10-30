// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorRoot/Warrior.h"

// Sets default values
AWarrior::AWarrior()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	ConstructorHelpers::FObjectFinder<UStaticMesh> finder = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if(nullptr != finder.Object)
	{
		MeshComponent->SetStaticMesh(finder.Object);
	}
}

// Called when the game starts or when spawned
void AWarrior::BeginPlay()
{
	Super::BeginPlay();
	
	//SetLifeSpan(5);
	
}

// Called every frame
void AWarrior::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWarrior::Destroyed()
{
	Super::Destroyed();
	UE_LOG(LogTemp, Log, TEXT("AWarrior 被销毁"))
}

FString AWarrior::ToString()
{
	return FString::Printf(TEXT("实例化的Warrior %s"), *Name);
}

