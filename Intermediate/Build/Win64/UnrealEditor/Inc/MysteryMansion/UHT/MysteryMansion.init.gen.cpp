// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryMansion_init() {}
	MYSTERYMANSION_API UFunction* Z_Construct_UDelegateFunction_MysteryMansion_OnDeath__DelegateSignature();
	MYSTERYMANSION_API UFunction* Z_Construct_UDelegateFunction_MysteryMansion_OnHealthChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MysteryMansion;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MysteryMansion()
	{
		if (!Z_Registration_Info_UPackage__Script_MysteryMansion.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MysteryMansion_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MysteryMansion_OnHealthChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MysteryMansion",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE4CA5A34,
				0x30499DFE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MysteryMansion.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MysteryMansion.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MysteryMansion(Z_Construct_UPackage__Script_MysteryMansion, TEXT("/Script/MysteryMansion"), Z_Registration_Info_UPackage__Script_MysteryMansion, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4CA5A34, 0x30499DFE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
