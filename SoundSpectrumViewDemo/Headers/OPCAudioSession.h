//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OPCAudioSessionDelegate;

@interface OPCAudioSession : NSObject
{
    id <OPCAudioSessionDelegate> _delegate;
    NSString *_audioRouterType;
}

+ (id)showMicInputNameWithMicKey:(id)arg1;
+ (float)outputVolume;
+ (id)currentAudioRouterType;
+ (id)currentAudioOutputType;
+ (id)currentAudioInputType;
@property(copy, nonatomic) NSString *audioRouterType; // @synthesize audioRouterType=_audioRouterType;
@property(nonatomic) __weak id <OPCAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioInterruptionHappen:(id)arg1;
- (void)audioRouteChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end
