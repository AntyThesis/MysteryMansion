// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MysteryMansion/MysteryMansionGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryMansionGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYSTERYMANSION_API UClass* Z_Construct_UClass_AMysteryMansionGameMode();
MYSTERYMANSION_API UClass* Z_Construct_UClass_AMysteryMansionGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MysteryMansion();
// End Cross Module References

// Begin Class AMysteryMansionGameMode
void AMysteryMansionGameMode::StaticRegisterNativesAMysteryMansionGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMysteryMansionGameMode);
UClass* Z_Construct_UClass_AMysteryMansionGameMode_NoRegister()
{
	return AMysteryMansionGameMode::StaticClass();
}
struct Z_Construct_UClass_AMysteryMansionGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MysteryMansionGameMode.h" },
		{ "ModuleRelativePath", "MysteryMansionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMysteryMansionGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMysteryMansionGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MysteryMansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryMansionGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMysteryMansionGameMode_Statics::ClassParams = {
	&AMysteryMansionGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryMansionGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMysteryMansionGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMysteryMansionGameMode()
{
	if (!Z_Registration_Info_UClass_AMysteryMansionGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMysteryMansionGameMode.OuterSingleton, Z_Construct_UClass_AMysteryMansionGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMysteryMansionGameMode.OuterSingleton;
}
template<> MYSTERYMANSION_API UClass* StaticClass<AMysteryMansionGameMode>()
{
	return AMysteryMansionGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMysteryMansionGameMode);
AMysteryMansionGameMode::~AMysteryMansionGameMode() {}
// End Class AMysteryMansionGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_MysteryMansionGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMysteryMansionGameMode, AMysteryMansionGameMode::StaticClass, TEXT("AMysteryMansionGameMode"), &Z_Registration_Info_UClass_AMysteryMansionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMysteryMansionGameMode), 681846051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_MysteryMansionGameMode_h_1706351187(TEXT("/Script/MysteryMansion"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_MysteryMansionGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_MysteryMansionGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
