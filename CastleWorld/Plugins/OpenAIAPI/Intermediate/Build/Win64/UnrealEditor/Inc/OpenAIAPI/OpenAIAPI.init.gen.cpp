// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAIAPI_init() {}
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature();
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature();
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature();
	OPENAIAPI_API UFunction* Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OpenAIAPI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OpenAIAPI()
	{
		if (!Z_Registration_Info_UPackage__Script_OpenAIAPI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnDalleResponseRecievedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnGptResponseRecievedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnResponseRecievedPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAIAPI_OnTranscriptionResponseRecievedPin__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OpenAIAPI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCF489FA4,
				0xB791A669,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OpenAIAPI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OpenAIAPI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OpenAIAPI(Z_Construct_UPackage__Script_OpenAIAPI, TEXT("/Script/OpenAIAPI"), Z_Registration_Info_UPackage__Script_OpenAIAPI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCF489FA4, 0xB791A669));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
