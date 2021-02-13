// Fill out your copyright notice in the Description page of Project Settings.


#include "RecordingComponent.h"

// Sets default values
URecordingComponent::URecordingComponent()
{


}


void URecordingComponent::Start(int32 SampleRate)
{
	Audio::FRecSettings RecordingSettings;
	RecordingSettings.GainDb = 1.0f;
	RecordingSettings.RecordingDuration = 0.0f;
	RecordingSettings.bSplitChannels = true;
	TArray<USoundWave*> OutSoundWaves;
	Audio::FAudioRecManager::Get().StartRecording(RecordingSettings, OutSoundWaves, SampleRate);
}

void URecordingComponent::Stop(TArray<USoundWave*>& OutSoundWaves)
{
	Audio::FAudioRecManager::Get().StopRecording(OutSoundWaves);
}

