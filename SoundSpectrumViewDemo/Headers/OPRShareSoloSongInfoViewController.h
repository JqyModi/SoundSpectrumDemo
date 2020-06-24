//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPCShareViewController.h"

@class OPRBaseService, OPRShareSoloSongInfoData, UIScrollView, UIView;

@interface OPRShareSoloSongInfoViewController : OPCShareViewController
{
    CDUnknownBlockType _viewControllerDidDismiss;
    UIScrollView *_scrollView;
    UIView *_sharePanelView;
    OPRShareSoloSongInfoData *_soloSongInfoData;
    OPRBaseService *_getSegmentCdnUrlService;
}

+ (id)shareAddrDomain;
@property(retain, nonatomic) OPRBaseService *getSegmentCdnUrlService; // @synthesize getSegmentCdnUrlService=_getSegmentCdnUrlService;
@property(retain, nonatomic) OPRShareSoloSongInfoData *soloSongInfoData; // @synthesize soloSongInfoData=_soloSongInfoData;
@property(retain, nonatomic) UIView *sharePanelView; // @synthesize sharePanelView=_sharePanelView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType viewControllerDidDismiss; // @synthesize viewControllerDidDismiss=_viewControllerDidDismiss;
- (void).cxx_destruct;
- (_Bool)canShowMakeMVEntry;
- (_Bool)needDimissWhenShareStart;
- (void)dismiss;
- (void)onBackButtonClick;
- (void)shareBtn:(id)arg1 applyPluginIndex:(unsigned long long)arg2;
- (id)shareBtn:(id)arg1 btnWidth:(double)arg2 left:(double)arg3;
- (void)setupGloryView;
- (void)updateShareExtendDataWithObject:(id)arg1 withKey:(id)arg2;
- (void)makeContentViewEffect;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithSoloSongInfoData:(id)arg1;

@end

