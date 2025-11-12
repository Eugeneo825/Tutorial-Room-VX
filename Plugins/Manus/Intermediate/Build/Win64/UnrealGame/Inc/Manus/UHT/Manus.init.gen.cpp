// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManus_init() {}
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature();
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature();
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Manus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Manus()
	{
		if (!Z_Registration_Info_UPackage__Script_Manus.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Manus",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x25E51C5F,
				0x0E5E6BB1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Manus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Manus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Manus(Z_Construct_UPackage__Script_Manus, TEXT("/Script/Manus"), Z_Registration_Info_UPackage__Script_Manus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x25E51C5F, 0x0E5E6BB1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
