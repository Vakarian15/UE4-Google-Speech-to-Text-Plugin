// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoogleSTTConfig;
class USpeechRecognition;
#ifdef GOOGLESTT_SpeechRecognition_generated_h
#error "SpeechRecognition.generated.h already included, missing '#pragma once' in SpeechRecognition.h"
#endif
#define GOOGLESTT_SpeechRecognition_generated_h

#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics; \
	GOOGLESTT_API static class UScriptStruct* StaticStruct();


template<> GOOGLESTT_API UScriptStruct* StaticStruct<struct FGoogleSTTConfig>();

#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_54_DELEGATE \
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


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_SPARSE_DATA
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGoogleSTT); \
	DECLARE_FUNCTION(execSetApiKey);


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGoogleSTT); \
	DECLARE_FUNCTION(execSetApiKey);


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpeechRecognition(); \
	friend struct Z_Construct_UClass_USpeechRecognition_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognition, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleSTT"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSpeechRecognition(); \
	friend struct Z_Construct_UClass_USpeechRecognition_Statics; \
public: \
	DECLARE_CLASS(USpeechRecognition, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GoogleSTT"), NO_API) \
	DECLARE_SERIALIZER(USpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognition(USpeechRecognition&&); \
	NO_API USpeechRecognition(const USpeechRecognition&); \
public:


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpeechRecognition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpeechRecognition(USpeechRecognition&&); \
	NO_API USpeechRecognition(const USpeechRecognition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpeechRecognition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpeechRecognition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpeechRecognition)


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_56_PROLOG
#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_SPARSE_DATA \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_RPC_WRAPPERS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_INCLASS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_PRIVATE_PROPERTY_OFFSET \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_SPARSE_DATA \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_INCLASS_NO_PURE_DECLS \
	bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOOGLESTT_API UClass* StaticClass<class USpeechRecognition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID bptest_Plugins_GoogleSTT_Source_GoogleSTT_Public_SpeechRecognition_h


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
