//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, OPRAudioContentItem;

@interface OPRQueryLeadingSingersFeedBackData : NSObject
{
    OPRAudioContentItem *_myAudio;
    OPRAudioContentItem *_currentSinger;
    OPRAudioContentItem *_originalSingAudio;
    NSArray *_otherSingerList;
    NSArray *_styleSingerList;
}

@property(retain, nonatomic) NSArray *styleSingerList; // @synthesize styleSingerList=_styleSingerList;
@property(retain, nonatomic) NSArray *otherSingerList; // @synthesize otherSingerList=_otherSingerList;
@property(retain, nonatomic) OPRAudioContentItem *originalSingAudio; // @synthesize originalSingAudio=_originalSingAudio;
@property(retain, nonatomic) OPRAudioContentItem *currentSinger; // @synthesize currentSinger=_currentSinger;
@property(retain, nonatomic) OPRAudioContentItem *myAudio; // @synthesize myAudio=_myAudio;
- (void).cxx_destruct;

@end

