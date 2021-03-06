//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AliCacheInterface-Protocol.h"

@class AVFSSQLiteCache, NSString;

@interface AliDBCacheImp : NSObject <AliCacheInterface>
{
    AVFSSQLiteCache *_sqlLiteCache;
}

@property(nonatomic) __weak AVFSSQLiteCache *sqlLiteCache; // @synthesize sqlLiteCache=_sqlLiteCache;
- (void).cxx_destruct;
- (void)trimToTime:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToTime:(double)arg1;
- (void)trimToBytes:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToBytes:(unsigned long long)arg1;
- (void)trimToCount:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)trimToCount:(unsigned long long)arg1;
- (void)totalByteWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)totalByte;
- (void)totalCountWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)totalCount;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (id)allkeys;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 options:(unsigned long long)arg3;
- (void)objectForKey:(id)arg1 skipMemory:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1 skipMemory:(_Bool)arg2;
- (id)objectForKey:(id)arg1;
- (void)containsObjectForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
- (id)initWithCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

