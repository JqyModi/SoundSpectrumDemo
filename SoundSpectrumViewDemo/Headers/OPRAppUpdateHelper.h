//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPRAppUpdateHelper : NSObject
{
}

+ (void)statPVWithType:(id)arg1 mode:(id)arg2;
+ (void)showAlertControllerWithTitle:(id)arg1 canShowCancel:(_Bool)arg2 alertDissBlock:(CDUnknownBlockType)arg3 statType:(id)arg4;
+ (_Bool)login_checkAndShowAlertIfNeed;
+ (_Bool)sing_checkAndShowAlertIfNeed:(CDUnknownBlockType)arg1;
+ (_Bool)global_checkAndShowAlertIfNeedWithHoldVC;
+ (id)alertTitle:(id)arg1;
+ (_Bool)needUpdate:(id)arg1;
+ (void)setupCMS;

@end

