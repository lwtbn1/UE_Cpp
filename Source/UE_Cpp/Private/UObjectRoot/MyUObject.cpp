// Fill out your copyright notice in the Description page of Project Settings.


#include "UObjectRoot/MyUObject.h"

UMyUObject::UMyUObject()
{
	UE_LOG(LogTemp, Log,TEXT( "创建： UMyUObject "));
}

UMyUObject::~UMyUObject()
{
	UE_LOG(LogTemp, Log,TEXT( "销毁： UMyUObject "));
}

