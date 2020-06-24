//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, OPRChordInstrumentPlayStyleItem, OPRSingingCardItem;
@protocol OPRContentGeneratingBizInfoProtocol;

@interface OPRContentGeneratingInfo : NSObject
{
    _Bool _holdAudioEditOnPostFinish;
    _Bool _needShowResultView;
    OPRSingingCardItem *_cardItem;
    NSString *_entry;
    OPRChordInstrumentPlayStyleItem *_forceUsePlayStyleItem;
    NSObject<OPRContentGeneratingBizInfoProtocol> *_bizInfo;
}

@property(retain, nonatomic) NSObject<OPRContentGeneratingBizInfoProtocol> *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(retain, nonatomic) OPRChordInstrumentPlayStyleItem *forceUsePlayStyleItem; // @synthesize forceUsePlayStyleItem=_forceUsePlayStyleItem;
@property(nonatomic) _Bool needShowResultView; // @synthesize needShowResultView=_needShowResultView;
@property(nonatomic) _Bool holdAudioEditOnPostFinish; // @synthesize holdAudioEditOnPostFinish=_holdAudioEditOnPostFinish;
@property(copy, nonatomic) NSString *entry; // @synthesize entry=_entry;
@property(retain, nonatomic) OPRSingingCardItem *cardItem; // @synthesize cardItem=_cardItem;
- (void).cxx_destruct;

@end

