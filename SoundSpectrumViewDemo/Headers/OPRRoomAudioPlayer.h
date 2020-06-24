//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol OPRRoomAudioPlayerDeleagate;

@interface OPRRoomAudioPlayer : NSObject
{
    id <OPRRoomAudioPlayerDeleagate> _delegate;
    AVPlayer *_player;
}

+ (void)soundEffect:(id)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <OPRRoomAudioPlayerDeleagate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)routeChange:(id)arg1;
- (void)applicationEnterForeground;
- (void)applicationEnterBackground;
- (void)avplayerDidOccurError:(id)arg1;
- (void)avplayerDidFinish:(id)arg1;
- (void)cleanPlayer;
- (void)playerStop;
- (void)dealloc;
- (void)playRemoteAudioFile:(id)arg1 timeout:(double)arg2;
- (id)init;

@end
