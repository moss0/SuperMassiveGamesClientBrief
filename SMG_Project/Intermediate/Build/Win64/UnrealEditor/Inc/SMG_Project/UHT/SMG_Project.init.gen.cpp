// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMG_Project_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SMG_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SMG_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_SMG_Project.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SMG_Project",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA8EB9C7A,
				0x2B774051,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SMG_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SMG_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SMG_Project(Z_Construct_UPackage__Script_SMG_Project, TEXT("/Script/SMG_Project"), Z_Registration_Info_UPackage__Script_SMG_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA8EB9C7A, 0x2B774051));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
