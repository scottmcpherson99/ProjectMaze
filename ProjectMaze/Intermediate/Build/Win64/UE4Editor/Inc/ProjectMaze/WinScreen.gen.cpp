// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMaze/WinScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWinScreen() {}
// Cross Module References
	PROJECTMAZE_API UClass* Z_Construct_UClass_UWinScreen_NoRegister();
	PROJECTMAZE_API UClass* Z_Construct_UClass_UWinScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ProjectMaze();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWinScreen::execOnReturnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturnClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWinScreen::execOnNextClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNextClicked();
		P_NATIVE_END;
	}
	void UWinScreen::StaticRegisterNativesUWinScreen()
	{
		UClass* Class = UWinScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNextClicked", &UWinScreen::execOnNextClicked },
			{ "OnReturnClicked", &UWinScreen::execOnReturnClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <ButtonFunctions>\n//continue to the next level\n" },
		{ "ModuleRelativePath", "WinScreen.h" },
		{ "ToolTip", "<ButtonFunctions>\ncontinue to the next level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinScreen, nullptr, "OnNextClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinScreen_OnNextClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinScreen_OnNextClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Return to the main menu\n" },
		{ "ModuleRelativePath", "WinScreen.h" },
		{ "ToolTip", "Return to the main menu" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWinScreen, nullptr, "OnReturnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWinScreen_OnReturnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWinScreen_OnReturnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWinScreen_NoRegister()
	{
		return UWinScreen::StaticClass();
	}
	struct Z_Construct_UClass_UWinScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWinScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMaze,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWinScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWinScreen_OnNextClicked, "OnNextClicked" }, // 3661405996
		{ &Z_Construct_UFunction_UWinScreen_OnReturnClicked, "OnReturnClicked" }, // 1713721323
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WinScreen.h" },
		{ "ModuleRelativePath", "WinScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreen_Statics::NewProp_NextButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WinScreen" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Components>\n//button that will restart the level\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinScreen.h" },
		{ "ToolTip", "<Components>\nbutton that will restart the level" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinScreen_Statics::NewProp_NextButton = { "NextButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinScreen, NextButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinScreen_Statics::NewProp_NextButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreen_Statics::NewProp_NextButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWinScreen_Statics::NewProp_ReturnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WinScreen" },
		{ "Comment", "//button that will exit the application\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WinScreen.h" },
		{ "ToolTip", "button that will exit the application" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWinScreen_Statics::NewProp_ReturnButton = { "ReturnButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWinScreen, ReturnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWinScreen_Statics::NewProp_ReturnButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreen_Statics::NewProp_ReturnButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWinScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinScreen_Statics::NewProp_NextButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWinScreen_Statics::NewProp_ReturnButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWinScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWinScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWinScreen_Statics::ClassParams = {
		&UWinScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWinScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreen_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWinScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWinScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWinScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWinScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWinScreen, 217777302);
	template<> PROJECTMAZE_API UClass* StaticClass<UWinScreen>()
	{
		return UWinScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWinScreen(Z_Construct_UClass_UWinScreen, &UWinScreen::StaticClass, TEXT("/Script/ProjectMaze"), TEXT("UWinScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWinScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
