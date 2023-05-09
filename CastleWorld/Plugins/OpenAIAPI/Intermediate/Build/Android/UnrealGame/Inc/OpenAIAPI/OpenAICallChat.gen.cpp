// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAIAPI/Public/OpenAICallChat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAICallChat() {}
// Cross Module References
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAIAPI();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChatCompletion();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallChat_NoRegister();
	OPENAIAPI_API UClass* Z_Construct_UClass_UOpenAICallChat();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	OPENAIAPI_API UScriptStruct* Z_Construct_UScriptStruct_FChatSettings();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics
	{
		struct _Script_OpenAIAPI_eventOnResponseRecievedPin_Parms
		{
			FChatCompletion message;
			FString errorMessage;
			bool Success;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_errorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_errorMessage;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms, message), Z_Construct_UScriptStruct_FChatCompletion, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_message_MetaData)) }; // 2954402331
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage = { "errorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms, errorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage_MetaData)) };
	void Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms), &Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_errorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAICallChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAIAPI, nullptr, "OnResponseRecievedPin__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::_Script_OpenAIAPI_eventOnResponseRecievedPin_Parms), Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOpenAICallChat::execOpenAICallChat)
	{
		P_GET_STRUCT(FChatSettings,Z_Param_chatSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOpenAICallChat**)Z_Param__Result=UOpenAICallChat::OpenAICallChat(Z_Param_chatSettings);
		P_NATIVE_END;
	}
	void UOpenAICallChat::StaticRegisterNativesUOpenAICallChat()
	{
		UClass* Class = UOpenAICallChat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAICallChat", &UOpenAICallChat::execOpenAICallChat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics
	{
		struct OpenAICallChat_eventOpenAICallChat_Parms
		{
			FChatSettings chatSettings;
			UOpenAICallChat* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_chatSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::NewProp_chatSettings = { "chatSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallChat_eventOpenAICallChat_Parms, chatSettings), Z_Construct_UScriptStruct_FChatSettings, METADATA_PARAMS(nullptr, 0) }; // 784157340
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OpenAICallChat_eventOpenAICallChat_Parms, ReturnValue), Z_Construct_UClass_UOpenAICallChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::NewProp_chatSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallChat.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAICallChat, nullptr, "OpenAICallChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::OpenAICallChat_eventOpenAICallChat_Parms), Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAICallChat);
	UClass* Z_Construct_UClass_UOpenAICallChat_NoRegister()
	{
		return UOpenAICallChat::StaticClass();
	}
	struct Z_Construct_UClass_UOpenAICallChat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Finished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finished;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenAICallChat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAIAPI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenAICallChat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAICallChat_OpenAICallChat, "OpenAICallChat" }, // 1829182300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallChat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OpenAICallChat.h" },
		{ "ModuleRelativePath", "Public/OpenAICallChat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAICallChat_Statics::NewProp_Finished_MetaData[] = {
		{ "Category", "OpenAI" },
		{ "ModuleRelativePath", "Public/OpenAICallChat.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOpenAICallChat_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOpenAICallChat, Finished), Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UOpenAICallChat_Statics::NewProp_Finished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallChat_Statics::NewProp_Finished_MetaData)) }; // 447495816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenAICallChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenAICallChat_Statics::NewProp_Finished,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenAICallChat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAICallChat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAICallChat_Statics::ClassParams = {
		&UOpenAICallChat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOpenAICallChat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallChat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenAICallChat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAICallChat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenAICallChat()
	{
		if (!Z_Registration_Info_UClass_UOpenAICallChat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAICallChat.OuterSingleton, Z_Construct_UClass_UOpenAICallChat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenAICallChat.OuterSingleton;
	}
	template<> OPENAIAPI_API UClass* StaticClass<UOpenAICallChat>()
	{
		return UOpenAICallChat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAICallChat);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallChat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallChat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAICallChat, UOpenAICallChat::StaticClass, TEXT("UOpenAICallChat"), &Z_Registration_Info_UClass_UOpenAICallChat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAICallChat), 276694521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallChat_h_385348996(TEXT("/Script/OpenAIAPI"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallChat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallChat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
