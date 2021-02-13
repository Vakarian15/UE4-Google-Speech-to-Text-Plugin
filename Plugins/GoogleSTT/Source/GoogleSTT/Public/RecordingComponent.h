// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RecordingManager.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RecordingComponent.generated.h"



UCLASS(ClassGroup = Synth, meta = (BlueprintSpawnableComponent))
class GOOGLESTT_API URecordingComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	URecordingComponent();



public:	

	UFUNCTION(BlueprintCallable, Category = "Record")
		void Start(int32 SampleRate=16000);

	UFUNCTION(BlueprintCallable, Category = "Record")
		void Stop(TArray<USoundWave*>& OutSoundWaves);
};
