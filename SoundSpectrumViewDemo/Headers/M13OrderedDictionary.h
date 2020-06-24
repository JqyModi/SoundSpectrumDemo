//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class NSArray, NSData, NSDictionary, NSEnumerator, NSMutableArray, NSMutableDictionary, NSString;
@protocol NSCopying;

@interface M13OrderedDictionary : NSObject <NSCopying, NSFastEnumeration, NSCoding>
{
    NSMutableArray *keys;
    NSMutableArray *objects;
    NSMutableDictionary *pairs;
}

+ (id)orderedDictionaryWithDictionary:(id)arg1;
+ (id)orderedDictionaryWithObject:(id)arg1 pairedWithKey:(id)arg2;
+ (id)orderedDictionaryWithContentsOfURL:(id)arg1;
+ (id)orderedDictionaryWithContentsOfFile:(id)arg1;
+ (id)orderedDictionaryWithOrderedDictionary:(id)arg1;
+ (id)orderedDictionary;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)removeObserver:(id)arg1 fromObjectsAtIndices:(id)arg2 forKeyPath:(id)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)addObserver:(id)arg1 toObjectsAtIndices:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (_Bool)writeToFile:(id)arg1 atomically:(_Bool)arg2;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)descriptionWithLocale:(id)arg1;
@property(readonly, nonatomic) NSString *description;
- (id)sortedByKeysWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)sortedByObjectsWithOptions:(unsigned long long)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)sortedByKeysUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedByObjectsUsingComparator:(CDUnknownBlockType)arg1;
- (id)sortedByKeysUsingSelector:(SEL)arg1;
- (id)sortedByObjectsUsingSelector:(SEL)arg1;
- (id)sortedByKeysUsingDescriptors:(id)arg1;
- (id)sortedByObjectsUsingDescriptors:(id)arg1;
- (id)sortedByKeysUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedByObjectsUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedByKeysUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)sortedByObjectsUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
@property(readonly, nonatomic) NSData *sortedKeysHint;
@property(readonly, nonatomic) NSData *sortedObjectsHint;
- (id)objectsForSortedKeys:(id)arg1;
- (id)keysForSortedObjects:(id)arg1;
- (id)subOrderedDictionaryWithRange:(struct _NSRange)arg1;
- (id)filteredOrderDictionarysUsingPredicateForObjects:(id)arg1;
- (id)orderedDictionaryByAddingObjects:(id)arg1 pairedWithKeys:(id)arg2;
- (id)orderedDictionaryByAddingEntry:(id)arg1;
- (id)orderedDictionaryByAddingObject:(id)arg1 pairedWithKey:(id)arg2;
- (_Bool)isEqualToOrderedDictionary:(id)arg1;
- (id)firstEntryInCommonWithOrderedDictionary:(id)arg1;
- (id)firstKeyInCommonWithOrderedDictionary:(id)arg1;
- (id)firstObjectInCommonWithOrderedDictionary:(id)arg1;
- (void)enumerateObjectsAtIndices:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (id)keysOfObjectsAtIndices:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indicesOfObjectsAtIndices:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)keysOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indicesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keysOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)indicesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)keyOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (unsigned long long)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (id)keyOfObjectAtIndices:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned long long)indexOfObjectAtIndices:(id)arg1 options:(unsigned long long)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)keyOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)keyOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)keyOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)keyOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned long long)indexOfEntry:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfEntryWithObject:(id)arg1 pairedWithKey:(id)arg2 inRange:(struct _NSRange)arg3;
- (unsigned long long)indexOfKey:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned long long)indexOfEntry:(id)arg1;
- (unsigned long long)indexOfEntryWithObject:(id)arg1 pairedWithKey:(id)arg2;
- (unsigned long long)indexOfKey:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
@property(readonly, nonatomic) NSEnumerator *reverseEntryEnumerator;
@property(readonly, nonatomic) NSEnumerator *reverseKeyEnumerator;
@property(readonly, nonatomic) NSEnumerator *reverseObjectEnumerator;
@property(readonly, nonatomic) NSEnumerator *entryEnumerator;
@property(readonly, nonatomic) NSEnumerator *keyEnumerator;
@property(readonly, nonatomic) NSEnumerator *objectEnumerator;
- (id)objectForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)allKeysForObject:(id)arg1;
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) NSArray *allKeys;
@property(readonly, nonatomic) NSDictionary *unorderedDictionary;
- (id)unorderedEntriesAtIndices:(id)arg1;
- (id)entriesAtIndices:(id)arg1;
- (id)keysAtIndices:(id)arg1;
- (id)objectsAtIndices:(id)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *lastEntry;
@property(readonly, nonatomic) id <NSCopying> lastKey;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)containsEntry:(id)arg1;
- (_Bool)containsObject:(id)arg1 pairedWithKey:(id)arg2;
- (_Bool)containsObject:(id)arg1;
- (id)initWithObjects:(id)arg1 pairedWithKeys:(id)arg2;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithOrderedDictionary:(id)arg1 copyEntries:(_Bool)arg2;
- (id)initWithOrderedDictionary:(id)arg1;
- (id)init;

@end

