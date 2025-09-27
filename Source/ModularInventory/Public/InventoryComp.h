// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComp.generated.h"

class UInventorySlot;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MODULARINVENTORY_API UInventoryComp : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComp();

	UFUNCTION(BlueprintCallable)
	bool AddItem(UObject* Item);

	UFUNCTION(Server, Reliable)
	void SelectItem();

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<UObject*> GetItems() const { return Items;}
	
protected:

	UPROPERTY()
	TArray<UObject*> Items;

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TArray<TObjectPtr<UInventorySlot>> Slots;
	
	UPROPERTY()
	int32 CurrentItemIndex = 0;
};
