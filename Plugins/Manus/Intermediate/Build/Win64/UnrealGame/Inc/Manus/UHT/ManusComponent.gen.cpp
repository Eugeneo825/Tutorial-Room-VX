// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ManusComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManusComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MANUS_API UClass* Z_Construct_UClass_UManusComponent();
	MANUS_API UClass* Z_Construct_UClass_UManusComponent_NoRegister();
	MANUS_API UClass* Z_Construct_UClass_UManusSkeleton_NoRegister();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusHandType();
	MANUS_API UEnum* Z_Construct_UEnum_Manus_EManusRet();
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature();
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature();
	MANUS_API UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Manus();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics
	{
		struct ManusComponent_eventManusComponentGestureStartedSignature_Parms
		{
			EManusHandType HandType;
			FName GestureName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GestureName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureStartedSignature_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureStartedSignature_Parms, GestureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::NewProp_GestureName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @brief Delegate called every frame for each gesture that just started. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Delegate called every frame for each gesture that just started." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "ManusComponentGestureStartedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::ManusComponent_eventManusComponentGestureStartedSignature_Parms), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UManusComponent::FManusComponentGestureStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureStartedSignature, EManusHandType HandType, FName GestureName)
{
	struct ManusComponent_eventManusComponentGestureStartedSignature_Parms
	{
		EManusHandType HandType;
		FName GestureName;
	};
	ManusComponent_eventManusComponentGestureStartedSignature_Parms Parms;
	Parms.HandType=HandType;
	Parms.GestureName=GestureName;
	ManusComponentGestureStartedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics
	{
		struct ManusComponent_eventManusComponentGestureOnGoingSignature_Parms
		{
			EManusHandType HandType;
			FName GestureName;
			float Duration;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GestureName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureOnGoingSignature_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureOnGoingSignature_Parms, GestureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureOnGoingSignature_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_GestureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @brief Delegate called every frame for each on-going gesture. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Delegate called every frame for each on-going gesture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "ManusComponentGestureOnGoingSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::ManusComponent_eventManusComponentGestureOnGoingSignature_Parms), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UManusComponent::FManusComponentGestureOnGoingSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureOnGoingSignature, EManusHandType HandType, FName GestureName, float Duration)
{
	struct ManusComponent_eventManusComponentGestureOnGoingSignature_Parms
	{
		EManusHandType HandType;
		FName GestureName;
		float Duration;
	};
	ManusComponent_eventManusComponentGestureOnGoingSignature_Parms Parms;
	Parms.HandType=HandType;
	Parms.GestureName=GestureName;
	Parms.Duration=Duration;
	ManusComponentGestureOnGoingSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics
	{
		struct ManusComponent_eventManusComponentGestureFinishedSignature_Parms
		{
			EManusHandType HandType;
			FName GestureName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_HandType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HandType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GestureName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureFinishedSignature_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_GestureName = { "GestureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventManusComponentGestureFinishedSignature_Parms, GestureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::NewProp_GestureName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @brief Delegate called every frame for each gesture that just finished. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Delegate called every frame for each gesture that just finished." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "ManusComponentGestureFinishedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::ManusComponent_eventManusComponentGestureFinishedSignature_Parms), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UManusComponent::FManusComponentGestureFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureFinishedSignature, EManusHandType HandType, FName GestureName)
{
	struct ManusComponent_eventManusComponentGestureFinishedSignature_Parms
	{
		EManusHandType HandType;
		FName GestureName;
	};
	ManusComponent_eventManusComponentGestureFinishedSignature_Parms Parms;
	Parms.HandType=HandType;
	Parms.GestureName=GestureName;
	ManusComponentGestureFinishedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UManusComponent::execIsLocallyOwned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyOwned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execVibrateManusGloveFingersForSkeleton)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_SkeletonId);
		P_GET_ENUM(EManusHandType,Z_Param_HandType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThumbPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IndexPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MiddlePower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RingPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PinkyPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=P_THIS->VibrateManusGloveFingersForSkeleton(Z_Param_SkeletonId,EManusHandType(Z_Param_HandType),Z_Param_ThumbPower,Z_Param_IndexPower,Z_Param_MiddlePower,Z_Param_RingPower,Z_Param_PinkyPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execVibrateManusGloveFingers)
	{
		P_GET_ENUM(EManusHandType,Z_Param_HandType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThumbPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IndexPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MiddlePower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RingPower);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PinkyPower);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EManusRet*)Z_Param__Result=P_THIS->VibrateManusGloveFingers(EManusHandType(Z_Param_HandType),Z_Param_ThumbPower,Z_Param_IndexPower,Z_Param_MiddlePower,Z_Param_RingPower,Z_Param_PinkyPower);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execGetLiveLinkSubjectName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLiveLinkSubjectName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execGetManusSkeletonId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetManusSkeletonId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UManusComponent::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UManusComponent::StaticRegisterNativesUManusComponent()
	{
		UClass* Class = UManusComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLiveLinkSubjectName", &UManusComponent::execGetLiveLinkSubjectName },
			{ "GetManusSkeletonId", &UManusComponent::execGetManusSkeletonId },
			{ "IsLocallyControlled", &UManusComponent::execIsLocallyControlled },
			{ "IsLocallyOwned", &UManusComponent::execIsLocallyOwned },
			{ "OnHit", &UManusComponent::execOnHit },
			{ "VibrateManusGloveFingers", &UManusComponent::execVibrateManusGloveFingers },
			{ "VibrateManusGloveFingersForSkeleton", &UManusComponent::execVibrateManusGloveFingersForSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics
	{
		struct ManusComponent_eventGetLiveLinkSubjectName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventGetLiveLinkSubjectName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Returns the name of the Live Link subject of this Manus component.\n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Returns the name of the Live Link subject of this Manus component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "GetLiveLinkSubjectName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::ManusComponent_eventGetLiveLinkSubjectName_Parms), Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics
	{
		struct ManusComponent_eventGetManusSkeletonId_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventGetManusSkeletonId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief get the skeleton id\n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief get the skeleton id" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "GetManusSkeletonId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::ManusComponent_eventGetManusSkeletonId_Parms), Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_GetManusSkeletonId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_GetManusSkeletonId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics
	{
		struct ManusComponent_eventIsLocallyControlled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManusComponent_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusComponent_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Returns whether this component is in a locally controlled Pawn.\n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Returns whether this component is in a locally controlled Pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::ManusComponent_eventIsLocallyControlled_Parms), Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics
	{
		struct ManusComponent_eventIsLocallyOwned_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ManusComponent_eventIsLocallyOwned_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ManusComponent_eventIsLocallyOwned_Parms), &Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Returns whether this component is in a locally owned Pawn.\n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Returns whether this component is in a locally owned Pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "IsLocallyOwned", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::ManusComponent_eventIsLocallyOwned_Parms), Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_IsLocallyOwned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_IsLocallyOwned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_OnHit_Statics
	{
		struct ManusComponent_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_HitComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_OnHit_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// @brief Called when the component is hit.\n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Called when the component is hit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_OnHit_Statics::ManusComponent_eventOnHit_Parms), Z_Construct_UFunction_UManusComponent_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics
	{
		struct ManusComponent_eventVibrateManusGloveFingers_Parms
		{
			EManusHandType HandType;
			float ThumbPower;
			float IndexPower;
			float MiddlePower;
			float RingPower;
			float PinkyPower;
			EManusRet ReturnValue;
		};
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ThumbPower = { "ThumbPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, ThumbPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_IndexPower = { "IndexPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, IndexPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_MiddlePower = { "MiddlePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, MiddlePower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_RingPower = { "RingPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, RingPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_PinkyPower = { "PinkyPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, PinkyPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingers_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ThumbPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_IndexPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_MiddlePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_RingPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_PinkyPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Tell the Manus glove of the given hand used by this Manus component to vibrate its fingers. Only works with Haptics Gloves.\n/// @param  HandType\x09\x09The hand type of the glove to look for.\n/// @param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n/// @param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n/// @param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n/// @param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n/// @param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n/// @return If the glove fingers were succesfully told to vibrate.\n" },
		{ "CPP_Default_IndexPower", "1.000000" },
		{ "CPP_Default_MiddlePower", "1.000000" },
		{ "CPP_Default_PinkyPower", "1.000000" },
		{ "CPP_Default_RingPower", "1.000000" },
		{ "CPP_Default_ThumbPower", "1.000000" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Tell the Manus glove of the given hand used by this Manus component to vibrate its fingers. Only works with Haptics Gloves.\n@param  HandType              The hand type of the glove to look for.\n@param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n@param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n@param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n@param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n@param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n@return If the glove fingers were succesfully told to vibrate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "VibrateManusGloveFingers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::ManusComponent_eventVibrateManusGloveFingers_Parms), Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics
	{
		struct ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms
		{
			int64 SkeletonId;
			EManusHandType HandType;
			float ThumbPower;
			float IndexPower;
			float MiddlePower;
			float RingPower;
			float PinkyPower;
			EManusRet ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SkeletonId;
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
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_SkeletonId = { "SkeletonId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, SkeletonId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_HandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_HandType = { "HandType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, HandType), Z_Construct_UEnum_Manus_EManusHandType, METADATA_PARAMS(nullptr, 0) }; // 3298345868
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ThumbPower = { "ThumbPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, ThumbPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_IndexPower = { "IndexPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, IndexPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_MiddlePower = { "MiddlePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, MiddlePower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_RingPower = { "RingPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, RingPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_PinkyPower = { "PinkyPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, PinkyPower), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms, ReturnValue), Z_Construct_UEnum_Manus_EManusRet, METADATA_PARAMS(nullptr, 0) }; // 578466555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_SkeletonId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_HandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_HandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ThumbPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_IndexPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_MiddlePower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_RingPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_PinkyPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Tell the Manus glove of the given hand used by this Manus component to vibrate its fingers. Only works with Haptics Gloves.\n/// @param  SkeletonId\x09The skeleton id of the glove to look for.\n/// @param  HandType\x09\x09The hand type of the glove to look for.\n/// @param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n/// @param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n/// @param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n/// @param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n/// @param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n/// @return If the glove fingers were succesfully told to vibrate.\n" },
		{ "CPP_Default_IndexPower", "1.000000" },
		{ "CPP_Default_MiddlePower", "1.000000" },
		{ "CPP_Default_PinkyPower", "1.000000" },
		{ "CPP_Default_RingPower", "1.000000" },
		{ "CPP_Default_ThumbPower", "1.000000" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Tell the Manus glove of the given hand used by this Manus component to vibrate its fingers. Only works with Haptics Gloves.\n@param  SkeletonId    The skeleton id of the glove to look for.\n@param  HandType              The hand type of the glove to look for.\n@param  ThumbPower   The strength of the vibration for the thumb, between 0.0 and 1.0.\n@param  IndexPower   The strength of the vibration for the index, between 0.0 and 1.0.\n@param  MiddlePower  The strength of the vibration for the middle finger, between 0.0 and 1.0.\n@param  RingPower    The strength of the vibration for the ring finger, between 0.0 and 1.0.\n@param  PinkyPower   The strength of the vibration for the pinky finger, between 0.0 and 1.0.\n@return If the glove fingers were succesfully told to vibrate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManusComponent, nullptr, "VibrateManusGloveFingersForSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::ManusComponent_eventVibrateManusGloveFingersForSkeleton_Parms), Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UManusComponent);
	UClass* Z_Construct_UClass_UManusComponent_NoRegister()
	{
		return UManusComponent::StaticClass();
	}
	struct Z_Construct_UClass_UManusComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureOnGoing_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureOnGoing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnGestureFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGestureFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManusSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFingerHaptics_MetaData[];
#endif
		static void NewProp_bFingerHaptics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFingerHaptics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandFingersCollisionVibratePowers_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftHandFingersCollisionVibratePowers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandFingersCollisionVibratePowers_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightHandFingersCollisionVibratePowers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManusReplicatorId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ManusReplicatorId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManusComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Manus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManusComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManusComponent_GetLiveLinkSubjectName, "GetLiveLinkSubjectName" }, // 3765573807
		{ &Z_Construct_UFunction_UManusComponent_GetManusSkeletonId, "GetManusSkeletonId" }, // 3509568421
		{ &Z_Construct_UFunction_UManusComponent_IsLocallyControlled, "IsLocallyControlled" }, // 33279804
		{ &Z_Construct_UFunction_UManusComponent_IsLocallyOwned, "IsLocallyOwned" }, // 1209818659
		{ &Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature, "ManusComponentGestureFinishedSignature__DelegateSignature" }, // 2329362811
		{ &Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature, "ManusComponentGestureOnGoingSignature__DelegateSignature" }, // 2444255017
		{ &Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature, "ManusComponentGestureStartedSignature__DelegateSignature" }, // 4886111
		{ &Z_Construct_UFunction_UManusComponent_OnHit, "OnHit" }, // 1102423745
		{ &Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingers, "VibrateManusGloveFingers" }, // 1110853311
		{ &Z_Construct_UFunction_UManusComponent_VibrateManusGloveFingersForSkeleton, "VibrateManusGloveFingersForSkeleton" }, // 106375046
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/// @brief A Skeletal Mesh component animated by a Manus Glove.\n" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "ManusComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@brief A Skeletal Mesh component animated by a Manus Glove." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureStarted_MetaData[] = {
		{ "Category", "Manus|Gestures" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureStarted = { "OnGestureStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusComponent, OnGestureStarted), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureStarted_MetaData)) }; // 4886111
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureOnGoing_MetaData[] = {
		{ "Category", "Manus|Gestures" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureOnGoing = { "OnGestureOnGoing", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusComponent, OnGestureOnGoing), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureOnGoingSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureOnGoing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureOnGoing_MetaData)) }; // 2444255017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureFinished_MetaData[] = {
		{ "Category", "Manus|Gestures" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureFinished = { "OnGestureFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusComponent, OnGestureFinished), Z_Construct_UDelegateFunction_UManusComponent_ManusComponentGestureFinishedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureFinished_MetaData)) }; // 2329362811
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusSkeleton_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief The Manus skeleton to use. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief The Manus skeleton to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusSkeleton = { "ManusSkeleton", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusComponent, ManusSkeleton), Z_Construct_UClass_UManusSkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics_MetaData[] = {
		{ "Category", "Manus" },
		{ "Comment", "/// @brief Whether to apply finger haptics on the Manus Gloves (only works with Haptic Gloves). \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Whether to apply finger haptics on the Manus Gloves (only works with Haptic Gloves)." },
	};
#endif
	void Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics_SetBit(void* Obj)
	{
		((UManusComponent*)Obj)->bFingerHaptics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics = { "bFingerHaptics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UManusComponent), &Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_LeftHandFingersCollisionVibratePowers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Manus.EManusFingerName" },
		{ "Comment", "/// @brief Vibrate powers coming from collision detection for each finger of the left hand. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Vibrate powers coming from collision detection for each finger of the left hand." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_LeftHandFingersCollisionVibratePowers = { "LeftHandFingersCollisionVibratePowers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LeftHandFingersCollisionVibratePowers, UManusComponent), nullptr, nullptr, STRUCT_OFFSET(UManusComponent, LeftHandFingersCollisionVibratePowers), METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_LeftHandFingersCollisionVibratePowers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_LeftHandFingersCollisionVibratePowers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_RightHandFingersCollisionVibratePowers_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Manus.EManusFingerName" },
		{ "Comment", "/// @brief Vibrate powers coming from collision detection for each finger of the right hand. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief Vibrate powers coming from collision detection for each finger of the right hand." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_RightHandFingersCollisionVibratePowers = { "RightHandFingersCollisionVibratePowers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RightHandFingersCollisionVibratePowers, UManusComponent), nullptr, nullptr, STRUCT_OFFSET(UManusComponent, RightHandFingersCollisionVibratePowers), METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_RightHandFingersCollisionVibratePowers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_RightHandFingersCollisionVibratePowers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusReplicatorId_MetaData[] = {
		{ "Comment", "/// @brief ID of the Manus replicator to be used with this Manus component. \n" },
		{ "ModuleRelativePath", "Public/ManusComponent.h" },
		{ "ToolTip", "@brief ID of the Manus replicator to be used with this Manus component." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusReplicatorId = { "ManusReplicatorId", nullptr, (EPropertyFlags)0x0010000000002020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UManusComponent, ManusReplicatorId), METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusReplicatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusReplicatorId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UManusComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureOnGoing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_OnGestureFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_bFingerHaptics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_LeftHandFingersCollisionVibratePowers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_RightHandFingersCollisionVibratePowers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UManusComponent_Statics::NewProp_ManusReplicatorId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManusComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManusComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UManusComponent_Statics::ClassParams = {
		&UManusComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UManusComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UManusComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManusComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManusComponent()
	{
		if (!Z_Registration_Info_UClass_UManusComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UManusComponent.OuterSingleton, Z_Construct_UClass_UManusComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UManusComponent.OuterSingleton;
	}
	template<> MANUS_API UClass* StaticClass<UManusComponent>()
	{
		return UManusComponent::StaticClass();
	}

	void UManusComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ManusSkeleton(TEXT("ManusSkeleton"));
		static const FName Name_ManusReplicatorId(TEXT("ManusReplicatorId"));

		const bool bIsValid = true
			&& Name_ManusSkeleton == ClassReps[(int32)ENetFields_Private::ManusSkeleton].Property->GetFName()
			&& Name_ManusReplicatorId == ClassReps[(int32)ENetFields_Private::ManusReplicatorId].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UManusComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManusComponent);
	UManusComponent::~UManusComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UManusComponent, UManusComponent::StaticClass, TEXT("UManusComponent"), &Z_Registration_Info_UClass_UManusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UManusComponent), 580422028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_2258953910(TEXT("/Script/Manus"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
