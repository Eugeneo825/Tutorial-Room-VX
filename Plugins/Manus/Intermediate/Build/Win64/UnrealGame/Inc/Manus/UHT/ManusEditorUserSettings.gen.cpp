// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusEditorUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusEditorUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MANUS_API UClass* Z_Construct_UClass_UManusEditorUserSettings();
	MANUS_API UClass* Z_Construct_UClass_UManusEditorUserSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusEditorUserSettings::StaticRegisterNativesUManusEditorUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusEditorUserSettings);
	UClass* Z_Construct_UClass_UManusEditorUserSettings_NoRegister()
	{
		return UManusEditorUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UManusEditorUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsManusActiveByDefault_MetaData[];
#endif
		static void NewProp_bIsManusActiveByDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsManusActiveByDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateInEditor_MetaData[];
#endif
		static void NewProp_bAnimateInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusEditorUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusEditorUserSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @brief Editor user settings for Manus plugin.\n" },
		{ "IncludePath", "ManusEditorUserSettings.h" },
		{ "ModuleRelativePath", "Public/ManusEditorUserSettings.h" },
		{ "ToolTip", "@brief Editor user settings for Manus plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Whether Manus tracking should be active by default. \n" },
		{ "ModuleRelativePath", "Public/ManusEditorUserSettings.h" },
		{ "ToolTip", "@brief Whether Manus tracking should be active by default." },
	};
#endif
	void Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault_SetBit(void* Obj)
	{
		((UManusEditorUserSettings*)Obj)->bIsManusActiveByDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault = { "bIsManusActiveByDefault", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusEditorUserSettings), &Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Whether Manus should animate the skeletons in the Editor views. \n" },
		{ "ModuleRelativePath", "Public/ManusEditorUserSettings.h" },
		{ "ToolTip", "@brief Whether Manus should animate the skeletons in the Editor views." },
	};
#endif
	void Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor_SetBit(void* Obj)
	{
		((UManusEditorUserSettings*)Obj)->bAnimateInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor = { "bAnimateInEditor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusEditorUserSettings), &Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManusEditorUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bIsManusActiveByDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusEditorUserSettings_Statics::NewProp_bAnimateInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusEditorUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusEditorUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusEditorUserSettings_Statics::ClassParams = {
		&UManusEditorUserSettings::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManusEditorUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManusEditorUserSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UManusEditorUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusEditorUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusEditorUserSettings()
	{
		if (!Z_Registration_Info_UClass_UManusEditorUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusEditorUserSettings.OuterSingleton, Z_Construct_UClass_UManusEditorUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusEditorUserSettings.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusEditorUserSettings>()
	{
		return UManusEditorUserSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusEditorUserSettings);
	UManusEditorUserSettings::~UManusEditorUserSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusEditorUserSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusEditorUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusEditorUserSettings, UManusEditorUserSettings::StaticClass, TEXT("UManusEditorUserSettings"), &Z_Registration_Info_UClass_UManusEditorUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusEditorUserSettings), 380918055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusEditorUserSettings_h_2139490999(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusEditorUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusEditorUserSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
