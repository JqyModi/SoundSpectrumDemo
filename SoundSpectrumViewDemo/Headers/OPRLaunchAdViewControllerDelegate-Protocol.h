//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class OPRLaunchAdItem, UIViewController;

@protocol OPRLaunchAdViewControllerDelegate <NSObject>
- (void)launchAdViewController:(UIViewController *)arg1 adDidClickImage:(OPRLaunchAdItem *)arg2;
- (void)launchAdViewController:(UIViewController *)arg1 adDidClickSkip:(OPRLaunchAdItem *)arg2;
- (void)launchAdViewController:(UIViewController *)arg1 adDidFinished:(OPRLaunchAdItem *)arg2;
@end

