//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

@class NSMutableArray, OPRBaseService, OPRMakeMVView, OPRSingingCardPostSucceedShareData;

@interface OPRSingingCardPostSucceedShareViewController : OPCShareViewController
{
    OPRSingingCardPostSucceedShareData *_shareMediaData;
    OPRBaseService *_getSegmentCdnUrlService;
    NSMutableArray *_shareBtns;
    OPRMakeMVView *_makeMVView;
}

+ (id)shareAddrDomain;
@property(retain, nonatomic) OPRMakeMVView *makeMVView; // @synthesize makeMVView=_makeMVView;
@property(retain, nonatomic) NSMutableArray *shareBtns; // @synthesize shareBtns=_shareBtns;
@property(retain, nonatomic) OPRBaseService *getSegmentCdnUrlService; // @synthesize getSegmentCdnUrlService=_getSegmentCdnUrlService;
@property(retain, nonatomic) OPRSingingCardPostSucceedShareData *shareMediaData; // @synthesize shareMediaData=_shareMediaData;
- (void).cxx_destruct;
- (_Bool)canShowMakeMVEntry;
- (void)statShowPV;
- (void)statPV;
- (void)statClickSharePlugin:(id)arg1;
- (_Bool)needDimissWhenShareStart;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 btnWidth:(double)arg2 left:(double)arg3;
- (void)updateShareExtendDataWithObject:(id)arg1 withKey:(id)arg2;
- (void)makeContentViewEffect;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (double)scaleItemWidth;

@end

