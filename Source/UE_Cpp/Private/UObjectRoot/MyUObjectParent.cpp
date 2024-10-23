// Fill out your copyright notice in the Description page of Project Settings.


#include "UObjectRoot/MyUObjectParent.h"

UMyUObjectParent::UMyUObjectParent()
{
	UE_LOG(LogTemp, Log, TEXT("创建： UMyUObjectParent "));
}

UMyUObjectParent::~UMyUObjectParent()
{
	UE_LOG(LogTemp, Log, TEXT("销毁： UMyUObjectParent "));
}



void UMyUObjectParent::CreateObj()
{
	obj = NewObject<UMyUObject>(this, UMyUObject::StaticClass());
}
