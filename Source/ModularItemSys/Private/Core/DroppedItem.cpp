// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/DroppedItem.h"


ADroppedItem::ADroppedItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ItemMesh");

	ItemMesh->SetupAttachment(GetRootComponent());
}

void ADroppedItem::BeginPlay()
{
	Super::BeginPlay();
	
}

UItemObject* ADroppedItem::GetItemObject() const
{
	return Item;
}
