// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleSTT/Public/RecordingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecordingComponent() {}
// Cross Module References
	GOOGLESTT_API UClass* Z_Construct_UClass_URecordingComponent_NoRegister();
	GOOGLESTT_API UClass* Z_Construct_UClass_URecordingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GoogleSTT();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URecordingComponent::execStop)
	{
		P_GET_TARRAY_REF(USoundWave*,Z_Param_Out_OutSoundWaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop(Z_Param_Out_OutSoundWaves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URecordingComponent::execStart)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start(Z_Param_SampleRate);
		P_NATIVE_END;
	}
	void URecordingComponent::StaticRegisterNativesURecordingComponent()
	{
		UClass* Class = URecordingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Start", &URecordingComponent::execStart },
			{ "Stop", &URecordingComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URecordingComponent_Start_Statics
	{
		struct RecordingComponent_eventStart_Parms
		{
			int32 SampleRate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SampleRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URecordingComponent_Start_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordingComponent_eventStart_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URecordingComponent_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecordingComponent_Start_Statics::NewProp_SampleRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecordingComponent_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "Record" },
		{ "CPP_Default_SampleRate", "16000" },
		{ "ModuleRelativePath", "Public/RecordingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URecordingComponent_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URecordingComponent, nullptr, "Start", nullptr, nullptr, sizeof(RecordingComponent_eventStart_Parms), Z_Construct_UFunction_URecordingComponent_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URecordingComponent_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URecordingComponent_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URecordingComponent_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URecordingComponent_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URecordingComponent_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URecordingComponent_Stop_Statics
	{
		struct RecordingComponent_eventStop_Parms
		{
			TArray<USoundWave*> OutSoundWaves;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSoundWaves;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutSoundWaves_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URecordingComponent_Stop_Statics::NewProp_OutSoundWaves = { "OutSoundWaves", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RecordingComponent_eventStop_Parms, OutSoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URecordingComponent_Stop_Statics::NewProp_OutSoundWaves_Inner = { "OutSoundWaves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URecordingComponent_Stop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecordingComponent_Stop_Statics::NewProp_OutSoundWaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URecordingComponent_Stop_Statics::NewProp_OutSoundWaves_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URecordingComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Record" },
		{ "ModuleRelativePath", "Public/RecordingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URecordingComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URecordingComponent, nullptr, "Stop", nullptr, nullptr, sizeof(RecordingComponent_eventStop_Parms), Z_Construct_UFunction_URecordingComponent_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URecordingComponent_Stop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URecordingComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URecordingComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URecordingComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URecordingComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URecordingComponent_NoRegister()
	{
		return URecordingComponent::StaticClass();
	}
	struct Z_Construct_UClass_URecordingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecordingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleSTT,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URecordingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URecordingComponent_Start, "Start" }, // 2514441568
		{ &Z_Construct_UFunction_URecordingComponent_Stop, "Stop" }, // 178021237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecordingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "IncludePath", "RecordingComponent.h" },
		{ "ModuleRelativePath", "Public/RecordingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecordingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecordingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecordingComponent_Statics::ClassParams = {
		&URecordingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URecordingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecordingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecordingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecordingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecordingComponent, 2862169420);
	template<> GOOGLESTT_API UClass* StaticClass<URecordingComponent>()
	{
		return URecordingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecordingComponent(Z_Construct_UClass_URecordingComponent, &URecordingComponent::StaticClass, TEXT("/Script/GoogleSTT"), TEXT("URecordingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecordingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
