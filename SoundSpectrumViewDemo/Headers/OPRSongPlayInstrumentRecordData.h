//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface OPRSongPlayInstrumentRecordData : NSObject <NSCoding, NSCopying>
{
    _Bool _isUserChord;
    NSNumber *_recordBeginTs;
    NSArray *_recordData;
    NSArray *_extraRecordData;
    NSArray *_difTypes;
    NSArray *_chords;
    NSString *_originalDataJsonStr;
}

@property(copy, nonatomic) NSString *originalDataJsonStr; // @synthesize originalDataJsonStr=_originalDataJsonStr;
@property(retain, nonatomic) NSArray *chords; // @synthesize chords=_chords;
@property(nonatomic) _Bool isUserChord; // @synthesize isUserChord=_isUserChord;
@property(retain, nonatomic) NSArray *difTypes; // @synthesize difTypes=_difTypes;
@property(retain, nonatomic) NSArray *extraRecordData; // @synthesize extraRecordData=_extraRecordData;
@property(retain, nonatomic) NSArray *recordData; // @synthesize recordData=_recordData;
@property(retain, nonatomic) NSNumber *recordBeginTs; // @synthesize recordBeginTs=_recordBeginTs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)convertToSingPlayRecordData;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
