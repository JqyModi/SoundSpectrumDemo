//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPSUserTrackService : NSObject
{
}

+ (id)globalService;
+ (void)setGlobalService:(id)arg1;
- (void)onRuntimeDataChanged:(id)arg1;
- (id)globalProperties;
- (id)dataId;
- (id)testId;
- (id)nickName;
- (id)userId;
- (id)channel;
- (id)appVersion;
- (void)updateTrackerGlobalProperties;
- (void)updateCommonParam;
- (_Bool)handlerUrl:(id)arg1;
- (void)turnDebug:(_Bool)arg1;
- (void)turnLog:(_Bool)arg1;
- (id)spma;
- (id)defaultTracker;
- (id)appKey;
- (void)initEnvironment;

@end

