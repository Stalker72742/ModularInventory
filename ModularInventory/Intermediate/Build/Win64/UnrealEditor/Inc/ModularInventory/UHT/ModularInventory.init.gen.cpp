// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInventory_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularInventory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularInventory()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularInventory",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3F2BAFC0,
				0x8F84F009,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularInventory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularInventory(Z_Construct_UPackage__Script_ModularInventory, TEXT("/Script/ModularInventory"), Z_Registration_Info_UPackage__Script_ModularInventory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F2BAFC0, 0x8F84F009));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
