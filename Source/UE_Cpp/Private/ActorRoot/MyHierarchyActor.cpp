// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorRoot/MyHierarchyActor.h"

// Sets default values
AMyHierarchyActor::AMyHierarchyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	ChildSceneComponent = CreateDefaultSubobject<USceneComponent>("ChildSceneComponent");
	Cone = CreateDefaultSubobject<UStaticMeshComponent>("Cone");
	auto boxMeshFinder = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	if(nullptr != boxMeshFinder.Object)
	{
		Cone->SetStaticMesh(boxMeshFinder.Object);
	}
	Cube = CreateDefaultSubobject<UStaticMeshComponent>("Cube");
	auto cubeMeshFinder = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	if(nullptr != cubeMeshFinder.Object)
	{
		Cube->SetStaticMesh(cubeMeshFinder.Object);
	}
	RootComponent = SceneComponent;
	ChildSceneComponent->SetupAttachment(SceneComponent);
	Cone->SetupAttachment(ChildSceneComponent);
	Cube->SetupAttachment(ChildSceneComponent);
}

// Called when the game starts or when spawned
void AMyHierarchyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyHierarchyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

