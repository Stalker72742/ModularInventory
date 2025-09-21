// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "InventorySlot.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class MODULARINVENTORY_API UInventorySlot : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag SlotTag;
	 
};
