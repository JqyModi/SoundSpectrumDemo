//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPAlertPresentController : NSObject
{
}

+ (void)onAllControllersDismissed;
+ (void)dismissAllPresentingOPAlert;
+ (void)presentViewController:(id)arg1 presentType:(unsigned long long)arg2 presentCompletion:(CDUnknownBlockType)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
+ (void)presentViewControllerFIFO:(id)arg1 presentCompletion:(CDUnknownBlockType)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
+ (void)presentViewControllerLIFO:(id)arg1 presentCompletion:(CDUnknownBlockType)arg2 dismissCompletion:(CDUnknownBlockType)arg3;
+ (void)setOverlayWindowLevel:(double)arg1;
+ (void)load;
+ (_Bool)presentingAlert;
+ (void)setPresentingAlert:(_Bool)arg1;

@end

