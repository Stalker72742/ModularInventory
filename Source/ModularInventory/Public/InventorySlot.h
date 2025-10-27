// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "InventorySlot.generated.h"

class UItemObject;
/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class MODULARINVENTORY_API UInventorySlot : public UObject
{
	GENERATED_BODY()
public:

	
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTag SlotTag;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite)
	UItemObject* SlotItem;

public:

	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:


	UFUNCTION()
	virtual UItemObject* GetItemObject() const { return SlotItem; }

	UFUNCTION()
	virtual void SetItemObject(UItemObject* InItem) { SlotItem = InItem; }
};
