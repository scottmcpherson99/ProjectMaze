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
#ifdef PROJECTMAZE_GoalPlatform_generated_h
#error "GoalPlatform.generated.h already included, missing '#pragma once' in GoalPlatform.h"
#endif
#define PROJECTMAZE_GoalPlatform_generated_h

#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoalPlatform(); \
	friend struct Z_Construct_UClass_AGoalPlatform_Statics; \
public: \
	DECLARE_CLASS(AGoalPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AGoalPlatform)


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoalPlatform(); \
	friend struct Z_Construct_UClass_AGoalPlatform_Statics; \
public: \
	DECLARE_CLASS(AGoalPlatform, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(AGoalPlatform)


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoalPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoalPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPlatform(AGoalPlatform&&); \
	NO_API AGoalPlatform(const AGoalPlatform&); \
public:


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoalPlatform(AGoalPlatform&&); \
	NO_API AGoalPlatform(const AGoalPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoalPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoalPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoalPlatform)


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__platformMesh() { return STRUCT_OFFSET(AGoalPlatform, platformMesh); } \
	FORCEINLINE static uint32 __PPO__sphereComp() { return STRUCT_OFFSET(AGoalPlatform, sphereComp); }


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_9_PROLOG
#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_INCLASS \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class AGoalPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_Blueprints_GoalPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
