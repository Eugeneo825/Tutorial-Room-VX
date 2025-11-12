// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusSkeleton.h"
#include "ManusBlueprintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusSkeleton() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	MANUS_API UClass* Z_Construct_UClass_UManusSkeleton();
	MANUS_API UClass* Z_Construct_UClass_UManusSkeleton_NoRegister();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusSkeletonTargetType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusSkeletonType();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusSkeleton::StaticRegisterNativesUManusSkeleton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusSkeleton);
	UClass* Z_Construct_UClass_UManusSkeleton_NoRegister()
	{
		return UManusSkeleton::StaticClass();
	}
	struct Z_Construct_UClass_UManusSkeleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEndPointApproximations_MetaData[];
#endif
		static void NewProp_UseEndPointApproximations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEndPointApproximations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToTarget_MetaData[];
#endif
		static void NewProp_ScaleToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodesSetupMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodesSetupMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodesSetupMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodesSetupMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainsIndexMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainsIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainsIndexMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ChainsIndexMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetUserIndexData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetUserIndexData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetAnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GloveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GloveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusSkeletonId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ManusSkeletonId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusSkeleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief This class is the bridge between the %Manus Core animation data and the unreal animation\n/// it defines the nodes (bones) and chains (how bones are connected) of a skeleton\n/// and offers support functions to send them to %Manus Core and retrieve them.\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ManusSkeleton.h" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief This class is the bridge between the %Manus Core animation data and the unreal animation\nit defines the nodes (bones) and chains (how bones are connected) of a skeleton\nand offers support functions to send them to %Manus Core and retrieve them." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Manus | Skeleton" },
		{ "Comment", "/// @brief The unreal skeletal mesh to use with Manus skeleton.\n" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief The unreal skeletal mesh to use with Manus skeleton." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType_MetaData[] = {
		{ "Category", "Manus | Skeleton type" },
		{ "Comment", "/// @brief the skeleton type. this needs to be setup or else it cannot be loaded into %Manus Core\n" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the skeleton type. this needs to be setup or else it cannot be loaded into %Manus Core" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType = { "SkeletonType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, SkeletonType), Z_Construct_UEnum_Manus_EManusSkeletonType, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType_MetaData)) }; // 1191863826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations_MetaData[] = {
		{ "Category", "Manus | Full Body Tracking" },
		{ "Comment", "/// @brief the skeleton pinch correction. \n" },
		{ "DisplayName", "Use Endpoint Approximations" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the skeleton pinch correction." },
	};
