// Fill out your copyright notice in the Description page of Project Settings.


#include "GoogleSpeechRecognition.h"

#include "Engine.h"

#include <cpprest/http_client.h>
#include <cpprest/filestream.h>
#include <cpprest/json.h>

#include <iostream>
#include <vector>


using namespace utility;
using namespace web;
using namespace web::http;
using namespace web::http::client;
using namespace web::json;
using namespace concurrency::streams;
using namespace std;

typedef unsigned char BYTE;

static string_t APIKEY = U("");
struct Config
{
    signed int SampleRate;
    string_t Language;
    string_t Model;
    TArray<FString> SpeechContexts;
};

Config GetConfig(FGoogleSTTConfig GoogleSTTConfig)
{
    Config STTconfig;
    STTconfig.SampleRate = GoogleSTTConfig.SampleRate;
    switch (GoogleSTTConfig.Language)
    {
    case Language::English:
        STTconfig.Language = U("en-US");
        break;
    case Language::Chinese:
        STTconfig.Language = U("zh (cmn-Hans-CN)");
        break;
    case Language::Japanese:
        STTconfig.Language = U("ja-JP");
        break;
    case Language::Russian:
        STTconfig.Language = U("ru-RU");
        break;
    case Language::Spanish:
        STTconfig.Language = U("es-ES");
        break;
    case Language::Portuguese:
        STTconfig.Language = U("pt-PT");
        break;
    case Language::French:
        STTconfig.Language = U("fr-FR");
        break;
    case Language::German:
        STTconfig.Language = U("de-DE");
        break;
    default:
        break;
    }

    STTconfig.SpeechContexts = GoogleSTTConfig.SpeechContexts;

    switch (GoogleSTTConfig.Model)
    {
    case Model::command_and_search:
        STTconfig.Model = U("command_and_search");
        break;
    case Model::default:
        STTconfig.Model = U("default");
        break;
    default:
        break;
    }

    return STTconfig;
}

void UGoogleSpeechRecognition::SetApiKey(FString ApiKey)
{
    APIKEY = conversions::to_string_t(TCHAR_TO_UTF8(*ApiKey));
}

UGoogleSpeechRecognition* UGoogleSpeechRecognition::GoogleSTT(FGoogleSTTConfig config)
{
    UGoogleSpeechRecognition* BlueprintNode = NewObject<UGoogleSpeechRecognition>();
    BlueprintNode->Recognize(config, BlueprintNode);
    return BlueprintNode;
}

vector<BYTE> SoundWaveToVector(USoundWave* soundWave)
{
    vector<BYTE> bvec;
    bvec.reserve(soundWave->RawPCMDataSize);
    int soundSize = soundWave->RawPCMDataSize / sizeof(BYTE);
    bvec.insert(bvec.end(), soundWave->RawPCMData, soundWave->RawPCMData + soundSize);
    return bvec;
}

void print_results(json::value const& value, FString& Result)
{
    if (!value.is_null())
    {
        if (value.size() != 0)
        {
            auto results = value.at(U("results"));

            auto alternatives = results.as_array()[0].at(U("alternatives"));
            auto transcript = alternatives.as_array()[0].at(U("transcript"));

            Result = FString(transcript.as_string().c_str());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Try Louder"));
        }
    }
}



void get_results(string_t STTaudio, Config STTconfig, FString& Result, UGoogleSpeechRecognition* BlueprintNode)
{
    http_client client(U("https://speech.googleapis.com/"));
    if (APIKEY == U(""))
    {
        UE_LOG(LogTemp, Error, TEXT("Please set ApiKey!"));
        return;
    }

    // build the query parameters
    auto query = uri_builder(U("v1/speech:recognize"))
        .append_query(U("key"), APIKEY)
        .to_string();

    value phrase, config, audio, body;

    for (int32 Index = 0; Index < STTconfig.SpeechContexts.Num(); ++Index)
    {
        string_t str = conversions::to_string_t(TCHAR_TO_UTF8(*STTconfig.SpeechContexts[Index]));
        phrase[U("phrases")][Index] = value::string(str);
    }

    config[U("encoding")] = value::string(U("LINEAR16"));
    config[U("sampleRateHertz")] = value::number(STTconfig.SampleRate);
    config[U("languageCode")] = value::string(STTconfig.Language);
    config[U("speechContexts")][0] = phrase;
    config[U("model")] = value::string(STTconfig.Model);

    audio[U("content")] = value::string(STTaudio);
    body[U("config")] = config;
    body[U("audio")] = audio;

    //    FString a(body.serialize().c_str());
    //    UE_LOG(LogTemp, Warning, TEXT("Json: %s"), *a);
    client
        // send the HTTP POST request asynchronous
        .request(methods::POST, query, body)
        // continue when the response is available
        .then([](http_response response) -> pplx::task<json::value>
            {
                // if the status is OK extract the body of the response into a JSON value
                // works only when the content type is application\json
                if (response.status_code() == status_codes::OK)
                {
                    return response.extract_json();
                }

                // return an empty JSON value
                return pplx::task_from_result(json::value());
            })
        // continue when the JSON value is available
                .then([Result, BlueprintNode](pplx::task<json::value> previousTask)
                    {
                        // get the JSON value from the task and display content from it
                        try
                        {
                            json::value const& v = previousTask.get();
                            FString r = Result;
                            print_results(v, r);
                            BlueprintNode->Finish.Broadcast(r);
                        }
                        catch (http_exception const& e)
                        {
                            FString m(e.what());
                            UE_LOG(LogTemp, Log, TEXT("Error Massage:%s"), *m);
                        }
                    })
                .wait();
}

void UGoogleSpeechRecognition::Recognize(FGoogleSTTConfig GoogleSTTConfig, UGoogleSpeechRecognition* BlueprintNode)
{
    if (GoogleSTTConfig.SoundWave->RawPCMData == nullptr)
    {
        UE_LOG(LogTemp, Warning, TEXT("Please Say Something"));
        return;
    }


    Async(EAsyncExecution::ThreadPool, [GoogleSTTConfig, BlueprintNode]() {
        Config STTconfig;
        STTconfig = GetConfig(GoogleSTTConfig);
        vector<BYTE> soundvector;
        soundvector = SoundWaveToVector(GoogleSTTConfig.SoundWave);
        string_t STTaudio = conversions::to_base64(soundvector);
        FString Result = TEXT("");
        get_results(STTaudio, STTconfig, Result, BlueprintNode);
        });


}