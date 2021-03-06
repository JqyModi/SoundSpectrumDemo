//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, SimpleKeyValueStore;

@interface UCUserDefaults : NSObject
{
    NSMutableDictionary *_observersWithKey;
    NSHashTable *_observersForAllKeys;
    _Bool _enableObserverForAllKeys;
    SimpleKeyValueStore *_database;
}

+ (id)standardUCUserDefaults;
- (void)onObserverAndKeyChange:(id)arg1 forKey:(const char *)arg2 isAdd:(_Bool)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forKey:(const char *)arg2;
- (void)addObserverForAllKeys:(id)arg1;
- (void)addObserver:(id)arg1 forKey:(const char *)arg2;
- (_Bool)checkObserversExistingWithKey:(id)arg1;
- (void)checkAndNotifyObserversWithKey:(id)arg1;
- (void)notifyObserversForValueChangedWithKey:(id)arg1;
- (void)setDefaultWithDefaultItem:(id)arg1 isNotExist:(_Bool)arg2;
- (void)resetSettingWithDefaultsDic:(id)arg1 isNotExist:(_Bool)arg2;
- (void)setSettingWithDefaultClass:(Class)arg1 isNotExist:(_Bool)arg2;
- (void)setSettingWithDefaultClass:(Class)arg1;
- (_Bool)isDefaultValueWithKeyName:(const char *)arg1 defaultClass:(Class)arg2;
- (void)setDefaultWithKeyName:(const char *)arg1 defaultClass:(Class)arg2 isNotExist:(_Bool)arg3;
- (void)synchronizeDatabase;
- (void)synchronize;
- (struct tm)TmForKey:(const char *)arg1;
- (void)setTm:(struct tm *)arg1 forKey:(const char *)arg2;
- (id)dictionaryForKey:(const char *)arg1;
- (id)objectForKey:(const char *)arg1;
- (id)objectForNSKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(const char *)arg2;
- (void)setObject:(id)arg1 forNSKey:(id)arg2;
- (_Bool)boolForKey:(const char *)arg1;
- (void)setBool:(_Bool)arg1 forKey:(const char *)arg2;
- (void)setDouble:(double)arg1 forKey:(const char *)arg2;
- (double)doubleForKey:(const char *)arg1;
- (void)setUInteger:(unsigned long long)arg1 forKey:(const char *)arg2;
- (unsigned long long)uintegerForKey:(const char *)arg1;
- (void)setInteger:(long long)arg1 forKey:(const char *)arg2;
- (long long)integerForKey:(const char *)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForNSKey:(id)arg1;
- (void)removeObjectForKey:(const char *)arg1;
- (_Bool)isNSKeyExist:(id)arg1;
- (_Bool)isKeyExist:(const char *)arg1;
- (void)didReceiveApplicationWillTerminate:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

