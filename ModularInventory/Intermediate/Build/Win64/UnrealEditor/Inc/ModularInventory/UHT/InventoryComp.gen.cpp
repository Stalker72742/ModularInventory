// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryComp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryComp() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComp();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventoryComp_NoRegister();
MODULARINVENTORY_API UClass* Z_Construct_UClass_UInventorySlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularInventory();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryComp Function AddItem ******************************************
struct Z_Construct_UFunction_UInventoryComp_AddItem_Statics
{
	struct InventoryComp_eventAddItem_Parms
	{
		UObject* Item;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComp_eventAddItem_Parms, Item), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComp_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComp_eventAddItem_Parms), &Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComp_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComp_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComp_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComp, nullptr, "AddItem", Z_Construct_UFunction_UInventoryComp_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComp_AddItem_Statics::InventoryComp_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComp_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComp_AddItem_Statics::InventoryComp_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComp_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComp_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComp::execAddItem)
{
	P_GET_OBJECT(UObject,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Item);
	P_NATIVE_END;
}
// ********** End Class UInventoryComp Function AddItem ********************************************

// ********** Begin Class UInventoryComp Function GetItems *****************************************
struct Z_Construct_UFunction_UInventoryComp_GetItems_Statics
{
	struct InventoryComp_eventGetItems_Parms
	{
		TArray<UObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComp_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryComp_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComp_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComp_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComp_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComp_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_GetItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComp_GetItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComp, nullptr, "GetItems", Z_Construct_UFunction_UInventoryComp_GetItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_GetItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComp_GetItems_Statics::InventoryComp_eventGetItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComp_GetItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComp_GetItems_Statics::InventoryComp_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComp_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComp_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComp::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// ********** End Class UInventoryComp Function GetItems *******************************************

// ********** Begin Class UInventoryComp Function SelectItem ***************************************
static FName NAME_UInventoryComp_SelectItem = FName(TEXT("SelectItem"));
void UInventoryComp::SelectItem()
{
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComp_SelectItem);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UInventoryComp_SelectItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComp_SelectItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComp, nullptr, "SelectItem", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComp_SelectItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComp_SelectItem_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComp_SelectItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComp_SelectItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComp::execSelectItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectItem_Implementation();
	P_NATIVE_END;
}
// ********** End Class UInventoryComp Function SelectItem *****************************************

// ********** Begin Class UInventoryComp ***********************************************************
void UInventoryComp::StaticRegisterNativesUInventoryComp()
{
	UClass* Class = UInventoryComp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UInventoryComp::execAddItem },
		{ "GetItems", &UInventoryComp::execGetItems },
		{ "SelectItem", &UInventoryComp::execSelectItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComp;
UClass* UInventoryComp::GetPrivateStaticClass()
{
	using TClass = UInventoryComp;
	if (!Z_Registration_Info_UClass_UInventoryComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryComp"),
			Z_Registration_Info_UClass_UInventoryComp.InnerSingleton,
			StaticRegisterNativesUInventoryComp,
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
	return Z_Registration_Info_UClass_UInventoryComp.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComp_NoRegister()
{
	return UInventoryComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InventoryComp.h" },
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_Inner_MetaData[] = {
		{ "Category", "InventoryComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "Category", "InventoryComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/InventoryComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentItemIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComp_AddItem, "AddItem" }, // 912811519
		{ &Z_Construct_UFunction_UInventoryComp_GetItems, "GetItems" }, // 55163730
		{ &Z_Construct_UFunction_UInventoryComp_SelectItem, "SelectItem" }, // 1085107678
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComp_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComp_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComp, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComp_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInventorySlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_Inner_MetaData), NewProp_Slots_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComp_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x012408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComp, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInventoryComp_Statics::NewProp_CurrentItemIndex = { "CurrentItemIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComp, CurrentItemIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentItemIndex_MetaData), NewProp_CurrentItemIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComp_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComp_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComp_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComp_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComp_Statics::NewProp_CurrentItemIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularInventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComp_Statics::ClassParams = {
	&UInventoryComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComp()
{
	if (!Z_Registration_Info_UClass_UInventoryComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComp.OuterSingleton, Z_Construct_UClass_UInventoryComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComp);
UInventoryComp::~UInventoryComp() {}
// ********** End Class UInventoryComp *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h__Script_ModularInventory_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComp, UInventoryComp::StaticClass, TEXT("UInventoryComp"), &Z_Registration_Info_UClass_UInventoryComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComp), 2277873888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h__Script_ModularInventory_1067433090(TEXT("/Script/ModularInventory"),
	Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h__Script_ModularInventory_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Shooter_Plugins_ModularInventory_ModularInventory_Source_ModularInventory_Public_InventoryComp_h__Script_ModularInventory_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
