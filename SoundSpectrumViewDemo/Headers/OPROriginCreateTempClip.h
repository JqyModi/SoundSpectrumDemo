//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface OPROriginCreateTempClip : NSObject <NSCoding>
{
    _Bool _hasChord;
    NSString *_originalClipId;
    NSString *_lyric;
    NSString *_songName;
    NSArray *_singerName;
    NSArray *_chords;
    NSNumber *_clipType;
    NSString *_clipId;
}

@property(copy, nonatomic) NSString *clipId; // @synthesize clipId=_clipId;
@property(nonatomic) _Bool hasChord; // @synthesize hasChord=_hasChord;
@property(retain, nonatomic) NSNumber *clipType; // @synthesize clipType=_clipType;
@property(copy, nonatomic) NSArray *chords; // @synthesize chords=_chords;
@property(copy, nonatomic) NSArray *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(copy, nonatomic) NSString *lyric; // @synthesize lyric=_lyric;
@property(copy, nonatomic) NSString *originalClipId; // @synthesize originalClipId=_originalClipId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toStatType;
- (id)toChordPostString;
- (id)initWithDictionary:(id)arg1;

@end

