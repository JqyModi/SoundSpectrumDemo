//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UTMCUT : NSObject
{
}

+ (id)umid;
+ (id)utsid;
+ (void)onCrashOccur;
+ (void)commitLog_async:(id)arg1;
+ (void)commitLog:(id)arg1;
+ (void)turnOffAllUTLog;
+ (void)turnOnUTInfo;
+ (void)turnOnDebug;
+ (void)updateUserAccount:(id)arg1 userid:(id)arg2;
+ (void)setChannel:(id)arg1;
+ (void)setSDKVersion:(id)arg1;
+ (void)setAppVersion:(id)arg1;
+ (_Bool)securitySign:(int)arg1;
+ (void)setKey:(id)arg1 appSecret:(id)arg2;
+ (void)turnOnUTExposure;
+ (void)initMiniUT;

@end

