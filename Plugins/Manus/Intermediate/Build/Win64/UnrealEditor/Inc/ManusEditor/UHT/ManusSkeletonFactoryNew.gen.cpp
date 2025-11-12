// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/ManusSkeletonFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusSkeletonFactoryNew() {}
// Cross Module References
	MANUSEDITOR_API UClass* Z_Construct_UClass_UManusSkeletonFactoryNew();
	MANUSEDITOR_API UClass* Z_Construct_UClass_UManusSkeletonFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ManusEditor();
// End Cross Module References
	void UManusSkeletonFactoryNew::StaticRegisterNativesUManusSkeletonFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusSkeletonFactoryNew);
	UClass* Z_Construct_UClass_UManusSkeletonFactoryNew_NoRegister()
	{
		return UManusSkeletonFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UManusSkeletonFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ManusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ManusSkeletonFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/ManusSkeletonFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusSkeletonFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::ClassParams = {
		&UManusSkeletonFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusSkeletonFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UManusSkeletonFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusSkeletonFactoryNew.OuterSingleton, Z_Construct_UClass_UManusSkeletonFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusSkeletonFactoryNew.OuterSingleton;
	}
	template<> MANUSEDITOR_API UClass* StaticClass<UManusSkeletonFactoryNew>()
	{
		return UManusSkeletonFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusSkeletonFactoryNew);
	UManusSkeletonFactoryNew::~UManusSkeletonFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_ManusEditor_Private_Factories_ManusSkeletonFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_ManusEditor_Private_Factories_ManusSkeletonFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusSkeletonFactoryNew, UManusSkeletonFactoryNew::StaticClass, TEXT("UManusSkeletonFactoryNew"), &Z_Registration_Info_UClass_UManusSkeletonFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusSkeletonFactoryNew), 778043386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_ManusEditor_Private_Factories_ManusSkeletonFactoryNew_h_1483876778(TEXT("/Script/ManusEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_ManusEditor_Private_Factories_ManusSkeletonFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_ManusEditor_Private_Factories_ManusSkeletonFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
