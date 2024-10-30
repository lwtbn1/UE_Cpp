// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/MyGameStateBase.h"


AMyGameStateBase::AMyGameStateBase()
{
	this->CurScore = 0;
	
}

int AMyGameStateBase::GetScore()
{
	return CurScore;
}

void AMyGameStateBase::SetScore(int32 score)
{
	this->CurScore = score;
}
