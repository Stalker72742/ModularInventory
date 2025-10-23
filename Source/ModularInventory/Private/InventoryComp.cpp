// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComp.h"

#include "InventorySlot.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "ModularItemSys/Public/Core/ItemObject.h"

UInventoryComp::UInventoryComp()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

bool UInventoryComp::AddItem(UItemObject* InItem)
{
	Items.Add(InItem);
	return true;
}

bool UInventoryComp::AddItemToActiveSlot(UItemObject* InItem)
{
	for (UInventorySlot* inventorySlot : Slots)
	{
		if (inventorySlot)
		{
			if (!inventorySlot->GetItemObject())
			{
				inventorySlot->SetItemObject(InItem);
				return true;
			}
		}
	}

	return false;
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
	DOREPLIFETIME(UInventoryComp, Slots);
}

bool UInventoryComp::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch,
	FReplicationFlags* RepFlags)
{
	bool result = Super::ReplicateSubobjects(Channel, Bunch, RepFlags);

	for (UInventorySlot* inventorySlot : Slots)
	{
		result |= Channel->ReplicateSubobject(inventorySlot->GetItemObject() , *Bunch, *RepFlags);
	}
	
	return result;
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