//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPCMSService : NSObject
{
}

+ (id)currentTestData;
+ (id)resourceWithCode:(id)arg1;
+ (void)removeResource:(id)arg1;
+ (void)addResource:(id)arg1;
+ (id)allResource;
+ (void)onCMSUpdateFinish;
+ (void)doCMSDataFullUpdate;
+ (void)doCMSDataUpdate:(_Bool)arg1;
+ (_Bool)isSafeMode;
+ (void)setSafeMode:(_Bool)arg1;
+ (void)initCMSService:(_Bool)arg1;
+ (void)initMobilePlatform:(id)arg1;

@end
