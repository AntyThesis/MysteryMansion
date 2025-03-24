// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MysteryMansion/Public/PistolWeapon_COMP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePistolWeapon_COMP() {}

// Begin Cross Module References
MYSTERYMANSION_API UClass* Z_Construct_UClass_UPistolWeapon_COMP();
MYSTERYMANSION_API UClass* Z_Construct_UClass_UPistolWeapon_COMP_NoRegister();
MYSTERYMANSION_API UClass* Z_Construct_UClass_UWeapon_COMP();
UPackage* Z_Construct_UPackage__Script_MysteryMansion();
// End Cross Module References

// Begin Class UPistolWeapon_COMP
void UPistolWeapon_COMP::StaticRegisterNativesUPistolWeapon_COMP()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPistolWeapon_COMP);
UClass* Z_Construct_UClass_UPistolWeapon_COMP_NoRegister()
{
	return UPistolWeapon_COMP::StaticClass();
}
struct Z_Construct_UClass_UPistolWeapon_COMP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PistolWeapon_COMP.h" },
		{ "ModuleRelativePath", "Public/PistolWeapon_COMP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPistolWeapon_COMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPistolWeapon_COMP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWeapon_COMP,
	(UObject* (*)())Z_Construct_UPackage__Script_MysteryMansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPistolWeapon_COMP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPistolWeapon_COMP_Statics::ClassParams = {
	&UPistolWeapon_COMP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPistolWeapon_COMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UPistolWeapon_COMP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPistolWeapon_COMP()
{
	if (!Z_Registration_Info_UClass_UPistolWeapon_COMP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPistolWeapon_COMP.OuterSingleton, Z_Construct_UClass_UPistolWeapon_COMP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPistolWeapon_COMP.OuterSingleton;
}
template<> MYSTERYMANSION_API UClass* StaticClass<UPistolWeapon_COMP>()
{
	return UPistolWeapon_COMP::StaticClass();
}
UPistolWeapon_COMP::UPistolWeapon_COMP() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPistolWeapon_COMP);
UPistolWeapon_COMP::~UPistolWeapon_COMP() {}
// End Class UPistolWeapon_COMP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_PistolWeapon_COMP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPistolWeapon_COMP, UPistolWeapon_COMP::StaticClass, TEXT("UPistolWeapon_COMP"), &Z_Registration_Info_UClass_UPistolWeapon_COMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPistolWeapon_COMP), 1212796902U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_PistolWeapon_COMP_h_3082980728(TEXT("/Script/MysteryMansion"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_PistolWeapon_COMP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_PistolWeapon_COMP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
