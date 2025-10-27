// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComp.h"

#include "InventorySlot.h"
#include "Core/ItemActor.h"
#include "Data/ItemData.h"
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
	if (Slots.Num() > CurrentItemIndex && Slots[CurrentItemIndex]->GetItemObject())
	{
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		CurrentItemActor = GetWorld()->SpawnActor<AItemActor>();

		UItemData* itemData = Slots[CurrentItemIndex]->GetItemObject()->GetDataAsset();

		if(USkeletalMesh* itemMesh = itemData->ItemMesh.LoadSynchronous())
		{
			CurrentItemActor->GetComponentByClass<USkeletalMeshComponent>()->SetSkeletalMeshAsset(itemMesh);
		}

		OnSelectedActor.Broadcast(CurrentItemActor);
	}
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
		if (inventorySlot && inventorySlot->GetItemObject())
		{
			result |= Channel->ReplicateSubobject(inventorySlot, *Bunch, *RepFlags);
			result |= Channel->ReplicateSubobject(inventorySlot->GetItemObject(), *Bunch, *RepFlags);
		}
	}
	
	return result;
}

void UInventoryComp::SelectItem_Implementation(int32 InItemIndex)
{
	if (Slots.Num() > InItemIndex && Slots[InItemIndex] && Slots[InItemIndex]->GetItemObject())
	{
		CurrentItemIndex = InItemIndex;
		
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		CurrentItemActor = GetWorld()->SpawnActor<AItemActor>();

		UItemData* itemData = Slots[InItemIndex]->GetItemObject()->GetDataAsset();

		if(USkeletalMesh* itemMesh = itemData->ItemMesh.LoadSynchronous())
		{
			CurrentItemActor->GetComponentByClass<USkeletalMeshComponent>()->SetSkeletalMeshAsset(itemMesh);
		}

		OnSelectedActor.Broadcast(CurrentItemActor);
	}
}

void UInventoryComp::Multicast_SelectNewItem_Implementation(int32 InItemIndex)
{
	
}