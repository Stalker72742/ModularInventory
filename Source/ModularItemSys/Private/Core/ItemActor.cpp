// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/ItemActor.h"

#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Core/ItemObject.h"
#include "Data/ItemData.h"


AItemActor::AItemActor()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>("Root");

	SetRootComponent(Root);
	
	ItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>("ItemMesh");
	ItemMesh->SetupAttachment(GetRootComponent());

	ItemMesh->SetRelativeRotation(FRotator(0, -90, 0));

#if WITH_EDITOR

	Billboard = CreateDefaultSubobject<UBillboardComponent>("Billboard");
	Billboard->SetupAttachment(GetRootComponent());

#endif
}

void AItemActor::LoadMeshSync()
{
	if (Item && Item->GetDataAsset())
	{
		ItemMesh->SetSkeletalMeshAsset(Item->GetDataAsset()->ItemMesh.LoadSynchronous());
	}
}

void AItemActor::BeginPlay()
{
	Super::BeginPlay();

	LoadMeshSync();
}

UItemObject* AItemActor::GetItemObject() const
{
	return Item;
}
