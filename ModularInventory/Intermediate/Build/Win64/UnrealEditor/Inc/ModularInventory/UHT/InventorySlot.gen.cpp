// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySlot.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventorySlot() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventorySlot();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventorySlot ***********************************************************
void UInventorySlot::StaticRegisterNativesUInventorySlot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventorySlot;
UClass* UInventorySlot::GetPrivateStaticClass()
{
	using TClass = UInventorySlot;
	if (!Z_Registration_Info_UClass_UInventorySlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventorySlot"),
			Z_Registration_Info_UClass_UInventorySlot.InnerSingleton,
			StaticRegisterNativesUInventorySlot,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInventorySlot.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventorySlot_NoRegister()
{
	return UInventorySlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventorySlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "InventorySlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotTag_MetaData[] = {
		{ "Category", "InventorySlot" },
		{ "ModuleRelativePath", "Public/InventorySlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotTag = { "SlotTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlot, SlotTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotTag_MetaData), NewProp_SlotTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlot_Statics::NewProp_SlotTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlot_Statics::ClassParams = {
	&UInventorySlot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventorySlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlot()
{
	if (!Z_Registration_Info_UClass_UInventorySlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlot.OuterSingleton, Z_Construct_UClass_UInventorySlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlot.OuterSingleton;
}
UInventorySlot::UInventorySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlot);
UInventorySlot::~UInventorySlot() {}
// ********** End Class UInventorySlot *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h__Script_ModularInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlot, UInventorySlot::StaticClass, TEXT("UInventorySlot"), &Z_Registration_Info_UClass_UInventorySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlot), 1062245334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h__Script_ModularInventory_663966947(TEXT("/Script/ModularInventory"),
	Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h__Script_ModularInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventorySlot_h__Script_ModularInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
