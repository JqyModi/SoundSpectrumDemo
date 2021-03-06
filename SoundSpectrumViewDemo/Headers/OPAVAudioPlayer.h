//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, NSFileManager, NSString;

@interface OPAVAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    _Bool _isLocalFile;
    _Bool _canRepeat;
    _Bool _voiceItemDidObserveSelf;
    _Bool _onPlay;
    _Bool _isPauseing;
    CDUnknownBlockType _playCompletedBlock;
    CDUnknownBlockType _startPlayingBlock;
    CDUnknownBlockType _playingBlock;
    CDUnknownBlockType _pauseBlock;
    CDUnknownBlockType _stopPlayBlock;
    double _currentTime;
    double _duration;
    NSString *_url;
    long long _repeatCount;
    NSFileManager *_fileManager;
    AVPlayer *_player;
    id _periodicTimeObserver;
    AVPlayerItem *_voiceItem;
    double _startPlayTs;
}

@property(nonatomic) double startPlayTs; // @synthesize startPlayTs=_startPlayTs;
@property(nonatomic) _Bool isPauseing; // @synthesize isPauseing=_isPauseing;
@property(nonatomic) _Bool onPlay; // @synthesize onPlay=_onPlay;
@property(nonatomic) _Bool voiceItemDidObserveSelf; // @synthesize voiceItemDidObserveSelf=_voiceItemDidObserveSelf;
@property(retain, nonatomic) AVPlayerItem *voiceItem; // @synthesize voiceItem=_voiceItem;
@property(retain, nonatomic) id periodicTimeObserver; // @synthesize periodicTimeObserver=_periodicTimeObserver;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) _Bool canRepeat; // @synthesize canRepeat=_canRepeat;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) CDUnknownBlockType stopPlayBlock; // @synthesize stopPlayBlock=_stopPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType pauseBlock; // @synthesize pauseBlock=_pauseBlock;
@property(copy, nonatomic) CDUnknownBlockType playingBlock; // @synthesize playingBlock=_playingBlock;
@property(copy, nonatomic) CDUnknownBlockType startPlayingBlock; // @synthesize startPlayingBlock=_startPlayingBlock;
@property(copy, nonatomic) CDUnknownBlockType playCompletedBlock; // @synthesize playCompletedBlock=_playCompletedBlock;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool isStoping;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)onPlayerItemStatusChangeToReadyToPlay:(double)arg1 repeatCount:(long long)arg2;
- (void)onPlayerItemStatusChangeToFailed:(id)arg1;
- (void)onPlayerItemStatusChangeToUnknown;
- (void)onPlayerPlayCompleted:(_Bool)arg1 error:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 repeatCount:(long long)arg5;
- (void)onPlayerPlayStop:(double)arg1 duration:(double)arg2;
- (void)onPlayerPlayPause:(_Bool)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)onPlayerPlayPlaying:(double)arg1 duration:(double)arg2;
- (void)onPlayerPlayStartPlaying:(_Bool)arg1 duration:(double)arg2;
- (void)voiceItemStateChange:(long long)arg1;
- (void)audioPlayToEnd:(id)arg1;
- (void)stopPlaying;
- (void)pause:(_Bool)arg1;
- (void)restartPlay;
- (void)startPlayWithUrl:(id)arg1 isLocalFile:(_Bool)arg2;
- (void)startPlayCore;
- (void)switchToRecordCate;
- (void)checkHeaderPhone;
- (void)onSessionRouteChange:(id)arg1;
- (void)resetAudioPlay;
- (void)removePlayItemObserver;
- (void)removePlayerPeriodicTimeObserver;
- (void)addPlayerPeriodicTimeObserver;
- (void)removeObserver;
- (void)addObserver;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

