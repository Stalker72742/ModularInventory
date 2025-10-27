// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/ItemObject.h"

#include "Net/UnrealNetwork.h"

UItemObject::UItemObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UItemObject::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemObject, DataAsset);
}
