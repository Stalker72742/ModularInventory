// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/ItemActionBase.h"

UItemActionBase::UItemActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UItemActionBase::Execute(UObject* InExecuteInstigator)
{
	OnExecute(InExecuteInstigator);	
}
