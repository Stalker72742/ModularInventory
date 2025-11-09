// Fill out your copyright notice in the Description page of Project Settings.

#include "Core/ItemObject.h"

#include "InputAction.h"
#include "Core/ItemActionBase.h"
#include "Data/ItemData.h"
#include "Net/UnrealNetwork.h"

UItemObject::UItemObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
}

void UItemObject::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	UObject::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UItemObject, DataAsset);
}

void UItemObject::OnInput(const FInputActionInstance& Instance)
{
	auto inputAction = Instance.GetSourceAction();

	auto itemAction = *GetDataAsset()->BindableActions.Find(inputAction);

	itemAction->Execute(this);
}
