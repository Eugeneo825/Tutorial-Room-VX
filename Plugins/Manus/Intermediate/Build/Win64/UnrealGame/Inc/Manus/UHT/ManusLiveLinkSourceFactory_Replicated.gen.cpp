// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusLiveLinkSourceFactory_Replicated.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusLiveLinkSourceFactory_Replicated() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusLiveLinkSourceFactory_Replicated::StaticRegisterNativesUManusLiveLinkSourceFactory_Replicated()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusLiveLinkSourceFactory_Replicated);
	UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_NoRegister()
	{
		return UManusLiveLinkSourceFactory_Replicated::StaticClass();
	}
	struct Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManusLiveLinkSourceFactory_Replicated.h" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkSourceFactory_Replicated.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusLiveLinkSourceFactory_Replicated>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::ClassParams = {
		&UManusLiveLinkSourceFactory_Replicated::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated()
	{
		if (!Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Replicated.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Replicated.OuterSingleton, Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Replicated.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusLiveLinkSourceFactory_Replicated>()
	{
		return UManusLiveLinkSourceFactory_Replicated::StaticClass();
	}
	UManusLiveLinkSourceFactory_Replicated::UManusLiveLinkSourceFactory_Replicated(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusLiveLinkSourceFactory_Replicated);
	UManusLiveLinkSourceFactory_Replicated::~UManusLiveLinkSourceFactory_Replicated() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Replicated_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Replicated_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusLiveLinkSourceFactory_Replicated, UManusLiveLinkSourceFactory_Replicated::StaticClass, TEXT("UManusLiveLinkSourceFactory_Replicated"), &Z_Registration_Info_UClass_UManusLiveLinkSourceFactory_Replicated, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusLiveLinkSourceFactory_Replicated), 1051634325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Replicated_h_3216304030(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Replicated_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkSourceFactory_Replicated_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
