//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRPlaybackDisplayView.h"

@class NSDictionary, NSNumber, OPRAudioContentItem, OPRSongPlayInstrumentRecordData, OPRSongPlayInstrumentRecordDataItem, OPRSoundPlaybackKeyboardContentView, OPRSoundSpectrumView, UIView;

@interface OPRSoundEffectPlaybackDisplayView : OPRPlaybackDisplayView
{
    OPRSoundPlaybackKeyboardContentView *_audioKeyboardView;
    UIView *_audioSpectrumContentView;
    OPRSoundSpectrumView *_audioSpectrumView;
    OPRAudioContentItem *_audioItem;
    double _currentPlayTime;
    NSNumber *_pitchLevel;
    OPRSongPlayInstrumentRecordDataItem *_currentChord;
    NSDictionary *_chordDict;
    OPRSongPlayInstrumentRecordData *_chordData;
}

@property(retain, nonatomic) OPRSongPlayInstrumentRecordData *chordData; // @synthesize chordData=_chordData;
@property(copy, nonatomic) NSDictionary *chordDict; // @synthesize chordDict=_chordDict;
@property(retain, nonatomic) OPRSongPlayInstrumentRecordDataItem *currentChord; // @synthesize currentChord=_currentChord;
@property(retain, nonatomic) NSNumber *pitchLevel; // @synthesize pitchLevel=_pitchLevel;
@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(retain, nonatomic) OPRAudioContentItem *audioItem; // @synthesize audioItem=_audioItem;
@property(retain, nonatomic) OPRSoundSpectrumView *audioSpectrumView; // @synthesize audioSpectrumView=_audioSpectrumView;
@property(retain, nonatomic) UIView *audioSpectrumContentView; // @synthesize audioSpectrumContentView=_audioSpectrumContentView;
@property(retain, nonatomic) OPRSoundPlaybackKeyboardContentView *audioKeyboardView; // @synthesize audioKeyboardView=_audioKeyboardView;
- (void).cxx_destruct;
- (void)updateAudioSpectrumViewIfNeed;
- (void)initDataSource:(id)arg1;
- (void)initChords;
- (void)setPlayingTime:(double)arg1 duration:(double)arg2;
- (void)setPausePlaying;
- (void)setStartPlaying;
- (void)reset;
- (void)updatePlayState;
- (void)setupAudioSpectrumContentView;
- (void)setupKeyboardContentView;
- (id)initWithFrame:(struct CGRect)arg1 withAudioInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withInfo:(id)arg2;

@end

