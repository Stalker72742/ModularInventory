// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ItemActionBase.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class MODULARITEMSYS_API UItemActionBase : public UObject
{
	GENERATED_BODY()
public:
	UItemActionBase(const FObjectInitializer& ObjectInitializer);

public:

	UFUNCTION(BlueprintCallable, Category="ItemAction")
	virtual void Execute(UObject* InExecuteInstigator);

	UFUNCTION(BlueprintImplementableEvent, Category="Events")
	void OnExecute(UObject* InExecuteInstigator);
};
