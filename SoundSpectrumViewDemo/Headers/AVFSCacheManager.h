//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface AVFSCacheManager : NSObject
{
    NSMutableDictionary *_cachesDict;
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;
    NSMutableArray *_cachesLink;
    NSMutableDictionary *_monitorDirs;
    _Bool _isCleaning;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)cleanDirectory:(id)arg1 withCachePolicy:(unsigned long long)arg2 limitSize:(long long)arg3 limitAge:(long long)arg4;
- (void)cleanInBackground;
- (void)monitorDirectory:(id)arg1 withCachePolicy:(unsigned long long)arg2 limitSize:(long long)arg3 limitAge:(long long)arg4;
- (void)sendFakeClearMessage;
- (void)clearCache;
- (void)removeCacheForModule:(id)arg1;
- (_Bool)cacheExistForModule:(id)arg1;
- (id)cacheForModule:(id)arg1;
- (id)defaultCache;
- (void)dealloc;
- (id)init;

@end
