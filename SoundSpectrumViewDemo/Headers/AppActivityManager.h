//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UCAppActivityManagerDelegate-Protocol.h"

@class NSString, OPRDeviceActivateService, UCAppActivityManager;

@interface AppActivityManager : NSObject <UCAppActivityManagerDelegate>
{
    _Bool _isActive;
    UCAppActivityManager *_manager;
    OPRDeviceActivateService *_activateService;
}

+ (void)start;
+ (id)sharedManager;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) OPRDeviceActivateService *activateService; // @synthesize activateService=_activateService;
@property(retain, nonatomic) UCAppActivityManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)onNetworkChanged;
- (void)reportActivateIfNeed;
- (id)startUpActivateResultStoreKey;
- (void)failedWith:(long long)arg1 errCode:(long long)arg2;
- (void)succeedWith:(long long)arg1 respInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

