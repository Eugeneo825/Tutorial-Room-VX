// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManusComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
enum class EManusHandType : uint8;
enum class EManusRet : uint8;
struct FHitResult;
#ifdef MANUS_ManusComponent_generated_h
#error "ManusComponent.generated.h already included, missing '#pragma once' in ManusComponent.h"
#endif
#define MANUS_ManusComponent_generated_h

#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_99_DELEGATE \
static void FManusComponentGestureStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureStartedSignature, EManusHandType HandType, FName GestureName);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_104_DELEGATE \
static void FManusComponentGestureOnGoingSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureOnGoingSignature, EManusHandType HandType, FName GestureName, float Duration);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_109_DELEGATE \
static void FManusComponentGestureFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& ManusComponentGestureFinishedSignature, EManusHandType HandType, FName GestureName);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execVibrateManusGloveFingersForSkeleton); \
	DECLARE_FUNCTION(execVibrateManusGloveFingers); \
	DECLARE_FUNCTION(execGetLiveLinkSubjectName); \
	DECLARE_FUNCTION(execGetManusSkeletonId); \
	DECLARE_FUNCTION(execOnHit);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLocallyOwned); \
	DECLARE_FUNCTION(execIsLocallyControlled); \
	DECLARE_FUNCTION(execVibrateManusGloveFingersForSkeleton); \
	DECLARE_FUNCTION(execVibrateManusGloveFingers); \
	DECLARE_FUNCTION(execGetLiveLinkSubjectName); \
	DECLARE_FUNCTION(execGetManusSkeletonId); \
	DECLARE_FUNCTION(execOnHit);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_ACCESSORS
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManusComponent(); \
	friend struct Z_Construct_UClass_UManusComponent_Statics; \
public: \
	DECLARE_CLASS(UManusComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(UManusComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ManusSkeleton=NETFIELD_REP_START, \
		ManusReplicatorId, \
		NETFIELD_REP_END=ManusReplicatorId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUManusComponent(); \
	friend struct Z_Construct_UClass_UManusComponent_Statics; \
public: \
	DECLARE_CLASS(UManusComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(UManusComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ManusSkeleton=NETFIELD_REP_START, \
		ManusReplicatorId, \
		NETFIELD_REP_END=ManusReplicatorId	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManusComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManusComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManusComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManusComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManusComponent(UManusComponent&&); \
	NO_API UManusComponent(const UManusComponent&); \
public: \
	NO_API virtual ~UManusComponent();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManusComponent(UManusComponent&&); \
	NO_API UManusComponent(const UManusComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManusComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManusComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManusComponent) \
	NO_API virtual ~UManusComponent();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_16_PROLOG
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_INCLASS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUS_API UClass* StaticClass<class UManusComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
