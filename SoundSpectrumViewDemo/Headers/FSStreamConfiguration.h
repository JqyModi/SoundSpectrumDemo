//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FSStreamConfiguration : NSObject
{
    _Bool _usePrebufferSizeCalculationInSeconds;
    _Bool _usePrebufferSizeCalculationInPackets;
    _Bool _cacheEnabled;
    _Bool _seekingFromCacheEnabled;
    _Bool _automaticAudioSessionHandlingEnabled;
    _Bool _enableTimeAndPitchConversion;
    _Bool _requireStrictContentTypeChecking;
    unsigned int _bufferCount;
    unsigned int _bufferSize;
    unsigned int _maxPacketDescs;
    unsigned int _httpConnectionBufferSize;
    int _bounceInterval;
    int _maxBounceCount;
    int _startupWatchdogPeriod;
    int _maxPrebufferedByteCount;
    float _requiredPrebufferSizeInSeconds;
    int _requiredInitialPrebufferedByteCountForContinuousStream;
    int _requiredInitialPrebufferedByteCountForNonContinuousStream;
    int _requiredInitialPrebufferedPacketCount;
    int _maxDiskCacheSize;
    double _outputSampleRate;
    long long _outputNumChannels;
    NSString *_userAgent;
    NSString *_cacheDirectory;
    NSDictionary *_predefinedHttpHeaderValues;
}

@property(nonatomic) int maxDiskCacheSize; // @synthesize maxDiskCacheSize=_maxDiskCacheSize;
@property(nonatomic) _Bool requireStrictContentTypeChecking; // @synthesize requireStrictContentTypeChecking=_requireStrictContentTypeChecking;
@property(nonatomic) _Bool enableTimeAndPitchConversion; // @synthesize enableTimeAndPitchConversion=_enableTimeAndPitchConversion;
@property(nonatomic) _Bool automaticAudioSessionHandlingEnabled; // @synthesize automaticAudioSessionHandlingEnabled=_automaticAudioSessionHandlingEnabled;
@property(nonatomic) _Bool seekingFromCacheEnabled; // @synthesize seekingFromCacheEnabled=_seekingFromCacheEnabled;
@property(nonatomic) _Bool cacheEnabled; // @synthesize cacheEnabled=_cacheEnabled;
@property(retain, nonatomic) NSDictionary *predefinedHttpHeaderValues; // @synthesize predefinedHttpHeaderValues=_predefinedHttpHeaderValues;
@property(retain, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) int requiredInitialPrebufferedPacketCount; // @synthesize requiredInitialPrebufferedPacketCount=_requiredInitialPrebufferedPacketCount;
@property(nonatomic) int requiredInitialPrebufferedByteCountForNonContinuousStream; // @synthesize requiredInitialPrebufferedByteCountForNonContinuousStream=_requiredInitialPrebufferedByteCountForNonContinuousStream;
@property(nonatomic) int requiredInitialPrebufferedByteCountForContinuousStream; // @synthesize requiredInitialPrebufferedByteCountForContinuousStream=_requiredInitialPrebufferedByteCountForContinuousStream;
@property(nonatomic) float requiredPrebufferSizeInSeconds; // @synthesize requiredPrebufferSizeInSeconds=_requiredPrebufferSizeInSeconds;
@property(nonatomic) _Bool usePrebufferSizeCalculationInPackets; // @synthesize usePrebufferSizeCalculationInPackets=_usePrebufferSizeCalculationInPackets;
@property(nonatomic) _Bool usePrebufferSizeCalculationInSeconds; // @synthesize usePrebufferSizeCalculationInSeconds=_usePrebufferSizeCalculationInSeconds;
@property(nonatomic) int maxPrebufferedByteCount; // @synthesize maxPrebufferedByteCount=_maxPrebufferedByteCount;
@property(nonatomic) int startupWatchdogPeriod; // @synthesize startupWatchdogPeriod=_startupWatchdogPeriod;
@property(nonatomic) int maxBounceCount; // @synthesize maxBounceCount=_maxBounceCount;
@property(nonatomic) int bounceInterval; // @synthesize bounceInterval=_bounceInterval;
@property(nonatomic) long long outputNumChannels; // @synthesize outputNumChannels=_outputNumChannels;
@property(nonatomic) double outputSampleRate; // @synthesize outputSampleRate=_outputSampleRate;
@property(nonatomic) unsigned int httpConnectionBufferSize; // @synthesize httpConnectionBufferSize=_httpConnectionBufferSize;
@property(nonatomic) unsigned int maxPacketDescs; // @synthesize maxPacketDescs=_maxPacketDescs;
@property(nonatomic) unsigned int bufferSize; // @synthesize bufferSize=_bufferSize;
@property(nonatomic) unsigned int bufferCount; // @synthesize bufferCount=_bufferCount;
- (void).cxx_destruct;
- (id)init;

@end

