// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DroppedItem.generated.h"

class UItemObject;

UCLASS()
class MODULARITEMSYS_API ADroppedItem : public AActor
{
	GENERATED_BODY()

public:
	ADroppedItem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component)
	USkeletalMeshComponent* ItemMesh;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = Data)
	UItemObject* Item;

public:
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable, Category = Getter)
	virtual UItemObject* GetItemObject() const;
};
