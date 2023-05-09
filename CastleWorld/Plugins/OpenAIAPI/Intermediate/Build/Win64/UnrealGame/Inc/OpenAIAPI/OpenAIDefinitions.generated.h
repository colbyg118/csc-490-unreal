// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENAIAPI_OpenAIDefinitions_generated_h
#error "OpenAIDefinitions.generated.h already included, missing '#pragma once' in OpenAIDefinitions.h"
#endif
#define OPENAIAPI_OpenAIDefinitions_generated_h

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatLog_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FChatLog>();

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletionInfo_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletionInfo>();

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletion_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletion>();

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatCompletion_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FChatCompletion>();

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompletionSettings_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FCompletionSettings>();

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChatSettings_Statics; \
	OPENAIAPI_API static class UScriptStruct* StaticStruct();


template<> OPENAIAPI_API UScriptStruct* StaticStruct<struct FChatSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAIDefinitions_h


#define FOREACH_ENUM_EOACOMPLETIONSENGINETYPE(op) \
	op(EOACompletionsEngineType::DAVINCI) \
	op(EOACompletionsEngineType::CURIE) \
	op(EOACompletionsEngineType::BABBAGE) \
	op(EOACompletionsEngineType::ADA) \
	op(EOACompletionsEngineType::TEXT_DAVINCI_002) \
	op(EOACompletionsEngineType::TEXT_CURIE_001) \
	op(EOACompletionsEngineType::TEXT_BABBAGE_001) \
	op(EOACompletionsEngineType::TEXT_ADA_001) \
	op(EOACompletionsEngineType::TEXT_DAVINCI_003) 

enum class EOACompletionsEngineType : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOACompletionsEngineType>();

#define FOREACH_ENUM_EOACHATENGINETYPE(op) \
	op(EOAChatEngineType::GPT_3_5_TURBO) \
	op(EOAChatEngineType::GPT_4) \
	op(EOAChatEngineType::GPT_4_32k) 

enum class EOAChatEngineType : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAChatEngineType>();

#define FOREACH_ENUM_EOACHATROLE(op) \
	op(EOAChatRole::SYSTEM) \
	op(EOAChatRole::USER) \
	op(EOAChatRole::ASSISTANT) 

enum class EOAChatRole : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAChatRole>();

#define FOREACH_ENUM_EOAIMAGESIZE(op) \
	op(EOAImageSize::SMALL) \
	op(EOAImageSize::MEDIUM) \
	op(EOAImageSize::LARGE) 

enum class EOAImageSize : uint8;
template<> OPENAIAPI_API UEnum* StaticEnum<EOAImageSize>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
