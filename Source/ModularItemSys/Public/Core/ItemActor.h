// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

class UItemObject;

UCLASS()
class MODULARITEMSYS_API AItemActor : public AActor
{
	GENERATED_BODY()

public:
	AItemActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component)
	USkeletalMeshComponent* ItemMesh;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Component)
	UBillboardComponent* Billboard;
#endif
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = Data)
	UItemObject* Item;

protected:

	UFUNCTION(BlueprintCallable, Category="Service")
	void LoadMeshSync();

public:
	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable, Category = Getter)
	virtual UItemObject* GetItemObject() const;
};
