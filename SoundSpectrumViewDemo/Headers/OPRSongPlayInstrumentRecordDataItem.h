//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface OPRSongPlayInstrumentRecordDataItem : NSObject <NSCoding, NSCopying>
{
    _Bool _markForBiz;
    NSNumber *_timestamp;
    NSString *_type;
    NSString *_note;
    NSString *_playStyle;
    NSString *_toneType;
    NSNumber *_tempoLevel;
    NSNumber *_pitchLevel;
    NSNumber *_clickKeyArea;
}

@property(nonatomic) _Bool markForBiz; // @synthesize markForBiz=_markForBiz;
@property(retain, nonatomic) NSNumber *clickKeyArea; // @synthesize clickKeyArea=_clickKeyArea;
@property(retain, nonatomic) NSNumber *pitchLevel; // @synthesize pitchLevel=_pitchLevel;
@property(retain, nonatomic) NSNumber *tempoLevel; // @synthesize tempoLevel=_tempoLevel;
@property(copy, nonatomic) NSString *toneType; // @synthesize toneType=_toneType;
@property(copy, nonatomic) NSString *playStyle; // @synthesize playStyle=_playStyle;
@property(copy, nonatomic) NSString *note; // @synthesize note=_note;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
