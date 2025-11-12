// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManusBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
enum class EManusHandType : uint8;
enum class EManusRet : uint8;
struct FGestureLandscapeData;
struct FManusChainSetup;
struct FManusErgonomicsData;
struct FManusMetaSkeleton;
struct FManusNodeSetup;
struct FManusSkeletonSetup;
struct FManusTracker;
#ifdef MANUS_ManusBlueprintLibrary_generated_h
#error "ManusBlueprintLibrary.generated.h already included, missing '#pragma once' in ManusBlueprintLibrary.h"
#endif
#define MANUS_ManusBlueprintLibrary_generated_h

#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoesSkeletonHaveHaptics); \
	DECLARE_FUNCTION(execGetGloveIdForSkeleton); \
	DECLARE_FUNCTION(execIsGesturePastTreshold); \
	DECLARE_FUNCTION(execGetGloveRotationForSkeletonNode); \
	DECLARE_FUNCTION(execGetGestureId); \
	DECLARE_FUNCTION(execGetGestures); \
	DECLARE_FUNCTION(execSetGlovesUsingTrackers); \
	DECLARE_FUNCTION(execGetManusCoreIPs); \
	DECLARE_FUNCTION(execSetManusCoreIP); \
	DECLARE_FUNCTION(execSetAsClient); \
	DECLARE_FUNCTION(execGetGloveIdOfUser_UsingUserId); \
	DECLARE_FUNCTION(execGetGloveIdOfUser_UsingUserIndex); \
	DECLARE_FUNCTION(execGetErgonomics); \
	DECLARE_FUNCTION(execGetPlayerJoinRequestURL); \
	DECLARE_FUNCTION(execGetHandTrackerData); \
	DECLARE_FUNCTION(execUnloadSkeleton); \
	DECLARE_FUNCTION(execLoadSkeleton); \
	DECLARE_FUNCTION(execAddChainToSkeletonSetup); \
	DECLARE_FUNCTION(execAddNodeToSkeletonSetup); \
	DECLARE_FUNCTION(execCreateSkeletonSetup); \
	DECLARE_FUNCTION(execGetSkeletonData); \
	DECLARE_FUNCTION(execVibrateFingersForSkeleton); \
	DECLARE_FUNCTION(execVibrateFingers); \
	DECLARE_FUNCTION(execGetFirstHapticDongle); \
	DECLARE_FUNCTION(execGetIdsOfAvailableGloves); \
	DECLARE_FUNCTION(execConvertManusIdToString); \
	DECLARE_FUNCTION(execAssignTrackerToManusUser); \
	DECLARE_FUNCTION(execGetTrackerIds); \
	DECLARE_FUNCTION(execGetManusUsers); \
	DECLARE_FUNCTION(execSetManusActive);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoesSkeletonHaveHaptics); \
	DECLARE_FUNCTION(execGetGloveIdForSkeleton); \
	DECLARE_FUNCTION(execIsGesturePastTreshold); \
	DECLARE_FUNCTION(execGetGloveRotationForSkeletonNode); \
	DECLARE_FUNCTION(execGetGestureId); \
	DECLARE_FUNCTION(execGetGestures); \
	DECLARE_FUNCTION(execSetGlovesUsingTrackers); \
	DECLARE_FUNCTION(execGetManusCoreIPs); \
	DECLARE_FUNCTION(execSetManusCoreIP); \
	DECLARE_FUNCTION(execSetAsClient); \
	DECLARE_FUNCTION(execGetGloveIdOfUser_UsingUserId); \
	DECLARE_FUNCTION(execGetGloveIdOfUser_UsingUserIndex); \
	DECLARE_FUNCTION(execGetErgonomics); \
	DECLARE_FUNCTION(execGetPlayerJoinRequestURL); \
	DECLARE_FUNCTION(execGetHandTrackerData); \
	DECLARE_FUNCTION(execUnloadSkeleton); \
	DECLARE_FUNCTION(execLoadSkeleton); \
	DECLARE_FUNCTION(execAddChainToSkeletonSetup); \
	DECLARE_FUNCTION(execAddNodeToSkeletonSetup); \
	DECLARE_FUNCTION(execCreateSkeletonSetup); \
	DECLARE_FUNCTION(execGetSkeletonData); \
	DECLARE_FUNCTION(execVibrateFingersForSkeleton); \
	DECLARE_FUNCTION(execVibrateFingers); \
	DECLARE_FUNCTION(execGetFirstHapticDongle); \
	DECLARE_FUNCTION(execGetIdsOfAvailableGloves); \
	DECLARE_FUNCTION(execConvertManusIdToString); \
	DECLARE_FUNCTION(execAssignTrackerToManusUser); \
	DECLARE_FUNCTION(execGetTrackerIds); \
	DECLARE_FUNCTION(execGetManusUsers); \
	DECLARE_FUNCTION(execSetManusActive);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_ACCESSORS
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUManusBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UManusBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UManusBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(UManusBlueprintLibrary)


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUManusBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UManusBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UManusBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(UManusBlueprintLibrary)


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManusBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManusBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManusBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManusBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManusBlueprintLibrary(UManusBlueprintLibrary&&); \
	NO_API UManusBlueprintLibrary(const UManusBlueprintLibrary&); \
public: \
	NO_API virtual ~UManusBlueprintLibrary();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UManusBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UManusBlueprintLibrary(UManusBlueprintLibrary&&); \
	NO_API UManusBlueprintLibrary(const UManusBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UManusBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UManusBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UManusBlueprintLibrary) \
	NO_API virtual ~UManusBlueprintLibrary();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_14_PROLOG
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_INCLASS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUS_API UClass* StaticClass<class UManusBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
