//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRSingingInfo.h"

@class NSDictionary, NSString, OPRAudioBPMData, OPRAudioEditAudioTrackList, OPRSongPlayInstrumentRecordData;

@interface OPRPlayEnsembleInfo : OPRSingingInfo
{
    _Bool _isReplay;
    NSString *_audioURL;
    NSString *_audioId;
    NSString *_songlistId;
    NSString *_strategy;
    NSString *_singerId;
    NSDictionary *_statInfo;
    OPRSongPlayInstrumentRecordData *_leadingSingerPlayedChordRecordData;
    NSString *_leadingSingerIconURL;
    NSString *_currentPlayerIconURL;
    OPRAudioBPMData *_chordAudioBPMData;
    OPRAudioBPMData *_beatAudioBPMData;
    OPRAudioEditAudioTrackList *_tracks;
}

@property(retain, nonatomic) OPRAudioEditAudioTrackList *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) _Bool isReplay; // @synthesize isReplay=_isReplay;
@property(copy, nonatomic) OPRAudioBPMData *beatAudioBPMData; // @synthesize beatAudioBPMData=_beatAudioBPMData;
@property(copy, nonatomic) OPRAudioBPMData *chordAudioBPMData; // @synthesize chordAudioBPMData=_chordAudioBPMData;
@property(copy, nonatomic) NSString *currentPlayerIconURL; // @synthesize currentPlayerIconURL=_currentPlayerIconURL;
@property(copy, nonatomic) NSString *leadingSingerIconURL; // @synthesize leadingSingerIconURL=_leadingSingerIconURL;
@property(copy, nonatomic) OPRSongPlayInstrumentRecordData *leadingSingerPlayedChordRecordData; // @synthesize leadingSingerPlayedChordRecordData=_leadingSingerPlayedChordRecordData;
@property(copy, nonatomic) NSDictionary *statInfo; // @synthesize statInfo=_statInfo;
@property(copy, nonatomic) NSString *singerId; // @synthesize singerId=_singerId;
@property(copy, nonatomic) NSString *strategy; // @synthesize strategy=_strategy;
@property(copy, nonatomic) NSString *songlistId; // @synthesize songlistId=_songlistId;
@property(copy, nonatomic) NSString *audioId; // @synthesize audioId=_audioId;
@property(copy, nonatomic) NSString *audioURL; // @synthesize audioURL=_audioURL;
- (void).cxx_destruct;

@end
