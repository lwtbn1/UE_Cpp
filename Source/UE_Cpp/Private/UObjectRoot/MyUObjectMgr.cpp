// Fill out your copyright notice in the Description page of Project Settings.


#include "UObjectRoot/MyUObjectMgr.h"

#include "UObjectRoot/MyUObjectParent.h"

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
	GCTime = 5;
	CreatedMyUObjByDefault = NewObject<UMyUObjectParent>((UObject*)GetTransientPackage(), UMyUObjectParent::StaticClass());
	CreatedMyUObjByDefault->CreateObj();
}

// Called every frame
void AMyUObjectMgr::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	DestroyDelayTime -= DeltaTime;
	if(DestroyDelayTime <= 0)
	{
		if(nullptr != CreatedMyUObjByDefault)
		{
			CreatedMyUObjByDefault->ConditionalBeginDestroy();
			CreatedMyUObjByDefault = nullptr;
			UE_LOG(LogTemp, Warning, TEXT("执行 ：ConditionalBeginDestroy"))
		}
	}
	if(GCTime <= 0)
	{
		GEngine->ForceGarbageCollection();
		GCTime = 5;
		UE_LOG(LogTemp, Warning, TEXT("开始垃圾收集"))
	}
	GCTime -= DeltaTime;
}

