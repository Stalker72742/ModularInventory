// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventorySlot.h"
#include "Components/ActorComponent.h"
#include "InventoryComp.generated.h"

class UItemObject;
class UInventorySlot;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectedActor, AActor*, InActor);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MODULARINVENTORY_API UInventoryComp : public UActorComponent
{
	GENERATED_BODY()

public:
	UInventoryComp();

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

	UPROPERTY()
	TArray<UItemObject*> Items;

	UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadOnly)
	TArray<TObjectPtr<UInventorySlot>> Slots;
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

	UFUNCTION()
	virtual void UnbindFromInputComp();
	
	UFUNCTION()
	virtual void BindCurrentItemToInput();
	
protected:
	// functions: RPC

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SelectNewItem(int32 InItemIndex);

public:
	// override from Unreal Framework
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
public:
	// override from Interfaces
public:
	// public functions
	UFUNCTION(BlueprintCallable)
	bool AddItem(UItemObject* InItem);

	UFUNCTION(BlueprintCallable, Category="Setters")
	bool AddItemToActiveSlot(UItemObject* InItem);

	UFUNCTION(Server, Reliable, BlueprintCallable)
	void SelectItem(int32 InItemIndex);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	const TArray<UItemObject*>& GetItems() const { return Items;}

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Getter")
	FORCEINLINE UItemObject* GetCurrentItem() const;
		
public:
	// const getters
public:
	// event dispatchers

	UPROPERTY(BlueprintAssignable)
	FOnSelectedActor OnSelectedActor;
};
