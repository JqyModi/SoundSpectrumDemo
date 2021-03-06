//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTMCDispatcher-Protocol.h"

@class NSString, UTMCLogCacheManager, UTMCTask;

@interface UTMCLogDispatcher : NSObject <UTMCDispatcher>
{
    UTMCLogCacheManager *_cacheManager;
    UTMCTask *_storeTask;
}

- (void).cxx_destruct;
- (void)synchronize;
- (void)startSyncCacheLogTimer:(long long)arg1;
- (void)setUploadInterval:(long long)arg1;
- (void)dispatchLog:(id)arg1;
- (void)setUploadURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

