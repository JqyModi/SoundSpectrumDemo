//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface OPRQueryLeadingSingersData : NSObject
{
    NSString *_segmentId;
    NSString *_currentSinger;
    NSString *_currentAudioId;
    NSNumber *_size;
    NSString *_cursor;
    NSNumber *_queryType;
}

@property(retain, nonatomic) NSNumber *queryType; // @synthesize queryType=_queryType;
@property(copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *currentAudioId; // @synthesize currentAudioId=_currentAudioId;
@property(copy, nonatomic) NSString *currentSinger; // @synthesize currentSinger=_currentSinger;
@property(copy, nonatomic) NSString *segmentId; // @synthesize segmentId=_segmentId;
- (void).cxx_destruct;
- (id)initWithSegmentId:(id)arg1 currentSingerId:(id)arg2 currentAudioId:(id)arg3 size:(long long)arg4 cursor:(id)arg5 queryType:(id)arg6;

@end
