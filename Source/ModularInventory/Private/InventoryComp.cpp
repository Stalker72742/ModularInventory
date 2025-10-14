// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComp.h"

#include "InventorySlot.h"
#include "Net/UnrealNetwork.h"

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

void UInventoryComp::OnRep_CurrentActorItem()
{
	/*FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	CurrentItemActor = GetWorld()->SpawnActor<AItemActor>();

	UItemDataAsset* itemData = Items[CurrentItemIndex]->ItemDataAsset;
	USkeletalMesh* itemMesh = itemData->ItemSkeletalMesh.LoadSynchronous();
		
	if(itemMesh)
	{
		CurrentItemActor->GetComponentByClass<USkeletalMeshComponent>()->SetSkeletalMeshAsset(itemMesh);
	}

	FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false);
		
	CurrentItemActor->AttachToComponent(GetOwner()->GetComponentByClass<USkeletalMeshComponent>(), AttachmentRules, "weapon_r");*/
}

void UInventoryComp::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInventoryComp, CurrentItemIndex);
}

void UInventoryComp::SelectItem_Implementation(int32 InItemIndex)
{
	/*if (Items.Num() > InItemIndex)
	{
		CurrentItemIndex = InItemIndex;
		
		/*FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		CurrentItemActor = GetWorld()->SpawnActor<AItemActor>();

		

		UItemDataAsset* itemData = Items[InItemIndex]->ItemDataAsset;#1#

		USkeletalMesh* itemMesh = itemData->ItemSkeletalMesh.LoadSynchronous();
		
		if(itemMesh)
		{
			CurrentItemActor->GetComponentByClass<USkeletalMeshComponent>()->SetSkeletalMeshAsset(itemMesh);
		}

		FAttachmentTransformRules AttachmentRules = FAttachmentTransformRules(EAttachmentRule::SnapToTarget, false);
		
		CurrentItemActor->AttachToComponent(GetOwner()->GetComponentByClass<USkeletalMeshComponent>(), AttachmentRules, "weapon_r");
	}*/
}

void UInventoryComp::Multicast_SelectNewItem_Implementation(int32 InItemIndex)
{
	
}