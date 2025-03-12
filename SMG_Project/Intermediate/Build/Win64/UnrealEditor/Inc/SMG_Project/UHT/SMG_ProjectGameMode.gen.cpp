// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SMG_Project/SMG_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMG_ProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SMG_PROJECT_API UClass* Z_Construct_UClass_ASMG_ProjectGameMode();
SMG_PROJECT_API UClass* Z_Construct_UClass_ASMG_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SMG_Project();
// End Cross Module References

// Begin Class ASMG_ProjectGameMode
void ASMG_ProjectGameMode::StaticRegisterNativesASMG_ProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMG_ProjectGameMode);
UClass* Z_Construct_UClass_ASMG_ProjectGameMode_NoRegister()
{
	return ASMG_ProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_ASMG_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SMG_ProjectGameMode.h" },
		{ "ModuleRelativePath", "SMG_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMG_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASMG_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SMG_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMG_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMG_ProjectGameMode_Statics::ClassParams = {
	&ASMG_ProjectGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMG_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMG_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASMG_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_ASMG_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMG_ProjectGameMode.OuterSingleton, Z_Construct_UClass_ASMG_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASMG_ProjectGameMode.OuterSingleton;
}
template<> SMG_PROJECT_API UClass* StaticClass<ASMG_ProjectGameMode>()
{
	return ASMG_ProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASMG_ProjectGameMode);
ASMG_ProjectGameMode::~ASMG_ProjectGameMode() {}
// End Class ASMG_ProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_SuperMassiveGamesClientBrief_SMG_Project_Source_SMG_Project_SMG_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASMG_ProjectGameMode, ASMG_ProjectGameMode::StaticClass, TEXT("ASMG_ProjectGameMode"), &Z_Registration_Info_UClass_ASMG_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMG_ProjectGameMode), 801181221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_SuperMassiveGamesClientBrief_SMG_Project_Source_SMG_Project_SMG_ProjectGameMode_h_543845570(TEXT("/Script/SMG_Project"),
	Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_SuperMassiveGamesClientBrief_SMG_Project_Source_SMG_Project_SMG_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2317919_Documents_GitHub_SuperMassiveGamesClientBrief_SMG_Project_Source_SMG_Project_SMG_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
