//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSAudioStream, FSCheckContentTypeRequest, FSParsePlaylistRequest, FSParseRssPodcastFeedRequest, FSPlaylistItem, FSStreamConfiguration, NSMutableArray, NSURL;
@protocol FSAudioControllerDelegate;

@interface FSAudioController : NSObject
{
    NSURL *_url;
    NSMutableArray *_streams;
    float _volume;
    _Bool _readyToPlay;
    FSCheckContentTypeRequest *_checkContentTypeRequest;
    FSParsePlaylistRequest *_parsePlaylistRequest;
    FSParseRssPodcastFeedRequest *_parseRssPodcastFeedRequest;
    CDUnknownBlockType _onStateChangeBlock;
    CDUnknownBlockType _onMetaDataAvailableBlock;
    CDUnknownBlockType _onFailureBlock;
    _Bool _preloadNextPlaylistItemAutomatically;
    _Bool _enableDebugOutput;
    _Bool _automaticAudioSessionHandlingEnabled;
    _Bool _needToSetVolume;
    _Bool _songSwitchInProgress;
    float _outputVolume;
    FSStreamConfiguration *_configuration;
    id <FSAudioControllerDelegate> _delegate;
    unsigned long long _currentPlaylistItemIndex;
    NSMutableArray *_playlistItems;
}

@property(nonatomic) float outputVolume; // @synthesize outputVolume=_outputVolume;
@property(nonatomic) _Bool songSwitchInProgress; // @synthesize songSwitchInProgress=_songSwitchInProgress;
@property(nonatomic) _Bool needToSetVolume; // @synthesize needToSetVolume=_needToSetVolume;
@property(retain, nonatomic) NSMutableArray *streams; // @synthesize streams=_streams;
@property(retain, nonatomic) NSMutableArray *playlistItems; // @synthesize playlistItems=_playlistItems;
@property(nonatomic) unsigned long long currentPlaylistItemIndex; // @synthesize currentPlaylistItemIndex=_currentPlaylistItemIndex;
@property(nonatomic) _Bool readyToPlay; // @synthesize readyToPlay=_readyToPlay;
@property(nonatomic) id <FSAudioControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FSStreamConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool automaticAudioSessionHandlingEnabled; // @synthesize automaticAudioSessionHandlingEnabled=_automaticAudioSessionHandlingEnabled;
@property(nonatomic) _Bool enableDebugOutput; // @synthesize enableDebugOutput=_enableDebugOutput;
@property(nonatomic) _Bool preloadNextPlaylistItemAutomatically; // @synthesize preloadNextPlaylistItemAutomatically=_preloadNextPlaylistItemAutomatically;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType onFailure;
@property(copy) CDUnknownBlockType onMetaDataAvailable;
@property(copy) CDUnknownBlockType onStateChange;
@property(readonly, nonatomic) FSPlaylistItem *currentPlaylistItem;
@property(readonly) FSAudioStream *activeStream;
@property(nonatomic) NSURL *url;
@property(nonatomic) float volume;
- (void)playPreviousItem;
- (void)playNextItem;
- (_Bool)hasPreviousItem;
- (_Bool)hasNextItem;
- (_Bool)hasMultiplePlaylistItems;
- (void)pause;
- (void)stop;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)moveItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)addItem:(id)arg1;
- (unsigned long long)countOfItems;
- (void)playItemAtIndex:(unsigned long long)arg1;
- (void)playFromPlaylist:(id)arg1 itemIndex:(unsigned long long)arg2;
- (void)playFromPlaylist:(id)arg1;
- (void)playFromURL:(id)arg1;
- (void)play;
- (_Bool)isPlaying;
- (void)notifyRetrievingURL;
@property(readonly) FSParseRssPodcastFeedRequest *parseRssPodcastFeedRequest;
@property(readonly) FSParsePlaylistRequest *parsePlaylistRequest;
@property(readonly) FSCheckContentTypeRequest *checkContentTypeRequest;
@property(readonly) FSAudioStream *audioStream;
- (void)setAudioSessionActive:(_Bool)arg1;
- (void)deactivateInactivateStreams:(unsigned long long)arg1;
- (void)audioStreamStateDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithUrl:(id)arg1;
- (id)init;

@end
