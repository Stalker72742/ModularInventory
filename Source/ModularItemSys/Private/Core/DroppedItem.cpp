// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/DroppedItem.h"

#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Core/ItemObject.h"
#include "Data/ItemData.h"


ADroppedItem::ADroppedItem()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");

	SetRootComponent(Root);
	
	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ItemMesh");
	ItemMesh->SetupAttachment(GetRootComponent());

#if WITH_EDITOR

	Billboard = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	Billboard->SetupAttachment(GetRootComponent());

#endif
}

void ADroppedItem::LoadMeshSync()
{
	if (Item && Item->GetDataAsset())
	{
		ItemMesh->SetSkeletalMeshAsset(Item->GetDataAsset()->ItemMesh.LoadSynchronous());
	}
}

void ADroppedItem::BeginPlay()
{
	Super::BeginPlay();

	LoadMeshSync();
}

UItemObject* ADroppedItem::GetItemObject() const
{
	return Item;
}
