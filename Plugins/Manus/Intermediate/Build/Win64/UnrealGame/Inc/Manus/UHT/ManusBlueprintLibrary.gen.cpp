// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusBlueprintLibrary.h"
#include "ManusBlueprintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MANUS_API UClass* Z_Construct_UClass_UManusBlueprintLibrary();
	MANUS_API UClass* Z_Construct_UClass_UManusBlueprintLibrary_NoRegister();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusHandType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusRet();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FGestureLandscapeData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusErgonomicsData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusMetaSkeleton();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusTracker();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	DEFINE_FUNCTION(UManusBlueprintLibrary::execDoesSkeletonHaveHaptics)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonId);
		P_GET_UBOOL(Z_Param_p_Left);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UManusBlueprintLibrary::DoesSkeletonHaveHaptics(Z_Param_p_SkeletonId,Z_Param_p_Left);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGloveIdForSkeleton)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonId);
		P_GET_UBOOL(Z_Param_p_Left);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UManusBlueprintLibrary::GetGloveIdForSkeleton(Z_Param_p_SkeletonId,Z_Param_p_Left);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execIsGesturePastTreshold)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_GestureId);
		P_GET_PROPERTY(FFloatProperty,Z_Param_p_Treshold);
		P_GET_PROPERTY(FInt64Property,Z_Param_p_GloveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UManusBlueprintLibrary::IsGesturePastTreshold(Z_Param_p_GestureId,Z_Param_p_Treshold,Z_Param_p_GloveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGloveRotationForSkeletonNode)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonId);
		P_GET_PROPERTY(FIntProperty,Z_Param_p_NodeId);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_p_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UManusBlueprintLibrary::GetGloveRotationForSkeletonNode(Z_Param_p_SkeletonId,Z_Param_p_NodeId,Z_Param_Out_p_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGestureId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_p_Name);
		P_GET_TARRAY(FGestureLandscapeData,Z_Param_p_Gestures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UManusBlueprintLibrary::GetGestureId(Z_Param_p_Name,Z_Param_p_Gestures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGestures)
	{
		P_GET_TARRAY_REF(FGestureLandscapeData,Z_Param_Out_p_Gestures);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManusBlueprintLibrary::GetGestures(Z_Param_Out_p_Gestures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execSetGlovesUsingTrackers)
	{
		P_GET_UBOOL(Z_Param_p_UseTrackers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManusBlueprintLibrary::SetGlovesUsingTrackers(Z_Param_p_UseTrackers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetManusCoreIPs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UManusBlueprintLibrary::GetManusCoreIPs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execSetManusCoreIP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_p_ManusIP);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManusBlueprintLibrary::SetManusCoreIP(Z_Param_p_ManusIP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execSetAsClient)
	{
		P_GET_UBOOL(Z_Param_p_IsClient);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManusBlueprintLibrary::SetAsClient(Z_Param_p_IsClient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGloveIdOfUser_UsingUserId)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
		P_GET_ENUM(EManusHandType,Z_Param_p_HandTypeOfGlove);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_p_GloveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetGloveIdOfUser_UsingUserId(Z_Param_UserId,EManusHandType(Z_Param_p_HandTypeOfGlove),Z_Param_Out_p_GloveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetGloveIdOfUser_UsingUserIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_GET_ENUM(EManusHandType,Z_Param_p_HandTypeOfGlove);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_p_GloveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetGloveIdOfUser_UsingUserIndex(Z_Param_UserIndex,EManusHandType(Z_Param_p_HandTypeOfGlove),Z_Param_Out_p_GloveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetErgonomics)
	{
		P_GET_STRUCT_REF(FManusErgonomicsData,Z_Param_Out_p_Data);
		P_GET_PROPERTY(FInt64Property,Z_Param_p_GloveId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetErgonomics(Z_Param_Out_p_Data,Z_Param_p_GloveId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetPlayerJoinRequestURL)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Controller);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UManusBlueprintLibrary::GetPlayerJoinRequestURL(Z_Param_Controller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetHandTrackerData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_p_ManusLiveLinkUserIndex);
		P_GET_ENUM(EManusHandType,Z_Param_p_HandTypeOfTracker);
		P_GET_STRUCT_REF(FManusTracker,Z_Param_Out_p_Tracker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetHandTrackerData(Z_Param_p_ManusLiveLinkUserIndex,EManusHandType(Z_Param_p_HandTypeOfTracker),Z_Param_Out_p_Tracker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execUnloadSkeleton)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::UnloadSkeleton(Z_Param_p_SkeletonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execLoadSkeleton)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonIndex);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_p_SkeletonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::LoadSkeleton(Z_Param_p_SkeletonIndex,Z_Param_Out_p_SkeletonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execAddChainToSkeletonSetup)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonSetupIndex);
		P_GET_STRUCT_REF(FManusChainSetup,Z_Param_Out_p_Chain);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::AddChainToSkeletonSetup(Z_Param_p_SkeletonSetupIndex,Z_Param_Out_p_Chain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execAddNodeToSkeletonSetup)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonSetupIndex);
		P_GET_STRUCT_REF(FManusNodeSetup,Z_Param_Out_p_Node);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::AddNodeToSkeletonSetup(Z_Param_p_SkeletonSetupIndex,Z_Param_Out_p_Node);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execCreateSkeletonSetup)
	{
		P_GET_STRUCT_REF(FManusSkeletonSetup,Z_Param_Out_p_Skeleton);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_p_SkeletonSetupIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::CreateSkeletonSetup(Z_Param_Out_p_Skeleton,Z_Param_Out_p_SkeletonSetupIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetSkeletonData)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_SkeletonId);
		P_GET_STRUCT_REF(FManusMetaSkeleton,Z_Param_Out_Skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetSkeletonData(Z_Param_SkeletonId,Z_Param_Out_Skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execVibrateFingersForSkeleton)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_SkeletonId);
		P_GET_ENUM(EManusHandType,Z_Param_HandType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThumbPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IndexPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MiddlePower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RingPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PinkyPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::VibrateFingersForSkeleton(Z_Param_p_SkeletonId,EManusHandType(Z_Param_HandType),Z_Param_ThumbPower,Z_Param_IndexPower,Z_Param_MiddlePower,Z_Param_RingPower,Z_Param_PinkyPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execVibrateFingers)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_p_DongleId);
		P_GET_ENUM(EManusHandType,Z_Param_HandType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThumbPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IndexPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MiddlePower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RingPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PinkyPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::VibrateFingers(Z_Param_p_DongleId,EManusHandType(Z_Param_HandType),Z_Param_ThumbPower,Z_Param_IndexPower,Z_Param_MiddlePower,Z_Param_RingPower,Z_Param_PinkyPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetFirstHapticDongle)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_DongleId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetFirstHapticDongle(Z_Param_Out_DongleId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetIdsOfAvailableGloves)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_GloveIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetIdsOfAvailableGloves(Z_Param_Out_GloveIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execConvertManusIdToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_ManusId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UManusBlueprintLibrary::ConvertManusIdToString(Z_Param_ManusId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execAssignTrackerToManusUser)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_p_TrackerId);
		P_GET_PROPERTY(FInt64Property,Z_Param_p_ManusUserId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::AssignTrackerToManusUser(Z_Param_Out_p_TrackerId,Z_Param_p_ManusUserId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetTrackerIds)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_p_TrackersIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetTrackerIds(Z_Param_Out_p_TrackersIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execGetManusUsers)
	{
		P_GET_TARRAY_REF(int64,Z_Param_Out_p_Users);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=UManusBlueprintLibrary::GetManusUsers(Z_Param_Out_p_Users);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusBlueprintLibrary::execSetManusActive)
	{
		P_GET_UBOOL(Z_Param_bNewIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UManusBlueprintLibrary::SetManusActive(Z_Param_bNewIsActive);
		P_NATIVE_END;
	}
	void UManusBlueprintLibrary::StaticRegisterNativesUManusBlueprintLibrary()
	{
		UClass* Class = UManusBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChainToSkeletonSetup", &UManusBlueprintLibrary::execAddChainToSkeletonSetup },
			{ "AddNodeToSkeletonSetup", &UManusBlueprintLibrary::execAddNodeToSkeletonSetup },
			{ "AssignTrackerToManusUser", &UManusBlueprintLibrary::execAssignTrackerToManusUser },
			{ "ConvertManusIdToString", &UManusBlueprintLibrary::execConvertManusIdToString },
			{ "CreateSkeletonSetup", &UManusBlueprintLibrary::execCreateSkeletonSetup },
			{ "DoesSkeletonHaveHaptics", &UManusBlueprintLibrary::execDoesSkeletonHaveHaptics },
			{ "GetErgonomics", &UManusBlueprintLibrary::execGetErgonomics },
			{ "GetFirstHapticDongle", &UManusBlueprintLibrary::execGetFirstHapticDongle },
			{ "GetGestureId", &UManusBlueprintLibrary::execGetGestureId },
			{ "GetGestures", &UManusBlueprintLibrary::execGetGestures },
			{ "GetGloveIdForSkeleton", &UManusBlueprintLibrary::execGetGloveIdForSkeleton },
			{ "GetGloveIdOfUser_UsingUserId", &UManusBlueprintLibrary::execGetGloveIdOfUser_UsingUserId },
			{ "GetGloveIdOfUser_UsingUserIndex", &UManusBlueprintLibrary::execGetGloveIdOfUser_UsingUserIndex },
			{ "GetGloveRotationForSkeletonNode", &UManusBlueprintLibrary::execGetGloveRotationForSkeletonNode },
			{ "GetHandTrackerData", &UManusBlueprintLibrary::execGetHandTrackerData },
			{ "GetIdsOfAvailableGloves", &UManusBlueprintLibrary::execGetIdsOfAvailableGloves },
			{ "GetManusCoreIPs", &UManusBlueprintLibrary::execGetManusCoreIPs },
			{ "GetManusUsers", &UManusBlueprintLibrary::execGetManusUsers },
			{ "GetPlayerJoinRequestURL", &UManusBlueprintLibrary::execGetPlayerJoinRequestURL },
			{ "GetSkeletonData", &UManusBlueprintLibrary::execGetSkeletonData },
			{ "GetTrackerIds", &UManusBlueprintLibrary::execGetTrackerIds },
			{ "IsGesturePastTreshold", &UManusBlueprintLibrary::execIsGesturePastTreshold },
			{ "LoadSkeleton", &UManusBlueprintLibrary::execLoadSkeleton },
			{ "SetAsClient", &UManusBlueprintLibrary::execSetAsClient },
			{ "SetGlovesUsingTrackers", &UManusBlueprintLibrary::execSetGlovesUsingTrackers },
			{ "SetManusActive", &UManusBlueprintLibrary::execSetManusActive },
			{ "SetManusCoreIP", &UManusBlueprintLibrary::execSetManusCoreIP },
			{ "UnloadSkeleton", &UManusBlueprintLibrary::execUnloadSkeleton },
			{ "VibrateFingers", &UManusBlueprintLibrary::execVibrateFingers },
			{ "VibrateFingersForSkeleton", &UManusBlueprintLibrary::execVibrateFingersForSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics
	{
		struct ManusBlueprintLibrary_eventAddChainToSkeletonSetup_Parms
		{
			int64 p_SkeletonSetupIndex;
			FManusChainSetup p_Chain;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonSetupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Chain;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex = { "p_SkeletonSetupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddChainToSkeletonSetup_Parms, p_SkeletonSetupIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_Chain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_Chain = { "p_Chain", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddChainToSkeletonSetup_Parms, p_Chain), Z_Construct_UScriptStruct_FManusChainSetup, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_Chain_MetaData)) }; // 108760512
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddChainToSkeletonSetup_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_p_Chain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief add a chain to the skeleton structure\n/// @param  p_SkeletonSetupIndex\x09\x09The Skeleton index\n/// @param  p_Chain\x09\x09\x09\x09\x09The node data\n/// @return If the node was successfuly added.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief add a chain to the skeleton structure\n@param  p_SkeletonSetupIndex          The Skeleton index\n@param  p_Chain                                       The node data\n@return If the node was successfuly added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "AddChainToSkeletonSetup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::ManusBlueprintLibrary_eventAddChainToSkeletonSetup_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics
	{
		struct ManusBlueprintLibrary_eventAddNodeToSkeletonSetup_Parms
		{
			int64 p_SkeletonSetupIndex;
			FManusNodeSetup p_Node;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonSetupIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Node;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex = { "p_SkeletonSetupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddNodeToSkeletonSetup_Parms, p_SkeletonSetupIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_Node = { "p_Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddNodeToSkeletonSetup_Parms, p_Node), Z_Construct_UScriptStruct_FManusNodeSetup, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_Node_MetaData)) }; // 527983951
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAddNodeToSkeletonSetup_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_p_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief add a node to the skeleton structure \n/// @param  p_SkeletonSetupIndex\x09\x09The Skeleton index\n/// @param  p_Node\x09\x09\x09\x09\x09The node data\n/// @return If the node was successfuly added.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief add a node to the skeleton structure\n@param  p_SkeletonSetupIndex          The Skeleton index\n@param  p_Node                                        The node data\n@return If the node was successfuly added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "AddNodeToSkeletonSetup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::ManusBlueprintLibrary_eventAddNodeToSkeletonSetup_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics
	{
		struct ManusBlueprintLibrary_eventAssignTrackerToManusUser_Parms
		{
			FString p_TrackerId;
			int64 p_ManusUserId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_p_TrackerId;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_ManusUserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_p_TrackerId = { "p_TrackerId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAssignTrackerToManusUser_Parms, p_TrackerId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_p_ManusUserId = { "p_ManusUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAssignTrackerToManusUser_Parms, p_ManusUserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventAssignTrackerToManusUser_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_p_TrackerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_p_ManusUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief assign a tracker based on its ID to a user based on its ID.\n/// @param  p_TrackerId\x09\x09\x09\x09\x09\n/// @param  p_ManusUserId\x09\x09\x09\x09\x09\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief assign a tracker based on its ID to a user based on its ID.\n@param  p_TrackerId\n@param  p_ManusUserId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "AssignTrackerToManusUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::ManusBlueprintLibrary_eventAssignTrackerToManusUser_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics
	{
		struct ManusBlueprintLibrary_eventConvertManusIdToString_Parms
		{
			int64 ManusId;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ManusId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::NewProp_ManusId = { "ManusId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventConvertManusIdToString_Parms, ManusId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventConvertManusIdToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::NewProp_ManusId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Convert the given Manus ID to an FString.\n/// @param  GloveId The Manus ID that should be converted.\n/// @return The FString containing the converted Manus ID.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Convert the given Manus ID to an FString.\n@param  GloveId The Manus ID that should be converted.\n@return The FString containing the converted Manus ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "ConvertManusIdToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::ManusBlueprintLibrary_eventConvertManusIdToString_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics
	{
		struct ManusBlueprintLibrary_eventCreateSkeletonSetup_Parms
		{
			FManusSkeletonSetup p_Skeleton;
			int64 p_SkeletonSetupIndex;
			EManusRet ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_p_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Skeleton;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonSetupIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_Skeleton = { "p_Skeleton", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventCreateSkeletonSetup_Parms, p_Skeleton), Z_Construct_UScriptStruct_FManusSkeletonSetup, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_Skeleton_MetaData)) }; // 2908045326
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex = { "p_SkeletonSetupIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventCreateSkeletonSetup_Parms, p_SkeletonSetupIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventCreateSkeletonSetup_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_p_SkeletonSetupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief create a skeleton structure and receive the skeleton index for later reference.\n/// @param  p_Skeleton\x09\x09\x09\x09The Skeleton Setup data\n/// @param  p_SkeletonSetupIndex\x09\x09Output\x09\x09The index of the skeleton \n/// @return If the skeleton was successfuly created.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief create a skeleton structure and receive the skeleton index for later reference.\n@param  p_Skeleton                            The Skeleton Setup data\n@param  p_SkeletonSetupIndex          Output          The index of the skeleton\n@return If the skeleton was successfuly created." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "CreateSkeletonSetup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::ManusBlueprintLibrary_eventCreateSkeletonSetup_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics
	{
		struct ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms
		{
			int64 p_SkeletonId;
			bool p_Left;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static void NewProp_p_Left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_p_Left;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_Left_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms*)Obj)->p_Left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_Left = { "p_Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_Left_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_p_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief check if a certain skeleton has haptics available\n/// @param p_SkeletonId \n/// @param p_Left \n/// @return \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief check if a certain skeleton has haptics available\n@param p_SkeletonId\n@param p_Left\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "DoesSkeletonHaveHaptics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::ManusBlueprintLibrary_eventDoesSkeletonHaveHaptics_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics
	{
		struct ManusBlueprintLibrary_eventGetErgonomics_Parms
		{
			FManusErgonomicsData p_Data;
			int64 p_GloveId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Data;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_GloveId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_p_Data = { "p_Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetErgonomics_Parms, p_Data), Z_Construct_UScriptStruct_FManusErgonomicsData, METADATA_PARAMS(nullptr, 0) }; // 2516105554
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_p_GloveId = { "p_GloveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetErgonomics_Parms, p_GloveId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetErgonomics_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_p_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_p_GloveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief gets ergonomics data\n/// @param  p_Data\x09The ergonomics data.\n/// @param  p_GloveId\x09The glove id of the ergonomics data we want.\n/// @returns success state\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief gets ergonomics data\n@param  p_Data        The ergonomics data.\n@param  p_GloveId     The glove id of the ergonomics data we want.\n@returns success state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetErgonomics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::ManusBlueprintLibrary_eventGetErgonomics_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics
	{
		struct ManusBlueprintLibrary_eventGetFirstHapticDongle_Parms
		{
			int64 DongleId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DongleId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_DongleId = { "DongleId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetFirstHapticDongle_Parms, DongleId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetFirstHapticDongle_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_DongleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief set the first haptic dongle id in p_DongleId. \n/// This may get deprecated soon.\n/// @param  DongleId \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief set the first haptic dongle id in p_DongleId.\nThis may get deprecated soon.\n@param  DongleId" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetFirstHapticDongle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::ManusBlueprintLibrary_eventGetFirstHapticDongle_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics
	{
		struct ManusBlueprintLibrary_eventGetGestureId_Parms
		{
			FString p_Name;
			TArray<FGestureLandscapeData> p_Gestures;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_p_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Gestures_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_p_Gestures;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Name = { "p_Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGestureId_Parms, p_Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Gestures_Inner = { "p_Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGestureLandscapeData, METADATA_PARAMS(nullptr, 0) }; // 617913397
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Gestures = { "p_Gestures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGestureId_Parms, p_Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 617913397
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGestureId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Gestures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_p_Gestures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get gesture id for a given gesture name in the given list of gestures.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get gesture id for a given gesture name in the given list of gestures." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGestureId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::ManusBlueprintLibrary_eventGetGestureId_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics
	{
		struct ManusBlueprintLibrary_eventGetGestures_Parms
		{
			TArray<FGestureLandscapeData> p_Gestures;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Gestures_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_p_Gestures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::NewProp_p_Gestures_Inner = { "p_Gestures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGestureLandscapeData, METADATA_PARAMS(nullptr, 0) }; // 617913397
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::NewProp_p_Gestures = { "p_Gestures", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGestures_Parms, p_Gestures), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 617913397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::NewProp_p_Gestures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::NewProp_p_Gestures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get current registered gestures\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get current registered gestures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGestures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::ManusBlueprintLibrary_eventGetGestures_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics
	{
		struct ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms
		{
			int64 p_SkeletonId;
			bool p_Left;
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static void NewProp_p_Left_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_p_Left;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_Left_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms*)Obj)->p_Left = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_Left = { "p_Left", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_Left_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_p_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get teh glove id for the skeleton id\n/// @param p_SkeletonId \n/// @param p_Left        determines if we want left or right glove \n/// @return \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get teh glove id for the skeleton id\n@param p_SkeletonId\n@param p_Left        determines if we want left or right glove\n@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGloveIdForSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::ManusBlueprintLibrary_eventGetGloveIdForSkeleton_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics
	{
		struct ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms
		{
			int32 UserId;
			EManusHandType p_HandTypeOfGlove;
			int64 p_GloveId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_p_HandTypeOfGlove_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_p_HandTypeOfGlove;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_GloveId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms, UserId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_HandTypeOfGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_HandTypeOfGlove = { "p_HandTypeOfGlove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms, p_HandTypeOfGlove), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_GloveId = { "p_GloveId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms, p_GloveId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_HandTypeOfGlove_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_HandTypeOfGlove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_p_GloveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get glove id of user using user id and handtype\n/// @param UserId \n/// @param p_HandTypeOfGlove \n/// @param p_GloveId \n/// @return returncode for success state\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get glove id of user using user id and handtype\n@param UserId\n@param p_HandTypeOfGlove\n@param p_GloveId\n@return returncode for success state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGloveIdOfUser_UsingUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserId_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics
	{
		struct ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms
		{
			int32 UserIndex;
			EManusHandType p_HandTypeOfGlove;
			int64 p_GloveId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_p_HandTypeOfGlove_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_p_HandTypeOfGlove;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_GloveId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_HandTypeOfGlove_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_HandTypeOfGlove = { "p_HandTypeOfGlove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms, p_HandTypeOfGlove), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_GloveId = { "p_GloveId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms, p_GloveId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_HandTypeOfGlove_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_HandTypeOfGlove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_p_GloveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get glove id of user using user index and hand type.\n/// @param UserIndex \n/// @param p_HandTypeOfGlove \n/// @param p_GloveId \n/// @return returncode for success state\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get glove id of user using user index and hand type.\n@param UserIndex\n@param p_HandTypeOfGlove\n@param p_GloveId\n@return returncode for success state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGloveIdOfUser_UsingUserIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::ManusBlueprintLibrary_eventGetGloveIdOfUser_UsingUserIndex_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics
	{
		struct ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms
		{
			int64 p_SkeletonId;
			int32 p_NodeId;
			FQuat p_Rotation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_p_NodeId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Rotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_NodeId = { "p_NodeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms, p_NodeId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_Rotation = { "p_Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms, p_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_NodeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_p_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetGloveRotationForSkeletonNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::ManusBlueprintLibrary_eventGetGloveRotationForSkeletonNode_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics
	{
		struct ManusBlueprintLibrary_eventGetHandTrackerData_Parms
		{
			int32 p_ManusLiveLinkUserIndex;
			EManusHandType p_HandTypeOfTracker;
			FManusTracker p_Tracker;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_p_ManusLiveLinkUserIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_p_HandTypeOfTracker_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_p_HandTypeOfTracker;
		static const UECodeGen_Private::FStructPropertyParams NewProp_p_Tracker;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_ManusLiveLinkUserIndex = { "p_ManusLiveLinkUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetHandTrackerData_Parms, p_ManusLiveLinkUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_HandTypeOfTracker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_HandTypeOfTracker = { "p_HandTypeOfTracker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetHandTrackerData_Parms, p_HandTypeOfTracker), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_Tracker = { "p_Tracker", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetHandTrackerData_Parms, p_Tracker), Z_Construct_UScriptStruct_FManusTracker, METADATA_PARAMS(nullptr, 0) }; // 2802365530
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetHandTrackerData_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_ManusLiveLinkUserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_HandTypeOfTracker_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_HandTypeOfTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_p_Tracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Get the latest Tracker data that was received from %Manus Core for the Tracker assigned to the given User Index for the hand of the given type.\n/// @param  ManusLiveLinkUserIndex\x09The index of the Manus Live Link User.\n/// @param  HandTypeOfTracker\x09\x09The hand type of the glove.\n/// @param  Tracker\x09\x09\x09Output\x09The latest Tracker data.\n/// @return If the Tracker data were successfuly retrieved.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Get the latest Tracker data that was received from %Manus Core for the Tracker assigned to the given User Index for the hand of the given type.\n@param  ManusLiveLinkUserIndex        The index of the Manus Live Link User.\n@param  HandTypeOfTracker             The hand type of the glove.\n@param  Tracker                       Output  The latest Tracker data.\n@return If the Tracker data were successfuly retrieved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetHandTrackerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::ManusBlueprintLibrary_eventGetHandTrackerData_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics
	{
		struct ManusBlueprintLibrary_eventGetIdsOfAvailableGloves_Parms
		{
			TArray<int64> GloveIds;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_GloveIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GloveIds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_GloveIds_Inner = { "GloveIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_GloveIds = { "GloveIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetIdsOfAvailableGloves_Parms, GloveIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetIdsOfAvailableGloves_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_GloveIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_GloveIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Retrieves an array containing the glove IDs of all available gloves.\n/// These IDs can be used for functions ending in _UsingId, which will only have an effect on the specified glove.\n/// @param  GloveIds  The array of glove IDs.\n/// @return If the function succeeded in getting the glove IDs.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Retrieves an array containing the glove IDs of all available gloves.\nThese IDs can be used for functions ending in _UsingId, which will only have an effect on the specified glove.\n@param  GloveIds  The array of glove IDs.\n@return If the function succeeded in getting the glove IDs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetIdsOfAvailableGloves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::ManusBlueprintLibrary_eventGetIdsOfAvailableGloves_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics
	{
		struct ManusBlueprintLibrary_eventGetManusCoreIPs_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetManusCoreIPs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get all the %Manus Core hosts that can be connected to\n/// @returns TArray of all available %Manus Core host addresses.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief get all the %Manus Core hosts that can be connected to\n@returns TArray of all available %Manus Core host addresses." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetManusCoreIPs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::ManusBlueprintLibrary_eventGetManusCoreIPs_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics
	{
		struct ManusBlueprintLibrary_eventGetManusUsers_Parms
		{
			TArray<int64> p_Users;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_Users_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_p_Users;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_p_Users_Inner = { "p_Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_p_Users = { "p_Users", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetManusUsers_Parms, p_Users), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetManusUsers_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_p_Users_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_p_Users,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Get all manus user ID's and store a copy of the ID's in p_Users\n/// @param  p_Users\x09\x09\x09\x09\x09\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Get all manus user ID's and store a copy of the ID's in p_Users\n@param  p_Users" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetManusUsers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::ManusBlueprintLibrary_eventGetManusUsers_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics
	{
		struct ManusBlueprintLibrary_eventGetPlayerJoinRequestURL_Parms
		{
			APlayerController* Controller;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetPlayerJoinRequestURL_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetPlayerJoinRequestURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Returns the Player join request URL.\n/// @param  Controller\x09The Player Controller from which we want the join request URL.\n/// @return The Player join request URL.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Returns the Player join request URL.\n@param  Controller    The Player Controller from which we want the join request URL.\n@return The Player join request URL." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetPlayerJoinRequestURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::ManusBlueprintLibrary_eventGetPlayerJoinRequestURL_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics
	{
		struct ManusBlueprintLibrary_eventGetSkeletonData_Parms
		{
			int64 SkeletonId;
			FManusMetaSkeleton Skeleton;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SkeletonId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetSkeletonData_Parms, SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetSkeletonData_Parms, Skeleton), Z_Construct_UScriptStruct_FManusMetaSkeleton, METADATA_PARAMS(nullptr, 0) }; // 4277610977
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetSkeletonData_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Get the latest skeleton data that was received from Manus for the skeleton with the given ID.\n/// @param  SkeletonId\x09\x09\x09\x09The ID of the skeleton to get the data from.\n/// @param  Skeleton\x09\x09Output\x09\x09The latest skeleton data for the connected skeleton.\n/// @return If the skeleton data were successfuly retrieved.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Get the latest skeleton data that was received from Manus for the skeleton with the given ID.\n@param  SkeletonId                            The ID of the skeleton to get the data from.\n@param  Skeleton              Output          The latest skeleton data for the connected skeleton.\n@return If the skeleton data were successfuly retrieved." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetSkeletonData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::ManusBlueprintLibrary_eventGetSkeletonData_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics
	{
		struct ManusBlueprintLibrary_eventGetTrackerIds_Parms
		{
			TArray<FString> p_TrackersIds;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_p_TrackersIds_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_p_TrackersIds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_p_TrackersIds_Inner = { "p_TrackersIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_p_TrackersIds = { "p_TrackersIds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetTrackerIds_Parms, p_TrackersIds), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventGetTrackerIds_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_p_TrackersIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_p_TrackersIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Get All tracker ID's and store a copy of the ID's in p_TrackersIds\n/// @param  p_TrackersIds\x09\x09\x09\x09\x09\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Get All tracker ID's and store a copy of the ID's in p_TrackersIds\n@param  p_TrackersIds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "GetTrackerIds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::ManusBlueprintLibrary_eventGetTrackerIds_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics
	{
		struct ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms
		{
			int64 p_GestureId;
			float p_Treshold;
			int64 p_GloveId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_GestureId;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_p_Treshold;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_GloveId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_GestureId = { "p_GestureId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms, p_GestureId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_Treshold = { "p_Treshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms, p_Treshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_GloveId = { "p_GloveId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms, p_GloveId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_GestureId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_Treshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_p_GloveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief check if a gesture has reached the treshold value for a glove\n/// @param p_GestureId \n/// @param p_Treshold  a value between 0 and 1.0 \n/// @param p_GloveId \n/// @return if a gesture detection goes above the treshold check it will return true\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief check if a gesture has reached the treshold value for a glove\n@param p_GestureId\n@param p_Treshold  a value between 0 and 1.0\n@param p_GloveId\n@return if a gesture detection goes above the treshold check it will return true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "IsGesturePastTreshold", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::ManusBlueprintLibrary_eventIsGesturePastTreshold_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics
	{
		struct ManusBlueprintLibrary_eventLoadSkeleton_Parms
		{
			int64 p_SkeletonIndex;
			int64 p_SkeletonId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonIndex;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_p_SkeletonIndex = { "p_SkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventLoadSkeleton_Parms, p_SkeletonIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventLoadSkeleton_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventLoadSkeleton_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_p_SkeletonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief load the created skeleton into %Manus Core (important or nothing gets animated)\n/// @param  p_SkeletonIndex\x09\x09\x09\x09\x09\x09The temporary skeleton index as defined in the SDK\n/// @param  p_SkeletonId\x09\x09\x09\x09output\x09\x09the skeleton id as generated by %Manus Core\n/// @return If the skeleton was succesfully loaded.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief load the created skeleton into %Manus Core (important or nothing gets animated)\n@param  p_SkeletonIndex                                               The temporary skeleton index as defined in the SDK\n@param  p_SkeletonId                          output          the skeleton id as generated by %Manus Core\n@return If the skeleton was succesfully loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "LoadSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::ManusBlueprintLibrary_eventLoadSkeleton_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics
	{
		struct ManusBlueprintLibrary_eventSetAsClient_Parms
		{
			bool p_IsClient;
		};
		static void NewProp_p_IsClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_p_IsClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::NewProp_p_IsClient_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventSetAsClient_Parms*)Obj)->p_IsClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::NewProp_p_IsClient = { "p_IsClient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventSetAsClient_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::NewProp_p_IsClient_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::NewProp_p_IsClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief set if this session is as a Client or not\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief set if this session is as a Client or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "SetAsClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::ManusBlueprintLibrary_eventSetAsClient_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics
	{
		struct ManusBlueprintLibrary_eventSetGlovesUsingTrackers_Parms
		{
			bool p_UseTrackers;
		};
		static void NewProp_p_UseTrackers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_p_UseTrackers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::NewProp_p_UseTrackers_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventSetGlovesUsingTrackers_Parms*)Obj)->p_UseTrackers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::NewProp_p_UseTrackers = { "p_UseTrackers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventSetGlovesUsingTrackers_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::NewProp_p_UseTrackers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::NewProp_p_UseTrackers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief for demo purposes only. set that the gloves use trackers.\n/// @param  p_UseTrackers \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief for demo purposes only. set that the gloves use trackers.\n@param  p_UseTrackers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "SetGlovesUsingTrackers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::ManusBlueprintLibrary_eventSetGlovesUsingTrackers_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics
	{
		struct ManusBlueprintLibrary_eventSetManusActive_Parms
		{
			bool bNewIsActive;
		};
		static void NewProp_bNewIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::NewProp_bNewIsActive_SetBit(void* Obj)
	{
		((ManusBlueprintLibrary_eventSetManusActive_Parms*)Obj)->bNewIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::NewProp_bNewIsActive = { "bNewIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusBlueprintLibrary_eventSetManusActive_Parms), &Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::NewProp_bNewIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::NewProp_bNewIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Acticate / deactivate Manus tracking.\n/// @param  bNewIsActive\x09\x09Whether Manus tracking should be active or not.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Acticate / deactivate Manus tracking.\n@param  bNewIsActive          Whether Manus tracking should be active or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "SetManusActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::ManusBlueprintLibrary_eventSetManusActive_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics
	{
		struct ManusBlueprintLibrary_eventSetManusCoreIP_Parms
		{
			FString p_ManusIP;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_p_ManusIP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::NewProp_p_ManusIP = { "p_ManusIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventSetManusCoreIP_Parms, p_ManusIP), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::NewProp_p_ManusIP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief set the %Manus Core host address to connect to\n/// @param  p_ManusIP The new %Manus Core host address to connect to.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief set the %Manus Core host address to connect to\n@param  p_ManusIP The new %Manus Core host address to connect to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "SetManusCoreIP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::ManusBlueprintLibrary_eventSetManusCoreIP_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics
	{
		struct ManusBlueprintLibrary_eventUnloadSkeleton_Parms
		{
			int64 p_SkeletonId;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventUnloadSkeleton_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventUnloadSkeleton_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief unload the created skeleton from %Manus Core \n/// @param  p_SkeletonId\x09\x09\x09\x09\x09\x09The Skeleton id\n/// @return If the skeleton was succesfully loaded.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief unload the created skeleton from %Manus Core\n@param  p_SkeletonId                                          The Skeleton id\n@return If the skeleton was succesfully loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "UnloadSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::ManusBlueprintLibrary_eventUnloadSkeleton_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics
	{
		struct ManusBlueprintLibrary_eventVibrateFingers_Parms
		{
			int64 p_DongleId;
			EManusHandType HandType;
			float ThumbPower;
			float IndexPower;
			float MiddlePower;
			float RingPower;
			float PinkyPower;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_DongleId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddlePower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RingPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyPower;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_p_DongleId = { "p_DongleId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, p_DongleId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ThumbPower = { "ThumbPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, ThumbPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_IndexPower = { "IndexPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, IndexPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_MiddlePower = { "MiddlePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, MiddlePower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_RingPower = { "RingPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, RingPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_PinkyPower = { "PinkyPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, PinkyPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingers_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_p_DongleId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ThumbPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_IndexPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_MiddlePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_RingPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_PinkyPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Tell a Manus glove to vibrate its fingers. The first available glove of the given hand type will be used.\n/// @param  p_DongleId\x09The haptics dongle id of the glove to look for.\n/// @param  HandType\x09\x09The hand type of the glove to look for.\n/// @param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n/// @param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n/// @param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n/// @param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n/// @param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n/// @return If the glove was succesfully told to vibrate.\n" },
		{ "CPP_Default_IndexPower", "1.000000" },
		{ "CPP_Default_MiddlePower", "1.000000" },
		{ "CPP_Default_PinkyPower", "1.000000" },
		{ "CPP_Default_RingPower", "1.000000" },
		{ "CPP_Default_ThumbPower", "1.000000" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Tell a Manus glove to vibrate its fingers. The first available glove of the given hand type will be used.\n@param  p_DongleId    The haptics dongle id of the glove to look for.\n@param  HandType              The hand type of the glove to look for.\n@param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n@param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n@param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n@param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n@param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n@return If the glove was succesfully told to vibrate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "VibrateFingers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::ManusBlueprintLibrary_eventVibrateFingers_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics
	{
		struct ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms
		{
			int64 p_SkeletonId;
			EManusHandType HandType;
			float ThumbPower;
			float IndexPower;
			float MiddlePower;
			float RingPower;
			float PinkyPower;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_p_SkeletonId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IndexPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MiddlePower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RingPower;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinkyPower;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_p_SkeletonId = { "p_SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, p_SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ThumbPower = { "ThumbPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, ThumbPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_IndexPower = { "IndexPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, IndexPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_MiddlePower = { "MiddlePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, MiddlePower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_RingPower = { "RingPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, RingPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_PinkyPower = { "PinkyPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, PinkyPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_p_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ThumbPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_IndexPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_MiddlePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_RingPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_PinkyPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Tell a Manus glove associated to the given skeleton id to vibrate its fingers.\n/// @param  p_SkeletonId\x09The skeleton id associated to the glove to look for.\n/// @param  HandType\x09\x09The hand type of the glove to look for.\n/// @param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n/// @param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n/// @param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n/// @param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n/// @param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n/// @return If the glove was succesfully told to vibrate.\n" },
		{ "CPP_Default_IndexPower", "1.000000" },
		{ "CPP_Default_MiddlePower", "1.000000" },
		{ "CPP_Default_PinkyPower", "1.000000" },
		{ "CPP_Default_RingPower", "1.000000" },
		{ "CPP_Default_ThumbPower", "1.000000" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
		{ "ToolTip", "@brief Tell a Manus glove associated to the given skeleton id to vibrate its fingers.\n@param  p_SkeletonId  The skeleton id associated to the glove to look for.\n@param  HandType              The hand type of the glove to look for.\n@param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n@param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n@param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n@param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n@param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n@return If the glove was succesfully told to vibrate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusBlueprintLibrary, nullptr, "VibrateFingersForSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::ManusBlueprintLibrary_eventVibrateFingersForSkeleton_Parms), Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusBlueprintLibrary);
	UClass* Z_Construct_UClass_UManusBlueprintLibrary_NoRegister()
	{
		return UManusBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UManusBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManusBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_AddChainToSkeletonSetup, "AddChainToSkeletonSetup" }, // 3204186014
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_AddNodeToSkeletonSetup, "AddNodeToSkeletonSetup" }, // 2007329499
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_AssignTrackerToManusUser, "AssignTrackerToManusUser" }, // 767111080
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_ConvertManusIdToString, "ConvertManusIdToString" }, // 1377465195
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_CreateSkeletonSetup, "CreateSkeletonSetup" }, // 3012401805
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_DoesSkeletonHaveHaptics, "DoesSkeletonHaveHaptics" }, // 3637018599
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetErgonomics, "GetErgonomics" }, // 1565695226
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetFirstHapticDongle, "GetFirstHapticDongle" }, // 2339467884
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGestureId, "GetGestureId" }, // 130762069
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGestures, "GetGestures" }, // 3192576754
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdForSkeleton, "GetGloveIdForSkeleton" }, // 3343376654
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserId, "GetGloveIdOfUser_UsingUserId" }, // 3270139436
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveIdOfUser_UsingUserIndex, "GetGloveIdOfUser_UsingUserIndex" }, // 1550521074
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetGloveRotationForSkeletonNode, "GetGloveRotationForSkeletonNode" }, // 3063021271
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetHandTrackerData, "GetHandTrackerData" }, // 3896335267
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetIdsOfAvailableGloves, "GetIdsOfAvailableGloves" }, // 573906879
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetManusCoreIPs, "GetManusCoreIPs" }, // 3679442344
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetManusUsers, "GetManusUsers" }, // 2923983074
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetPlayerJoinRequestURL, "GetPlayerJoinRequestURL" }, // 2409875526
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetSkeletonData, "GetSkeletonData" }, // 3656156781
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_GetTrackerIds, "GetTrackerIds" }, // 1436215723
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_IsGesturePastTreshold, "IsGesturePastTreshold" }, // 4271761429
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_LoadSkeleton, "LoadSkeleton" }, // 2085537777
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_SetAsClient, "SetAsClient" }, // 1257702344
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_SetGlovesUsingTrackers, "SetGlovesUsingTrackers" }, // 600632148
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_SetManusActive, "SetManusActive" }, // 162811291
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_SetManusCoreIP, "SetManusCoreIP" }, // 2162322410
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_UnloadSkeleton, "UnloadSkeleton" }, // 3523086878
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingers, "VibrateFingers" }, // 584688644
		{ &Z_Construct_UFunction_UManusBlueprintLibrary_VibrateFingersForSkeleton, "VibrateFingersForSkeleton" }, // 984752263
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManusBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/ManusBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusBlueprintLibrary_Statics::ClassParams = {
		&UManusBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManusBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UManusBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UManusBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusBlueprintLibrary.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusBlueprintLibrary>()
	{
		return UManusBlueprintLibrary::StaticClass();
	}
	UManusBlueprintLibrary::UManusBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusBlueprintLibrary);
	UManusBlueprintLibrary::~UManusBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusBlueprintLibrary, UManusBlueprintLibrary::StaticClass, TEXT("UManusBlueprintLibrary"), &Z_Registration_Info_UClass_UManusBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusBlueprintLibrary), 228294574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_1201804491(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
