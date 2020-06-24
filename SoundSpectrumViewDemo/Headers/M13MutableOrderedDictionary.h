//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "M13OrderedDictionary.h"

@interface M13MutableOrderedDictionary : M13OrderedDictionary
{
}

+ (id)orderedDictionaryWithCapacity:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)sortEntriesByKeysUsingSelector:(SEL)arg1;
- (void)sortEntriesByObjectUsingSelector:(SEL)arg1;
- (void)sortEntriesByKeysUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)sortEntriesByObjectUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)sortEntriesByKeysWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortEntriesByObjectWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (void)sortEntriesByKeysUsingComparator:(CDUnknownBlockType)arg1;
- (void)sortEntriesByObjectUsingComparator:(CDUnknownBlockType)arg1;
- (void)sortEntriesByKeysUsingDescriptors:(id)arg1;
- (void)sortEntriesByObjectUsingDescriptors:(id)arg1;
- (void)exchangeEntryAtIndex:(unsigned long long)arg1 withEntryAtIndex:(unsigned long long)arg2;
- (void)filterEntriesUsingPredicateForObjects:(id)arg1;
- (id)objectsForSortedKeys:(id)arg1;
- (id)keysForSortedObjects:(id)arg1;
- (void)setEntriesToOrderedDictionary:(id)arg1;
- (void)setEntriesToObjects:(id)arg1 pairedWithKeys:(id)arg2;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withEntriesFromOrderedDictionary:(id)arg2;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withEntriesFrom:(id)arg2;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 pairedWithKeysFromArray:(id)arg3;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withEntriesFromOrderedDictionary:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withEntriesFrom:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)replaceEntriesInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 pairedWithKeysFromArray:(id)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceEntriesAtIndices:(id)arg1 withEntriesFromOrderedDictionary:(id)arg2;
- (void)replaceEntriesAtIndices:(id)arg1 withEntries:(id)arg2;
- (void)replaceEntriesAtIndices:(id)arg1 withObjects:(id)arg2 pairedWithKeys:(id)arg3;
- (void)replaceEntryAtIndex:(unsigned long long)arg1 withEntry:(id)arg2;
- (void)replaceEntryAtIndex:(long long)arg1 withObject:(id)arg2 pairedWithKey:(id)arg3;
- (void)removeEntriesInRange:(struct _NSRange)arg1;
- (void)removeEntriesWithKeysInArray:(id)arg1;
- (void)removeEntriesWithObjectsInArray:(id)arg1;
- (void)removeEntryWithObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeEntryWithObjectIdenticalTo:(id)arg1;
- (void)removeEntriesAtIndices:(id)arg1;
- (void)removeEntryAtIndex:(unsigned long long)arg1;
- (void)removeEntry:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeEntryWithObject:(id)arg1 pairedWithKey:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)removeEntryWithKey:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeEntryWithObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeEntry:(id)arg1;
- (void)removeEntryWithObject:(id)arg1 pairedWithKey:(id)arg2;
- (void)removeEntryWithKey:(id)arg1;
- (void)removeEntryWithObject:(id)arg1;
- (void)removeLastEntry;
- (void)removeAllEntries;
- (void)removeAllObjects;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setEntriesFromDictionary:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setEntriesFromOrderedDictionary:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setEntry:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)setEntriesFromOrderedDictionary:(id)arg1;
- (void)setEntry:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)insertEntriesFromDictionary:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertEntriesFromOrderedDictionary:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertEntry:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 pairedWithKey:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)addEntriesFromOrderedDictionary:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)addObject:(id)arg1 pairedWithKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
