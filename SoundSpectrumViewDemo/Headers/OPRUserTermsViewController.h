//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OPRBaseViewController.h"

#import "OPSNavigationTransitioning-Protocol.h"
#import "OPWebViewDelegate-Protocol.h"

@class NSString, OPProgressHUD, OPWebView;

@interface OPRUserTermsViewController : OPRBaseViewController <OPWebViewDelegate, OPSNavigationTransitioning>
{
    CDUnknownBlockType _dismissBlock;
    OPWebView *_webView;
    unsigned long long _viewType;
    OPProgressHUD *_hud;
}

@property(retain, nonatomic) OPProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) OPWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (long long)interactiveTransitionSupportType;
- (void)webViewLoadingChanged:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingViewIfNeed;
- (void)onTopBarBackBtnClick;
- (void)onBackButtonClick;
- (void)loadLocalFile;
- (void)setupContentView;
- (void)setupSelfView;
- (id)title;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

