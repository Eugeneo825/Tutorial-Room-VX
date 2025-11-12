// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ManusReplicator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FManusReplicatedData;
#ifdef MANUS_ManusReplicator_generated_h
#error "ManusReplicator.generated.h already included, missing '#pragma once' in ManusReplicator.h"
#endif
#define MANUS_ManusReplicator_generated_h

#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FManusReplicatedFrameData_Statics; \
	MANUS_API static class UScriptStruct* StaticStruct();


template<> MANUS_API UScriptStruct* StaticStruct<struct FManusReplicatedFrameData>();

#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FManusReplicatedData_Statics; \
	MANUS_API static class UScriptStruct* StaticStruct();


template<> MANUS_API UScriptStruct* StaticStruct<struct FManusReplicatedData>();

#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_SPARSE_DATA
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_RPC_WRAPPERS \
	virtual bool SendReplicatedDataToServer_Validate(FManusReplicatedData ); \
	virtual void SendReplicatedDataToServer_Implementation(FManusReplicatedData DataToReplicate); \
 \
	DECLARE_FUNCTION(execOnReplicatedDataReceivedFromServer); \
	DECLARE_FUNCTION(execSendReplicatedDataToServer);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SendReplicatedDataToServer_Validate(FManusReplicatedData ); \
	virtual void SendReplicatedDataToServer_Implementation(FManusReplicatedData DataToReplicate); \
 \
	DECLARE_FUNCTION(execOnReplicatedDataReceivedFromServer); \
	DECLARE_FUNCTION(execSendReplicatedDataToServer);


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_ACCESSORS
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManusReplicator(); \
	friend struct Z_Construct_UClass_AManusReplicator_Statics; \
public: \
	DECLARE_CLASS(AManusReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(AManusReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatorId=NETFIELD_REP_START, \
		ReplicatedData, \
		NETFIELD_REP_END=ReplicatedData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAManusReplicator(); \
	friend struct Z_Construct_UClass_AManusReplicator_Statics; \
public: \
	DECLARE_CLASS(AManusReplicator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manus"), NO_API) \
	DECLARE_SERIALIZER(AManusReplicator) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatorId=NETFIELD_REP_START, \
		ReplicatedData, \
		NETFIELD_REP_END=ReplicatedData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManusReplicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManusReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManusReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManusReplicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManusReplicator(AManusReplicator&&); \
	NO_API AManusReplicator(const AManusReplicator&); \
public: \
	NO_API virtual ~AManusReplicator();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManusReplicator(AManusReplicator&&); \
	NO_API AManusReplicator(const AManusReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManusReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManusReplicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManusReplicator) \
	NO_API virtual ~AManusReplicator();


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_45_PROLOG
#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_RPC_WRAPPERS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_INCLASS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_SPARSE_DATA \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_ACCESSORS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUS_API UClass* StaticClass<class AManusReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_Manus_Source_Manus_Public_ManusReplicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
