// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoogleSTTConfig;
class UGoogleSpeechRecognition;
#ifdef GOOGLESTT_GoogleSpeechRecognition_generated_h
#error "GoogleSpeechRecognition.generated.h already included, missing '#pragma once' in GoogleSpeechRecognition.h"
#endif
#define GOOGLESTT_GoogleSpeechRecognition_generated_h

#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics; \
	GOOGLESTT_API static class UScriptStruct* StaticStruct();


template<> GOOGLESTT_API UScriptStruct* StaticStruct<struct FGoogleSTTConfig>();

#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_54_DELEGATE \
struct _Script_GoogleSTT_eventOnFinish_Parms \
{ \
	FString Result; \
}; \
static inline void FOnFinish_DelegateWrapper(const FMulticastScriptDelegate& OnFinish, const FString& Result) \
{ \
	_Script_GoogleSTT_eventOnFinish_Parms Parms; \
	Parms.Result=Result; \
	OnFinish.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_SPARSE_DATA
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoogleSTT); \
	DECLARE_FUNCTION(execSetApiKey);


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoogleSTT); \
	DECLARE_FUNCTION(execSetApiKey);


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoogleSpeechRecognition(); \
	friend struct Z_Construct_UClass_UGoogleSpeechRecognition_Statics; \
public: \
	DECLARE_CLASS(UGoogleSpeechRecognition, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleSTT"), NO_API) \
	DECLARE_SERIALIZER(UGoogleSpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUGoogleSpeechRecognition(); \
	friend struct Z_Construct_UClass_UGoogleSpeechRecognition_Statics; \
public: \
	DECLARE_CLASS(UGoogleSpeechRecognition, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleSTT"), NO_API) \
	DECLARE_SERIALIZER(UGoogleSpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleSpeechRecognition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleSpeechRecognition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleSpeechRecognition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleSpeechRecognition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleSpeechRecognition(UGoogleSpeechRecognition&&); \
	NO_API UGoogleSpeechRecognition(const UGoogleSpeechRecognition&); \
public:


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoogleSpeechRecognition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoogleSpeechRecognition(UGoogleSpeechRecognition&&); \
	NO_API UGoogleSpeechRecognition(const UGoogleSpeechRecognition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoogleSpeechRecognition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoogleSpeechRecognition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoogleSpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_56_PROLOG
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_SPARSE_DATA \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_RPC_WRAPPERS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_INCLASS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_SPARSE_DATA \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_INCLASS_NO_PURE_DECLS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLESTT_API UClass* StaticClass<class UGoogleSpeechRecognition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_GoogleSpeechRecognition_h


#define FOREACH_ENUM_MODEL(op) \
	op(Model::command_and_search) \
	op(Model::default) 

enum class Model : uint8;
template<> GOOGLESTT_API UEnum* StaticEnum<Model>();

#define FOREACH_ENUM_LANGUAGE(op) \
	op(Language::English) \
	op(Language::Chinese) \
	op(Language::Japanese) \
	op(Language::Russian) \
	op(Language::Spanish) \
	op(Language::Portuguese) \
	op(Language::French) \
	op(Language::German) 

enum class Language : uint8;
template<> GOOGLESTT_API UEnum* StaticEnum<Language>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
