// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MysteryMansion/Public/EnemyCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacterBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
MYSTERYMANSION_API UClass* Z_Construct_UClass_AEnemyCharacterBase();
MYSTERYMANSION_API UClass* Z_Construct_UClass_AEnemyCharacterBase_NoRegister();
MYSTERYMANSION_API UClass* Z_Construct_UClass_UHealth_COMP_NoRegister();
UPackage* Z_Construct_UPackage__Script_MysteryMansion();
// End Cross Module References

// Begin Class AEnemyCharacterBase
void AEnemyCharacterBase::StaticRegisterNativesAEnemyCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacterBase);
UClass* Z_Construct_UClass_AEnemyCharacterBase_NoRegister()
{
	return AEnemyCharacterBase::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyCharacterBase.h" },
		{ "ModuleRelativePath", "Public/EnemyCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "EnemyCharacterBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EnemyCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacterBase_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacterBase, HealthComponent), Z_Construct_UClass_UHealth_COMP_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacterBase_Statics::NewProp_HealthComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MysteryMansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacterBase_Statics::ClassParams = {
	&AEnemyCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacterBase()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacterBase.OuterSingleton, Z_Construct_UClass_AEnemyCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacterBase.OuterSingleton;
}
template<> MYSTERYMANSION_API UClass* StaticClass<AEnemyCharacterBase>()
{
	return AEnemyCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacterBase);
AEnemyCharacterBase::~AEnemyCharacterBase() {}
// End Class AEnemyCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_EnemyCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacterBase, AEnemyCharacterBase::StaticClass, TEXT("AEnemyCharacterBase"), &Z_Registration_Info_UClass_AEnemyCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacterBase), 845356489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_EnemyCharacterBase_h_1122803358(TEXT("/Script/MysteryMansion"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_EnemyCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_EnemyCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
