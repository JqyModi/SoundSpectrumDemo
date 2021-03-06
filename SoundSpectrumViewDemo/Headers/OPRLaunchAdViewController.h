//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "OPRLaunchAdViewDelegate-Protocol.h"

@class NSString, OPRLaunchAdItem, OPRLaunchAdView;
@protocol OPRLaunchAdViewControllerDelegate;

@interface OPRLaunchAdViewController : UIViewController <OPRLaunchAdViewDelegate>
{
    id <OPRLaunchAdViewControllerDelegate> _delegate;
    OPRLaunchAdView *_adView;
    OPRLaunchAdItem *_item;
    double _startShowTime;
}

@property(nonatomic) double startShowTime; // @synthesize startShowTime=_startShowTime;
@property(retain, nonatomic) OPRLaunchAdItem *item; // @synthesize item=_item;
@property(retain, nonatomic) OPRLaunchAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <OPRLaunchAdViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportAdShowDurtionWithSkip:(_Bool)arg1;
- (void)lanchAdViewDidClickImage;
- (void)lanchAdViewDidClickSkip;
- (void)lanchAdViewDidFinishedShowing;
- (void)addNotification;
- (void)setupAdView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAdModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

