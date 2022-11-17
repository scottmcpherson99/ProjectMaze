// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMaze/GameSettings/MazeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGameMode() {}
// Cross Module References
	PROJECTMAZE_API UClass* Z_Construct_UClass_AMazeGameMode_NoRegister();
	PROJECTMAZE_API UClass* Z_Construct_UClass_AMazeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectMaze();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void AMazeGameMode::StaticRegisterNativesAMazeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMazeGameMode_NoRegister()
	{
		return AMazeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadsUpDisplayWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HeadsUpDisplayWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoseScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinScreenWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WinScreenWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_backgroundMusic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_backgroundMusic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMaze,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameSettings/MazeGameMode.h" },
		{ "ModuleRelativePath", "GameSettings/MazeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_HeadsUpDisplayWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Widgets>\n//widget class to use for our hud screen\n" },
		{ "ModuleRelativePath", "GameSettings/MazeGameMode.h" },
		{ "ToolTip", "<Widgets>\nwidget class to use for our hud screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_HeadsUpDisplayWidget = { "HeadsUpDisplayWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeGameMode, HeadsUpDisplayWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_HeadsUpDisplayWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_HeadsUpDisplayWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_LoseScreenWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our lose screen\n" },
		{ "ModuleRelativePath", "GameSettings/MazeGameMode.h" },
		{ "ToolTip", "widget class to use for our lose screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_LoseScreenWidget = { "LoseScreenWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeGameMode, LoseScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_LoseScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_LoseScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_WinScreenWidget_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "//widget class to use for our lose screen\n" },
		{ "ModuleRelativePath", "GameSettings/MazeGameMode.h" },
		{ "ToolTip", "widget class to use for our lose screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_WinScreenWidget = { "WinScreenWidget", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeGameMode, WinScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_WinScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_WinScreenWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGameMode_Statics::NewProp_backgroundMusic_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Audio>\n//background music\n" },
		{ "ModuleRelativePath", "GameSettings/MazeGameMode.h" },
		{ "ToolTip", "/\n <Audio>\nbackground music" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGameMode_Statics::NewProp_backgroundMusic = { "backgroundMusic", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMazeGameMode, backgroundMusic), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_backgroundMusic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::NewProp_backgroundMusic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_HeadsUpDisplayWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_LoseScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_WinScreenWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGameMode_Statics::NewProp_backgroundMusic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeGameMode_Statics::ClassParams = {
		&AMazeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMazeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMazeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeGameMode, 1076059074);
	template<> PROJECTMAZE_API UClass* StaticClass<AMazeGameMode>()
	{
		return AMazeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeGameMode(Z_Construct_UClass_AMazeGameMode, &AMazeGameMode::StaticClass, TEXT("/Script/ProjectMaze"), TEXT("AMazeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
