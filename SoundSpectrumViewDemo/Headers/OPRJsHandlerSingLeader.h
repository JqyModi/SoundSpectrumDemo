//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "OPAudioRecorderDelegate-Protocol.h"
#import "OPRJsHandlerProtocol-Protocol.h"

@class AVAudioPlayer, NSArray, NSString;
@protocol OPRJsHandlerPushMessageProtocol;

@interface OPRJsHandlerSingLeader : NSObject <AVAudioPlayerDelegate, OPAudioRecorderDelegate, OPRJsHandlerProtocol>
{
    id <OPRJsHandlerPushMessageProtocol> _pushDelegate;
    NSString *_currentPath;
    AVAudioPlayer *_player;
}

@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *currentPath; // @synthesize currentPath=_currentPath;
@property(nonatomic) __weak id <OPRJsHandlerPushMessageProtocol> pushDelegate; // @synthesize pushDelegate=_pushDelegate;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)soundLevelDidChange:(double)arg1;
- (void)didStopSoundRecordWithFilePath:(id)arg1;
- (void)soundRecordFailed;
- (void)uploadRecord:(id)arg1;
- (void)stopVoice:(id)arg1;
- (void)puaseVoice:(id)arg1;
- (void)playVoice:(id)arg1;
- (void)stopRecord:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (void)startRecord:(id)arg1;
- (void)webviewDidClose;
- (void)execute:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 pushBlock:(CDUnknownBlockType)arg3;
- (_Bool)canExecute:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *methods;
@property(readonly, copy, nonatomic) NSString *module;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

