//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OPRCacheManager : NSObject
{
}

+ (id)shareManager;
- (void)clearRecordPlaybackFeatureCache;
- (void)clearCacheWithProgressBlock:(CDUnknownBlockType)arg1 endBlock:(CDUnknownBlockType)arg2;
- (id)diskCacheSize;
- (unsigned long long)diskCacheCost;

@end

