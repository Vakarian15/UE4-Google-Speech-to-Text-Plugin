// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GoogleSpeechRecognition.generated.h"

/**
 * 
 */
UENUM()
enum class Language : uint8
{
	English UMETA(DisplayName = "English (US)"),
	Chinese UMETA(DisplayName = "Simplified Chinese"),
	Japanese,
	Russian,
	Spanish UMETA(DisplayName = "Spanish (Spain)"),
	Portuguese UMETA(DisplayName = "Portuguese (Portugal)"),
	French UMETA(DisplayName = "French (France)"),
	German UMETA(DisplayName = "German (Germany)"),
};

UENUM()
enum class Model : uint8
{
	command_and_search UMETA(DisplayName = "Command and Search"),
	default UMETA(DisplayName = "Default"),
};

USTRUCT(BlueprintType)
struct FGoogleSTTConfig
{
	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GoogleSTT")
		int32 SampleRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GoogleSTT")
		USoundWave* SoundWave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GoogleSTT")
		Language Language;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GoogleSTT")
		Model Model;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GoogleSTT")
		TArray<FString> SpeechContexts;

	FGoogleSTTConfig()
		:SampleRate(16000)
		, Language(Language::English)
		, Model(Model::default)
	{}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinish, FString, Result);

UCLASS()
class GOOGLESTT_API UGoogleSpeechRecognition : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "GoogleSTT")
		static void SetApiKey(FString ApiKey);

	UPROPERTY(BlueprintAssignable)
		FOnFinish Finish;

	UFUNCTION(BlueprintCallable, Category = "GoogleSTT", meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"))
		static UGoogleSpeechRecognition* GoogleSTT(FGoogleSTTConfig config);

	void Recognize(FGoogleSTTConfig config, UGoogleSpeechRecognition* BlueprintNode);
};
