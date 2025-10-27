// Fill out your copyright notice in the Description page of Project Settings.


#include "Utilities/ItemStaticFunctions.h"

#include "Core/ItemObject.h"

UItemObject* UItemStaticFunctions::NewItemFromDataAsset(TSoftObjectPtr<UItemData> InDataAsset)
{
	UItemObject* newItem = NewObject<UItemObject>();
	newItem->SetItemDataAsset(InDataAsset);

	return newItem;
}
