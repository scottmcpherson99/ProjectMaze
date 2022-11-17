// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMaze/SaveGameObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameObject() {}
// Cross Module References
	PROJECTMAZE_API UClass* Z_Construct_UClass_USaveGameObject_NoRegister();
	PROJECTMAZE_API UClass* Z_Construct_UClass_USaveGameObject();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_ProjectMaze();
// End Cross Module References
	void USaveGameObject::StaticRegisterNativesUSaveGameObject()
	{
	}
	UClass* Z_Construct_UClass_USaveGameObject_NoRegister()
	{
		return USaveGameObject::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_levelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_levelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameObject.h" },
		{ "ModuleRelativePath", "SaveGameObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameObject_Statics::NewProp_levelName_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n// the level name the player reached\n" },
		{ "ModuleRelativePath", "SaveGameObject.h" },
		{ "ToolTip", "<Attributes>\nthe level name the player reached" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameObject_Statics::NewProp_levelName = { "levelName", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameObject, levelName), METADATA_PARAMS(Z_Construct_UClass_USaveGameObject_Statics::NewProp_levelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::NewProp_levelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameObject_Statics::NewProp_levelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameObject_Statics::ClassParams = {
		&USaveGameObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameObject, 4114596510);
	template<> PROJECTMAZE_API UClass* StaticClass<USaveGameObject>()
	{
		return USaveGameObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameObject(Z_Construct_UClass_USaveGameObject, &USaveGameObject::StaticClass, TEXT("/Script/ProjectMaze"), TEXT("USaveGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
