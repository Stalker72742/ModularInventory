// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemObject.generated.h"

struct FInputActionInstance;
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

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly, Category = "Data")
	TSoftObjectPtr<UItemData> DataAsset;

public:

	virtual bool IsSupportedForNetworking() const override { return true; }
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = Getter)
	UItemData* GetDataAsset() const { return DataAsset.LoadSynchronous(); }

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = Getter)
	void SetItemDataAsset(TSoftObjectPtr<UItemData> InItemDataAsset) { DataAsset = InItemDataAsset; }

	UFUNCTION()
	virtual void OnInput(const FInputActionInstance& Instance);
};
