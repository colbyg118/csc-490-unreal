// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOAImageSize : uint8;
class UOpenAICallDALLE;
#ifdef OPENAIAPI_OpenAICallDALLE_generated_h
#error "OpenAICallDALLE.generated.h already included, missing '#pragma once' in OpenAICallDALLE.h"
#endif
#define OPENAIAPI_OpenAICallDALLE_generated_h

#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_11_DELEGATE \
struct _Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms \
{ \
	TArray<FString> generatedImageUrls; \
	FString errorMessage; \
	bool Success; \
}; \
static inline void FOnDalleResponseRecievedPin_DelegateWrapper(const FMulticastScriptDelegate& OnDalleResponseRecievedPin, TArray<FString> const& generatedImageUrls, const FString& errorMessage, bool Success) \
{ \
	_Script_OpenAIAPI_eventOnDalleResponseRecievedPin_Parms Parms; \
	Parms.generatedImageUrls=generatedImageUrls; \
	Parms.errorMessage=errorMessage; \
	Parms.Success=Success ? true : false; \
	OnDalleResponseRecievedPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenAICallDALLE);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAICallDALLE);


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAICallDALLE(); \
	friend struct Z_Construct_UClass_UOpenAICallDALLE_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallDALLE, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallDALLE)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOpenAICallDALLE(); \
	friend struct Z_Construct_UClass_UOpenAICallDALLE_Statics; \
public: \
	DECLARE_CLASS(UOpenAICallDALLE, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAIAPI"), NO_API) \
	DECLARE_SERIALIZER(UOpenAICallDALLE)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAICallDALLE(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAICallDALLE) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallDALLE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallDALLE); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallDALLE(UOpenAICallDALLE&&); \
	NO_API UOpenAICallDALLE(const UOpenAICallDALLE&); \
public:


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAICallDALLE(UOpenAICallDALLE&&); \
	NO_API UOpenAICallDALLE(const UOpenAICallDALLE&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAICallDALLE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAICallDALLE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOpenAICallDALLE)


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_16_PROLOG
#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAIAPI_API UClass* StaticClass<class UOpenAICallDALLE>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAIAPI_Source_OpenAIAPI_Public_OpenAICallDALLE_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
