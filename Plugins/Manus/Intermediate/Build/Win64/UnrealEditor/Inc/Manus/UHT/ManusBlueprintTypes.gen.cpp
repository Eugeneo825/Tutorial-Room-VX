// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusBlueprintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusBlueprintTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusChainType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusFingerName();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusGloveType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusHandMotion();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusHandType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusMotionCaptureType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusNodeSettingsFlag();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusNodeType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusRet();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusSide();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusSkeletonTargetType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusSkeletonType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusTrackingBodyPart();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusTrackingDeviceType();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FGestureLandscapeData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusBone();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettings();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsArm();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsFinger();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsFoot();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsHand();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsHead();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsLeg();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsNeck();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsPelvis();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsShoulder();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsSpine();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingToe();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusChainSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusErgonomicsData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusMetaSkeleton();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettings();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsFoot();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsIK();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsLeaf();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonSetup();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData();
	MANUS_API UScriptStruct* Z_Construct_UScriptStruct_FManusTracker();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusMotionCaptureType;
	static UEnum* EManusMotionCaptureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusMotionCaptureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusMotionCaptureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusMotionCaptureType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusMotionCaptureType"));
		}
		return Z_Registration_Info_UEnum_EManusMotionCaptureType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusMotionCaptureType>()
	{
		return EManusMotionCaptureType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enumerators[] = {
		{ "EManusMotionCaptureType::LeftHand", (int64)EManusMotionCaptureType::LeftHand },
		{ "EManusMotionCaptureType::RightHand", (int64)EManusMotionCaptureType::RightHand },
		{ "EManusMotionCaptureType::BothHands", (int64)EManusMotionCaptureType::BothHands },
		{ "EManusMotionCaptureType::FullBody", (int64)EManusMotionCaptureType::FullBody },
		{ "EManusMotionCaptureType::Max", (int64)EManusMotionCaptureType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BothHands.Name", "EManusMotionCaptureType::BothHands" },
		{ "Comment", "/// @brief Manus motion capture types.\n" },
		{ "FullBody.DisplayName", "Full Body with Polygon" },
		{ "FullBody.Name", "EManusMotionCaptureType::FullBody" },
		{ "LeftHand.Name", "EManusMotionCaptureType::LeftHand" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EManusMotionCaptureType::Max" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "RightHand.Name", "EManusMotionCaptureType::RightHand" },
		{ "ToolTip", "@brief Manus motion capture types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusMotionCaptureType",
		"EManusMotionCaptureType",
		Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusMotionCaptureType()
	{
		if (!Z_Registration_Info_UEnum_EManusMotionCaptureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusMotionCaptureType.InnerSingleton, Z_Construct_UEnum_Manus_EManusMotionCaptureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusMotionCaptureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusGloveType;
	static UEnum* EManusGloveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusGloveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusGloveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusGloveType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusGloveType"));
		}
		return Z_Registration_Info_UEnum_EManusGloveType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusGloveType>()
	{
		return EManusGloveType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusGloveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enumerators[] = {
		{ "EManusGloveType::None", (int64)EManusGloveType::None },
		{ "EManusGloveType::PrimeOne", (int64)EManusGloveType::PrimeOne },
		{ "EManusGloveType::PrimeTwo", (int64)EManusGloveType::PrimeTwo },
		{ "EManusGloveType::PrimeX", (int64)EManusGloveType::PrimeX },
		{ "EManusGloveType::PrimeMeta", (int64)EManusGloveType::PrimeMeta },
		{ "EManusGloveType::Max", (int64)EManusGloveType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief An enum used to define the glove types.\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EManusGloveType::Max" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "None.Name", "EManusGloveType::None" },
		{ "PrimeMeta.Name", "EManusGloveType::PrimeMeta" },
		{ "PrimeOne.Name", "EManusGloveType::PrimeOne" },
		{ "PrimeTwo.Name", "EManusGloveType::PrimeTwo" },
		{ "PrimeX.Name", "EManusGloveType::PrimeX" },
		{ "ToolTip", "@brief An enum used to define the glove types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusGloveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusGloveType",
		"EManusGloveType",
		Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusGloveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusGloveType()
	{
		if (!Z_Registration_Info_UEnum_EManusGloveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusGloveType.InnerSingleton, Z_Construct_UEnum_Manus_EManusGloveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusGloveType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusHandType;
	static UEnum* EManusHandType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusHandType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusHandType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusHandType"));
		}
		return Z_Registration_Info_UEnum_EManusHandType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusHandType>()
	{
		return EManusHandType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusHandType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusHandType_Statics::Enumerators[] = {
		{ "EManusHandType::Left", (int64)EManusHandType::Left },
		{ "EManusHandType::Right", (int64)EManusHandType::Right },
		{ "EManusHandType::Max", (int64)EManusHandType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusHandType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief An enum used to denote a left or a right hand.\n" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EManusHandType::Left" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EManusHandType::Max" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EManusHandType::Right" },
		{ "ToolTip", "@brief An enum used to denote a left or a right hand." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusHandType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusHandType",
		"EManusHandType",
		Z_Construct_UEnum_Manus_EManusHandType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusHandType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusHandType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusHandType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusHandType()
	{
		if (!Z_Registration_Info_UEnum_EManusHandType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusHandType.InnerSingleton, Z_Construct_UEnum_Manus_EManusHandType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusHandType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusSide;
	static UEnum* EManusSide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusSide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusSide, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusSide"));
		}
		return Z_Registration_Info_UEnum_EManusSide.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusSide>()
	{
		return EManusSide_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusSide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusSide_Statics::Enumerators[] = {
		{ "EManusSide::Left", (int64)EManusSide::Left },
		{ "EManusSide::Right", (int64)EManusSide::Right },
		{ "EManusSide::Center", (int64)EManusSide::Center },
		{ "EManusSide::Invalid", (int64)EManusSide::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusSide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EManusSide::Center" },
		{ "Comment", "/// @brief An enum used to denote a left, right or center.\n" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EManusSide::Invalid" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EManusSide::Left" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EManusSide::Right" },
		{ "ToolTip", "@brief An enum used to denote a left, right or center." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusSide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusSide",
		"EManusSide",
		Z_Construct_UEnum_Manus_EManusSide_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSide_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusSide_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSide_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusSide()
	{
		if (!Z_Registration_Info_UEnum_EManusSide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusSide.InnerSingleton, Z_Construct_UEnum_Manus_EManusSide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusSide.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusSkeletonType;
	static UEnum* EManusSkeletonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusSkeletonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusSkeletonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusSkeletonType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusSkeletonType"));
		}
		return Z_Registration_Info_UEnum_EManusSkeletonType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusSkeletonType>()
	{
		return EManusSkeletonType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusSkeletonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enumerators[] = {
		{ "EManusSkeletonType::Invalid", (int64)EManusSkeletonType::Invalid },
		{ "EManusSkeletonType::Hand", (int64)EManusSkeletonType::Hand },
		{ "EManusSkeletonType::Body", (int64)EManusSkeletonType::Body },
		{ "EManusSkeletonType::Both", (int64)EManusSkeletonType::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Body.DisplayName", "Body" },
		{ "Body.Name", "EManusSkeletonType::Body" },
		{ "Both.DisplayName", "Both" },
		{ "Both.Name", "EManusSkeletonType::Both" },
		{ "Comment", "/// @brief enum used to define the different types of animation used for skeleton\n" },
		{ "Hand.DisplayName", "Hand" },
		{ "Hand.Name", "EManusSkeletonType::Hand" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EManusSkeletonType::Invalid" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief enum used to define the different types of animation used for skeleton" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusSkeletonType",
		"EManusSkeletonType",
		Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusSkeletonType()
	{
		if (!Z_Registration_Info_UEnum_EManusSkeletonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusSkeletonType.InnerSingleton, Z_Construct_UEnum_Manus_EManusSkeletonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusSkeletonType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusSkeletonTargetType;
	static UEnum* EManusSkeletonTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusSkeletonTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusSkeletonTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusSkeletonTargetType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusSkeletonTargetType"));
		}
		return Z_Registration_Info_UEnum_EManusSkeletonTargetType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusSkeletonTargetType>()
	{
		return EManusSkeletonTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enumerators[] = {
		{ "EManusSkeletonTargetType::Invalid", (int64)EManusSkeletonTargetType::Invalid },
		{ "EManusSkeletonTargetType::UserData", (int64)EManusSkeletonTargetType::UserData },
		{ "EManusSkeletonTargetType::UserIndexData", (int64)EManusSkeletonTargetType::UserIndexData },
		{ "EManusSkeletonTargetType::AnimationData", (int64)EManusSkeletonTargetType::AnimationData },
		{ "EManusSkeletonTargetType::GloveData", (int64)EManusSkeletonTargetType::GloveData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enum_MetaDataParams[] = {
		{ "AnimationData.DisplayName", "AnimationData" },
		{ "AnimationData.Name", "EManusSkeletonTargetType::AnimationData" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief enum used to define the different types of animation used for skeleton\n" },
		{ "GloveData.DisplayName", "GloveData" },
		{ "GloveData.Name", "EManusSkeletonTargetType::GloveData" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EManusSkeletonTargetType::Invalid" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief enum used to define the different types of animation used for skeleton" },
		{ "UserData.DisplayName", "UserData" },
		{ "UserData.Name", "EManusSkeletonTargetType::UserData" },
		{ "UserIndexData.DisplayName", "UserIndexData" },
		{ "UserIndexData.Name", "EManusSkeletonTargetType::UserIndexData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusSkeletonTargetType",
		"EManusSkeletonTargetType",
		Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusSkeletonTargetType()
	{
		if (!Z_Registration_Info_UEnum_EManusSkeletonTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusSkeletonTargetType.InnerSingleton, Z_Construct_UEnum_Manus_EManusSkeletonTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusSkeletonTargetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusNodeSettingsFlag;
	static UEnum* EManusNodeSettingsFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusNodeSettingsFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusNodeSettingsFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusNodeSettingsFlag, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusNodeSettingsFlag"));
		}
		return Z_Registration_Info_UEnum_EManusNodeSettingsFlag.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusNodeSettingsFlag>()
	{
		return EManusNodeSettingsFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enumerators[] = {
		{ "EManusNodeSettingsFlag::None", (int64)EManusNodeSettingsFlag::None },
		{ "EManusNodeSettingsFlag::IK", (int64)EManusNodeSettingsFlag::IK },
		{ "EManusNodeSettingsFlag::Foot", (int64)EManusNodeSettingsFlag::Foot },
		{ "EManusNodeSettingsFlag::RotationOffset", (int64)EManusNodeSettingsFlag::RotationOffset },
		{ "EManusNodeSettingsFlag::Leaf", (int64)EManusNodeSettingsFlag::Leaf },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief enum used to combine flags of which nodesettings are used\n/// for handling flags correctly as uproperties see https://forums.unrealengine.com/t/bitmask-enum-declaration-in-4-12-whats-missing/361671/3\n/// and the var UsedSettings we adjusted in this source code further below\n" },
		{ "Foot.DisplayName", "Foot" },
		{ "Foot.Name", "EManusNodeSettingsFlag::Foot" },
		{ "IK.DisplayName", "IK" },
		{ "IK.Name", "EManusNodeSettingsFlag::IK" },
		{ "Leaf.DisplayName", "Leaf" },
		{ "Leaf.Name", "EManusNodeSettingsFlag::Leaf" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EManusNodeSettingsFlag::None" },
		{ "RotationOffset.DisplayName", "RotationOffset" },
		{ "RotationOffset.Name", "EManusNodeSettingsFlag::RotationOffset" },
		{ "ToolTip", "@brief enum used to combine flags of which nodesettings are used\nfor handling flags correctly as uproperties see https:forums.unrealengine.com/t/bitmask-enum-declaration-in-4-12-whats-missing/361671/3\nand the var UsedSettings we adjusted in this source code further below" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusNodeSettingsFlag",
		"EManusNodeSettingsFlag",
		Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusNodeSettingsFlag()
	{
		if (!Z_Registration_Info_UEnum_EManusNodeSettingsFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusNodeSettingsFlag.InnerSingleton, Z_Construct_UEnum_Manus_EManusNodeSettingsFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusNodeSettingsFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusNodeType;
	static UEnum* EManusNodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusNodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusNodeType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusNodeType"));
		}
		return Z_Registration_Info_UEnum_EManusNodeType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusNodeType>()
	{
		return EManusNodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusNodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enumerators[] = {
		{ "EManusNodeType::Invalid", (int64)EManusNodeType::Invalid },
		{ "EManusNodeType::Joint", (int64)EManusNodeType::Joint },
		{ "EManusNodeType::Mesh", (int64)EManusNodeType::Mesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief type of node in the skeleton\n" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EManusNodeType::Invalid" },
		{ "Joint.DisplayName", "Joint" },
		{ "Joint.Name", "EManusNodeType::Joint" },
		{ "Mesh.DisplayName", "Mesh" },
		{ "Mesh.Name", "EManusNodeType::Mesh" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief type of node in the skeleton" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusNodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusNodeType",
		"EManusNodeType",
		Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusNodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusNodeType()
	{
		if (!Z_Registration_Info_UEnum_EManusNodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusNodeType.InnerSingleton, Z_Construct_UEnum_Manus_EManusNodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusNodeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusChainType;
	static UEnum* EManusChainType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusChainType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusChainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusChainType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusChainType"));
		}
		return Z_Registration_Info_UEnum_EManusChainType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusChainType>()
	{
		return EManusChainType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusChainType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusChainType_Statics::Enumerators[] = {
		{ "EManusChainType::Invalid", (int64)EManusChainType::Invalid },
		{ "EManusChainType::Arm", (int64)EManusChainType::Arm },
		{ "EManusChainType::Leg", (int64)EManusChainType::Leg },
		{ "EManusChainType::Neck", (int64)EManusChainType::Neck },
		{ "EManusChainType::Spine", (int64)EManusChainType::Spine },
		{ "EManusChainType::FingerThumb", (int64)EManusChainType::FingerThumb },
		{ "EManusChainType::FingerIndex", (int64)EManusChainType::FingerIndex },
		{ "EManusChainType::FingerMiddle", (int64)EManusChainType::FingerMiddle },
		{ "EManusChainType::FingerRing", (int64)EManusChainType::FingerRing },
		{ "EManusChainType::FingerPinky", (int64)EManusChainType::FingerPinky },
		{ "EManusChainType::Pelvis", (int64)EManusChainType::Pelvis },
		{ "EManusChainType::Head", (int64)EManusChainType::Head },
		{ "EManusChainType::Shoulder", (int64)EManusChainType::Shoulder },
		{ "EManusChainType::Hand", (int64)EManusChainType::Hand },
		{ "EManusChainType::Foot", (int64)EManusChainType::Foot },
		{ "EManusChainType::Toe", (int64)EManusChainType::Toe },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusChainType_Statics::Enum_MetaDataParams[] = {
		{ "Arm.DisplayName", "Arm" },
		{ "Arm.Name", "EManusChainType::Arm" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief type of chain in the skeleton\n" },
		{ "FingerIndex.DisplayName", "FingerIndex" },
		{ "FingerIndex.Name", "EManusChainType::FingerIndex" },
		{ "FingerMiddle.DisplayName", "FingerMiddle" },
		{ "FingerMiddle.Name", "EManusChainType::FingerMiddle" },
		{ "FingerPinky.DisplayName", "FingerPinky" },
		{ "FingerPinky.Name", "EManusChainType::FingerPinky" },
		{ "FingerRing.DisplayName", "FingerRing" },
		{ "FingerRing.Name", "EManusChainType::FingerRing" },
		{ "FingerThumb.DisplayName", "FingerThumb" },
		{ "FingerThumb.Name", "EManusChainType::FingerThumb" },
		{ "Foot.DisplayName", "Foot" },
		{ "Foot.Name", "EManusChainType::Foot" },
		{ "Hand.DisplayName", "Hand" },
		{ "Hand.Name", "EManusChainType::Hand" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "EManusChainType::Head" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EManusChainType::Invalid" },
		{ "Leg.DisplayName", "Leg" },
		{ "Leg.Name", "EManusChainType::Leg" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "Neck.DisplayName", "Neck" },
		{ "Neck.Name", "EManusChainType::Neck" },
		{ "Pelvis.DisplayName", "Pelvis" },
		{ "Pelvis.Name", "EManusChainType::Pelvis" },
		{ "Shoulder.DisplayName", "Shoulder" },
		{ "Shoulder.Name", "EManusChainType::Shoulder" },
		{ "Spine.DisplayName", "Spine" },
		{ "Spine.Name", "EManusChainType::Spine" },
		{ "Toe.DisplayName", "Toe" },
		{ "Toe.Name", "EManusChainType::Toe" },
		{ "ToolTip", "@brief type of chain in the skeleton" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusChainType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusChainType",
		"EManusChainType",
		Z_Construct_UEnum_Manus_EManusChainType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusChainType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusChainType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusChainType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusChainType()
	{
		if (!Z_Registration_Info_UEnum_EManusChainType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusChainType.InnerSingleton, Z_Construct_UEnum_Manus_EManusChainType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusChainType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusHandMotion;
	static UEnum* EManusHandMotion_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusHandMotion.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusHandMotion.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusHandMotion, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusHandMotion"));
		}
		return Z_Registration_Info_UEnum_EManusHandMotion.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusHandMotion>()
	{
		return EManusHandMotion_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusHandMotion_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enumerators[] = {
		{ "EManusHandMotion::None", (int64)EManusHandMotion::None },
		{ "EManusHandMotion::IMU", (int64)EManusHandMotion::IMU },
		{ "EManusHandMotion::Tracker", (int64)EManusHandMotion::Tracker },
		{ "EManusHandMotion::Tracker_RotationOnly", (int64)EManusHandMotion::Tracker_RotationOnly },
		{ "EManusHandMotion::Auto", (int64)EManusHandMotion::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Auto" },
		{ "Auto.Name", "EManusHandMotion::Auto" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief type of hand motion used\n" },
		{ "IMU.DisplayName", "IMU" },
		{ "IMU.Name", "EManusHandMotion::IMU" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EManusHandMotion::None" },
		{ "ToolTip", "@brief type of hand motion used" },
		{ "Tracker.DisplayName", "Tracker" },
		{ "Tracker.Name", "EManusHandMotion::Tracker" },
		{ "Tracker_RotationOnly.DisplayName", "Tracker_RotationOnly" },
		{ "Tracker_RotationOnly.Name", "EManusHandMotion::Tracker_RotationOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusHandMotion_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusHandMotion",
		"EManusHandMotion",
		Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusHandMotion_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusHandMotion()
	{
		if (!Z_Registration_Info_UEnum_EManusHandMotion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusHandMotion.InnerSingleton, Z_Construct_UEnum_Manus_EManusHandMotion_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusHandMotion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusRet;
	static UEnum* EManusRet_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusRet.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusRet.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusRet, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusRet"));
		}
		return Z_Registration_Info_UEnum_EManusRet.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusRet>()
	{
		return EManusRet_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusRet_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusRet_Statics::Enumerators[] = {
		{ "EManusRet::Success", (int64)EManusRet::Success },
		{ "EManusRet::Error", (int64)EManusRet::Error },
		{ "EManusRet::InvalidArgument", (int64)EManusRet::InvalidArgument },
		{ "EManusRet::ArgumentSizeMismatch", (int64)EManusRet::ArgumentSizeMismatch },
		{ "EManusRet::UnsupportedStringSizeEncountered", (int64)EManusRet::UnsupportedStringSizeEncountered },
		{ "EManusRet::SDKNotAvailable", (int64)EManusRet::SDKNotAvailable },
		{ "EManusRet::HostFinderNotAvailable", (int64)EManusRet::HostFinderNotAvailable },
		{ "EManusRet::DataNotAvailable", (int64)EManusRet::DataNotAvailable },
		{ "EManusRet::MemoryError", (int64)EManusRet::MemoryError },
		{ "EManusRet::InternalError", (int64)EManusRet::InternalError },
		{ "EManusRet::FunctionCalledAtWrongTime", (int64)EManusRet::FunctionCalledAtWrongTime },
		{ "EManusRet::NotConnected", (int64)EManusRet::NotConnected },
		{ "EManusRet::ConnectionTimeout", (int64)EManusRet::ConnectionTimeout },
		{ "EManusRet::NoHostFound", (int64)EManusRet::NoHostFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusRet_Statics::Enum_MetaDataParams[] = {
		{ "ArgumentSizeMismatch.DisplayName", "ArgumentSizeMismatch" },
		{ "ArgumentSizeMismatch.Name", "EManusRet::ArgumentSizeMismatch" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief An enum used as a return value for some Manus plugin functions.\n/// It must match the WrapperReturnCode enum in ManusSdkTypes.h.\n" },
		{ "ConnectionTimeout.DisplayName", "ConnectionTimeout" },
		{ "ConnectionTimeout.Name", "EManusRet::ConnectionTimeout" },
		{ "DataNotAvailable.DisplayName", "DataNotAvailable" },
		{ "DataNotAvailable.Name", "EManusRet::DataNotAvailable" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EManusRet::Error" },
		{ "FunctionCalledAtWrongTime.DisplayName", "FunctionCalledAtWrongTime" },
		{ "FunctionCalledAtWrongTime.Name", "EManusRet::FunctionCalledAtWrongTime" },
		{ "HostFinderNotAvailable.DisplayName", "HostFinderNotAvailable" },
		{ "HostFinderNotAvailable.Name", "EManusRet::HostFinderNotAvailable" },
		{ "InternalError.DisplayName", "InternalError" },
		{ "InternalError.Name", "EManusRet::InternalError" },
		{ "InvalidArgument.DisplayName", "InvalidArgument" },
		{ "InvalidArgument.Name", "EManusRet::InvalidArgument" },
		{ "MemoryError.DisplayName", "MemoryError" },
		{ "MemoryError.Name", "EManusRet::MemoryError" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "NoHostFound.DisplayName", "NoHostFound" },
		{ "NoHostFound.Name", "EManusRet::NoHostFound" },
		{ "NotConnected.DisplayName", "NotConnected" },
		{ "NotConnected.Name", "EManusRet::NotConnected" },
		{ "SDKNotAvailable.DisplayName", "SDKNotAvailable" },
		{ "SDKNotAvailable.Name", "EManusRet::SDKNotAvailable" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EManusRet::Success" },
		{ "ToolTip", "@brief An enum used as a return value for some Manus plugin functions.\nIt must match the WrapperReturnCode enum in ManusSdkTypes.h." },
		{ "UnsupportedStringSizeEncountered.DisplayName", "UnsupportedStringSizeEncountered" },
		{ "UnsupportedStringSizeEncountered.Name", "EManusRet::UnsupportedStringSizeEncountered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusRet_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusRet",
		"EManusRet",
		Z_Construct_UEnum_Manus_EManusRet_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusRet_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusRet_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusRet_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusRet()
	{
		if (!Z_Registration_Info_UEnum_EManusRet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusRet.InnerSingleton, Z_Construct_UEnum_Manus_EManusRet_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusRet.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusTrackingBodyPart;
	static UEnum* EManusTrackingBodyPart_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusTrackingBodyPart.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusTrackingBodyPart.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusTrackingBodyPart, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusTrackingBodyPart"));
		}
		return Z_Registration_Info_UEnum_EManusTrackingBodyPart.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusTrackingBodyPart>()
	{
		return EManusTrackingBodyPart_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enumerators[] = {
		{ "EManusTrackingBodyPart::None", (int64)EManusTrackingBodyPart::None },
		{ "EManusTrackingBodyPart::LeftHand", (int64)EManusTrackingBodyPart::LeftHand },
		{ "EManusTrackingBodyPart::RightHand", (int64)EManusTrackingBodyPart::RightHand },
		{ "EManusTrackingBodyPart::LeftFoot", (int64)EManusTrackingBodyPart::LeftFoot },
		{ "EManusTrackingBodyPart::RightFoot", (int64)EManusTrackingBodyPart::RightFoot },
		{ "EManusTrackingBodyPart::Head", (int64)EManusTrackingBodyPart::Head },
		{ "EManusTrackingBodyPart::Waist", (int64)EManusTrackingBodyPart::Waist },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The parts of the body that can be tracked.\n" },
		{ "Head.DisplayName", "Head" },
		{ "Head.Name", "EManusTrackingBodyPart::Head" },
		{ "LeftFoot.DisplayName", "LeftFoot" },
		{ "LeftFoot.Name", "EManusTrackingBodyPart::LeftFoot" },
		{ "LeftHand.DisplayName", "LeftHand" },
		{ "LeftHand.Name", "EManusTrackingBodyPart::LeftHand" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EManusTrackingBodyPart::None" },
		{ "RightFoot.DisplayName", "RightFoot" },
		{ "RightFoot.Name", "EManusTrackingBodyPart::RightFoot" },
		{ "RightHand.DisplayName", "RightHand" },
		{ "RightHand.Name", "EManusTrackingBodyPart::RightHand" },
		{ "ToolTip", "@brief The parts of the body that can be tracked." },
		{ "Waist.DisplayName", "Waist" },
		{ "Waist.Name", "EManusTrackingBodyPart::Waist" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusTrackingBodyPart",
		"EManusTrackingBodyPart",
		Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusTrackingBodyPart()
	{
		if (!Z_Registration_Info_UEnum_EManusTrackingBodyPart.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusTrackingBodyPart.InnerSingleton, Z_Construct_UEnum_Manus_EManusTrackingBodyPart_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusTrackingBodyPart.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusFingerName;
	static UEnum* EManusFingerName_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusFingerName.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusFingerName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusFingerName, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusFingerName"));
		}
		return Z_Registration_Info_UEnum_EManusFingerName.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusFingerName>()
	{
		return EManusFingerName_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusFingerName_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enumerators[] = {
		{ "EManusFingerName::Thumb", (int64)EManusFingerName::Thumb },
		{ "EManusFingerName::Index", (int64)EManusFingerName::Index },
		{ "EManusFingerName::Middle", (int64)EManusFingerName::Middle },
		{ "EManusFingerName::Ring", (int64)EManusFingerName::Ring },
		{ "EManusFingerName::Pinky", (int64)EManusFingerName::Pinky },
		{ "EManusFingerName::Max", (int64)EManusFingerName::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief A way to identify fingers by a name and number.\n" },
		{ "Index.DisplayName", "Index" },
		{ "Index.Name", "EManusFingerName::Index" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EManusFingerName::Max" },
		{ "Middle.DisplayName", "Middle" },
		{ "Middle.Name", "EManusFingerName::Middle" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "Pinky.DisplayName", "Pinky" },
		{ "Pinky.Name", "EManusFingerName::Pinky" },
		{ "Ring.DisplayName", "Ring" },
		{ "Ring.Name", "EManusFingerName::Ring" },
		{ "Thumb.DisplayName", "Thumb" },
		{ "Thumb.Name", "EManusFingerName::Thumb" },
		{ "ToolTip", "@brief A way to identify fingers by a name and number." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusFingerName_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusFingerName",
		"EManusFingerName",
		Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusFingerName_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusFingerName()
	{
		if (!Z_Registration_Info_UEnum_EManusFingerName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusFingerName.InnerSingleton, Z_Construct_UEnum_Manus_EManusFingerName_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusFingerName.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EManusTrackingDeviceType;
	static UEnum* EManusTrackingDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EManusTrackingDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EManusTrackingDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Manus_EManusTrackingDeviceType, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("EManusTrackingDeviceType"));
		}
		return Z_Registration_Info_UEnum_EManusTrackingDeviceType.OuterSingleton;
	}
	template<> MANUS_API UEnum* StaticEnum<EManusTrackingDeviceType>()
	{
		return EManusTrackingDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enumerators[] = {
		{ "EManusTrackingDeviceType::Invalid", (int64)EManusTrackingDeviceType::Invalid },
		{ "EManusTrackingDeviceType::Hmd", (int64)EManusTrackingDeviceType::Hmd },
		{ "EManusTrackingDeviceType::Controller", (int64)EManusTrackingDeviceType::Controller },
		{ "EManusTrackingDeviceType::GenericTracker", (int64)EManusTrackingDeviceType::GenericTracker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The types of tracking devices that can be used.\n" },
		{ "Controller.Comment", "// Headset.\n" },
		{ "Controller.Name", "EManusTrackingDeviceType::Controller" },
		{ "Controller.ToolTip", "Headset." },
		{ "GenericTracker.Name", "EManusTrackingDeviceType::GenericTracker" },
		{ "Hmd.Name", "EManusTrackingDeviceType::Hmd" },
		{ "Invalid.Name", "EManusTrackingDeviceType::Invalid" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The types of tracking devices that can be used." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		"EManusTrackingDeviceType",
		"EManusTrackingDeviceType",
		Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Manus_EManusTrackingDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EManusTrackingDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EManusTrackingDeviceType.InnerSingleton, Z_Construct_UEnum_Manus_EManusTrackingDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EManusTrackingDeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusBone;
class UScriptStruct* FManusBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusBone, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusBone"));
	}
	return Z_Registration_Info_UScriptStruct_ManusBone.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusBone>()
{
	return FManusBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Validity_MetaData[];
#endif
		static void NewProp_Validity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Validity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_BoneId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief All available data on a single skeleton bone.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief All available data on a single skeleton bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The validity of the bone. \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The validity of the bone." },
	};
#endif
	void Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity_SetBit(void* Obj)
	{
		((FManusBone*)Obj)->Validity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity = { "Validity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusBone), &Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The transform of the bone. \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The transform of the bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusBone, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_BoneId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief id of the bone.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief id of the bone." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_BoneId = { "BoneId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusBone, BoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_BoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_BoneId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Validity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusBone_Statics::NewProp_BoneId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusBone",
		sizeof(FManusBone),
		alignof(FManusBone),
		Z_Construct_UScriptStruct_FManusBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusBone()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusBone.InnerSingleton, Z_Construct_UScriptStruct_FManusBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusBone.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusMetaSkeleton;
class UScriptStruct* FManusMetaSkeleton::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusMetaSkeleton, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusMetaSkeleton"));
	}
	return Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusMetaSkeleton>()
{
	return FManusMetaSkeleton::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LastUpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SkeletonId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief All available data on a single skeleton.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief All available data on a single skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusMetaSkeleton>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_LastUpdateTime_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The time it was last updated.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The time it was last updated." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusMetaSkeleton, LastUpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_LastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_LastUpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_SkeletonId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief A number that identifies the skeleton.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief A number that identifies the skeleton." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusMetaSkeleton, SkeletonId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_SkeletonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_SkeletonId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FManusBone, METADATA_PARAMS(nullptr, 0) }; // 1899289221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Data on the bones.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Data on the bones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusMetaSkeleton, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones_MetaData)) }; // 1899289221
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_LastUpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewProp_Bones,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusMetaSkeleton",
		sizeof(FManusMetaSkeleton),
		alignof(FManusMetaSkeleton),
		Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusMetaSkeleton()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.InnerSingleton, Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusMetaSkeleton.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusTracker;
class UScriptStruct* FManusTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusTracker, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusTracker"));
	}
	return Z_Registration_Info_UScriptStruct_ManusTracker.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusTracker>()
{
	return FManusTracker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusTracker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastUpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_LastUpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackerId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackerId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UserId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief All available data on a tracker.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief All available data on a tracker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusTracker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_LastUpdateTime_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The time it was last updated.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The time it was last updated." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_LastUpdateTime = { "LastUpdateTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusTracker, LastUpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_LastUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_LastUpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_TrackerId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The ID of the Tracker.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The ID of the Tracker." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_TrackerId = { "TrackerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusTracker, TrackerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_TrackerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_TrackerId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The transform of the tracker.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The transform of the tracker." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusTracker, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_UserId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The User Index this Tracker is assigned to.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The User Index this Tracker is assigned to." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusTracker, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_UserId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The hand type this tracker is used for. \n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The hand type this tracker is used for." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusTracker, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType_MetaData)) }; // 3298345868
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_LastUpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_TrackerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_UserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusTracker_Statics::NewProp_HandType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusTracker",
		sizeof(FManusTracker),
		alignof(FManusTracker),
		Z_Construct_UScriptStruct_FManusTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusTracker()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusTracker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusTracker.InnerSingleton, Z_Construct_UScriptStruct_FManusTracker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusTracker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK;
class UScriptStruct* FManusNodeSettingsIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSettingsIK, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSettingsIK"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSettingsIK>()
{
	return FManusNodeSettingsIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IkAim_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IkAim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief node settings for Inverse Kinematics\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief node settings for Inverse Kinematics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSettingsIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewProp_IkAim_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief influences the direction of the joint angle. higher numbers adjust to forward, negative numbers to backwards.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief influences the direction of the joint angle. higher numbers adjust to forward, negative numbers to backwards." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewProp_IkAim = { "IkAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettingsIK, IkAim), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewProp_IkAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewProp_IkAim_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewProp_IkAim,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSettingsIK",
		sizeof(FManusNodeSettingsIK),
		alignof(FManusNodeSettingsIK),
		Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsIK()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot;
class UScriptStruct* FManusNodeSettingsFoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSettingsFoot, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSettingsFoot"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSettingsFoot>()
{
	return FManusNodeSettingsFoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightFromGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFromGround;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief node settings for the foot.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief node settings for the foot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSettingsFoot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewProp_HeightFromGround_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset height from ground\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset height from ground" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewProp_HeightFromGround = { "HeightFromGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettingsFoot, HeightFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewProp_HeightFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewProp_HeightFromGround_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewProp_HeightFromGround,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSettingsFoot",
		sizeof(FManusNodeSettingsFoot),
		alignof(FManusNodeSettingsFoot),
		Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsFoot()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset;
class UScriptStruct* FManusNodeSettingsRotationOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSettingsRotationOffset"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSettingsRotationOffset>()
{
	return FManusNodeSettingsRotationOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief defines the rotation offset\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief defines the rotation offset" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSettingsRotationOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief rotation offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief rotation offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettingsRotationOffset, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSettingsRotationOffset",
		sizeof(FManusNodeSettingsRotationOffset),
		alignof(FManusNodeSettingsRotationOffset),
		Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf;
class UScriptStruct* FManusNodeSettingsLeaf::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSettingsLeaf"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSettingsLeaf>()
{
	return FManusNodeSettingsLeaf::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Defines the node leaf settings \n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Defines the node leaf settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSettingsLeaf>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief the direction vector is defined with respect to the previous node in the chain\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief the direction vector is defined with respect to the previous node in the chain" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettingsLeaf, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief length of the leaf.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief length of the leaf." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettingsLeaf, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSettingsLeaf",
		sizeof(FManusNodeSettingsLeaf),
		alignof(FManusNodeSettingsLeaf),
		Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettingsLeaf()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSettings;
class UScriptStruct* FManusNodeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSettings, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSettings.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSettings>()
{
	return FManusNodeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UsedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ik_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ik;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Foot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leaf_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Leaf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic nodesettings for a node. multiple settings can be used at the same time.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic nodesettings for a node. multiple settings can be used at the same time." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_UsedSettings_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EManusNodeSettingsFlag" },
		{ "Category", "Manus" },
		{ "Comment", "// for handling flags correctly as uproperties see https://forums.unrealengine.com/t/bitmask-enum-declaration-in-4-12-whats-missing/361671/3\n// and the enum EManusNodeSettingsFlag we adjusted here and above in this source code\n/// @brief bit flag of the used node settings. can contain multiple flags.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "for handling flags correctly as uproperties see https:forums.unrealengine.com/t/bitmask-enum-declaration-in-4-12-whats-missing/361671/3\nand the enum EManusNodeSettingsFlag we adjusted here and above in this source code\n@brief bit flag of the used node settings. can contain multiple flags." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_UsedSettings = { "UsedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettings, UsedSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_UsedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_UsedSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Ik_MetaData[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Ik = { "Ik", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettings, Ik), Z_Construct_UScriptStruct_FManusNodeSettingsIK, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Ik_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Ik_MetaData)) }; // 4104840253
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettings, Foot), Z_Construct_UScriptStruct_FManusNodeSettingsFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Foot_MetaData)) }; // 4068081187
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettings, RotationOffset), Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_RotationOffset_MetaData)) }; // 1863598046
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Leaf_MetaData[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Leaf = { "Leaf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSettings, Leaf), Z_Construct_UScriptStruct_FManusNodeSettingsLeaf, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Leaf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Leaf_MetaData)) }; // 2068838142
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_UsedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Ik,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Foot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewProp_Leaf,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSettings",
		sizeof(FManusNodeSettings),
		alignof(FManusNodeSettings),
		Z_Construct_UScriptStruct_FManusNodeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSettings.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusNodeSetup;
class UScriptStruct* FManusNodeSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusNodeSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusNodeSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusNodeSetup, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusNodeSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ManusNodeSetup.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusNodeSetup>()
{
	return FManusNodeSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusNodeSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ParentID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic node from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic node from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusNodeSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Node ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Node ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Node Name (usually the bone)\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Node Name (usually the bone)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief type of node in the skeleton\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief type of node in the skeleton" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, Type), Z_Construct_UEnum_Manus_EManusNodeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type_MetaData)) }; // 803938907
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Base transform of the skeleton\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Base transform of the skeleton" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_ParentID_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Parent bone ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Parent bone ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_ParentID = { "ParentID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, ParentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_ParentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_ParentID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Node Settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Node Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusNodeSetup, Settings), Z_Construct_UScriptStruct_FManusNodeSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Settings_MetaData)) }; // 498670245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusNodeSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_ParentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusNodeSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusNodeSetup",
		sizeof(FManusNodeSetup),
		alignof(FManusNodeSetup),
		Z_Construct_UScriptStruct_FManusNodeSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusNodeSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusNodeSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusNodeSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusNodeSetup.InnerSingleton, Z_Construct_UScriptStruct_FManusNodeSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusNodeSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis;
class UScriptStruct* FManusChainSettingsPelvis::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsPelvis, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsPelvis"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsPelvis>()
{
	return FManusChainSettingsPelvis::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HipHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HipBendOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HipBendOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThicknessMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The pelvis chain settings\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The pelvis chain settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsPelvis>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipHeight_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief hip height\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief hip height" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipHeight = { "HipHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsPelvis, HipHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipBendOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief hip bend offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief hip bend offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipBendOffset = { "HipBendOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsPelvis, HipBendOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipBendOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipBendOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_ThicknessMultiplier_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief thickness multiplier.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief thickness multiplier." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_ThicknessMultiplier = { "ThicknessMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsPelvis, ThicknessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_ThicknessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_ThicknessMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_HipBendOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewProp_ThicknessMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsPelvis",
		sizeof(FManusChainSettingsPelvis),
		alignof(FManusChainSettingsPelvis),
		Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsPelvis()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg;
class UScriptStruct* FManusChainSettingsLeg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsLeg, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsLeg"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsLeg>()
{
	return FManusChainSettingsLeg::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverseKneeDirection_MetaData[];
#endif
		static void NewProp_ReverseKneeDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseKneeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KneeRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KneeRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootForwardOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootForwardOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootSideOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootSideOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The leet chain settings\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The leet chain settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsLeg>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief reverse the knee direction\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief reverse the knee direction" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection_SetBit(void* Obj)
	{
		((FManusChainSettingsLeg*)Obj)->ReverseKneeDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection = { "ReverseKneeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusChainSettingsLeg), &Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_KneeRotationOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset for knee rotation\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset for knee rotation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_KneeRotationOffset = { "KneeRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsLeg, KneeRotationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_KneeRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_KneeRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootForwardOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset foot forward\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset foot forward" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootForwardOffset = { "FootForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsLeg, FootForwardOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootForwardOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootSideOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset foot to the side\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset foot to the side" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootSideOffset = { "FootSideOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsLeg, FootSideOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootSideOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootSideOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_ReverseKneeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_KneeRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootForwardOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewProp_FootSideOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsLeg",
		sizeof(FManusChainSettingsLeg),
		alignof(FManusChainSettingsLeg),
		Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsLeg()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine;
class UScriptStruct* FManusChainSettingsSpine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsSpine, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsSpine"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsSpine>()
{
	return FManusChainSettingsSpine::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBendOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpineBendOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsSpine>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewProp_SpineBendOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset for spine bend\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset for spine bend" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewProp_SpineBendOffset = { "SpineBendOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsSpine, SpineBendOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewProp_SpineBendOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewProp_SpineBendOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewProp_SpineBendOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsSpine",
		sizeof(FManusChainSettingsSpine),
		alignof(FManusChainSettingsSpine),
		Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsSpine()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck;
class UScriptStruct* FManusChainSettingsNeck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsNeck, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsNeck"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsNeck>()
{
	return FManusChainSettingsNeck::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeckBendOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NeckBendOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsNeck>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewProp_NeckBendOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief offset for neck bend\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief offset for neck bend" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewProp_NeckBendOffset = { "NeckBendOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsNeck, NeckBendOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewProp_NeckBendOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewProp_NeckBendOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewProp_NeckBendOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsNeck",
		sizeof(FManusChainSettingsNeck),
		alignof(FManusChainSettingsNeck),
		Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsNeck()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsHead;
class UScriptStruct* FManusChainSettingsHead::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsHead, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsHead"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsHead>()
{
	return FManusChainSettingsHead::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadPitchOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadPitchOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadTiltOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadTiltOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseLeafAtEnd_MetaData[];
#endif
		static void NewProp_UseLeafAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLeafAtEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsHead>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadPitchOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief head pitch offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief head pitch offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadPitchOffset = { "HeadPitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsHead, HeadPitchOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadPitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadPitchOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadYawOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief head yaw offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief head yaw offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadYawOffset = { "HeadYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsHead, HeadYawOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadTiltOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief head tilt offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief head tilt offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadTiltOffset = { "HeadTiltOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsHead, HeadTiltOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadTiltOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadTiltOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief use the leaf at the end of the chain.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief use the leaf at the end of the chain." },
	};
#endif
	void Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd_SetBit(void* Obj)
	{
		((FManusChainSettingsHead*)Obj)->UseLeafAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd = { "UseLeafAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusChainSettingsHead), &Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadPitchOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_HeadTiltOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewProp_UseLeafAtEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsHead",
		sizeof(FManusChainSettingsHead),
		alignof(FManusChainSettingsHead),
		Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsHead()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsHead.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsArm;
class UScriptStruct* FManusChainSettingsArm::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsArm, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsArm"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsArm>()
{
	return FManusChainSettingsArm::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElbowRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElbowRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArmRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsArm>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmLengthMultiplier_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief arm length scale\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief arm length scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmLengthMultiplier = { "ArmLengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsArm, ArmLengthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmLengthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmLengthMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ElbowRotationOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief elbow rotation offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief elbow rotation offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ElbowRotationOffset = { "ElbowRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsArm, ElbowRotationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ElbowRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ElbowRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmRotationOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief arm rotation offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief arm rotation offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmRotationOffset = { "ArmRotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsArm, ArmRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionMultiplier_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief position scaler\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief position scaler" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionMultiplier = { "PositionMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsArm, PositionMultiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief position offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief position offset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionOffset = { "PositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsArm, PositionOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmLengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ElbowRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_ArmRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewProp_PositionOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsArm",
		sizeof(FManusChainSettingsArm),
		alignof(FManusChainSettingsArm),
		Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsArm()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsArm.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder;
class UScriptStruct* FManusChainSettingsShoulder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsShoulder, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsShoulder"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsShoulder>()
{
	return FManusChainSettingsShoulder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrugOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrugOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShrugMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShrugMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsShoulder>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief should forward offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief should forward offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardOffset = { "ForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsShoulder, ForwardOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugOffset_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief shoulder shrug offset\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief shoulder shrug offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugOffset = { "ShrugOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsShoulder, ShrugOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardMultiplier_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief shoulder forward scaler\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief shoulder forward scaler" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardMultiplier = { "ForwardMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsShoulder, ForwardMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugMultiplier_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief shoulder shrug scaler\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief shoulder shrug scaler" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugMultiplier = { "ShrugMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsShoulder, ShrugMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ForwardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewProp_ShrugMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsShoulder",
		sizeof(FManusChainSettingsShoulder),
		alignof(FManusChainSettingsShoulder),
		Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsShoulder()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger;
class UScriptStruct* FManusChainSettingsFinger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsFinger, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsFinger"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsFinger>()
{
	return FManusChainSettingsFinger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseLeafAtEnd_MetaData[];
#endif
		static void NewProp_UseLeafAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLeafAtEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetacarpalBoneId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MetacarpalBoneId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandChainId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HandChainId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsFinger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief use finger leaf at end\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief use finger leaf at end" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd_SetBit(void* Obj)
	{
		((FManusChainSettingsFinger*)Obj)->UseLeafAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd = { "UseLeafAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusChainSettingsFinger), &Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_MetacarpalBoneId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief bone id\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief bone id" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_MetacarpalBoneId = { "MetacarpalBoneId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsFinger, MetacarpalBoneId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_MetacarpalBoneId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_MetacarpalBoneId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_HandChainId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief parent hand id\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief parent hand id" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_HandChainId = { "HandChainId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsFinger, HandChainId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_HandChainId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_HandChainId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_UseLeafAtEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_MetacarpalBoneId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewProp_HandChainId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsFinger",
		sizeof(FManusChainSettingsFinger),
		alignof(FManusChainSettingsFinger),
		Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsFinger()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsHand;
class UScriptStruct* FManusChainSettingsHand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsHand, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsHand"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsHand>()
{
	return FManusChainSettingsHand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FingerChainIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FingerChainIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FingerChainIds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandMotion_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandMotion_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsHand>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds_Inner = { "FingerChainIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief finger chain id's connected to this finger\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief finger chain id's connected to this finger" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds = { "FingerChainIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsHand, FingerChainIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief type of handmotion\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief type of handmotion" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion = { "HandMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsHand, HandMotion), Z_Construct_UEnum_Manus_EManusHandMotion, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion_MetaData)) }; // 3845795072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_FingerChainIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewProp_HandMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsHand",
		sizeof(FManusChainSettingsHand),
		alignof(FManusChainSettingsHand),
		Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsHand()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsHand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot;
class UScriptStruct* FManusChainSettingsFoot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingsFoot, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingsFoot"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingsFoot>()
{
	return FManusChainSettingsFoot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ToeChainIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToeChainIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToeChainIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingsFoot>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds_Inner = { "ToeChainIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief toe Chain ID's connected tot his foot\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief toe Chain ID's connected tot his foot" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds = { "ToeChainIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingsFoot, ToeChainIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewProp_ToeChainIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingsFoot",
		sizeof(FManusChainSettingsFoot),
		alignof(FManusChainSettingsFoot),
		Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingsFoot()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettingToe;
class UScriptStruct* FManusChainSettingToe::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettingToe.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettingToe.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettingToe, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettingToe"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettingToe.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettingToe>()
{
	return FManusChainSettingToe::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettingToe_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootChainId_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FootChainId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseLeafAtEnd_MetaData[];
#endif
		static void NewProp_UseLeafAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLeafAtEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettingToe>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_FootChainId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief parent foot id\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief parent foot id" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_FootChainId = { "FootChainId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettingToe, FootChainId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_FootChainId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_FootChainId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief use the leaf at the end of the toe\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief use the leaf at the end of the toe" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd_SetBit(void* Obj)
	{
		((FManusChainSettingToe*)Obj)->UseLeafAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd = { "UseLeafAtEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusChainSettingToe), &Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_FootChainId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewProp_UseLeafAtEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettingToe",
		sizeof(FManusChainSettingToe),
		alignof(FManusChainSettingToe),
		Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettingToe()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettingToe.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettingToe.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettingToe.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSettings;
class UScriptStruct* FManusChainSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSettings, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSettings"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSettings.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSettings>()
{
	return FManusChainSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_UsedSettings_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UsedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Leg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Neck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Neck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Arm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Arm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shoulder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finger_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Finger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Foot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Foot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Toe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Toe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief which setting is used\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief which setting is used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings = { "UsedSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, UsedSettings), Z_Construct_UEnum_Manus_EManusChainType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings_MetaData)) }; // 1463379326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief pelvis settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief pelvis settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Pelvis), Z_Construct_UScriptStruct_FManusChainSettingsPelvis, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Pelvis_MetaData)) }; // 846656555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Leg_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief leg settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief leg settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Leg = { "Leg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Leg), Z_Construct_UScriptStruct_FManusChainSettingsLeg, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Leg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Leg_MetaData)) }; // 3982829159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief spine settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief spine settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Spine), Z_Construct_UScriptStruct_FManusChainSettingsSpine, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Spine_MetaData)) }; // 1979297726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Neck_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief neck settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief neck settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Neck = { "Neck", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Neck), Z_Construct_UScriptStruct_FManusChainSettingsNeck, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Neck_MetaData)) }; // 743555859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief head settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief head settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Head), Z_Construct_UScriptStruct_FManusChainSettingsHead, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Head_MetaData)) }; // 3544197438
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Arm_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief arm settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief arm settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Arm = { "Arm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Arm), Z_Construct_UScriptStruct_FManusChainSettingsArm, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Arm_MetaData)) }; // 2825140159
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Shoulder_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief shoulder settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief shoulder settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Shoulder = { "Shoulder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Shoulder), Z_Construct_UScriptStruct_FManusChainSettingsShoulder, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Shoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Shoulder_MetaData)) }; // 2229061274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Finger_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief finger settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief finger settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Finger = { "Finger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Finger), Z_Construct_UScriptStruct_FManusChainSettingsFinger, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Finger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Finger_MetaData)) }; // 2078513492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Hand_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief hand settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief hand settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Hand), Z_Construct_UScriptStruct_FManusChainSettingsHand, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Hand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Hand_MetaData)) }; // 4150656292
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Foot_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief foot settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief foot settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Foot = { "Foot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Foot), Z_Construct_UScriptStruct_FManusChainSettingsFoot, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Foot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Foot_MetaData)) }; // 3572474649
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Toe_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief toe settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief toe settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Toe = { "Toe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSettings, Toe), Z_Construct_UScriptStruct_FManusChainSettingToe, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Toe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Toe_MetaData)) }; // 888115455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_UsedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Leg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Spine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Neck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Arm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Shoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Finger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Hand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Foot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewProp_Toe,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSettings",
		sizeof(FManusChainSettings),
		alignof(FManusChainSettings),
		Z_Construct_UScriptStruct_FManusChainSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSettings.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusChainSetup;
class UScriptStruct* FManusChainSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusChainSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusChainSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusChainSetup, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusChainSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ManusChainSetup.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusChainSetup>()
{
	return FManusChainSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusChainSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DataIndex;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NodeIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeIds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Side_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Side_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Side;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief The basic chain from which a skeleton is built\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief The basic chain from which a skeleton is built" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusChainSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Chain ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Chain ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief chain type\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief chain type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, Type), Z_Construct_UEnum_Manus_EManusChainType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type_MetaData)) }; // 1463379326
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief chain data type\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief chain data type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, DataType), Z_Construct_UEnum_Manus_EManusChainType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType_MetaData)) }; // 1463379326
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataIndex_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief data index\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief data index" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, DataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataIndex_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds_Inner = { "NodeIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief connected node id's\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief connected node id's" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds = { "NodeIds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, NodeIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief settings\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, Settings), Z_Construct_UScriptStruct_FManusChainSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Settings_MetaData)) }; // 2665660860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief side of chain\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief side of chain" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side = { "Side", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusChainSetup, Side), Z_Construct_UEnum_Manus_EManusSide, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side_MetaData)) }; // 2218266575
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusChainSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_DataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_NodeIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewProp_Side,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusChainSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusChainSetup",
		sizeof(FManusChainSetup),
		alignof(FManusChainSetup),
		Z_Construct_UScriptStruct_FManusChainSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusChainSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusChainSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusChainSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusChainSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusChainSetup.InnerSingleton, Z_Construct_UScriptStruct_FManusChainSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusChainSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData;
class UScriptStruct* FManusSkeletonTargetUserData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusSkeletonTargetUserData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusSkeletonTargetUserData>()
{
	return FManusSkeletonTargetUserData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Stores the information regarding the user data used to animate the skeleton.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Stores the information regarding the user data used to animate the skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusSkeletonTargetUserData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewProp_userID_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewProp_userID = { "userID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonTargetUserData, userID), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewProp_userID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewProp_userID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewProp_userID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusSkeletonTargetUserData",
		sizeof(FManusSkeletonTargetUserData),
		alignof(FManusSkeletonTargetUserData),
		Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.InnerSingleton, Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData;
class UScriptStruct* FManusSkeletonTargetUserIndexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusSkeletonTargetUserIndexData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusSkeletonTargetUserIndexData>()
{
	return FManusSkeletonTargetUserIndexData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_userIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_userIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Stores the information regarding the user index data used to animate the skeleton.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Stores the information regarding the user index data used to animate the skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusSkeletonTargetUserIndexData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewProp_userIndex_MetaData[] = {
		{ "Category", "Manus" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewProp_userIndex = { "userIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonTargetUserIndexData, userIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewProp_userIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewProp_userIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewProp_userIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusSkeletonTargetUserIndexData",
		sizeof(FManusSkeletonTargetUserIndexData),
		alignof(FManusSkeletonTargetUserIndexData),
		Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.InnerSingleton, Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData;
class UScriptStruct* FManusSkeletonTargetAnimationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusSkeletonTargetAnimationData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusSkeletonTargetAnimationData>()
{
	return FManusSkeletonTargetAnimationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Stores the information regarding the animation data used to animate the skeleton.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Stores the information regarding the animation data used to animate the skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusSkeletonTargetAnimationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonTargetAnimationData, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewProp_id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewProp_id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusSkeletonTargetAnimationData",
		sizeof(FManusSkeletonTargetAnimationData),
		alignof(FManusSkeletonTargetAnimationData),
		Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.InnerSingleton, Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData;
class UScriptStruct* FManusSkeletonTargetGloveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusSkeletonTargetGloveData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusSkeletonTargetGloveData>()
{
	return FManusSkeletonTargetGloveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gloveID_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_gloveID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Stores the information regarding the glove data used to animate the skeleton.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Stores the information regarding the glove data used to animate the skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusSkeletonTargetGloveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewProp_gloveID_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewProp_gloveID = { "gloveID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonTargetGloveData, gloveID), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewProp_gloveID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewProp_gloveID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewProp_gloveID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusSkeletonTargetGloveData",
		sizeof(FManusSkeletonTargetGloveData),
		alignof(FManusSkeletonTargetGloveData),
		Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.InnerSingleton, Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusSkeletonSetup;
class UScriptStruct* FManusSkeletonSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusSkeletonSetup, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusSkeletonSetup"));
	}
	return Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusSkeletonSetup>()
{
	return FManusSkeletonSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleToTarget_MetaData[];
#endif
		static void NewProp_ScaleToTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEndPointApproximations_MetaData[];
#endif
		static void NewProp_UseEndPointApproximations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEndPointApproximations;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonTargetUserId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SkeletonTargetUserId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonTargetAnimationId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletonTargetAnimationId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGloveId_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SkeletonGloveId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief All the skeleton setup that can be sent or received.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief All the skeleton setup that can be sent or received." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusSkeletonSetup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief skeleton ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief skeleton ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief skeleton type\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief skeleton type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, Type), Z_Construct_UEnum_Manus_EManusSkeletonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type_MetaData)) }; // 1191863826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief scale it to target\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief scale it to target" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget_SetBit(void* Obj)
	{
		((FManusSkeletonSetup*)Obj)->ScaleToTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget = { "ScaleToTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusSkeletonSetup), &Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief pinch correction\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief pinch correction" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations_SetBit(void* Obj)
	{
		((FManusSkeletonSetup*)Obj)->UseEndPointApproximations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations = { "UseEndPointApproximations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusSkeletonSetup), &Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief type of animation data is being targeted.\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief type of animation data is being targeted." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, TargetType), Z_Construct_UEnum_Manus_EManusSkeletonTargetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType_MetaData)) }; // 3368520946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetUserId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief user id for the skeleton to use for animation\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief user id for the skeleton to use for animation" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetUserId = { "SkeletonTargetUserId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, SkeletonTargetUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetUserId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetAnimationId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief type of animation for skeleton\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief type of animation for skeleton" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetAnimationId = { "SkeletonTargetAnimationId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, SkeletonTargetAnimationId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetAnimationId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetAnimationId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonGloveId_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief glove id being used as input data\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief glove id being used as input data" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonGloveId = { "SkeletonGloveId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, SkeletonGloveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonGloveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonGloveId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief name of skeleton\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief name of skeleton" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusSkeletonSetup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_ScaleToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_UseEndPointApproximations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_TargetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetUserId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonTargetAnimationId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_SkeletonGloveId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusSkeletonSetup",
		sizeof(FManusSkeletonSetup),
		alignof(FManusSkeletonSetup),
		Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusSkeletonSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.InnerSingleton, Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusSkeletonSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManusErgonomicsData;
class UScriptStruct* FManusErgonomicsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManusErgonomicsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManusErgonomicsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManusErgonomicsData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("ManusErgonomicsData"));
	}
	return Z_Registration_Info_UScriptStruct_ManusErgonomicsData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FManusErgonomicsData>()
{
	return FManusErgonomicsData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManusErgonomicsData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsUserID_MetaData[];
#endif
		static void NewProp_IsUserID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsUserID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief All the skeleton setup that can be sent or received.\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief All the skeleton setup that can be sent or received." },
	};
#endif
	void* Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManusErgonomicsData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief skeleton ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief skeleton ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusErgonomicsData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief skeleton ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief skeleton ID" },
	};
#endif
	void Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID_SetBit(void* Obj)
	{
		((FManusErgonomicsData*)Obj)->IsUserID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID = { "IsUserID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FManusErgonomicsData), &Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief skeleton ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief skeleton ID" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FManusErgonomicsData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_IsUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"ManusErgonomicsData",
		sizeof(FManusErgonomicsData),
		alignof(FManusErgonomicsData),
		Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManusErgonomicsData()
	{
		if (!Z_Registration_Info_UScriptStruct_ManusErgonomicsData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManusErgonomicsData.InnerSingleton, Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManusErgonomicsData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GestureLandscapeData;
class UScriptStruct* FGestureLandscapeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GestureLandscapeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GestureLandscapeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGestureLandscapeData, (UObject*)Z_Construct_UPackage__Script_Manus(), TEXT("GestureLandscapeData"));
	}
	return Z_Registration_Info_UScriptStruct_GestureLandscapeData.OuterSingleton;
}
template<> MANUS_API UScriptStruct* StaticStruct<FGestureLandscapeData>()
{
	return FGestureLandscapeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGestureLandscapeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief Contains information about a gesture\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief Contains information about a gesture" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGestureLandscapeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief gesture ID\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief gesture ID" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGestureLandscapeData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief gesture name\n" },
		{ "ModuleRelativePath", "Public/ManusBlueprintTypes.h" },
		{ "ToolTip", "@brief gesture name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGestureLandscapeData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
		nullptr,
		&NewStructOps,
		"GestureLandscapeData",
		sizeof(FGestureLandscapeData),
		alignof(FGestureLandscapeData),
		Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGestureLandscapeData()
	{
		if (!Z_Registration_Info_UScriptStruct_GestureLandscapeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GestureLandscapeData.InnerSingleton, Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GestureLandscapeData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::EnumInfo[] = {
		{ EManusMotionCaptureType_StaticEnum, TEXT("EManusMotionCaptureType"), &Z_Registration_Info_UEnum_EManusMotionCaptureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1997310280U) },
		{ EManusGloveType_StaticEnum, TEXT("EManusGloveType"), &Z_Registration_Info_UEnum_EManusGloveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1054561735U) },
		{ EManusHandType_StaticEnum, TEXT("EManusHandType"), &Z_Registration_Info_UEnum_EManusHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3298345868U) },
		{ EManusSide_StaticEnum, TEXT("EManusSide"), &Z_Registration_Info_UEnum_EManusSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2218266575U) },
		{ EManusSkeletonType_StaticEnum, TEXT("EManusSkeletonType"), &Z_Registration_Info_UEnum_EManusSkeletonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1191863826U) },
		{ EManusSkeletonTargetType_StaticEnum, TEXT("EManusSkeletonTargetType"), &Z_Registration_Info_UEnum_EManusSkeletonTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368520946U) },
		{ EManusNodeSettingsFlag_StaticEnum, TEXT("EManusNodeSettingsFlag"), &Z_Registration_Info_UEnum_EManusNodeSettingsFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2981608633U) },
		{ EManusNodeType_StaticEnum, TEXT("EManusNodeType"), &Z_Registration_Info_UEnum_EManusNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 803938907U) },
		{ EManusChainType_StaticEnum, TEXT("EManusChainType"), &Z_Registration_Info_UEnum_EManusChainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1463379326U) },
		{ EManusHandMotion_StaticEnum, TEXT("EManusHandMotion"), &Z_Registration_Info_UEnum_EManusHandMotion, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3845795072U) },
		{ EManusRet_StaticEnum, TEXT("EManusRet"), &Z_Registration_Info_UEnum_EManusRet, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 578466555U) },
		{ EManusTrackingBodyPart_StaticEnum, TEXT("EManusTrackingBodyPart"), &Z_Registration_Info_UEnum_EManusTrackingBodyPart, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1293017398U) },
		{ EManusFingerName_StaticEnum, TEXT("EManusFingerName"), &Z_Registration_Info_UEnum_EManusFingerName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 910923221U) },
		{ EManusTrackingDeviceType_StaticEnum, TEXT("EManusTrackingDeviceType"), &Z_Registration_Info_UEnum_EManusTrackingDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3523570850U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::ScriptStructInfo[] = {
		{ FManusBone::StaticStruct, Z_Construct_UScriptStruct_FManusBone_Statics::NewStructOps, TEXT("ManusBone"), &Z_Registration_Info_UScriptStruct_ManusBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusBone), 1899289221U) },
		{ FManusMetaSkeleton::StaticStruct, Z_Construct_UScriptStruct_FManusMetaSkeleton_Statics::NewStructOps, TEXT("ManusMetaSkeleton"), &Z_Registration_Info_UScriptStruct_ManusMetaSkeleton, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusMetaSkeleton), 4277610977U) },
		{ FManusTracker::StaticStruct, Z_Construct_UScriptStruct_FManusTracker_Statics::NewStructOps, TEXT("ManusTracker"), &Z_Registration_Info_UScriptStruct_ManusTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusTracker), 2802365530U) },
		{ FManusNodeSettingsIK::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSettingsIK_Statics::NewStructOps, TEXT("ManusNodeSettingsIK"), &Z_Registration_Info_UScriptStruct_ManusNodeSettingsIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSettingsIK), 4104840253U) },
		{ FManusNodeSettingsFoot::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSettingsFoot_Statics::NewStructOps, TEXT("ManusNodeSettingsFoot"), &Z_Registration_Info_UScriptStruct_ManusNodeSettingsFoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSettingsFoot), 4068081187U) },
		{ FManusNodeSettingsRotationOffset::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSettingsRotationOffset_Statics::NewStructOps, TEXT("ManusNodeSettingsRotationOffset"), &Z_Registration_Info_UScriptStruct_ManusNodeSettingsRotationOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSettingsRotationOffset), 1863598046U) },
		{ FManusNodeSettingsLeaf::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSettingsLeaf_Statics::NewStructOps, TEXT("ManusNodeSettingsLeaf"), &Z_Registration_Info_UScriptStruct_ManusNodeSettingsLeaf, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSettingsLeaf), 2068838142U) },
		{ FManusNodeSettings::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSettings_Statics::NewStructOps, TEXT("ManusNodeSettings"), &Z_Registration_Info_UScriptStruct_ManusNodeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSettings), 498670245U) },
		{ FManusNodeSetup::StaticStruct, Z_Construct_UScriptStruct_FManusNodeSetup_Statics::NewStructOps, TEXT("ManusNodeSetup"), &Z_Registration_Info_UScriptStruct_ManusNodeSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusNodeSetup), 527983951U) },
		{ FManusChainSettingsPelvis::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsPelvis_Statics::NewStructOps, TEXT("ManusChainSettingsPelvis"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsPelvis, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsPelvis), 846656555U) },
		{ FManusChainSettingsLeg::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsLeg_Statics::NewStructOps, TEXT("ManusChainSettingsLeg"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsLeg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsLeg), 3982829159U) },
		{ FManusChainSettingsSpine::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsSpine_Statics::NewStructOps, TEXT("ManusChainSettingsSpine"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsSpine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsSpine), 1979297726U) },
		{ FManusChainSettingsNeck::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsNeck_Statics::NewStructOps, TEXT("ManusChainSettingsNeck"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsNeck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsNeck), 743555859U) },
		{ FManusChainSettingsHead::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsHead_Statics::NewStructOps, TEXT("ManusChainSettingsHead"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsHead, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsHead), 3544197438U) },
		{ FManusChainSettingsArm::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsArm_Statics::NewStructOps, TEXT("ManusChainSettingsArm"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsArm, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsArm), 2825140159U) },
		{ FManusChainSettingsShoulder::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsShoulder_Statics::NewStructOps, TEXT("ManusChainSettingsShoulder"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsShoulder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsShoulder), 2229061274U) },
		{ FManusChainSettingsFinger::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsFinger_Statics::NewStructOps, TEXT("ManusChainSettingsFinger"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsFinger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsFinger), 2078513492U) },
		{ FManusChainSettingsHand::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsHand_Statics::NewStructOps, TEXT("ManusChainSettingsHand"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsHand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsHand), 4150656292U) },
		{ FManusChainSettingsFoot::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingsFoot_Statics::NewStructOps, TEXT("ManusChainSettingsFoot"), &Z_Registration_Info_UScriptStruct_ManusChainSettingsFoot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingsFoot), 3572474649U) },
		{ FManusChainSettingToe::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettingToe_Statics::NewStructOps, TEXT("ManusChainSettingToe"), &Z_Registration_Info_UScriptStruct_ManusChainSettingToe, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettingToe), 888115455U) },
		{ FManusChainSettings::StaticStruct, Z_Construct_UScriptStruct_FManusChainSettings_Statics::NewStructOps, TEXT("ManusChainSettings"), &Z_Registration_Info_UScriptStruct_ManusChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSettings), 2665660860U) },
		{ FManusChainSetup::StaticStruct, Z_Construct_UScriptStruct_FManusChainSetup_Statics::NewStructOps, TEXT("ManusChainSetup"), &Z_Registration_Info_UScriptStruct_ManusChainSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusChainSetup), 108760512U) },
		{ FManusSkeletonTargetUserData::StaticStruct, Z_Construct_UScriptStruct_FManusSkeletonTargetUserData_Statics::NewStructOps, TEXT("ManusSkeletonTargetUserData"), &Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusSkeletonTargetUserData), 1938313232U) },
		{ FManusSkeletonTargetUserIndexData::StaticStruct, Z_Construct_UScriptStruct_FManusSkeletonTargetUserIndexData_Statics::NewStructOps, TEXT("ManusSkeletonTargetUserIndexData"), &Z_Registration_Info_UScriptStruct_ManusSkeletonTargetUserIndexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusSkeletonTargetUserIndexData), 1699638341U) },
		{ FManusSkeletonTargetAnimationData::StaticStruct, Z_Construct_UScriptStruct_FManusSkeletonTargetAnimationData_Statics::NewStructOps, TEXT("ManusSkeletonTargetAnimationData"), &Z_Registration_Info_UScriptStruct_ManusSkeletonTargetAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusSkeletonTargetAnimationData), 2477426409U) },
		{ FManusSkeletonTargetGloveData::StaticStruct, Z_Construct_UScriptStruct_FManusSkeletonTargetGloveData_Statics::NewStructOps, TEXT("ManusSkeletonTargetGloveData"), &Z_Registration_Info_UScriptStruct_ManusSkeletonTargetGloveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusSkeletonTargetGloveData), 3569335460U) },
		{ FManusSkeletonSetup::StaticStruct, Z_Construct_UScriptStruct_FManusSkeletonSetup_Statics::NewStructOps, TEXT("ManusSkeletonSetup"), &Z_Registration_Info_UScriptStruct_ManusSkeletonSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusSkeletonSetup), 2908045326U) },
		{ FManusErgonomicsData::StaticStruct, Z_Construct_UScriptStruct_FManusErgonomicsData_Statics::NewStructOps, TEXT("ManusErgonomicsData"), &Z_Registration_Info_UScriptStruct_ManusErgonomicsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManusErgonomicsData), 2516105554U) },
		{ FGestureLandscapeData::StaticStruct, Z_Construct_UScriptStruct_FGestureLandscapeData_Statics::NewStructOps, TEXT("GestureLandscapeData"), &Z_Registration_Info_UScriptStruct_GestureLandscapeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGestureLandscapeData), 617913397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_3612734916(TEXT("/Script/Manus"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
