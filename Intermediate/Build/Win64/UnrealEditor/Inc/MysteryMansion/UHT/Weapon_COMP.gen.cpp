// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MysteryMansion/Public/Weapon_COMP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_COMP() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYSTERYMANSION_API UClass* Z_Construct_UClass_ABulletBase_NoRegister();
MYSTERYMANSION_API UClass* Z_Construct_UClass_UWeapon_COMP();
MYSTERYMANSION_API UClass* Z_Construct_UClass_UWeapon_COMP_NoRegister();
UPackage* Z_Construct_UPackage__Script_MysteryMansion();
// End Cross Module References

// Begin Class UWeapon_COMP Function FireWeapon
struct Z_Construct_UFunction_UWeapon_COMP_FireWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeapon_COMP_FireWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeapon_COMP, nullptr, "FireWeapon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeapon_COMP_FireWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeapon_COMP_FireWeapon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeapon_COMP_FireWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeapon_COMP_FireWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeapon_COMP::execFireWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireWeapon();
	P_NATIVE_END;
}
// End Class UWeapon_COMP Function FireWeapon

// Begin Class UWeapon_COMP
void UWeapon_COMP::StaticRegisterNativesUWeapon_COMP()
{
	UClass* Class = UWeapon_COMP::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FireWeapon", &UWeapon_COMP::execFireWeapon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeapon_COMP);
UClass* Z_Construct_UClass_UWeapon_COMP_NoRegister()
{
	return UWeapon_COMP::StaticClass();
}
struct Z_Construct_UClass_UWeapon_COMP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Weapon_COMP.h" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMelee_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletsInClip_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReserveBullets_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletBlueprint_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Weapon_COMP" },
		{ "ModuleRelativePath", "Public/Weapon_COMP.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_IsMelee_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMelee;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BulletsInClip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReserveBullets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletBlueprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeapon_COMP_FireWeapon, "FireWeapon" }, // 3310828049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeapon_COMP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_IsMelee_SetBit(void* Obj)
{
	((UWeapon_COMP*)Obj)->IsMelee = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_IsMelee = { "IsMelee", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeapon_COMP), &Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_IsMelee_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMelee_MetaData), NewProp_IsMelee_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_BulletsInClip = { "BulletsInClip", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, BulletsInClip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletsInClip_MetaData), NewProp_BulletsInClip_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_ReserveBullets = { "ReserveBullets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, ReserveBullets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReserveBullets_MetaData), NewProp_ReserveBullets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_BulletBlueprint = { "BulletBlueprint", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, BulletBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletBlueprint_MetaData), NewProp_BulletBlueprint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeapon_COMP, ReloadTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTime_MetaData), NewProp_ReloadTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeapon_COMP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_IsMelee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_BulletsInClip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_ReserveBullets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_BulletBlueprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeapon_COMP_Statics::NewProp_ReloadTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_COMP_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeapon_COMP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MysteryMansion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_COMP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeapon_COMP_Statics::ClassParams = {
	&UWeapon_COMP::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeapon_COMP_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_COMP_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeapon_COMP_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeapon_COMP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeapon_COMP()
{
	if (!Z_Registration_Info_UClass_UWeapon_COMP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeapon_COMP.OuterSingleton, Z_Construct_UClass_UWeapon_COMP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeapon_COMP.OuterSingleton;
}
template<> MYSTERYMANSION_API UClass* StaticClass<UWeapon_COMP>()
{
	return UWeapon_COMP::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeapon_COMP);
UWeapon_COMP::~UWeapon_COMP() {}
// End Class UWeapon_COMP

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_Weapon_COMP_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeapon_COMP, UWeapon_COMP::StaticClass, TEXT("UWeapon_COMP"), &Z_Registration_Info_UClass_UWeapon_COMP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeapon_COMP), 2567064345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_Weapon_COMP_h_722511307(TEXT("/Script/MysteryMansion"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_Weapon_COMP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MysteryMansion_Source_MysteryMansion_Public_Weapon_COMP_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
