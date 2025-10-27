// Fill out your copyright notice in the Description page of Project Settings.


#include "InventorySlot.h"

#include "Net/UnrealNetwork.h"

void UInventorySlot::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInventorySlot, SlotItem);
}
