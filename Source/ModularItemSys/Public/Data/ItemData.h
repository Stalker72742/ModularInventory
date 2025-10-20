// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"
#include "ItemData.generated.h"

class UItemActionBase;
class UInputAction;

USTRUCT(BlueprintType)
struct FItemParamBase
{
	GENERATED_BODY()
	FItemParamBase()
	{
		
	}
};

USTRUCT(BlueprintType)
struct FIntParam : public FItemParamBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value;

	FIntParam() : Value(0)
	{
	}
};

USTRUCT(BlueprintType)
struct FFloatParam : public FItemParamBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	FFloatParam() : Value(0)
	{
	}
};

USTRUCT(BlueprintType)
struct FStringParam : public FItemParamBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Value;

	FStringParam()
	{
		Value = "";
	}
};

/**
 * 
 */
UCLASS()
class MODULARITEMSYS_API UItemData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UItemData();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Visuals")
	FName ItemName;	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Visuals")
	TSoftObjectPtr<USkeletalMesh> ItemMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(BaseStruct=ItemParamBase), Category="ItemParams")
	TMap<FGameplayTag, FInstancedStruct> DynamicItemParams;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category="ItemParams")
	TMap<UInputAction*, UItemActionBase*> BindableActions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category="ItemParams")
	TArray<UItemActionBase*> Actions;
};
