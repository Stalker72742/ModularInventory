// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComp.generated.h"


class UItemObject;
class UInventorySlot;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MODULARINVENTORY_API UInventoryComp : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComp();

protected:

	UPROPERTY()
	TArray<UObject*> Items;

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TArray<TObjectPtr<UInventorySlot>> Slots;

protected:
	// EditDefaultsOnly (constant) fields
protected:
	// Runtime fields
	UPROPERTY()
	AActor* CurrentItemActor;
protected:
	// Replicated fields

	UPROPERTY(ReplicatedUsing=OnRep_CurrentActorItem)
	int32 CurrentItemIndex {-1};
protected:
	// Server only fields

protected:
	// functions: handlers (like timer handlers)
protected:
	// functions: OnRep_ (ReplicatedUsing=)
	UFUNCTION()
	void OnRep_CurrentActorItem();
protected:
	// functions: Service functions
protected:
	// functions: RPC

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SelectNewItem(int32 InItemIndex);

public:
	// override from Unreal Framework
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
public:
	// override from Parent
public:
	// override from Interfaces
public:
	// public functions

	UFUNCTION(BlueprintCallable)
	bool AddItem(UObject* Item);

	UFUNCTION(BlueprintCallable, Category="Setters")
	bool AddItemToActiveSlot(UItemObject* InItem);

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void SelectItem(int32 InItemIndex);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<UObject*> GetItems() const { return Items;}
public:
	// const getters
public:
	// event dispatchers
};
