//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AgoraLiveKit;

@interface AgoraLiveSubscriber : NSObject
{
    AgoraLiveKit *_liveKit;
}

@property(nonatomic) __weak AgoraLiveKit *liveKit; // @synthesize liveKit=_liveKit;
- (void).cxx_destruct;
- (void)unsubscribeToHostUid:(unsigned long long)arg1;
- (void)subscribeToHostUid:(unsigned long long)arg1 mediaType:(long long)arg2 view:(struct UIView *)arg3 renderMode:(unsigned long long)arg4 videoType:(long long)arg5;
- (void)setDelegate:(id)arg1;
- (id)initWithLiveKit:(id)arg1;

@end

