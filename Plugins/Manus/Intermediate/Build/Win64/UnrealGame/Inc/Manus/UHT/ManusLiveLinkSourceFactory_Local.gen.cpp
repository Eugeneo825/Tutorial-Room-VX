// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusLiveLinkSourceFactory_Local.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusLiveLinkSourceFactory_Local() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Local();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusLiveLinkSourceFactory_Local::StaticRegisterNativesUManusLiveLinkSourceFactory_Local()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusLiveLinkSourceFactory_Local);
	UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_NoRegister()
	{
		return UManusLiveLinkSourceFactory_Local::StaticClass();
	}
	struct Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManusLiveLinkSourceFactory_Local.h" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkSourceFactory_Local.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusLiveLinkSourceFactory_Local>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::ClassParams = {
		&UManusLiveLinkSourceFactory_Local::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Local()
	{
		if (!Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Local.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Local.OuterSingleton, Z_Construct_UClass_UManusLiveLinkSourceFactory_Local_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Local.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusLiveLinkSourceFactory_Local>()
	{
		return UManusLiveLinkSourceFactory_Local::StaticClass();
	}
	UManusLiveLinkSourceFactory_Local::UManusLiveLinkSourceFactory_Local(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusLiveLinkSourceFactory_Local);
	UManusLiveLinkSourceFactory_Local::~UManusLiveLinkSourceFactory_Local() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Local_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Local_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusLiveLinkSourceFactory_Local, UManusLiveLinkSourceFactory_Local::StaticClass, TEXT("UManusLiveLinkSourceFactory_Local"), &Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Local, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusLiveLinkSourceFactory_Local), 1586699735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Local_h_1391116477(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Local_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Local_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
