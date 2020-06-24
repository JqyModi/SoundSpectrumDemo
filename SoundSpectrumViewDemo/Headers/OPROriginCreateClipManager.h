//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, OPRClipContentVerifyService, OPROriginCreateTempClip, OPRQuerySegmentDetailService, OPRSingingCardItem;

@interface OPROriginCreateClipManager : NSObject
{
    OPROriginCreateTempClip *_reComposeModel;
    OPRSingingCardItem *_reCardItem;
    NSMapTable *_postFinishedBlockMap;
    OPRClipContentVerifyService *_service;
    OPRQuerySegmentDetailService *_segmentService;
}

+ (id)shareInstance;
@property(retain, nonatomic) OPRQuerySegmentDetailService *segmentService; // @synthesize segmentService=_segmentService;
@property(retain, nonatomic) OPRClipContentVerifyService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMapTable *postFinishedBlockMap; // @synthesize postFinishedBlockMap=_postFinishedBlockMap;
@property(readonly, nonatomic) OPRSingingCardItem *reCardItem; // @synthesize reCardItem=_reCardItem;
@property(readonly, nonatomic) OPROriginCreateTempClip *reComposeModel; // @synthesize reComposeModel=_reComposeModel;
- (void).cxx_destruct;
- (void)showSingingPageWithSegement:(id)arg1 parentViewController:(id)arg2;
- (void)postFinishDoWithOriginCreateData:(id)arg1 withContentGeneratingVC:(id)arg2;
- (void)showSingingPage:(_Bool)arg1 tempClip:(id)arg2 parentViewController:(id)arg3;
- (id)entryWithTopViewController:(id)arg1;
- (void)showContentGeneratorWithTempClip:(id)arg1 fromViewController:(id)arg2;
- (void)showOriginCreateWebPageWithTempClip:(id)arg1 oriCardItem:(id)arg2 fromViewController:(id)arg3;
- (void)showOriginCreateWebPageWithTempClip:(id)arg1 fromViewController:(id)arg2;
- (void)querySegmentDetailAndGoSingPageWithSegmentId:(id)arg1;
- (void)verifyClipContent:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1 originCreatePostFinished:(CDUnknownBlockType)arg2;

@end
