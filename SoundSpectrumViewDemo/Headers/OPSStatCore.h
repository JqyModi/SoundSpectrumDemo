//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPSStatCore : NSObject
{
}

+ (void)writeItems:(id)arg1;
+ (void)writeItem:(id)arg1;
+ (void)statItems:(id)arg1;
+ (void)statItem:(id)arg1;
+ (void)stat:(id)arg1 ac:(id)arg2 ct:(id)arg3;
+ (void)onApplicationDidBecomeActiveNotification:(id)arg1;
+ (void)onApplicationWillResignActiveNotification:(id)arg1;
+ (void)appStart:(_Bool)arg1 getUploadUrlBlock:(CDUnknownBlockType)arg2;
+ (void)appInit;
+ (void)appDeactive;
+ (void)appActive:(_Bool)arg1;
+ (id)statTm;
+ (id)updateProperties:(id)arg1;
+ (id)updateLt:(id)arg1;
+ (id)req_id;
+ (id)defaultLt;

@end
