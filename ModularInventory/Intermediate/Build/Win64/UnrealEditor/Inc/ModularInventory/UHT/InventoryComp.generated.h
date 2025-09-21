// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComp.h"

#ifdef MODULARINVENTORY_InventoryComp_generated_h
#error "InventoryComp.generated.h already included, missing '#pragma once' in InventoryComp.h"
#endif
#define MODULARINVENTORY_InventoryComp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UInventoryComp ***********************************************************
#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SelectItem_Implementation(); \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execSelectItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_CALLBACK_WRAPPERS
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComp_NoRegister();

#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComp(); \
	friend struct Z_Construct_UClass_UInventoryComp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComp_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularInventory"), Z_Construct_UClass_UInventoryComp_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComp)


#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComp(UInventoryComp&&) = delete; \
	UInventoryComp(const UInventoryComp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComp) \
	NO_API virtual ~UInventoryComp();


#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_11_PROLOG
#define FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_CALLBACK_WRAPPERS \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComp;

// ********** End Class UInventoryComp *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
