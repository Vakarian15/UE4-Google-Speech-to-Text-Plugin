// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleSTT/Public/GoogleSpeechRecognition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleSpeechRecognition() {}
// Cross Module References
	GOOGLESTT_API UFunction* Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GoogleSTT();
	GOOGLESTT_API UEnum* Z_Construct_UEnum_GoogleSTT_Model();
	GOOGLESTT_API UEnum* Z_Construct_UEnum_GoogleSTT_Language();
	GOOGLESTT_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleSTTConfig();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	GOOGLESTT_API UClass* Z_Construct_UClass_UGoogleSpeechRecognition_NoRegister();
	GOOGLESTT_API UClass* Z_Construct_UClass_UGoogleSpeechRecognition();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics
	{
		struct _Script_GoogleSTT_eventOnFinish_Parms
		{
			FString Result;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_GoogleSTT_eventOnFinish_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GoogleSTT, nullptr, "OnFinish__DelegateSignature", nullptr, nullptr, sizeof(_Script_GoogleSTT_eventOnFinish_Parms), Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* Model_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GoogleSTT_Model, Z_Construct_UPackage__Script_GoogleSTT(), TEXT("Model"));
		}
		return Singleton;
	}
	template<> GOOGLESTT_API UEnum* StaticEnum<Model>()
	{
		return Model_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Model(Model_StaticEnum, TEXT("/Script/GoogleSTT"), TEXT("Model"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GoogleSTT_Model_Hash() { return 400146364U; }
	UEnum* Z_Construct_UEnum_GoogleSTT_Model()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GoogleSTT();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Model"), 0, Get_Z_Construct_UEnum_GoogleSTT_Model_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Model::command_and_search", (int64)Model::command_and_search },
				{ "Model::default", (int64)Model::default },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "command_and_search.DisplayName", "Command and Search" },
				{ "command_and_search.Name", "Model::command_and_search" },
				{ "default.DisplayName", "Default" },
				{ "default.Name", "Model::default" },
				{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GoogleSTT,
				nullptr,
				"Model",
				"Model",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* Language_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GoogleSTT_Language, Z_Construct_UPackage__Script_GoogleSTT(), TEXT("Language"));
		}
		return Singleton;
	}
	template<> GOOGLESTT_API UEnum* StaticEnum<Language>()
	{
		return Language_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Language(Language_StaticEnum, TEXT("/Script/GoogleSTT"), TEXT("Language"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GoogleSTT_Language_Hash() { return 2859400608U; }
	UEnum* Z_Construct_UEnum_GoogleSTT_Language()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GoogleSTT();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Language"), 0, Get_Z_Construct_UEnum_GoogleSTT_Language_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Language::English", (int64)Language::English },
				{ "Language::Chinese", (int64)Language::Chinese },
				{ "Language::Japanese", (int64)Language::Japanese },
				{ "Language::Russian", (int64)Language::Russian },
				{ "Language::Spanish", (int64)Language::Spanish },
				{ "Language::Portuguese", (int64)Language::Portuguese },
				{ "Language::French", (int64)Language::French },
				{ "Language::German", (int64)Language::German },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chinese.Comment", "/**\n * \n */" },
				{ "Chinese.DisplayName", "Simplified Chinese" },
				{ "Chinese.Name", "Language::Chinese" },
				{ "Comment", "/**\n * \n */" },
				{ "English.Comment", "/**\n * \n */" },
				{ "English.DisplayName", "English (US)" },
				{ "English.Name", "Language::English" },
				{ "French.Comment", "/**\n * \n */" },
				{ "French.DisplayName", "French (France)" },
				{ "French.Name", "Language::French" },
				{ "German.Comment", "/**\n * \n */" },
				{ "German.DisplayName", "German (Germany)" },
				{ "German.Name", "Language::German" },
				{ "Japanese.Comment", "/**\n * \n */" },
				{ "Japanese.Name", "Language::Japanese" },
				{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
				{ "Portuguese.Comment", "/**\n * \n */" },
				{ "Portuguese.DisplayName", "Portuguese (Portugal)" },
				{ "Portuguese.Name", "Language::Portuguese" },
				{ "Russian.Comment", "/**\n * \n */" },
				{ "Russian.Name", "Language::Russian" },
				{ "Spanish.Comment", "/**\n * \n */" },
				{ "Spanish.DisplayName", "Spanish (Spain)" },
				{ "Spanish.Name", "Language::Spanish" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GoogleSTT,
				nullptr,
				"Language",
				"Language",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGoogleSTTConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GOOGLESTT_API uint32 Get_Z_Construct_UScriptStruct_FGoogleSTTConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleSTTConfig, Z_Construct_UPackage__Script_GoogleSTT(), TEXT("GoogleSTTConfig"), sizeof(FGoogleSTTConfig), Get_Z_Construct_UScriptStruct_FGoogleSTTConfig_Hash());
	}
	return Singleton;
}
template<> GOOGLESTT_API UScriptStruct* StaticStruct<FGoogleSTTConfig>()
{
	return FGoogleSTTConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoogleSTTConfig(FGoogleSTTConfig::StaticStruct, TEXT("/Script/GoogleSTT"), TEXT("GoogleSTTConfig"), false, nullptr, nullptr);
static struct FScriptStruct_GoogleSTT_StaticRegisterNativesFGoogleSTTConfig
{
	FScriptStruct_GoogleSTT_StaticRegisterNativesFGoogleSTTConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoogleSTTConfig")),new UScriptStruct::TCppStructOps<FGoogleSTTConfig>);
	}
} ScriptStruct_GoogleSTT_StaticRegisterNativesFGoogleSTTConfig;
	struct Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeechContexts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeechContexts;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpeechContexts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Model;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Model_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Language;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Language_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleSTTConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts_MetaData[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts = { "SpeechContexts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleSTTConfig, SpeechContexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts_Inner = { "SpeechContexts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleSTTConfig, Model), Z_Construct_UEnum_GoogleSTT_Model, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language_MetaData[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleSTTConfig, Language), Z_Construct_UEnum_GoogleSTT_Language, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleSTTConfig, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoogleSTTConfig, SampleRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SampleRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SpeechContexts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Model_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_Language_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SoundWave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::NewProp_SampleRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleSTT,
		nullptr,
		&NewStructOps,
		"GoogleSTTConfig",
		sizeof(FGoogleSTTConfig),
		alignof(FGoogleSTTConfig),
		Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleSTTConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoogleSTTConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GoogleSTT();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoogleSTTConfig"), sizeof(FGoogleSTTConfig), Get_Z_Construct_UScriptStruct_FGoogleSTTConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoogleSTTConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoogleSTTConfig_Hash() { return 1372814985U; }
	DEFINE_FUNCTION(UGoogleSpeechRecognition::execGoogleSTT)
	{
		P_GET_STRUCT(FGoogleSTTConfig,Z_Param_config);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGoogleSpeechRecognition**)Z_Param__Result=UGoogleSpeechRecognition::GoogleSTT(Z_Param_config);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleSpeechRecognition::execSetApiKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGoogleSpeechRecognition::SetApiKey(Z_Param_ApiKey);
		P_NATIVE_END;
	}
	void UGoogleSpeechRecognition::StaticRegisterNativesUGoogleSpeechRecognition()
	{
		UClass* Class = UGoogleSpeechRecognition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GoogleSTT", &UGoogleSpeechRecognition::execGoogleSTT },
			{ "SetApiKey", &UGoogleSpeechRecognition::execSetApiKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics
	{
		struct GoogleSpeechRecognition_eventGoogleSTT_Parms
		{
			FGoogleSTTConfig config;
			UGoogleSpeechRecognition* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_config;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleSpeechRecognition_eventGoogleSTT_Parms, ReturnValue), Z_Construct_UClass_UGoogleSpeechRecognition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::NewProp_config = { "config", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleSpeechRecognition_eventGoogleSTT_Parms, config), Z_Construct_UScriptStruct_FGoogleSTTConfig, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::NewProp_config,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleSpeechRecognition, nullptr, "GoogleSTT", nullptr, nullptr, sizeof(GoogleSpeechRecognition_eventGoogleSTT_Parms), Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics
	{
		struct GoogleSpeechRecognition_eventSetApiKey_Parms
		{
			FString ApiKey;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApiKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoogleSpeechRecognition_eventSetApiKey_Parms, ApiKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::NewProp_ApiKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleSTT" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleSpeechRecognition, nullptr, "SetApiKey", nullptr, nullptr, sizeof(GoogleSpeechRecognition_eventSetApiKey_Parms), Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoogleSpeechRecognition_NoRegister()
	{
		return UGoogleSpeechRecognition::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleSpeechRecognition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Finish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleSpeechRecognition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleSTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleSpeechRecognition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleSpeechRecognition_GoogleSTT, "GoogleSTT" }, // 1977550191
		{ &Z_Construct_UFunction_UGoogleSpeechRecognition_SetApiKey, "SetApiKey" }, // 1101099630
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSpeechRecognition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleSpeechRecognition.h" },
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleSpeechRecognition_Statics::NewProp_Finish_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleSpeechRecognition.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGoogleSpeechRecognition_Statics::NewProp_Finish = { "Finish", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoogleSpeechRecognition, Finish), Z_Construct_UDelegateFunction_GoogleSTT_OnFinish__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGoogleSpeechRecognition_Statics::NewProp_Finish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleSpeechRecognition_Statics::NewProp_Finish_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleSpeechRecognition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleSpeechRecognition_Statics::NewProp_Finish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleSpeechRecognition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleSpeechRecognition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoogleSpeechRecognition_Statics::ClassParams = {
		&UGoogleSpeechRecognition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoogleSpeechRecognition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleSpeechRecognition_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleSpeechRecognition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleSpeechRecognition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleSpeechRecognition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoogleSpeechRecognition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoogleSpeechRecognition, 3558818250);
	template<> GOOGLESTT_API UClass* StaticClass<UGoogleSpeechRecognition>()
	{
		return UGoogleSpeechRecognition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoogleSpeechRecognition(Z_Construct_UClass_UGoogleSpeechRecognition, &UGoogleSpeechRecognition::StaticClass, TEXT("/Script/GoogleSTT"), TEXT("UGoogleSpeechRecognition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleSpeechRecognition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
