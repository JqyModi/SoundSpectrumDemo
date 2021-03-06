//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AgoraLiveKit, AgoraRtcEngineKit;

@interface AgoraLivePublisher : NSObject
{
    _Bool _publishing;
    _Bool _publishAudio;
    _Bool _publishVideo;
    AgoraRtcEngineKit *_engineKit;
    AgoraLiveKit *_liveKit;
}

@property(nonatomic) _Bool publishVideo; // @synthesize publishVideo=_publishVideo;
@property(nonatomic) _Bool publishAudio; // @synthesize publishAudio=_publishAudio;
@property(nonatomic) _Bool publishing; // @synthesize publishing=_publishing;
@property(nonatomic) __weak AgoraLiveKit *liveKit; // @synthesize liveKit=_liveKit;
@property(nonatomic) __weak AgoraRtcEngineKit *engineKit; // @synthesize engineKit=_engineKit;
- (void).cxx_destruct;
- (void)removeInjectStreamUrl:(id)arg1;
- (void)addInjectStreamUrl:(id)arg1 config:(id)arg2;
- (void)switchCamera;
- (void)clearVideoWatermarks;
- (int)addVideoWatermark:(id)arg1;
- (void)setLiveTranscoding:(id)arg1;
- (void)removeStreamUrl:(id)arg1;
- (void)addStreamUrl:(id)arg1 transcodingEnabled:(_Bool)arg2;
- (void)unpublish;
- (void)publish;
- (void)setMediaType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)applyPublishingMediaType;
- (void)setVideoResolution:(struct CGSize)arg1 andFrameRate:(long long)arg2 bitrate:(long long)arg3;
- (id)initWithLiveKit:(id)arg1;

@end

