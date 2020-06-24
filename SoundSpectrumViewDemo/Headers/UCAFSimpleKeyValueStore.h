//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, UCAFLevelDB;

@interface UCAFSimpleKeyValueStore : NSObject
{
    unsigned long long _syncThreshold;
    double _syncDelay;
    NSString *_dbPath;
    UCAFLevelDB *_database;
    NSMutableDictionary *_cachedInMemory;
    unsigned long long _actionCount;
}

@property unsigned long long actionCount; // @synthesize actionCount=_actionCount;
@property(retain, nonatomic) NSMutableDictionary *cachedInMemory; // @synthesize cachedInMemory=_cachedInMemory;
@property(retain, nonatomic) UCAFLevelDB *database; // @synthesize database=_database;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property double syncDelay; // @synthesize syncDelay=_syncDelay;
@property unsigned long long syncThreshold; // @synthesize syncThreshold=_syncThreshold;
- (void)iterateKeys:(CDUnknownBlockType)arg1;
- (void)iterate:(CDUnknownBlockType)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setUInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (unsigned long long)uintegerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)innerRemoveObjectsForKeys:(id)arg1;
- (void)innerRemoveObjectForKey:(id)arg1;
- (void)innerSetObject:(id)arg1 forKey:(id)arg2;
- (id)innerObjectForKey:(id)arg1;
- (void)destoryStorage;
- (void)closeDB;
- (_Bool)synchronize;
- (void)innerSynchronize;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)allKeys;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

