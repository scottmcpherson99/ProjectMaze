// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PROJECTMAZE_KeyPickup_generated_h
#error "KeyPickup.generated.h already included, missing '#pragma once' in KeyPickup.h"
#endif
#define PROJECTMAZE_KeyPickup_generated_h

#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKeyPickup(); \
	friend struct Z_Construct_UClass_AKeyPickup_Statics; \
public: \
	DECLARE_CLASS(AKeyPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AKeyPickup)


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAKeyPickup(); \
	friend struct Z_Construct_UClass_AKeyPickup_Statics; \
public: \
	DECLARE_CLASS(AKeyPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AKeyPickup)


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKeyPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKeyPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyPickup(AKeyPickup&&); \
	NO_API AKeyPickup(const AKeyPickup&); \
public:


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKeyPickup(AKeyPickup&&); \
	NO_API AKeyPickup(const AKeyPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKeyPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKeyPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKeyPickup)


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__platformMesh() { return STRUCT_OFFSET(AKeyPickup, platformMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(AKeyPickup, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__keyMesh() { return STRUCT_OFFSET(AKeyPickup, keyMesh); } \
	FORCEINLINE static uint32 __PPO__pickupSound() { return STRUCT_OFFSET(AKeyPickup, pickupSound); }


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_9_PROLOG
#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_INCLASS \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class AKeyPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_Blueprints_KeyPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
