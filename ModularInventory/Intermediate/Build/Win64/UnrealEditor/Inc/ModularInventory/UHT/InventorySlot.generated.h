// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventorySlot.h"

#ifdef MODULARINVENTORY_InventorySlot_generated_h
#error "InventorySlot.generated.h already included, missing '#pragma once' in InventorySlot.h"
#endif
#define MODULARINVENTORY_InventorySlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInventorySlot ***********************************************************
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();

#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlot(); \
	friend struct Z_Construct_UClass_UInventorySlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventorySlot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularInventory"), Z_Construct_UClass_UInventorySlot_NoRegister) \
	DECLARE_SERIALIZER(UInventorySlot)


#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventorySlot(UInventorySlot&&) = delete; \
	UInventorySlot(const UInventorySlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlot) \
	NO_API virtual ~UInventorySlot();


#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_13_PROLOG
#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_16_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventorySlot;

// ********** End Class UInventorySlot *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