#endif
	void Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations_SetBit(void* Obj)
	{
		((UManusSkeleton*)Obj)->UseEndPointApproximations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations = { "UseEndPointApproximations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusSkeleton), &Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget_MetaData[] = {
		{ "Category", "Manus | Full Body Tracking" },
		{ "Comment", "/// @brief Option to scale the skeleton to the target, turn off to keep the original sizes \n" },
		{ "DisplayName", "Scale to Target" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief Option to scale the skeleton to the target, turn off to keep the original sizes" },
	};
#endif
	void Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget_SetBit(void* Obj)
	{
		((UManusSkeleton*)Obj)->ScaleToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget = { "ScaleToTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusSkeleton), &Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "Manus | Full Body Tracking" },
		{ "Comment", "/// @brief skeleton name\n" },
		{ "DisplayName", "Target Skeleton Name" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief skeleton name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, TargetName), METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_ValueProp = { "NodesSetupMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FManusNodeSetup, METADATA_PARAMS(nullptr, 0) }; // 527983951
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_Key_KeyProp = { "NodesSetupMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_MetaData[] = {
		{ "Category", "Manus | Skeleton Nodes" },
		{ "Comment", "/// @brief all the nodes of the skeleton (bones)\n" },
		{ "DisplayName", "Nodes" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief all the nodes of the skeleton (bones)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap = { "NodesSetupMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, NodesSetupMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_MetaData)) }; // 527983951
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_ValueProp = { "ChainsIndexMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FManusChainSetup, METADATA_PARAMS(nullptr, 0) }; // 108760512
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_Key_KeyProp = { "ChainsIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_MetaData[] = {
		{ "Category", "Manus | Skeleton Chains" },
		{ "Comment", "/// @brief all the chains of the skeleton\n" },
		{ "DisplayName", "Chains" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief all the chains of the skeleton" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap = { "ChainsIndexMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, ChainsIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_MetaData)) }; // 108760512
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Manus | Skeleton target type" },
		{ "Comment", "/// @brief defines how this skeleton is targeted to data in %Manus Core.\n" },
		{ "DisplayName", "Targeted Data Type" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief defines how this skeleton is targeted to data in %Manus Core." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, TargetType), Z_Construct_UEnum_Manus_EManusSkeletonTargetType, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType_MetaData)) }; // 3368520946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserData_MetaData[] = {
		{ "Category", "Manus | Skeleton target type" },
		{ "Comment", "/// @brief the user ID that the skeleton is assigned to. only 1 of the four targets is used.\n" },
		{ "DisplayName", "User Data" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the user ID that the skeleton is assigned to. only 1 of the four targets is used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserData = { "TargetUserData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, TargetUserData), Z_Construct_UScriptStruct_FManusSkeletonTargetUserData, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserData_MetaData)) }; // 1938313232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserIndexData_MetaData[] = {
		{ "Category", "Manus | Skeleton target type" },
		{ "Comment", "/// @brief the user index that the skeleton is assigned to.\n" },
		{ "DisplayName", "User Index Data" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the user index that the skeleton is assigned to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserIndexData = { "TargetUserIndexData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, TargetUserIndexData), Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserIndexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserIndexData_MetaData)) }; // 1699638341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetAnimationData_MetaData[] = {
		{ "Category", "Manus | Skeleton target type" },
		{ "Comment", "/// @brief the animation name the skeleton is assigned to.\n" },
		{ "DisplayName", "Animation Data" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the animation name the skeleton is assigned to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetAnimationData = { "TargetAnimationData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, TargetAnimationData), Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetAnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetAnimationData_MetaData)) }; // 2477426409
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_GloveData_MetaData[] = {
		{ "Category", "Manus | Skeleton target type" },
		{ "Comment", "/// @brief the glove ID the skeleton is assigned to.\n" },
		{ "DisplayName", "Glove Data" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the glove ID the skeleton is assigned to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_GloveData = { "GloveData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, GloveData), Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData, METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_GloveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_GloveData_MetaData)) }; // 3569335460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ManusSkeletonId_MetaData[] = {
		{ "Category", "Manus | Skeleton Id" },
		{ "Comment", "/// @brief the skeleton ID as generated by %Manus Core for this skeleton.\n" },
		{ "DisplayName", "Target Skeleton id" },
		{ "ModuleRelativePath", "Public/ManusSkeleton.h" },
		{ "ToolTip", "@brief the skeleton ID as generated by %Manus Core for this skeleton." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ManusSkeletonId = { "ManusSkeletonId", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSkeleton, ManusSkeletonId), METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ManusSkeletonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ManusSkeletonId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManusSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_SkeletonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_UseEndPointApproximations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ScaleToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_NodesSetupMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ChainsIndexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetUserIndexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_TargetAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_GloveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSkeleton_Statics::NewProp_ManusSkeletonId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusSkeleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusSkeleton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusSkeleton_Statics::ClassParams = {
		&UManusSkeleton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManusSkeleton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManusSkeleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSkeleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusSkeleton()
	{
		if (!Z_Registration_Info_UClass_UManusSkeleton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusSkeleton.OuterSingleton, Z_Construct_UClass_UManusSkeleton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusSkeleton.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusSkeleton>()
	{
		return UManusSkeleton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusSkeleton);
	UManusSkeleton::~UManusSkeleton() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSkeleton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSkeleton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusSkeleton, UManusSkeleton::StaticClass, TEXT("UManusSkeleton"), &Z_Registration_Info_UClass_UManusSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusSkeleton), 1099048663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSkeleton_h_2422472179(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSkeleton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSkeleton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
