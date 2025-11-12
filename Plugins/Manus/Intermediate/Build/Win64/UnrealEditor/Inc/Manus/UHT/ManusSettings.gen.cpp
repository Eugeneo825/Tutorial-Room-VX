// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MANUS_API UClass* Z_Construct_UClass_UManusSettings();
	MANUS_API UClass* Z_Construct_UClass_UManusSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	void UManusSettings::StaticRegisterNativesUManusSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusSettings);
	UClass* Z_Construct_UClass_UManusSettings_NoRegister()
	{
		return UManusSettings::StaticClass();
	}
	struct Z_Construct_UClass_UManusSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseManusInGame_MetaData[];
#endif
		static void NewProp_bUseManusInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManusInGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingManagerDeviceUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackingManagerDeviceUpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReplicationOffsetTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultReplicationOffsetTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateReplicationOffsetTimeUsingPing_MetaData[];
#endif
		static void NewProp_bUpdateReplicationOffsetTimeUsingPing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateReplicationOffsetTimeUsingPing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationOffsetTimePingMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicationOffsetTimePingMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationOffsetTimePingExtraTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplicationOffsetTimePingExtraTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @brief Settings for Manus plugin.\n" },
		{ "IncludePath", "ManusSettings.h" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief Settings for Manus plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/// @brief  Whether Manus should be used in-game. \n" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  Whether Manus should be used in-game." },
	};
#endif
	void Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame_SetBit(void* Obj)
	{
		((UManusSettings*)Obj)->bUseManusInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame = { "bUseManusInGame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusSettings), &Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency_MetaData[] = {
		{ "Category", "Users" },
		{ "Comment", "/// @brief  How often to update which gloves are assigned to the each User in the Manus Dashboard. \n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  How often to update which gloves are assigned to the each User in the Manus Dashboard." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency = { "ManusDashboardUserGloveAssignmentUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, ManusDashboardUserGloveAssignmentUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingSmoothing_MetaData[] = {
		{ "Category", "Tracking" },
		{ "Comment", "/// @brief  How many seconds we should delay the tracking animation to cope with the tracking device having a lower update frequency. \n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  How many seconds we should delay the tracking animation to cope with the tracking device having a lower update frequency." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingSmoothing = { "TrackingSmoothing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, TrackingSmoothing), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingManagerDeviceUpdateFrequency_MetaData[] = {
		{ "Category", "Tracking" },
		{ "Comment", "/// @brief  How often the Tracking Manager (used in the \"Unreal\" Hand Tracking method) should check for new tracking devices, in seconds. \n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  How often the Tracking Manager (used in the \"Unreal\" Hand Tracking method) should check for new tracking devices, in seconds." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingManagerDeviceUpdateFrequency = { "TrackingManagerDeviceUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, TrackingManagerDeviceUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingManagerDeviceUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingManagerDeviceUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_DefaultReplicationOffsetTime_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/// @brief  How far back should we read the replicated Manus data (in seconds) to cope with latency. \n" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  How far back should we read the replicated Manus data (in seconds) to cope with latency." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_DefaultReplicationOffsetTime = { "DefaultReplicationOffsetTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, DefaultReplicationOffsetTime), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_DefaultReplicationOffsetTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_DefaultReplicationOffsetTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/// @brief  Whether to update the Replication Offset Time at runtime according to the current ping. \n" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  Whether to update the Replication Offset Time at runtime according to the current ping." },
	};
#endif
	void Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing_SetBit(void* Obj)
	{
		((UManusSettings*)Obj)->bUpdateReplicationOffsetTimeUsingPing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing = { "bUpdateReplicationOffsetTimeUsingPing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusSettings), &Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingMultiplier_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/// @brief  Updated Replication Offset Time will be computed using the ping multiplied by this value. \n" },
		{ "EditCondition", "bUpdateReplicationOffsetTimeUsingPing" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  Updated Replication Offset Time will be computed using the ping multiplied by this value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingMultiplier = { "ReplicationOffsetTimePingMultiplier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, ReplicationOffsetTimePingMultiplier), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingExtraTime_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/// @brief  Updated Replication Offset Time will be computed using the ping with this extra time added. \n" },
		{ "EditCondition", "bUpdateReplicationOffsetTimeUsingPing" },
		{ "ModuleRelativePath", "Public/ManusSettings.h" },
		{ "ToolTip", "@brief  Updated Replication Offset Time will be computed using the ping with this extra time added." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingExtraTime = { "ReplicationOffsetTimePingExtraTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusSettings, ReplicationOffsetTimePingExtraTime), METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingExtraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingExtraTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_bUseManusInGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_ManusDashboardUserGloveAssignmentUpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_TrackingManagerDeviceUpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_DefaultReplicationOffsetTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_bUpdateReplicationOffsetTimeUsingPing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusSettings_Statics::NewProp_ReplicationOffsetTimePingExtraTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusSettings_Statics::ClassParams = {
		&UManusSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UManusSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UManusSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusSettings()
	{
		if (!Z_Registration_Info_UClass_UManusSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusSettings.OuterSingleton, Z_Construct_UClass_UManusSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusSettings.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusSettings>()
	{
		return UManusSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusSettings);
	UManusSettings::~UManusSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusSettings, UManusSettings::StaticClass, TEXT("UManusSettings"), &Z_Registration_Info_UClass_UManusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusSettings), 4109104100U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSettings_h_2705907332(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
