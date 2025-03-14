// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MysteryMansion/Public/BulletPickupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletPickupBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYSTERYMANSION_API UClass* Z_Construct_UClass_ABulletPickupBase();
MYSTERYMANSION_API UClass* Z_Construct_UClass_ABulletPickupBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MysteryMansion();
// End Cross Module References

// Begin Class ABulletPickupBase
void ABulletPickupBase::StaticRegisterNativesABulletPickupBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletPickupBase);
UClass* Z_Construct_UClass_ABulletPickupBase_NoRegister()
{
	return ABulletPickupBase::StaticClass();
}
struct Z_Construct_UClass_ABulletPickupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BulletPickupBase.h" },
		{ "ModuleRelativePath", "Public/BulletPickupBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletPickupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABulletPickupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MysteryMansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPickupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletPickupBase_Statics::ClassParams = {
	&ABulletPickupBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPickupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletPickupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABulletPickupBase()
{
	if (!Z_Registration_Info_UClass_ABulletPickupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletPickupBase.OuterSingleton, Z_Construct_UClass_ABulletPickupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABulletPickupBase.OuterSingleton;
}
template<> MYSTERYMANSION_API UClass* StaticClass<ABulletPickupBase>()
{
	return ABulletPickupBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletPickupBase);
ABulletPickupBase::~ABulletPickupBase() {}
// End Class ABulletPickupBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_BulletPickupBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABulletPickupBase, ABulletPickupBase::StaticClass, TEXT("ABulletPickupBase"), &Z_Registration_Info_UClass_ABulletPickupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletPickupBase), 2594586513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_BulletPickupBase_h_2331374512(TEXT("/Script/MysteryMansion"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_BulletPickupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_BulletPickupBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
