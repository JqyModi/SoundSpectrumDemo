//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSAudioStream, FSStreamConfiguration, FSStreamStatistics, NSString, NSURL, Reachability;
@protocol FSPCMAudioStreamDelegate;

@interface FSAudioStreamPrivate : NSObject
{
    struct Audio_Stream *_audioStream;
    NSURL *_url;
    struct AudioStreamStateObserver *_observer;
    NSString *_defaultContentType;
    Reachability *_reachability;
    CDStruct_904183bb _lastSeekByteOffset;
    _Bool _wasPaused;
    unsigned long long _backgroundTask;
    _Bool _wasInterrupted;
    _Bool _wasDisconnected;
    _Bool _wasContinuousStream;
    _Bool _internetConnectionAvailable;
    unsigned long long _defaultContentLength;
    unsigned long long _maxRetryCount;
    unsigned long long _retryCount;
    CDUnknownBlockType _onCompletion;
    CDUnknownBlockType _onStateChange;
    CDUnknownBlockType _onMetaDataAvailable;
    CDUnknownBlockType _onFailure;
    id <FSPCMAudioStreamDelegate> _delegate;
    FSAudioStream *_stream;
}

@property(nonatomic) FSAudioStream *stream; // @synthesize stream=_stream;
@property(nonatomic) id <FSPCMAudioStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy) CDUnknownBlockType onFailure; // @synthesize onFailure=_onFailure;
@property(copy) CDUnknownBlockType onMetaDataAvailable; // @synthesize onMetaDataAvailable=_onMetaDataAvailable;
@property(copy) CDUnknownBlockType onStateChange; // @synthesize onStateChange=_onStateChange;
@property(copy) CDUnknownBlockType onCompletion; // @synthesize onCompletion=_onCompletion;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) _Bool internetConnectionAvailable; // @synthesize internetConnectionAvailable=_internetConnectionAvailable;
@property(nonatomic) _Bool wasContinuousStream; // @synthesize wasContinuousStream=_wasContinuousStream;
@property(nonatomic) _Bool wasDisconnected; // @synthesize wasDisconnected=_wasDisconnected;
@property(nonatomic) _Bool wasInterrupted; // @synthesize wasInterrupted=_wasInterrupted;
@property(nonatomic) unsigned long long defaultContentLength; // @synthesize defaultContentLength=_defaultContentLength;
- (void).cxx_destruct;
- (id)description;
- (void)bitrateAvailable;
- (float)durationInSeconds;
- (unsigned long long)audioDataByteCount;
- (CDStruct_b2fbf00d)playbackPosition;
- (void)setPlayRate:(float)arg1;
- (void)setVolume:(float)arg1;
- (unsigned long long)totalCachedObjectsSize;
- (float)currentVolume;
- (void)seekToOffset:(float)arg1;
- (void)rewind:(unsigned int)arg1;
- (void)pause;
- (_Bool)isPlaying;
- (void)stop;
- (void)play;
- (void)expungeCache;
- (void)attemptRestart;
- (void)preload;
- (void)notifyStateChange:(long long)arg1;
- (void)notifyRetryingFailed;
- (void)notifyRetryingSucceeded;
- (void)notifyRetryingStarted;
- (void)notifyPlaybackUnknownState;
- (void)notifyPlaybackCompletion;
- (void)notifyPlaybackFailed;
- (void)notifyPlaybackEndOfFile;
- (void)notifyPlaybackSeeking;
- (void)notifyPlaybackPaused;
- (void)notifyPlaybackPlaying;
- (void)notifyPlaybackBuffering;
- (void)notifyPlaybackStopped;
- (void)interruptionOccurred:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
@property(readonly) _Bool cached;
@property(readonly) NSString *formatDescription;
@property(readonly) FSStreamConfiguration *configuration;
@property(readonly) float bitRate;
@property(readonly) CDStruct_904183bb currentSeekByteOffset;
@property(readonly) unsigned long long prebufferedByteCount;
@property(readonly) CDStruct_b2fbf00d levels;
@property(readonly) FSStreamStatistics *statistics;
@property(nonatomic) NSURL *outputFile;
@property(readonly) unsigned long long contentLength;
@property(readonly) NSString *suggestedFileExtension;
@property(readonly) NSString *contentType;
@property(nonatomic) NSString *defaultContentType;
- (void)playFromOffset:(CDStruct_904183bb)arg1;
- (void)playFromURL:(id)arg1;
@property(nonatomic) _Bool strictContentTypeChecking;
@property(nonatomic) NSURL *url;
- (struct AudioStreamStateObserver *)streamStateObserver;
- (void)endBackgroundTask;
- (void)dealloc;
- (id)init;

@end

