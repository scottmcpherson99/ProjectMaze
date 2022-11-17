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
#ifdef PROJECTMAZE_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define PROJECTMAZE_Door_generated_h

#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_SPARSE_DATA
#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap); \
	DECLARE_FUNCTION(execDoorTimelineProgress); \
	DECLARE_FUNCTION(execKeyTimelineProgress);


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap); \
	DECLARE_FUNCTION(execDoorTimelineProgress); \
	DECLARE_FUNCTION(execKeyTimelineProgress);


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMaze"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doorMesh() { return STRUCT_OFFSET(ADoor, doorMesh); } \
	FORCEINLINE static uint32 __PPO__TriggerBox() { return STRUCT_OFFSET(ADoor, TriggerBox); } \
	FORCEINLINE static uint32 __PPO__keyHole() { return STRUCT_OFFSET(ADoor, keyHole); } \
	FORCEINLINE static uint32 __PPO__keyMesh() { return STRUCT_OFFSET(ADoor, keyMesh); } \
	FORCEINLINE static uint32 __PPO__DoorPositionFloat() { return STRUCT_OFFSET(ADoor, DoorPositionFloat); } \
	FORCEINLINE static uint32 __PPO__KeyPositionFloat() { return STRUCT_OFFSET(ADoor, KeyPositionFloat); } \
	FORCEINLINE static uint32 __PPO__doorSound() { return STRUCT_OFFSET(ADoor, doorSound); }


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_10_PROLOG
#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_RPC_WRAPPERS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_INCLASS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_PRIVATE_PROPERTY_OFFSET \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_SPARSE_DATA \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_INCLASS_NO_PURE_DECLS \
	ProjectMaze_Source_ProjectMaze_Blueprints_Door_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMAZE_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMaze_Source_ProjectMaze_Blueprints_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
