// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMAZE_Shooter_generated_h
#error "Shooter.generated.h already included, missing '#pragma once' in Shooter.h"
#endif
#define PROJECTMAZE_Shooter_generated_h

#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_RPC_WRAPPERS
#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShooter(); \
	friend struct Z_Construct_UClass_AShooter_Statics; \
public: \
	DECLARE_CLASS(AShooter, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AShooter)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public:


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooter(AShooter&&); \
	NO_API AShooter(const AShooter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooter)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__shooterMesh() { return STRUCT_OFFSET(AShooter, shooterMesh); } \
	FORCEINLINE static uint32 __PPO__arrowSource() { return STRUCT_OFFSET(AShooter, arrowSource); } \
	FORCEINLINE static uint32 __PPO__arrowShotSound() { return STRUCT_OFFSET(AShooter, arrowShotSound); }


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_9_PROLOG
#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_INCLASS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class AShooter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_Blueprints_Shooter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
