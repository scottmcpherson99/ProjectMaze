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
#ifdef PROJECTMAZE_Arrow_generated_h
#error "Arrow.generated.h already included, missing '#pragma once' in Arrow.h"
#endif
#define PROJECTMAZE_Arrow_generated_h

#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArrow(); \
	friend struct Z_Construct_UClass_AArrow_Statics; \
public: \
	DECLARE_CLASS(AArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AArrow)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArrow(); \
	friend struct Z_Construct_UClass_AArrow_Statics; \
public: \
	DECLARE_CLASS(AArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AArrow)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArrow(AArrow&&); \
	NO_API AArrow(const AArrow&); \
public:


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArrow(AArrow&&); \
	NO_API AArrow(const AArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArrow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArrow)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__sphereComp() { return STRUCT_OFFSET(AArrow, sphereComp); } \
	FORCEINLINE static uint32 __PPO__arrowMesh() { return STRUCT_OFFSET(AArrow, arrowMesh); } \
	FORCEINLINE static uint32 __PPO__projectileMovement() { return STRUCT_OFFSET(AArrow, projectileMovement); } \
	FORCEINLINE static uint32 __PPO__damageType() { return STRUCT_OFFSET(AArrow, damageType); } \
	FORCEINLINE static uint32 __PPO__arrowHitSound() { return STRUCT_OFFSET(AArrow, arrowHitSound); }


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_9_PROLOG
#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_INCLASS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class AArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_Blueprints_Arrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
