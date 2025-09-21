// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComp.h"

#include "InventorySlot.h"

UInventoryComp::UInventoryComp()
{
	PrimaryComponentTick.bCanEverTick = true;
	UInventorySlot* defaultSlot = NewObject<UInventorySlot>();
	defaultSlot->SlotTag = FGameplayTag::RequestGameplayTag(FName("Inventory.SlotTypes.WeaponSlot"));
	Slots.Add(defaultSlot);
}

bool UInventoryComp::AddItem(UObject* Item)
{
	Items.Add(Item);
	return true;
}



void UInventoryComp::SelectItem_Implementation()
{
	
}
