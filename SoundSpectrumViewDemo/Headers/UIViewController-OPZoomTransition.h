//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, OPZoomTransition;

@interface UIViewController (OPZoomTransition) <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate>
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(retain, nonatomic) OPZoomTransition *op_dismissTranstion;
@property(retain, nonatomic) OPZoomTransition *op_presentTranstion;
@property(retain, nonatomic) OPZoomTransition *op_popTranstion;
@property(retain, nonatomic) OPZoomTransition *op_pushTranstion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

