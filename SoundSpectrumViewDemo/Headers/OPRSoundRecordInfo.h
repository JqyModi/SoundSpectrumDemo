//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class AEAudioFilePlayerModule, NSString, OPRSoundResInfo, UIColor, UIView;

@interface OPRSoundRecordInfo : NSObject <NSCoding>
{
    _Bool _bizMark;
    OPRSoundResInfo *_info;
    double _timeOffset;
    double _userClickTimeOffset;
    double _autoAlignTimeOffset;
    double _duration;
    double _cutDuration;
    UIColor *_color;
    long long _index;
    long long _indexLevel;
    double _volume;
    double _offsetFix;
    AEAudioFilePlayerModule *_module;
    UIView *_markView;
    UIView *_melodyMarkViewExtrandAtEffectView;
}

+ (id)recordInfoFromDictData:(id)arg1;
+ (id)converToPostDataWithRecordInfo:(id)arg1 offset:(double)arg2;
@property(nonatomic) __weak UIView *melodyMarkViewExtrandAtEffectView; // @synthesize melodyMarkViewExtrandAtEffectView=_melodyMarkViewExtrandAtEffectView;
@property(nonatomic) __weak UIView *markView; // @synthesize markView=_markView;
@property(nonatomic) _Bool bizMark; // @synthesize bizMark=_bizMark;
@property(nonatomic) __weak AEAudioFilePlayerModule *module; // @synthesize module=_module;
@property(nonatomic) double offsetFix; // @synthesize offsetFix=_offsetFix;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) long long indexLevel; // @synthesize indexLevel=_indexLevel;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double cutDuration; // @synthesize cutDuration=_cutDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double autoAlignTimeOffset; // @synthesize autoAlignTimeOffset=_autoAlignTimeOffset;
@property(nonatomic) double userClickTimeOffset; // @synthesize userClickTimeOffset=_userClickTimeOffset;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(retain, nonatomic) OPRSoundResInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)cleanAllMarkView;
@property(readonly, copy, nonatomic) NSString *filePath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

