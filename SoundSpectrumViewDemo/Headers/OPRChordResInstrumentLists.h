//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSNumber;

@interface OPRChordResInstrumentLists : NSObject <NSCoding>
{
    NSArray *_currentInstrumentList;
    NSArray *_currentBeatInstrumentList;
    NSArray *_currentBeatSpectrumList;
    NSNumber *_showVideoGuideState;
    NSNumber *_showBadBPMToastState;
    NSNumber *_highlightActiveChordKey;
}

@property(retain, nonatomic) NSNumber *highlightActiveChordKey; // @synthesize highlightActiveChordKey=_highlightActiveChordKey;
@property(retain, nonatomic) NSNumber *showBadBPMToastState; // @synthesize showBadBPMToastState=_showBadBPMToastState;
@property(retain, nonatomic) NSNumber *showVideoGuideState; // @synthesize showVideoGuideState=_showVideoGuideState;
@property(retain, nonatomic) NSArray *currentBeatSpectrumList; // @synthesize currentBeatSpectrumList=_currentBeatSpectrumList;
@property(retain, nonatomic) NSArray *currentBeatInstrumentList; // @synthesize currentBeatInstrumentList=_currentBeatInstrumentList;
@property(retain, nonatomic) NSArray *currentInstrumentList; // @synthesize currentInstrumentList=_currentInstrumentList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
