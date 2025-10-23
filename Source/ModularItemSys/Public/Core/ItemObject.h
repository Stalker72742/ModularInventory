// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemObject.generated.h"

class UItemData;
/**
 * 
 */
UCLASS(EditInlineNew)
class MODULARITEMSYS_API UItemObject : public UObject
{
	GENERATED_BODY()
public:

	UItemObject(const FObjectInitializer& ObjectInitializer);

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
	UItemData* DataAsset;

public:

	virtual bool IsSupportedForNetworking() const override { return true; }

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Getter)
	UItemData* GetDataAsset() const { return DataAsset; }
};
