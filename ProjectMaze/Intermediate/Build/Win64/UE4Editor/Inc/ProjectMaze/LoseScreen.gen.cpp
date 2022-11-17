// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMaze/LoseScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoseScreen() {}
// Cross Module References
	PROJECTMAZE_API UClass* Z_Construct_UClass_ULoseScreen_NoRegister();
	PROJECTMAZE_API UClass* Z_Construct_UClass_ULoseScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMaze();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULoseScreen::execOnQuitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoseScreen::execOnRetryClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRetryClicked();
		P_NATIVE_END;
	}
	void ULoseScreen::StaticRegisterNativesULoseScreen()
	{
		UClass* Class = ULoseScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitClicked", &ULoseScreen::execOnQuitClicked },
			{ "OnRetryClicked", &ULoseScreen::execOnRetryClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//exit the application\n" },
		{ "ModuleRelativePath", "LoseScreen.h" },
		{ "ToolTip", "exit the application" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoseScreen, nullptr, "OnQuitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoseScreen_OnQuitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoseScreen_OnQuitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <ButtonFunctions>\n//restart the level\n" },
		{ "ModuleRelativePath", "LoseScreen.h" },
		{ "ToolTip", "<ButtonFunctions>\nrestart the level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoseScreen, nullptr, "OnRetryClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoseScreen_OnRetryClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoseScreen_OnRetryClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoseScreen_NoRegister()
	{
		return ULoseScreen::StaticClass();
	}
	struct Z_Construct_UClass_ULoseScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetryButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RetryButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoseScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoseScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoseScreen_OnQuitClicked, "OnQuitClicked" }, // 2470129852
		{ &Z_Construct_UFunction_ULoseScreen_OnRetryClicked, "OnRetryClicked" }, // 1742055635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoseScreen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LoseScreen.h" },
		{ "ModuleRelativePath", "LoseScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoseScreen_Statics::NewProp_RetryButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoseScreen" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will restart the level\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoseScreen.h" },
		{ "ToolTip", "<Components>\nbutton that will restart the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoseScreen_Statics::NewProp_RetryButton = { "RetryButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoseScreen, RetryButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoseScreen_Statics::NewProp_RetryButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoseScreen_Statics::NewProp_RetryButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoseScreen_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoseScreen" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoseScreen.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoseScreen_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoseScreen, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoseScreen_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoseScreen_Statics::NewProp_QuitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoseScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoseScreen_Statics::NewProp_RetryButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoseScreen_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoseScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoseScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoseScreen_Statics::ClassParams = {
		&ULoseScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoseScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoseScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoseScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoseScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoseScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoseScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoseScreen, 1979918739);
	template<> PROJECTMAZE_API UClass* StaticClass<ULoseScreen>()
	{
		return ULoseScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoseScreen(Z_Construct_UClass_ULoseScreen, &ULoseScreen::StaticClass, TEXT("/Script/ProjectMaze"), TEXT("ULoseScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoseScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
