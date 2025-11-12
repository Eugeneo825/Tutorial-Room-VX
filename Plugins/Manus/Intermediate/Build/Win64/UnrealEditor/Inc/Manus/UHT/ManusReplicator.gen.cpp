// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusReplicator.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusReplicator() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MANUS_API UClass* Z_Construct_UClass_AManusReplicator();
	MANUS_API UClass* Z_Construct_UClass_AManusReplicator_NoRegister();
	MANUS_API UClass* Z_Construct_UClass_UManusSkeleton_NoRegister();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusReplicatedData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusReplicatedFrameData();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData;
class UScriptStruct* FManusReplicatedFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusReplicatedFrameData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusReplicatedFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusReplicatedFrameData>()
{
	return FManusReplicatedFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusDashboardUserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ManusDashboardUserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManusSkeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MayoTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MayoTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MayoTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusReplicatedFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusDashboardUserIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusDashboardUserIndex = { "ManusDashboardUserIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusReplicatedFrameData, ManusDashboardUserIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusDashboardUserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusDashboardUserIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusSkeleton = { "ManusSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusReplicatedFrameData, ManusSkeleton), Z_Construct_UClass_UManusSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusSkeleton_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms_Inner = { "MayoTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms = { "MayoTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusReplicatedFrameData, MayoTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusDashboardUserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_ManusSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewProp_MayoTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusReplicatedFrameData",
		sizeof(FManusReplicatedFrameData),
		alignof(FManusReplicatedFrameData),
		Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusReplicatedFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.InnerSingleton, Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusReplicatedData;
class UScriptStruct* FManusReplicatedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusReplicatedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusReplicatedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusReplicatedData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusReplicatedData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusReplicatedData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusReplicatedData>()
{
	return FManusReplicatedData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusReplicatedData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedFrameDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedFrameDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedFrameDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusReplicatedData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray_Inner = { "ReplicatedFrameDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManusReplicatedFrameData, METADATA_PARAMS(nullptr, 0) }; // 683449832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray = { "ReplicatedFrameDataArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusReplicatedData, ReplicatedFrameDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray_MetaData)) }; // 683449832
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusReplicatedData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewProp_ReplicatedFrameDataArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusReplicatedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusReplicatedData",
		sizeof(FManusReplicatedData),
		alignof(FManusReplicatedData),
		Z_Construct_UScriptStruct_FManusReplicatedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusReplicatedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusReplicatedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusReplicatedData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusReplicatedData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusReplicatedData.InnerSingleton, Z_Construct_UScriptStruct_FManusReplicatedData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusReplicatedData.InnerSingleton;
	}
	DEFINE_FUNCTION(AManusReplicator::execOnReplicatedDataReceivedFromServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReplicatedDataReceivedFromServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AManusReplicator::execSendReplicatedDataToServer)
	{
		P_GET_STRUCT(FManusReplicatedData,Z_Param_DataToReplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendReplicatedDataToServer_Validate(Z_Param_DataToReplicate))
		{
			RPC_ValidateFailed(TEXT("SendReplicatedDataToServer_Validate"));
			return;
		}
		P_THIS->SendReplicatedDataToServer_Implementation(Z_Param_DataToReplicate);
		P_NATIVE_END;
	}
	struct ManusReplicator_eventSendReplicatedDataToServer_Parms
	{
		FManusReplicatedData DataToReplicate;
	};
	static FName NAME_AManusReplicator_SendReplicatedDataToServer = FName(TEXT("SendReplicatedDataToServer"));
	void AManusReplicator::SendReplicatedDataToServer(FManusReplicatedData DataToReplicate)
	{
		ManusReplicator_eventSendReplicatedDataToServer_Parms Parms;
		Parms.DataToReplicate=DataToReplicate;
		ProcessEvent(FindFunctionChecked(NAME_AManusReplicator_SendReplicatedDataToServer),&Parms);
	}
	void AManusReplicator::StaticRegisterNativesAManusReplicator()
	{
		UClass* Class = AManusReplicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReplicatedDataReceivedFromServer", &AManusReplicator::execOnReplicatedDataReceivedFromServer },
			{ "SendReplicatedDataToServer", &AManusReplicator::execSendReplicatedDataToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//this is generated by unreal , so ignore the local not defined function warning.\n" },
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
		{ "ToolTip", "this is generated by unreal , so ignore the local not defined function warning." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManusReplicator, nullptr, "OnReplicatedDataReceivedFromServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataToReplicate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::NewProp_DataToReplicate = { "DataToReplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusReplicator_eventSendReplicatedDataToServer_Parms, DataToReplicate), Z_Construct_UScriptStruct_FManusReplicatedData, METADATA_PARAMS(nullptr, 0) }; // 1624353695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::NewProp_DataToReplicate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManusReplicator, nullptr, "SendReplicatedDataToServer", nullptr, nullptr, sizeof(ManusReplicator_eventSendReplicatedDataToServer_Parms), Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManusReplicator);
	UClass* Z_Construct_UClass_AManusReplicator_NoRegister()
	{
		return AManusReplicator::StaticClass();
	}
	struct Z_Construct_UClass_AManusReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatorId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReplicatorId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManusReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AManusReplicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManusReplicator_OnReplicatedDataReceivedFromServer, "OnReplicatedDataReceivedFromServer" }, // 291298846
		{ &Z_Construct_UFunction_AManusReplicator_SendReplicatedDataToServer, "SendReplicatedDataToServer" }, // 2991938645
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManusReplicator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @brief AManusReplicator class is used to replicate the Manus data sent through Live Link\n/// for each Manus Live Link User (one Manus Live Link User being associated with one Live Link subject).\n" },
		{ "IncludePath", "ManusReplicator.h" },
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
		{ "ToolTip", "@brief AManusReplicator class is used to replicate the Manus data sent through Live Link\nfor each Manus Live Link User (one Manus Live Link User being associated with one Live Link subject)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatorId_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatorId = { "ReplicatorId", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AManusReplicator, ReplicatorId), METADATA_PARAMS(Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatorId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ManusReplicator.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatedData = { "ReplicatedData", "OnReplicatedDataReceivedFromServer", (EPropertyFlags)0x0010000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AManusReplicator, ReplicatedData), Z_Construct_UScriptStruct_FManusReplicatedData, METADATA_PARAMS(Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatedData_MetaData)) }; // 1624353695
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManusReplicator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatorId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManusReplicator_Statics::NewProp_ReplicatedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManusReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManusReplicator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManusReplicator_Statics::ClassParams = {
		&AManusReplicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AManusReplicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AManusReplicator_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AManusReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManusReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManusReplicator()
	{
		if (!Z_Registration_Info_UClass_AManusReplicator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManusReplicator.OuterSingleton, Z_Construct_UClass_AManusReplicator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManusReplicator.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<AManusReplicator>()
	{
		return AManusReplicator::StaticClass();
	}

	void AManusReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatorId(TEXT("ReplicatorId"));
		static const FName Name_ReplicatedData(TEXT("ReplicatedData"));

		const bool bIsValid = true
			&& Name_ReplicatorId == ClassReps[(int32)ENetFields_Private::ReplicatorId].Property->GetFName()
			&& Name_ReplicatedData == ClassReps[(int32)ENetFields_Private::ReplicatedData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AManusReplicator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManusReplicator);
	AManusReplicator::~AManusReplicator() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ScriptStructInfo[] = {
		{ FManusReplicatedFrameData::StaticStruct, Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics::NewStructOps, TEXT("ManusReplicatedFrameData"), &Z_Registration_Info_UScriptStruct_ManusReplicatedFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusReplicatedFrameData), 683449832U) },
		{ FManusReplicatedData::StaticStruct, Z_Construct_UScriptStruct_FManusReplicatedData_Statics::NewStructOps, TEXT("ManusReplicatedData"), &Z_Registration_Info_UScriptStruct_ManusReplicatedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusReplicatedData), 1624353695U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManusReplicator, AManusReplicator::StaticClass, TEXT("AManusReplicator"), &Z_Registration_Info_UClass_AManusReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManusReplicator), 793879200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_77171581(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
