// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusLiveLinkRemapAsset.h"
#include "AnimNode_ManusLiveLinkPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusLiveLinkRemapAsset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkRemapAsset();
	MANUS_API UClass* Z_Construct_UClass_UManusLiveLinkRemapAsset_NoRegister();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusLiveLinkRemapAsset::StaticRegisterNativesUManusLiveLinkRemapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusLiveLinkRemapAsset);
	UClass* Z_Construct_UClass_UManusLiveLinkRemapAsset_NoRegister()
	{
		return UManusLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAnimate_MetaData[];
#endif
		static void NewProp_bShouldAnimate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAnimate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusLiveLinkNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManusLiveLinkNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshActorSpaceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshActorSpaceTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Manus LiveLink remapping asset\n" },
		{ "IncludePath", "ManusLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkRemapAsset.h" },
		{ "ToolTip", "@brief Manus LiveLink remapping asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate_MetaData[] = {
		{ "Comment", "/// @brief Whether we should animate \n" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkRemapAsset.h" },
		{ "ToolTip", "@brief Whether we should animate" },
	};
#endif
	void Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate_SetBit(void* Obj)
	{
		((UManusLiveLinkRemapAsset*)Obj)->bShouldAnimate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate = { "bShouldAnimate", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusLiveLinkRemapAsset), &Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_ManusLiveLinkNode_MetaData[] = {
		{ "Comment", "/// @brief Manus Live Link node \n" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkRemapAsset.h" },
		{ "ToolTip", "@brief Manus Live Link node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_ManusLiveLinkNode = { "ManusLiveLinkNode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusLiveLinkRemapAsset, ManusLiveLinkNode), Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose, METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_ManusLiveLinkNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_ManusLiveLinkNode_MetaData)) }; // 76094489
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshScale_MetaData[] = {
		{ "Comment", "/// @brief Current scale of the Skeletal Mesh \n" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkRemapAsset.h" },
		{ "ToolTip", "@brief Current scale of the Skeletal Mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshScale = { "SkeletalMeshScale", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusLiveLinkRemapAsset, SkeletalMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshActorSpaceTransform_MetaData[] = {
		{ "Comment", "/// @brief Skeletal Mesh local transform in Actor space \n" },
		{ "ModuleRelativePath", "Public/ManusLiveLinkRemapAsset.h" },
		{ "ToolTip", "@brief Skeletal Mesh local transform in Actor space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshActorSpaceTransform = { "SkeletalMeshActorSpaceTransform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusLiveLinkRemapAsset, SkeletalMeshActorSpaceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshActorSpaceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshActorSpaceTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_bShouldAnimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_ManusLiveLinkNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::NewProp_SkeletalMeshActorSpaceTransform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusLiveLinkRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::ClassParams = {
		&UManusLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusLiveLinkRemapAsset()
	{
		if (!Z_Registration_Info_UClass_UManusLiveLinkRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusLiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_UManusLiveLinkRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusLiveLinkRemapAsset.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusLiveLinkRemapAsset>()
	{
		return UManusLiveLinkRemapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusLiveLinkRemapAsset);
	UManusLiveLinkRemapAsset::~UManusLiveLinkRemapAsset() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkRemapAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusLiveLinkRemapAsset, UManusLiveLinkRemapAsset::StaticClass, TEXT("UManusLiveLinkRemapAsset"), &Z_Registration_Info_UClass_UManusLiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusLiveLinkRemapAsset), 3304048287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkRemapAsset_h_1728367369(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusLiveLinkRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
