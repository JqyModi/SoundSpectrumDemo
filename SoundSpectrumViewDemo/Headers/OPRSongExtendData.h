//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString, OPRAudioBPMData, OPRAudioBeatDetectResult, OPRSongExtendDataAudioAttributes;

@interface OPRSongExtendData : NSObject <NSCoding, NSCopying>
{
    _Bool _chordStatus;
    _Bool _enableChordPlayback;
    NSArray *_chords;
    NSArray *_tagList;
    NSArray *_userChord;
    NSArray *_ugcTagList;
    NSString *_recommend_reason;
    OPRSongExtendDataAudioAttributes *_audioAttributes;
    OPRAudioBPMData *_audioBPMData;
    NSArray *_play_style_list;
    OPRAudioBeatDetectResult *_beatDetectResult;
    NSString *_recordItemId;
}

@property(retain, nonatomic) NSString *recordItemId; // @synthesize recordItemId=_recordItemId;
@property(retain, nonatomic) OPRAudioBeatDetectResult *beatDetectResult; // @synthesize beatDetectResult=_beatDetectResult;
@property(copy, nonatomic) NSArray *play_style_list; // @synthesize play_style_list=_play_style_list;
@property(retain, nonatomic) OPRAudioBPMData *audioBPMData; // @synthesize audioBPMData=_audioBPMData;
@property(retain, nonatomic) OPRSongExtendDataAudioAttributes *audioAttributes; // @synthesize audioAttributes=_audioAttributes;
@property(copy, nonatomic) NSString *recommend_reason; // @synthesize recommend_reason=_recommend_reason;
@property(retain, nonatomic) NSArray *ugcTagList; // @synthesize ugcTagList=_ugcTagList;
@property(nonatomic) _Bool enableChordPlayback; // @synthesize enableChordPlayback=_enableChordPlayback;
@property(copy, nonatomic) NSArray *userChord; // @synthesize userChord=_userChord;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) _Bool chordStatus; // @synthesize chordStatus=_chordStatus;
@property(retain, nonatomic) NSArray *chords; // @synthesize chords=_chords;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
