// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemStaticFunctions.generated.h"

class UItemData;
class UItemObject;
/**
 * 
 */
UCLASS()
class MODULARITEMSYS_API UItemStaticFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, DisplayName="Construct Item From Data Asset", Category="Fabric")
	static UItemObject* NewItemFromDataAsset(TSoftObjectPtr<UItemData> InDataAsset);
};
