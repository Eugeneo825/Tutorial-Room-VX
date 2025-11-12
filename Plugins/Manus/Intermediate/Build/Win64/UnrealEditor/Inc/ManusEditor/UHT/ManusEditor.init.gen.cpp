// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ManusEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ManusEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_ManusEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ManusEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x57B507D0,
				0x387BD7D8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ManusEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ManusEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ManusEditor(Z_Construct_UPackage__Script_ManusEditor, TEXT("/Script/ManusEditor"), Z_Registration_Info_UPackage__Script_ManusEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x57B507D0, 0x387BD7D8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
