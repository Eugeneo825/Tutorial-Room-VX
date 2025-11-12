// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_ManusLiveLinkPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ManusLiveLinkPose() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose();
	MANUS_API UClass* Z_Construct_UClass_UManusSkeleton_NoRegister();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ManusLiveLinkPose>() == std::is_polymorphic<FAnimNode_LiveLinkPose>(), "USTRUCT FAnimNode_ManusLiveLinkPose cannot be polymorphic unless super FAnimNode_LiveLinkPose is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose;
class UScriptStruct* FAnimNode_ManusLiveLinkPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("AnimNode_ManusLiveLinkPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FAnimNode_ManusLiveLinkPose>()
{
	return FAnimNode_ManusLiveLinkPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManusSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingDeviceDeltaTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackingDeviceDeltaTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief\n" },
		{ "ModuleRelativePath", "Public/AnimNode_ManusLiveLinkPose.h" },
		{ "ToolTip", "@brief" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ManusLiveLinkPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_ManusSkeleton_MetaData[] = {
		{ "Category", "ManusLiveLink" },
		{ "Comment", "/// @brief The %Manus skeleton to use. When available, the %Manus skeleton from the %Manus component will be used instead. \n" },
		{ "ModuleRelativePath", "Public/AnimNode_ManusLiveLinkPose.h" },
		{ "ToolTip", "@brief The %Manus skeleton to use. When available, the %Manus skeleton from the %Manus component will be used instead." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_ManusSkeleton = { "ManusSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ManusLiveLinkPose, ManusSkeleton), Z_Construct_UClass_UManusSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_ManusSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_ManusSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_TrackingDeviceDeltaTransform_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Manus.EManusHandType" },
		{ "Category", "ManusLiveLink" },
		{ "Comment", "/// @brief Tracking device delta transform. \n" },
		{ "ModuleRelativePath", "Public/AnimNode_ManusLiveLinkPose.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "@brief Tracking device delta transform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_TrackingDeviceDeltaTransform = { "TrackingDeviceDeltaTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(TrackingDeviceDeltaTransform, FAnimNode_ManusLiveLinkPose), nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ManusLiveLinkPose, TrackingDeviceDeltaTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_TrackingDeviceDeltaTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_TrackingDeviceDeltaTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_ManusSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewProp_TrackingDeviceDeltaTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		Z_Construct_UScriptStruct_FAnimNode_LiveLinkPose,
		&NewStructOps,
		"AnimNode_ManusLiveLinkPose",
		sizeof(FAnimNode_ManusLiveLinkPose),
		alignof(FAnimNode_ManusLiveLinkPose),
		Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_AnimNode_ManusLiveLinkPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_AnimNode_ManusLiveLinkPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ManusLiveLinkPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ManusLiveLinkPose_Statics::NewStructOps, TEXT("AnimNode_ManusLiveLinkPose"), &Z_Registration_Info_UScriptStruct_AnimNode_ManusLiveLinkPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ManusLiveLinkPose), 76094489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_AnimNode_ManusLiveLinkPose_h_1767564485(TEXT("/Script/Manus"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_AnimNode_ManusLiveLinkPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_AnimNode_ManusLiveLinkPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
