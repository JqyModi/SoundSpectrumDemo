//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, OPRChordInstrumentPlayStyleItem;

@interface OPRSingingPlayStyleSelectViewCellItem : NSObject
{
    _Bool _selected;
    _Bool _isEnsemble;
    OPRChordInstrumentPlayStyleItem *_playStyleItem;
    unsigned long long _playStyleState;
    NSNumber *_viewWidth;
}

@property(nonatomic) _Bool isEnsemble; // @synthesize isEnsemble=_isEnsemble;
@property(retain, nonatomic) NSNumber *viewWidth; // @synthesize viewWidth=_viewWidth;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long playStyleState; // @synthesize playStyleState=_playStyleState;
@property(retain, nonatomic) OPRChordInstrumentPlayStyleItem *playStyleItem; // @synthesize playStyleItem=_playStyleItem;
- (void).cxx_destruct;

@end

