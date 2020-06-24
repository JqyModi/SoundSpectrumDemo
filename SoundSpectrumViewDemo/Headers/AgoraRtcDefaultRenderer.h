//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AgoraVideoSinkProtocol-Protocol.h"

@class AgoraRtcEngineKit, NSString, UIView;

@interface AgoraRtcDefaultRenderer : NSObject <AgoraVideoSinkProtocol>
{
    struct UIView *_view;
    unsigned long long _mode;
    AgoraRtcEngineKit *_engineKit;
    long long _uid;
}

@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(nonatomic) __weak AgoraRtcEngineKit *engineKit; // @synthesize engineKit=_engineKit;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (unsigned long long)pixelFormat;
- (long long)bufferType;
- (void)shouldDispose;
- (void)shouldStop;
- (void)shouldStart;
- (_Bool)shouldInitialize;
- (id)initWithView:(struct UIView *)arg1 renderMode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

